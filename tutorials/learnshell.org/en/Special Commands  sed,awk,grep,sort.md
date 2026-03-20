Tutorial
--------

Unix-like systems encourage a pipeline-based workflow: use small, specialized tools and connect them with `|` so the output of one command becomes the input of the next.

    command1 | command2 | command3

This tutorial covers the most common text-processing tools used in shell pipelines.

### 1. `grep` — search and filter text

This utility was described in the previous chapter.

### 2. `sort` — order lines

`sort` arranges lines in a specific order.

Useful options:

* `-n` — Numeric sort.
* `-r` — Reverse order.
* `-u` — Remove duplicate lines.

Examples:

    printf "10\n2\n7\n" | sort
    10
    2
    7

    printf "10\n2\n7\n" | sort -n
    2
    7
    10

    printf "a\na\nb\n" | sort -u
    a
    b

### 3. `awk` — extract and transform columns

`awk` is a small text-processing programming language. It treats each input line as a record and splits it into fields, usually separated by spaces or tabs. Because it is a full language, it supports variables, conditions, loops, arithmetic, and pattern-based actions.

Common fields:

* `$1` — first column
* `$2` — second column
* `$0` — whole line

Examples:

    echo "Alice 24" | awk '{print $1}'
    Alice

    echo "Alice 24" | awk '{print $2, $1}'
    24 Alice

    echo "Alice 24" | awk '{print $1 ":" $2}'
    Alice:24

    echo "Alice 24" | awk '$2 >= 18 {print $1, "is an adult"}'
    Alice is an adult

    echo -e "Alice 24\nBob 16\nCarol 31" | awk '{sum += $2} END {print sum / NR}'
    23.6667

### 4. `sed` — stream editor

`sed` is commonly used for search-and-replace, deletion, insertion, and line-based text transformations.

General syntax:

    sed [options] 'script' [file...]

A common substitute command looks like this:

    sed 's/old/new/g'

Examples:

    echo "cat cat" | sed 's/cat/dog/'
    dog cat

    echo "apple apple" | sed 's/apple/orange/g'
    orange orange

    echo -e "keep\nremovethis\nkeep" | sed '/removethis/d'
    keep
    keep

    echo -e "one\ntwo\nthree" | sed -n '2p'
    two

    echo "abcdc" | sed 'y/abc/xyz/'
    xyzdz

### 5. `head` and `tail` — limit output

These tools let you inspect only part of a file or stream.

* `head -n 5` — first 5 lines
* `tail -n 3` — last 3 lines

Examples:

    seq 1 10 | head -n 3
    1
    2
    3

    seq 1 10 | tail -n 3
    8
    9
    10

### 6. `tr` — translate or delete characters

`tr` works on characters rather than lines.

Examples:

    echo "Hello" | tr '[:lower:]' '[:upper:]'
    HELLO

    echo "a b c" | tr -d ' '
    abc

### Example pipeline

This pipeline filters apple rows, extracts the numeric column, and sorts it numerically:

    echo "green-apple 5
    red-apple 3
    banana 2
    fuji-apple 8" | grep "apple" | awk '{print $2}' | sort -n

Result:

    3
    5
    8

Exercise
--------

You are given a product list. Use a pipeline to:

1. keep only lines containing `berry`,
2. extract the price column,
3. sort the prices from low to high,
4. print only the most expensive berry price.

Tutorial Code
-------------
    #!/bin/bash
    data="blueberry 5
    strawberry 3
    banana 2
    raspberry 8
    gooseberry 6
    apple 10"

    # write your code here

Expected Output
---------------
8

Solution
--------
    #!/bin/bash
    data="blueberry 5
    strawberry 3
    banana 2
    raspberry 8
    gooseberry 6
    apple 10"

    # write your code here
    echo "$data" | grep "berry" | awk '{print $2}' | sort -n | tail -n 1
