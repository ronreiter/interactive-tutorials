Special Variables
-----------------

In last tutorial about shell function, you use "$1" represent the first argument passed to function_A. Moreover, here are some special variables in shell:


* `$0` - The filename of the current script.|
* `$n` - The Nth argument passed to script was invoked or function was called.|
* `$#` - The number of argument passed to script or function.|
* `$@` - All arguments passed to script or function.|
* `$*` - All arguments passed to script or function.|
* `$?` - The exit status of the last command executed.|
* `$$` - The process ID of the current shell. For shell scripts, this is the process ID under which they are executing.|
* `$!` - The process number of the last background command.|
    

### Example:

    #!/bin/bash
    echo "Script Name: $0"
    function func {
        for var in $*
        do
            let i=i+1
            echo "The \$${i} argument is: ${var}"
        done
        echo "Total count of arguments: $#"
    }
    func We are argument


`$@` and `$*` have different behavior when they were enclosed in double quotes.

    #!/bin/bash
    function func {
        echo "--- \"\$*\""
        for ARG in "$*"
        do
            echo $ARG
        done
    
        echo "--- \"\$@\""
        for ARG in "$@"
        do
            echo $ARG
        done
    }
    func We are argument

Exercise
--------

There is no exercise for this section.

