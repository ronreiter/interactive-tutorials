Tutorial
--------
Arguments can be passed to the script when it is executed, by writing them as a space-delimited list following the script file name.

Inside the script, the $1 variable references the first argument in the command line, $2 the second argument and so forth.
The variable $0 references to the current script. In the following example, the script name is followed by 6 arguments. 

Example
-------------
my_shopping.sh file contains below code.

    #!/bin/bash
    echo "File name is "$0 # holds the current script
    echo $3 # $3 holds banana
    Data=$5
    echo "A $Data costs just $6."
    echo $#

Executing the script on terminal as, 

**bash my_shopping.sh apple 5 banana 8 "Fruit Basket" 15**

output is

**File name is my_shopping.sh**

**banana**

**A Fruit Basket costs just 15**

**6**

The variable $# holds the number of arguments passed to the script

The variable $@ holds a space delimited string of all arguments passed to the script

Exercise
-------------
Pass "Shell is fun" (3 arguments) to the script(prog.sh) as an arguments and print the length of the arguments.

Tutorial Code
-------------
    #!/bin/bash
    function File {
        # think you are inside the file
        # Change here
	    echo "print the arguments"
    }

    # Do not change anything
    if [ ! $# -lt 1 ]; then
	    File $*
	    exit 0
    fi

    # change here
    # here you can pass the arguments
    bash test.sh arguments

Solution
-------------
    #!/bin/bash
    function File {
        # think you are inside the file
        # Change Here
	    echo $#
    }

    # Do not change anything
    if [ ! $# -lt 1 ]; then
	    File $*
	    exit 0
    fi

    # change here
    # here you can pass the arguments
    bash prog.sh Shell is fun


Expected Output
---------------
    3
