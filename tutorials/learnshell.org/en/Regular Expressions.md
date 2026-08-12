Tutorial
--------
Regular expressions let you describe patterns in text. They are used everywhere in the shell, especially with `grep`, `sed`, and `awk`.

### Matching with grep

`grep` searches lines that match a pattern:

    echo "apple banana cherry" | grep apple

Prints the whole line because it contains `apple`:

    apple banana cherry

### Anchors

`^` anchors a match to the start of a line, `$` to the end:

    echo "apple" | grep "^a"   # lines starting with 'a'
    echo "apple" | grep "e$"   # lines ending with 'e'

### Character classes

Square brackets match any one character in the set:

    echo "apple" | grep "a[p]le"   # the 'p' is literal here

Ranges are written with a dash, e.g. `[0-9]` for any digit and `[a-z]` for any lowercase letter.

### Quantifiers

`*` means "zero or more", `+` means "one or more", and `?` means "zero or one":

    echo "color" | grep -E "colou?r"   # matches color or colour
    echo "colour" | grep -E "colou?r"

Exercise
--------
Complete the `grep` below so that it matches only the line that starts with the letter `a`.

Tutorial Code
-------------
    #!/bin/bash
    printf "apple\nbanana\napricot\n" > fruits.txt
    # write your regex here
    grep "fruit" fruits.txt

Expected Output
---------------
    apple
    apricot

Solution
--------
    #!/bin/bash
    printf "apple\nbanana\napricot\n" > fruits.txt
    grep "^a" fruits.txt
