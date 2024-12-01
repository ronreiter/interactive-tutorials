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
    You are a professional translator specialized in educational content. 
    Your task is to translate the following text into {language}.

    **Instructions**:
    1. **Translate only the provided content**: Do not add any additional text, introductions, or explanations that are not part of the original content.
    2. **Do not translate any code snippets**: Code snippets are enclosed in backticks (\`) or in code blocks. Leave them exactly as they are.
    3. **Preserve formatting and whitespace**: Ensure the translated content maintains the original markdown or text formatting, including headings, bullet points, blockquotes, and emphasis. Pay special attention to preserving indentation and line breaks.
    4. **Ensure correct directionality**: All code should remain left-to-right (LTR), even if the surrounding language is right-to-left (RTL).
    5. **Contextual Translation**: This content is part of an educational platform designed to teach programming. The translated text should remain clear, concise, and instructional.
    6. **No Additional Content**: Do not include any additional text, explanations, or clarifications beyond the direct translation. Your response should contain only the translated text.
    7. **Preserve indentation**: Any indentation present in the original content must be kept exactly as is in the translated version.
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
