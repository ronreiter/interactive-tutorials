import asyncio
import logging
import os
import re
import json
from pathlib import Path
from typing import Optional
from openai import AsyncOpenAI
from scripts.translation.generate_index_json import main as generate_index_json
from scripts.translation.languages import languages

# Set up logging
logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s [%(levelname)s] %(message)s",
    handlers=[logging.StreamHandler()],
)
logger = logging.getLogger(__name__)


def load_index_json(language_code: str) -> dict:
    index_file = Path(f"../tutorials/learnpython.org/{language_code}/index.json")
    if not index_file.exists():
        logger.error(f"index.json not found for language {language_code}")
        return {}
    with open(index_file, "r", encoding="utf-8") as f:
        return json.load(f)


async def translate_welcome_md(base_file_path: str, output_file_path: str, language_code: str) -> Optional[str]:
    index_json = load_index_json(language_code)
    if not index_json:
        logger.error(f"Cannot translate `Welcome.md` without a valid `index.json` for {language_code}.")
        return None

    try:
        with open(base_file_path, "r", encoding="utf-8") as f:
            content = f.read()
    except FileNotFoundError:
        logger.error(f"Base `welcome.md` not found at {base_file_path}")
        return None

    # Prepare the OpenAI API prompt
    prompt = f"""
    Translate the following `welcome.md` content into {language_code}. Follow these precise rules:

    - **Markdown Links Format**:
      - Always format links like this: `- [Translated Name](Original%20Name)` 
      - Do not translate anything inside the parentheses `(Original%20Name)`.
      - Remove ```markdown or ``` from the text.

    - **Section Removal**:
      - Completely remove the "Data Science Tutorials" section.
      - Do not add or translate sections that are not present in the original file.

    - **Formatting Rules**:
      - Keep all code examples intact without changes.
      - Do not translate URLs or alter Markdown links.
      - Remove triple backticks (` ``` `) used in code blocks.
      - Maintain the original structure of headings, lists, and content.

    Content:
    {content}
    """

    client = AsyncOpenAI(api_key=os.environ["openai_api_key"])

    try:
        response = await client.chat.completions.create(
            model="gpt-4o-2024-08-06",
            messages=[{"role": "user", "content": prompt}],
        )
        translated_content = response.choices[0].message.content.strip()
    except Exception as e:
        logger.error(f"Error translating `welcome.md`: {e}")
        return None

    try:
        with open(output_file_path, "w", encoding="utf-8") as f:
            f.write(translated_content)
        logger.info(f"`Welcome.md` translated and saved to: {output_file_path}")
        return output_file_path
    except Exception as e:
        logger.error(f"Error saving translated `Welcome.md` to {output_file_path}: {e}")
        return None


async def translate_tutorial(base_file_path: str, output_file_path: str, language_code: str) -> Optional[str]:
    index_json = load_index_json(language_code)
    english_title = Path(base_file_path).stem

    # Look for translated title
    translated_title = None
    for section_titles in index_json.values():
        if english_title in section_titles:
            translated_title = section_titles[english_title]
            break

    if not translated_title:
        logger.error(f"Title '{english_title}' not found in `index.json` for {language_code}. Skipping translation.")
        return None

    # Read the tutorial content
    try:
        with open(base_file_path, "r", encoding="utf-8") as f:
            content = f.read()
    except FileNotFoundError:
        logger.error(f"Tutorial file not found: {base_file_path}")
        return None

    # Extract content without "Tutorial" header and up to "Tutorial Code"
    content = re.sub(r"^Tutorial\n[-=]+\n", "", content, flags=re.MULTILINE)
    content = re.search(r"(.*?)\nTutorial Code\n[-=]+", content, re.DOTALL)

    if content:
        content = content.group(1).strip()

    # Prepare the translation prompt
    prompt = f"""
    Translate the following tutorial content into {language_code}. Follow these rules:

    - **Markdown Headers and Formatting**:
      -While the format must remain consistent, ensure that the header (e.g. ### Header) is translated into {language_code}. 
      Keep all Markdown elements such as headings (#, ##, ###, etc.) and lists (-) unchanged. 
      Do not modify the structure or formatting of the Markdown content. 
      Translate only the textual content within these elements where appropriate.
      - Keep "Exercise--------" with the same structure but translated to {language_code}.
      - Other headers such as "Tutorial--------" must stay exactly the same in the original language.

    - **Preserve Code Blocks and Formatting**:
      - Leave code examples and indentation unchanged.
      - Do not add backticks (` ``` `) or translate code snippets.

    - **Markdown Structure**:
      - Maintain lists, headings, and links.
      - Do not change URLs or Markdown links.

    - **Translation Scope**:
      - Translate only the explanatory sections.
      - Leave all code and inline comments unchanged.

    Content:
    {content}
    """

    client = AsyncOpenAI(api_key=os.environ["openai_api_key"])

    try:
        response = await client.chat.completions.create(
            model="gpt-4o-2024-08-06",
            messages=[{"role": "user", "content": prompt}],
        )
        translated_text = response.choices[0].message.content.strip()
    except Exception as e:
        logger.error(f"Error translating tutorial file {base_file_path}: {e}")
        return None

    try:
        with open(output_file_path, "w", encoding="utf-8") as f:
            f.write(translated_text)
        logger.info(f"Translated tutorial file saved to: {output_file_path}")
        return output_file_path
    except Exception as e:
        logger.error(f"Failed to save translated tutorial file {output_file_path}: {e}")
        return None


async def main():
    await generate_index_json()

    input_dir = "../tutorials/learnpython.org/en"
    output_base_dir = "../tutorials/learnpython.org"
    input_dir_path = Path(input_dir)

    if not input_dir_path.exists():
        logger.error(f"Input directory does not exist: {input_dir}")
        return

    markdown_files = list(input_dir_path.glob("*.md"))
    if not markdown_files:
        logger.warning(f"No markdown files found in directory: {input_dir}")
        return

    for language in languages:
        language_code = language["code"]
        language_name = language["name"]

        if language_code == "en":
            continue

        output_dir = Path(f"{output_base_dir}/{language_code}")
        output_dir.mkdir(parents=True, exist_ok=True)
        logger.info(f"Processing translations for {language_name} ({language_code})...")

        welcome_file = input_dir_path / "Welcome.md"
        welcome_output = output_dir / "Welcome.md"
        if welcome_file.exists() and not welcome_output.exists():
            await translate_welcome_md(str(welcome_file), str(welcome_output), language_code)

        excluded_tutorials = {"Numpy Arrays", "Pandas Basics"}

        # Filter tutorial files
        tutorial_files = [
            file for file in markdown_files
            if file.stem not in excluded_tutorials and file.name != "Welcome.md"
        ]

        # Process and translate each file
        for tutorial_file in tutorial_files:
            logger.debug(f"Processing tutorial file: {tutorial_file.stem}")
            output_file_path = output_dir / tutorial_file.name

            if not output_file_path.exists():
                await translate_tutorial(str(tutorial_file), str(output_file_path), language_code)

    logger.info("All translations completed.")


if __name__ == "__main__":
    asyncio.run(main())