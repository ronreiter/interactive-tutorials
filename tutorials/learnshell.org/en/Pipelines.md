Tutorial
---------
Pipelines, often called pipes, is a way to chain commands and connect output from one command to the input of the next.
A pipeline is represented by the pipe character: ``|``. It's particularly handy when a complex or long input is required for a command.

    command1 | command2

By default pipelines redirects only the standard output, if you want to include the standard error you need to use the form ``|&`` which is a short hand for ``2>&1 |``.

### Example:
Imagine you quickly want to know the number of entries in a directory, you can use a pipe to redirect the output of the ``ls`` command to the ``wc`` command with option ``-l``.

    ls / | wc -l

Then you want to see only the first 10 results

    ls / | head
*Note: head outputs the first 10 lines by default, use option -n to change this behavior*

Grep searches for patterns in each file. Patterns is one or more patterns separated by newline characters, and grep prints each line that matches a pattern. Typically patterns should be quoted when grep is used in a shell command.

    ls / | grep  # This will grab any line/file that has a matching pattern in it

Exercise
--------
In this exercise, you will need to print the number of processors based on the information in the cpuinfo file (/proc/cpuinfo)

*Hint 1: each processor has a unique number, for instance the first processor will contain the line ``processor: 0``*
*Hint 2: you can chain together more than two commands in a row*

Tutorial Code
-------------
    #!/bin/bash
    cat /proc/cpuinfo | 

Expected Output
---------------
    8

Solution
--------
    #!/bin/bash
    cat /proc/cpuinfo | grep processor | wc -l
