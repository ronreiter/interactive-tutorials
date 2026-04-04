Tutorial
--------
Regular Expressions (Regex) are powerful patterns used to search and manipulate text. In Shell, the most common tool for regex is `grep`. This tutorial covers basic syntax.

In general, `grep` has the following syntax:

    grep [options] 'pattern' [file...]

### Some grep options

* `-E` - Extended regex syntax.
* `-i` - Ignore case distinctions.
* `-v` - Invert match (select non-matching lines).
* `-w` - Match whole words only.

### Basic Regex symbols

* `.` - Matches any single character.
* `[012]` - Matches `0`, `1`, or `2`.
* `[0-9]` - Matches any character from `0` to `9` inclusive (any digit).
* `[^0-9]` - Matches any character EXCEPT `0` to `9` (negation).
* `a|b` - Matches `a` or `b` (requires `grep -E`).
* `^` - Matches the start of a line.
* `$` - Matches the end of a line.
* `*` - Matches ZERO or more of the preceding element.
* `+` - Matches ONE or more of the preceding element (requires `grep -E`).
* `{n}` or `{n,m}` - Matches the preceding element exactly `n` times, or between `n` and `m` times (requires `grep -E`).

### Escaping and Extended Regex (`-E`)
In standard `grep`, meta-characters like `+`, `?`, `|`, `(`, `)`, `{`, `}` are treated as literal text. To use their special powers, you must escape them with a backslash (e.g., `\+`, `\|`). Using `grep -E` allows you to use these symbols directly without escaping. You only need to escape literal special characters (like a real period `\.`).

### Examples

    # Specific word search
    echo "Find the error here" | grep -w "error"

    # Simplified IPv4 search (matching 1 to 3 digits separated by literal dots)
    echo "Server IP: 192.168.1.10" | grep -E "[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}"

    # Using options: filter out lines with "debug" (case-insensitive)
    echo -e "Info\nDEBUG\nError" | grep -iv "debug"

    # Simplified example: find 'success' or 'failure' followed by a message
    echo -e "success: operation finished\nfailure: disk full\ninfo: ok" | grep -E "(success|failure): [a-z ]+"

Exercise
--------
You are given a server log snippet. Use `grep` to find all `ERROR` entries (even if the word is misspelled with multiple `R`s) that occurred exactly during the 18:xx hour. Make sure your regex only matches valid minutes.

Tutorial Code
-------------
    #!/bin/bash
    log_text="17:45 INFO Server started
    18:05 ERRRRRROR Failed to connect to DB
    18:22 INFO User login
    18:59 EROR Timeout exception
    18:99 ERRROR Invalid time log
    19:01 ERROR Disk full" 

    # write your code here

Expected Output
---------------
18:05 ERRRRRROR Failed to connect to DB
18:59 EROR Timeout exception

Solution
--------
    #!/bin/bash
    log_text="17:45 INFO Server started
    18:05 ERRRRRROR Failed to connect to DB
    18:22 INFO User login
    18:59 EROR Timeout exception
    18:99 ERRROR Invalid time log
    19:01 ERROR Disk full" 

    # write your code here
    echo "$log_text" | grep -E "18:[0-5][0-9] ER+OR"