import asyncio
import logging
import os
import re
from pathlib import Path
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
        {translatable}.
        
        **Critical Instructions**:
        - Do not translate any text inside backticks ``. For example, `
        - *Any text within `` should not be translated. For example `text text text` should not be translated.
        - Do not translate comments that start with a hashtag. Example "# Text" should not be translated.
        - Preserve Markdown formatting for headings, lists, and indentation (4 spaces for nested content).
        - Do not translate code snippets nor comments within code snippets Example: 
            "# Prints out the numbers 0,1,2,3,4" should not be translated. Also,
            "    # Define our 3 functions
                def my_function():
                print("Hello From My Function!")" 
                Should not be translated.
        - Do not alter or translate code snippets enclosed in backticks (\`\`\`) or block markers.
        - The tone should remain clear, concise, and educational, suitable for a learning platform.
       - *AVOID ADDING "```markdown" and "```" within the file. Please make sure to remove those after translating. 
       - Ensure technical terms like "Generators," "Decorators," or "Closures" are translated appropriately for the target audience.


        **Instructions Specific to Welcome.md File**:
        - In the `Welcome.md` file:
        - *AVOID ADDING "```markdown" and "```" within the file. Please make sure to remove those after translating.  
          - Verify that links, especially in `Welcome.md`, remain functional and correctly formatted.
          - Translate chapter names into {language}, ensuring the original chapter name is preserved in parentheses and linked correctly.
          - Use the following Markdown format for links:
            `- [Translated Name](Original%20Name)`
            Example:
            `- [Bonjour, le Monde!](Hello%2C%20World%21)`
        -

        Ensure all translations are clear and concise, keeping the educational and technical context intact.
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