#!/usr/bin/env python3
"""Auto-update LeetCode/readme.md table from problem markdown files."""

from __future__ import annotations

import re
from pathlib import Path
from tempfile import NamedTemporaryFile
from urllib.parse import quote, urlparse

ROOT = Path(__file__).resolve().parent
README_PATH = ROOT / "readme.md"
MAX_SCAN_BYTES = 256 * 1024

FILE_PATTERN = re.compile(r"^(\d+)\.\s?(.*?)\.md$")
LC_URL_PATTERN = re.compile(r"https?://leetcode\.com/problems/[^)\s]+")


def escape_markdown_text(value: str) -> str:
    """Escape markdown table special chars to avoid broken rendering/injection."""
    return value.replace("\\", "\\\\").replace("|", "\\|")


def read_partial_text(file_path: Path) -> str:
    """Read only head bytes to lower risk of loading huge files into memory."""
    with file_path.open("rb") as file_obj:
        raw = file_obj.read(MAX_SCAN_BYTES)
    return raw.decode("utf-8", errors="replace")


def normalize_valid_leetcode_url(url: str) -> str | None:
    """Allow only LeetCode problem URLs on trusted host/scheme."""
    parsed = urlparse(url)
    if parsed.scheme != "https":
        return None
    if parsed.netloc not in {"leetcode.com", "www.leetcode.com"}:
        return None
    if not parsed.path.startswith("/problems/"):
        return None
    normalized = f"https://leetcode.com{parsed.path}"
    return normalized if normalized.endswith("/") else f"{normalized}/"


def slugify(title: str) -> str:
    slug = re.sub(r"[^a-z0-9]+", "-", title.lower())
    return slug.strip("-")


def extract_leetcode_url(file_path: Path, title: str) -> str:
    text = read_partial_text(file_path)
    match = LC_URL_PATTERN.search(text)
    if match:
        normalized = normalize_valid_leetcode_url(match.group(0))
        if normalized:
            return normalized
    return f"https://leetcode.com/problems/{slugify(title)}/"


def collect_problems() -> list[dict[str, str]]:
    problems: list[dict[str, str]] = []

    for file_path in ROOT.glob("*.md"):
        if file_path.name.lower() == "readme.md":
            continue

        match = FILE_PATTERN.match(file_path.name)
        if not match:
            continue

        number_str, title = match.groups()
        safe_title = escape_markdown_text(title.strip())
        problems.append(
            {
                "number": number_str,
                "sort_key": int(number_str),
                "title": safe_title,
                "leetcode_url": extract_leetcode_url(file_path, title),
                "code_link": quote(file_path.name, safe="().-_"),
            }
        )

    return sorted(problems, key=lambda item: (item["sort_key"], item["title"]))


def build_readme(problems: list[dict[str, str]]) -> str:
    lines = [
        "# LeetCode 練習題",
        "",
        "這個資料夾收錄了 [LeetCode](https://leetcode.com/) 的練習題目與解答。",
        "",
        "## 題目索引",
        "",
        "| 題號 | 題目名稱 | 程式碼 |",
        "| ---- | -------- | ------ |",
    ]

    for item in problems:
        lines.append(
            f"| {item['number']} | [{item['title']}]({item['leetcode_url']}) | [Code]({item['code_link']}) |"
        )

    lines.extend(
        [
            "",
            "---",
            "",
            f"**總共 {len(problems)} 題**",
            "",
            "> 點擊題目名稱可前往 LeetCode 查看題目，點擊 Code 可查看程式碼。",
            "",
        ]
    )

    return "\n".join(lines)


def main() -> None:
    problems = collect_problems()
    new_content = build_readme(problems)

    with NamedTemporaryFile("w", delete=False, dir=ROOT, encoding="utf-8") as temp:
        temp.write(new_content)
        temp_path = Path(temp.name)

    temp_path.replace(README_PATH)
    print(f"Updated {README_PATH} with {len(problems)} problems.")


if __name__ == "__main__":
    main()
