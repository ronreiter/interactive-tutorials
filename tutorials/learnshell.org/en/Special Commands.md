Tutorial
--------
The shell includes several powerful text-processing commands. The three most common are `sed`, `awk`, and `grep`, and they are often used together with `sort`.

### grep - search text

`grep` finds lines matching a pattern:

    echo "apple banana" | grep banana

Output:

    apple banana

### sed - stream editor

`sed` transforms text. Replacing every `apple` with `orange`:

    echo "apple pie" | sed 's/apple/orange/'

Output:

    orange pie

### awk - text processing

`awk` splits lines into fields and prints selected columns:

    echo "apple banana cherry" | awk '{print $2}'

Output:

    banana

### sort - sort lines

`sorted` lines can be reordered alphabetically:

    printf "cherry\napple\nbanana\n" | sort

Output:

    apple
    banana
    cherry

These commands are the building blocks of almost every shell pipeline.

Exercise
--------
Complete the pipeline below so that it prints the third field (`$3`) of the line `apple banana cherry`, which is `cherry`.

Tutorial Code
-------------
    #!/bin/bash
    echo "apple banana cherry" | awk '{print }'

Expected Output
---------------
    cherry

Solution
--------
    #!/bin/bash
    echo "apple banana cherry" | awk '{print $3}'
