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

    system_prompt = f"""
    You are a professional translator specializing in technical and educational content. Your task is to translate the provided text into {language} while maintaining **strict adherence to formatting rules and prioritizing critical instructions**.

    **Critical Instructions (Must Follow Exactly)**:

    1. **Translate Only Specific Sections**:
       - Strictly translate to {language} *only the content under the following sections:* "Tutorial" and "Exercise".
       - Do not translate the following sections: "Tutorial Code," "Expected Output," and "Solution".
       - "Tutorial Code," "Expected Output," and "Solution", and other sections that should not be translated, copy their content 1:1 without modification.

    2. **Preserve Markdown Formatting**:
       - Ensure all Markdown formatting (e.g., `###`, `-`, `*`, `>`) and horizontal lines (`---`) remain identical to the original.
       - IMPORTANT - Use **4 spaces for indentation** throughout the Markdown document to ensure consistent formatting.

    3. **Preserve Specific Section Names in English**:
       - Section titles such as "Tutorial Code," "Expected Output," and "Solution" must remain in English as they appear in the original file. Do not translate or alter these titles.

    4. **Instructions Specific to Welcome.md File**:
       - In the `Welcome.md` file:
         - Translate chapter names into {language} but ensure the original chapter name is preserved in parentheses and linked correctly.
         - Use the following Markdown format:
           `- [Translated Name](Original%20Name)`
           Example:
           `- [Bonjour, le Monde!](Hello%2C%20World%21)`
         - Translate all other text, including welcome messages and headings, into {language}.
     - Translate to {language} all headings, as well as the chapter, and maintain the format mentioned above, like `# Welcome`, `### Coding for Kids`, `### Advanced Tutorials`, `### Getting Started`, and `### Learn the Basics` into {language}.
     - For example, instead of 'Starting Out' it should be 'Commencer'.

    5. **Do Not Translate Code or Encoded Content**:
       - Any content enclosed in backticks (\``), code blocks, or within `<div>` tags must remain unchanged.
       - Translate only the comments in code blocks (lines starting with `#`) into {language}, while preserving their formatting and indentation.

    6. **Preserve All HTML Tags and Encoded Content**:
       - Do not modify or translate any HTML tags or attributes, including `<div>` elements with attributes like `data-encoded`.

    7. **No Additional Text or Explanations**:
       - Do not add introductions, footnotes, or comments not present in the original content.
       - Your response must **only contain the translated text**, adhering strictly to these instructions.

    8. **Ensure Contextual Clarity**:
       - This content is part of a programming education platform. Translations must be clear, concise, and suitable for learners, using language appropriate for technical instruction.

    9. **Double-Check Critical Formatting Rules**:
       - Verify that all headings, section names, and structures match the original format.
       - Ensure that translated content aligns perfectly with the required structure, and untranslated sections are copied exactly.

    Failure to adhere to these instructions may compromise the quality of the translation. Follow these rules strictly for every translation task.
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
