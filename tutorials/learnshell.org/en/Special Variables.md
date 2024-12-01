Tutorial
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

Most of these special variables probably look familiar to you and are rather self-explanatory. Using them effectively will be a simple matter of practice. However, let's take a closer look at some of these.

You might have noticed that `$@` and `$*` have the same description. This is because they output almost the same thing, just with different formats. So if you take the example:

    ./command -arg1 -arg2 /path/to/somewhere

`$*` will give you a plain string: `"-arg1 -arg2 /path/to/somewhere"` while `$@` will give you an array: `{"-arg1", "-arg2", "/path/to/somewhere"}`.

`$$` - As described above, this is the process ID of the current shell. If you were to echo out `$$`, you would get a process ID. However, if you were to put the same command in a bash script and run it in the same shell, it would produce a separate process ID. This is because every time you run a bash script, a new bash shell is started.

`$!` - This is the process ID of the last backgrounded command. An example of a backgrounded command would be something like:

    $ ping 8.8.8.8 > out.log &
    [2] 96

The `&` would send the process to the background. The command will also print out the process ID (96 in this case). If you wanted to get the process ID later, you could use `$!`:

    $ echo $!
    96

This gives you the process ID. However, if you were to start a different background process:

    $ ping 9.9.9.9 > out2.log &
    [3] 97

Using `$!` will give you 97, not 96, since this command only gets you the PID of the last backgrounded command.

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

