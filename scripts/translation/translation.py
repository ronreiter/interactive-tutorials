import asyncio
import logging
import os
import re
from pathlib import Path, PosixPath
from openai import AsyncOpenAI
from typing import Optional
from scripts.translation.languages import languages

# Set up logging
logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s [%(levelname)s] %(message)s",
    handlers=[logging.StreamHandler()],
)
logger = logging.getLogger(__name__)


def split_content(content: str) -> dict:
    """
    Splits content into translatable and non-translatable parts.

    Args:
        content (str): The full content of the markdown file.

    Returns:
        dict: A dictionary with "translatable" and "non_translatable" sections.
    """
    split_point = re.search(r"(?<=\n)Tutorial Code\n-------------", content)
    if split_point:
        translatable = content[:split_point.start()].strip()
        non_translatable = content[split_point.start():].strip()
        return {"translatable": translatable, "non_translatable": non_translatable}
    else:
        return {"translatable": content, "non_translatable": ""}


# Function to translate a markdown file
async def translate_markdown_file(base_file_path: str, output_dir: str, language: str) -> Optional[str]:
    """
    Translates the translatable part of a markdown file from English to the target language.

    Args:
        base_file_path (str): Path to the English markdown file.
        output_dir (str): Directory where the translated file will be saved.
        language (str): Target language for translation.

    Returns:
        Optional[str]: Path to the translated file, or None if an error occurred.
    """
    model = "gpt-4o-2024-08-06"
    client = AsyncOpenAI(api_key=os.environ["openai_api_key"])
    if not client:
        logger.error("OpenAI API key is not set.")
        return None

    # Define output file path
    output_dir_path = Path(__file__).parent.resolve() / output_dir
    output_dir_path.mkdir(parents=True, exist_ok=True)
    output_file_path = output_dir_path / Path(base_file_path).name

    # Skip translation if the file already exists
    if output_file_path.exists():
        logger.info(f"File already exists and will not be overwritten: {output_file_path}")
        return str(output_file_path)

    # Read the content of the markdown file
    try:
        with open(base_file_path, "r", encoding="utf-8") as file:
            content = file.read()
    except FileNotFoundError:
        logger.error(f"File not found: {base_file_path}")
        return None
    except Exception as e:
        logger.error(f"Error reading file {base_file_path}: {e}")
        return None

    # Split content into translatable and non-translatable sections
    sections = split_content(content)

    # Translate the translatable section
    translatable = sections["translatable"]
    non_translatable = sections["non_translatable"]
    translated_content = ""
    if translatable:
        logger.info("Translating translatable content...")
        prompt = f"""
        Read the instructions below, and then translate the following content into {language}, ensuring proper Markdown formatting:
        {translatable}

        **Critical Instructions**:
        1. **No Additional Markers**:
           - Do not introduce any extraneous markers such as ` ```markdown `, ` ```python `, or similar at the start or end of the output.
           - Ensure the file begins directly with the translated or preserved content, without any added formatting headers.
           
        **Instructions Specific to Welcome.md File**:
        - **IMPORTANT**: Always format links as `- [Translated Name](Original%20Name)` to ensure consistency and functionality.
          Example: `- [Bonjour, le Monde!](Hello%2C%20World%21)`
        - **IMPORTANT**: *Exclude the Data Science Tutorial* Section completely.
        - Ensure the file does not include unintended formatting elements, such as "```markdown" or similar, at the start or elsewhere.
        - Translate chapter names into {language}, keeping the original chapter name in parentheses with the correct link format as shown

        2. **Code Block and Inline Code Formatting**:
           - **Preserve inline code formatting**:
             - Code examples indented with 4 spaces must remain as-is. Do not wrap these in backticks (```).
               - Example:
                 ```
                     # This will not work!
                     one = 1
                     two = 2
                     hello = "hello"

                     print(one + two + hello)
                 ```
           - **Preserve triple-backtick formatting**:
             - Code blocks already enclosed in triple backticks (e.g., ```python) must remain unchanged.

        3. **Markdown Structure**:
           - Ensure headings, lists, and other Markdown elements are preserved exactly as in the original content.
           - Do not modify or remove existing Markdown syntax unless explicitly instructed.

        4. **Avoid Redundant Backticks**:
           - Do not add "```" markers to the start or end of files unless explicitly present in the original content.
           - Avoid formatting issues caused by unnecessary backticks.

        5. **Translation Scope**:
           - Translate only the explanatory text, comments, and non-code content.
           - Leave all code snippets, comments inside code, and text within backticks (``) untranslated.

        6. **Tutorial Heading Consistency**:
           - Ensure that headings such as `Tutorial` and `Tutorial Code` remain untranslated and retain their original formatting (e.g., `Tutorial\n--------`).

        **Additional Notes**:
        - The output file should not contain any unintended formatting elements, such as "```markdown", at the start or anywhere else unless explicitly included in the original input.
        - Ensure the translated content is visually and structurally consistent with the source material.
        """
        try:
            completion = await client.chat.completions.create(
                model=model,
                messages=[{"role": "system", "content": prompt}],
            )
            translated_content = completion.choices[0].message.content.strip()
        except Exception as e:
            logger.error(f"Error translating content in {base_file_path}: {e}")
            translated_content = translatable  # Fallback to original content

    # Combine translated and non-translatable sections
    final_content = translated_content + "\n\n" + non_translatable

    # Save the final content
    try:
        with open(output_file_path, "w", encoding="utf-8") as output_file:
            output_file.write(final_content)
        logger.info(f"File translated and saved to: {output_file_path}")
        return str(output_file_path)
    except Exception as e:
        logger.error(f"Error saving translated file {output_file_path}: {e}")
        return None


# Main function to process all languages and files
async def main():
    input_dir = "../tutorials/learnpython.org/en"
    input_dir_path = Path(input_dir)

    if not input_dir_path.exists():
        logger.error(f"Input directory does not exist: {input_dir}")
        return

    markdown_files = list(input_dir_path.glob("*.md"))
    markdown_files.remove(PosixPath('../tutorials/learnpython.org/en/Numpy Arrays.md'))
    markdown_files.remove(PosixPath('../tutorials/learnpython.org/en/Pandas Basics.md'))
    if not markdown_files:
        logger.warning(f"No markdown files found in directory: {input_dir}")
        return

    # Iterate over languages and files
    for language in languages:
        if language["code"] != "fr":
            continue
        language_code = language["code"]
        language_name = language["name"]
        output_dir = Path(f"../../tutorials/learnpython.org/{language_code}")
        output_dir.mkdir(parents=True, exist_ok=True)
        logger.info(f"Translating files to {language_name} ({language_code})...")

        tasks = [
            translate_markdown_file(str(file_path), str(output_dir), language_name)
            for file_path in markdown_files
        ]
        await asyncio.gather(*tasks)


if __name__ == "__main__":
    asyncio.run(main())