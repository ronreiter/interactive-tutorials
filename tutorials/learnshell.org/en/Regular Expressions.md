Regular Expressions
--------
Regular expression can be used as a powerful tool for pattern matching and text manipulation.
Let's start with the basics and then move to more advanced concepts:

Basic Characters:

- Any single character is matched literally.
- `.` (dot) matches any single character except newline.

```bash
echo "cat dog" | grep "c.t"  # Matches "cat"
```

Character Classes:

- `[...]` matches any single character within the brackets.
- `[^...]` matches any single character not within the brackets.

```bash
echo "cat dog" | grep "[cd]at"  # Matches "cat"
echo "cat dog" | grep "[^c]at"  # Matches "dat" in "dog"
```

Predefined Character Classes:

- `\d` matches any digit (equivalent to `[0-9]`)
- `\w` matches any word character (equivalent to `[a-zA-Z0-9_]`)
- `\s` matches any whitespace character

```bash
echo "abc123" | grep -E "\d+"  # Matches "123"
```

Anchors:

- `^` matches the start of a line
- `$` matches the end of a line

```bash
echo -e "start\nend" | grep "^end"  # Matches "end" at the start of a line
```

Quantifiers:

- `*` matches 0 or more occurrences
- `+` matches 1 or more occurrences
- `?` matches 0 or 1 occurrence
- `{n}` matches exactly n occurrences
- `{n,}` matches n or more occurrences
- `{n,m}` matches between n and m occurrences

```bash
echo "a aa aaa" | grep -E "a{2,}"  # Matches "aa" and "aaa"
```
Alternation:

- `|` acts like an OR operator

```bash
echo "cat dog" | grep -E "cat|dog"  # Matches both "cat" and "dog"
```

Grouping and Capturing:

- `(...)` groups expressions and creates a capturing group

```bash
echo "catdog" | grep -E "(cat|dog)+"  # Matches "catdog"
```

Backreferences:

- `\1`, `\2`, etc., refer to captured groups

```bash
echo "catcat" | sed -E 's/(cat)\1/\1/'  # Replaces "catcat" with "cat"
```

Exercise
--------
In this exercise your task will be to write a regex that will match any line that starts and
ends with the same word

Tutorial Code
-------------
```
#!/bin/bash

# Chnage the REGEX variable to match the pattern
REGEX="YOUR_REGEX_HERE"


# Don't change the below code
TEST=("CAT DOG" "TEA TEA" "RED BLUE" "DOG DOG" "SHELL SHELL" "BEEF BEEF" "TEA COFFEE" "SHELL BASH" "RED GREEN" "CAT FISH")

for i in "${TEST[@]}" ; do
    if [[ ! $i =~ $REGEX ]]; then
        echo "Validation Failed for $i"
    else
        echo "Validation Passed for $i"
    fi
done
```
Expected Output
---------------
Validation Failed for CAT DOG
Validation Passed for TEA TEA
Validation Failed for RED BLUE
Validation Passed for DOG DOG
Validation Passed for SHELL SHELL
Validation Passed for BEEF BEEF
Validation Failed for TEA COFFEE
Validation Failed for SHELL BASH
Validation Failed for RED GREEN
Validation Failed for CAT FISH

Solution
--------
```
#!/bin/bash

# Chnage the REGEX variable to match the pattern
REGEX="^(\w+) \1$"


# Don't change the below code
TEST=("CAT DOG" "TEA TEA" "RED BLUE" "DOG DOG" "SHELL SHELL" "BEEF BEEF" "TEA COFFEE" "SHELL BASH" "RED GREEN" "CAT FISH")

for i in "${TEST[@]}" ; do
    if [[ ! $i =~ $REGEX ]]; then
        echo "Validation Failed for $i"
    else
        echo "Validation Passed for $i"
    fi
done
```
