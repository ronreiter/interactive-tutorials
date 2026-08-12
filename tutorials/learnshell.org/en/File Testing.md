Tutorial
--------
Often you will want to do some file tests on the file system you are running. In this case, shell will provide you with several useful commands to achieve it.

The command looks like the following:

* `-<command> [filename]`
* `[filename1] -<command> [filename2]`

We will briefly introduce some common commands you might encounter in your daily life.

**use "-e" to test if a file exists**

    #!/bin/bash
    filename="sample.md"
    if [ -e "$filename" ]; then
        echo "$filename exists as a file"
    fi

**use "-d" to test if a directory exists**

    #!/bin/bash
    directory_name="test_directory"
    if [ -d "$directory_name" ]; then
        echo "$directory_name exists as a directory"
    fi

**use "-r" to test if a file has read permission for the user running the script**

    #!/bin/bash
    filename="sample.md"
    if [ ! -f "$filename" ]; then
        touch "$filename"
    fi
    if [ -r "$filename" ]; then
        echo "you are allowed to read $filename"
    else
        echo "you are not allowed to read $filename"
    fi

Other common test flags include `-w` (writable), `-x` (executable), `-f` (regular file), and `-s` (non-empty file).

Exercise
--------
`filename` is created as a regular file. Fix the condition below to use the `-f` test so that it only reports the file when it exists as a regular file.

Tutorial Code
-------------
    #!/bin/bash
    filename="sample.md"
    touch "$filename"
    # fix the condition to use the -f test
    if [ -e "$filename" ]; then
        echo "$filename exists"
    fi

Expected Output
---------------
    sample.md exists

Solution
--------
    #!/bin/bash
    filename="sample.md"
    touch "$filename"
    if [ -f "$filename" ]; then
        echo "$filename exists"
    fi
