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
    As a general rule, use $@ and avoid $*. $# is the number of parameters the script was called with. 
