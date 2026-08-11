Tutorial
--------
In the last tutorial about shell functions, you used `$1` to represent the first argument passed to `function_A`. Moreover, here are some special variables in shell:

* `$0` - The filename of the current script.
* `$n` - The Nth argument passed to the script was invoked or function was called.
* `$#` - The number of arguments passed to the script or function.
* `$@` - All arguments passed to the script or function.
* `$*` - All arguments passed to the script or function.
* `$?` - The exit status of the last command executed.
* `$$` - The process ID of the current shell. For shell scripts, this is the process ID under which they are executing.
* `$!` - The process number of the last background command.

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

`$@` and `$*` have different behavior when they are enclosed in double quotes:

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
A function `func` prints the total count of arguments it receives. Call `func` below with the three arguments `We`, `are`, and `argument` so that the output reads `Total count of arguments: 3`.

Tutorial Code
-------------
    #!/bin/bash
    function func {
        echo "Total count of arguments: $#"
    }
    # write your code here
    func

Expected Output
---------------
    Total count of arguments: 3

Solution
--------
    #!/bin/bash
    function func {
        echo "Total count of arguments: $#"
    }
    func We are argument
