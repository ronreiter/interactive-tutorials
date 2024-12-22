import os
import json
import logging
import re
from pathlib import Path
from collections import OrderedDict
from openai import AsyncOpenAI
from scripts.translation.languages import languages

# Set up logging
logging.basicConfig(level=logging.INFO, format="%(asctime)s [%(levelname)s] %(message)s")
logger = logging.getLogger(__name__)

# Section key map based on Welcome.md
SECTION_KEY_MAP = {
    "Learn the Basics": "basics",
    "Advanced Tutorials": "advanced",
    "Coding for Kids": "coding-for-kids",
    "Other Python Tutorials": "other-tutorials",
}

# Check if index.json already exists
def check_existing_json(output_dir: str) -> bool:
    output_file = Path(output_dir) / "index.json"
    if output_file.exists():
        logger.info(f"index.json already exists at {output_file}. Skipping generation.")
        return True
    return False

# Extract sections from Welcome.md
def extract_sections_from_markdown(file_path: str) -> dict:
    with open(file_path, "r", encoding="utf-8") as f:
        content = f.read()

    sections = OrderedDict()
    current_section = None

    # Patterns for section and tutorials
    section_pattern = re.compile(r"### (.+)")
    tutorial_pattern = re.compile(r"- \[\[(.+?)\]\]")
    external_link_pattern = re.compile(r"- \[(.+?)\]\((https?:\/\/.+?)\)")

    for line in content.splitlines():
        section_match = section_pattern.match(line)
        if section_match:
            section_title = section_match.group(1)
            simplified_key = SECTION_KEY_MAP.get(section_title)
            if not simplified_key:
                logger.warning(f"Unrecognized section '{section_title}', skipping.")
                continue
            sections[simplified_key] = OrderedDict()
            current_section = simplified_key
            continue

        # Match internal tutorials like [[Title]]
        tutorial_match = tutorial_pattern.match(line)
        if tutorial_match and current_section:
            title = tutorial_match.group(1)
            sections[current_section][title] = title

        # Match external links like [Title](http://link)
        external_link_match = external_link_pattern.match(line)
        if external_link_match and current_section:
            title = external_link_match.group(1)
            sections[current_section][title] = title

    # Ensure English-only sections are included
    if "other-tutorials" not in sections:
        sections["other-tutorials"] = OrderedDict()


    return sections

# Translate sections using OpenAI API
async def translate_sections(sections: dict, target_language: str) -> dict:
    client = AsyncOpenAI(api_key=os.environ["openai_api_key"])
    translated_sections = OrderedDict()

    for section, items in sections.items():
        if section in {"other-tutorials"}:
            continue  # Skip these sections for non-English languages

        translated_sections[section] = OrderedDict()
        for english_title in items.keys():
            prompt = f"""
            Translate the following title into {target_language}:
            {english_title}
            - Do not add extra content.
            - Do not translate code snippets or links.
            - Only translate the title text itself.
            """
            try:
                completion = await client.chat.completions.create(
                    model="gpt-4o-2024-08-06",
                    messages=[{"role": "system", "content": prompt}]
                )
                translated_title = completion.choices[0].message.content.strip()
                translated_sections[section][english_title] = translated_title
            except Exception as e:
                logger.error(f"Error translating '{english_title}': {e}")
                translated_sections[section][english_title] = english_title  # Fallback

    return translated_sections

# Save sections to index.json
def save_index_json(sections: dict, output_dir: str):
    output_file = Path(output_dir) / "index.json"
    with open(output_file, "w", encoding="utf-8") as f:
        json.dump(sections, f, indent=4, ensure_ascii=False)
    logger.info(f"Saved index.json to {output_file}")

# Main function to run the process
async def main():
    input_dir = "../tutorials/learnpython.org/en"
    output_base_dir = "../tutorials/learnpython.org"

    # Process English JSON first
    welcome_file = Path(input_dir) / "welcome.md"
    if not welcome_file.exists():
        logger.error(f"Welcome.md file not found at {welcome_file}")
        return

    # Extract English sections
    sections = extract_sections_from_markdown(str(welcome_file))

    # Create English JSON if it doesn't already exist
    english_output_dir = Path(output_base_dir) / "en"
    english_output_dir.mkdir(parents=True, exist_ok=True)
    if not check_existing_json(english_output_dir):
        save_index_json(sections, str(english_output_dir))

    # Process translations based on English JSON
    for lang in languages:
        if lang["code"] == "en":
            continue

        target_language = lang["name"]
        output_dir = Path(output_base_dir) / lang["code"]
        output_dir.mkdir(parents=True, exist_ok=True)

        if check_existing_json(output_dir):
            continue

        translated_sections = await translate_sections(sections, target_language)
        save_index_json(translated_sections, str(output_dir))

if __name__ == "__main__":
    import asyncio
    asyncio.run(main())