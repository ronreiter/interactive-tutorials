Special Variables
-----------------
This tutorial focus on special variables/Positional Prameters available in shell.
There are a set of variables which are set for you already, and most of these cannot have values assigned to them.These variables can 
contain useful information, which can be used by the script to know about the environment in which it is running.

The first set of variables we will look at are $0 .. $9 and $#.
    The variable **$0** is the basename of the program as it was called. 
    $1 .. $9 are the first 9 additional parameters the script was called with. 
    The variable $@ is all parameters $1. 
    The variable $*, is similar, but won't maintain any whitespace, and quoting, so "MyfileName with spaces" becomes "MyfileName" "with" "spaces". This is similar to the echo stuff echo hellow world become two separate inputs.
    As a general rule, use $@ and avoid $*. 
    $# is the number of parameters the script was called with. 

        #!/bin/sh
        echo "I was called with $# parameters"   # $# indicates number of parameters
        echo "File name is $0"                     # $0 Indicates file name and path
        echo "$1 is the first parameter"          # $1 Indicates first paramaeter if nothing passed it will displayed as empty
        echo "$2 is the second parameter"
        echo "All parameters are $@"
        #[Note] : Since we are using fixed environment here, we cant pass arguments. So Possile ans is written as answer


**Possible Answer**

**Execution without parameeters **
$ /home/steve/prog.sh
I was called with 0 parameters
File name is /home/steve/prog.sh  # Full path displayed
 is the first parameter
 is the second parameter    
All parameters are 

**Execution with parameeters **
$ ./prog.sh hello world earth
I was called with 3 parameters
File name is ./prog.sh           #only base name is displayd 
hello is the first parameter
world is the second parameter 
All parameters are hello world earth

[Note] Note that the value of $0 changes depending on how the script was called. The utility basename (external utility) can help to solve this.

Ex:    echo "File name is `basename $0`"  # it will always display basename of file path only

**[Note]:You can have upto 255 parametes in bash but to mention above 9th parameter use curly braces ${10},${101} and so on.**


Exercise
-------------
    There is no exercise for this section. You may proceed. 
    for your reference : How can we  take more than 9 parameters by using the **shift** command (try this on your own)

Tutorial Code
-------------
    #!/bin/bash
    # There is no exercise for this section.
    # You may proceed.

Solution
--------
    #!/bin/bash
    # There is no exercise for this section.
    # You may proceed.

Expected Output
---------------
    #!/bin/bash
    # There is no exercise for this section.
    # You may proceed.
