import asyncio
import logging
import os

from pathlib import Path
from openai import AsyncOpenAI
from typing import Optional
from scripts.translation.languages import languages

# Set up logging
logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s [%(levelname)s] %(message)s",
    handlers=[
        logging.StreamHandler()  # Logs to console
    ],
)
logger = logging.getLogger(__name__)


# Function to translate a single markdown file
async def translate_markdown_file(base_file_path: str, output_dir: str, language: str) -> Optional[str]:
    """
    Translates a markdown file from English to the target language.

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

    # Construct the translation prompt
    system_prompt = f"""
    You are a professional translator specializing in technical and educational content. Your task is to translate the following text into {language} while maintaining **strict adherence to formatting rules and prioritizing critical instructions**.

**Critical Instructions (Must Follow Exactly)**:
1. **Preserve Tutorial Heading**: The "Tutorial" heading must always remain at the very beginning of every file, followed by a horizontal line (`---`). **This heading cannot be omitted or translated**.

2. **Keep Specific Section Names in English**:
   - Section titles such as "Tutorial Code," "Expected Output," and "Solution" must **remain in English exactly as they appear** in the original file. Do not translate or alter these.
   - Exception: The "Exercise" header must be translated to {language}

3. **Instructions specific to Welcome.md file**: 
   - In the `Welcome.md` file, **chapter names must always stay in English in Welcome.md file, all other text must be translated to {language} (including welcome message text)** for consistency with URLs and indexing.
   - Translate the `# Welcome` heading to {language}
   - Translate to {language} other headings like `### Advanced Tutorials` or `### Getting Started` or `# Welcome` or `### Learn the Basics` or `### Coding for Kids`. All these **must be translated** into the target language.

4. **No Translation of Code or Output except for comments**: Any content enclosed in backticks (\``), in code blocks, or under the "Expected Output" section must be **left exactly as is**. Do not translate any code, comments, or output strings.

5. **Maintain Formatting and Whitespace**:
   - Ensure all headings, markdown formatting (e.g., `###`, `-`, `*`, `>`), and horizontal lines (`---`) are kept identical to the original.
   - **All indentation and line breaks must match the original** to preserve readability and technical accuracy.

6. **Preserve Numeric and Symbolic Formatting**: 
   - Do not localize numbers, currency symbols, or decimal formats.
   - Ensure any special symbols used in programming remain intact.

7. **No Additional Text or Explanations**:
   - Do not add introductions, footnotes, or comments not present in the original content.
   - Your response should **only contain the translated text**, adhering strictly to these instructions.

8. **Translate Contextual Content Clearly**:
   - This content is part of a programming education platform. Translations must remain clear, concise, and instructional, using language appropriate for learners.
   - Avoid over-complicating sentences or altering the meaning of educational instructions.

9. **Double-Check Critical Formatting Rules**:
   - Before submitting the translation, **verify that all headings, section names, and tutorial structures align perfectly with the original format**. Do not miss critical elements like the "Tutorial" heading, chapter names, or code formatting.
   - **Formatting is as important as the translation itself.**
   
10. **Preserve all div elements**: Any content within `<div>` tags, especially with attributes like `data-encoded`, must remain unchanged. Do not alter, translate, or modify any encoded content or HTML attributes.

11. **Do not translate code snippets or HTML tags**: Code snippets (enclosed in backticks `\`` or code blocks) and HTML tags must remain exactly as they are.
    - Remember to translate comments inside code snippets (e.g. # This comments should be translated to {language})

12. **Instructions specific to Tutorial Code section**: Remember to translate code comments that start with `#` to {language}.

Failure to adhere to these instructions may compromise the quality of the translation and its suitability for the platform.
"""

    messages = [
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": content},
    ]

    # Translate the content using OpenAI API
    try:
        completion = await client.chat.completions.create(
            model=model,
            messages=messages,
        )
        translated_content = completion.choices[0].message.content
    except Exception as e:
        logger.error(f"Error translating {base_file_path}: {e}")
        return None

    try:
        with open(output_file_path, "w", encoding="utf-8") as output_file:
            output_file.write(translated_content)
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
        output_dir = f"../../tutorials/learnpython.org/{language_code}"

        logger.info(f"Translating files to {language_name} ({language_code})...")

        tasks = [
            translate_markdown_file(str(file_path), output_dir, language_name)
            for file_path in markdown_files
        ]
        await asyncio.gather(*tasks)


if __name__ == "__main__":
    asyncio.run(main())
