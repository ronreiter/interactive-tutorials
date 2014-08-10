Tutorial
--------
The tutorial discusses shell programming in general with focus on **Bash** ("Bourne Again Shell") shell as the main shell interpreter. Shell programming using other common shells such as sh, csh, tcsh, will also be referenced, as they sometime differ from bash.

Shell programming can be accomplished by directly executing shell commands at the shell prompt or by storing them in the order of execution, in a text file, called a shell script, and then executing the shell script. To execute, simply write the shell script file name, once the file has execute permission (chmod +x filename).

The first line of the shell script file begins with a "sha-bang" (#!) which is not read as a comment, followed by the full path where the shell interpreter is located. This path, tells the operating system that this file is a set of commands to be fed into the interpreter indicated. Note that if the path given at the "sha-bang" is incorrect, then an error message e.g. "Command not found.", may be the result of the script execution. It is common to name the shell script with the ".sh" extension. The first line may look like this:

**#!/bin/bash**

Adding comments: any text following the "#" is considered a comment

To find out what is currently active shell, and what is its path, type the highlighted command at the shell prompt (sample responses follow):

**ps | grep $$**

987 tty1      00:00:00 bash

This response shows that the shell you are using is of type 'bash'. next find out the full path of the shell interpreter

**which bash**

/bin/bash

This response shows the full execution path of the shell interpreter. Make sure that the "sha-bang" line at the beginning of your script, matches this same execution path.

Exercise
-------------
Use the "echo" command to print the line "Hello, World!".

Tutorial Code
-------------
    #!/bin/bash
    # Text to the right of a '#' is treated as a comment - below is the shell command
    echo 'Goodbye, World!'

Expected Output
---------------
    Hello, World!

Solution
--------
    #!/bin/bash
    # Text to the right of a '#' is treated as a comment - below is the shell command
    echo 'Hello, World!'
