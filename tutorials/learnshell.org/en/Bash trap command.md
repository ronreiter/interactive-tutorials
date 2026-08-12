Tutorial
--------
Sometimes you want to catch a special signal, interruption, or user input in your script to prevent the unpredictable.

`trap` is your command to try:

* `trap <arg/function> <signal>`

When a signal is received, the function or command listed as `<arg>` runs. Some of the common signal types you can trap:

* `SIGINT` - user sends an interrupt signal (Ctrl + C)
* `SIGQUIT` - user sends a quit signal (Ctrl + D)
* `SIGFPE` - attempted an illegal mathematical operation

You can check out all signal types by entering the following command:

    kill -l

Notice the numbers before each signal name. You can use that number to avoid typing long strings in trap:

    # 2 corresponds to SIGINT and 15 corresponds to SIGTERM
    trap booh 2 15

One common use of trap is to do cleanup of temporary files:

    trap "rm -f folder; exit" 2

Here is a complete runnable example. The script sets a trap for SIGINT, sends itself the signal, and the handler runs:

    #!/bin/bash
    trap 'echo "Caught SIGINT"' SIGINT
    echo "before kill"
    kill -SIGINT $$
    echo "after kill"

This prints:

    before kill
    Caught SIGINT
    after kill

Exercise
--------
Fix the trap handler below so that instead of printing `TODO: replace me`, it prints `Bye!` when SIGINT is received.

Tutorial Code
-------------
    #!/bin/bash
    trap 'echo "TODO: replace me"' SIGINT
    echo "waiting..."
    kill -SIGINT $$
    echo "done"

Expected Output
---------------
    waiting...
    Bye!
    done

Solution
--------
    #!/bin/bash
    trap 'echo "Bye!"' SIGINT
    echo "waiting..."
    kill -SIGINT $$
    echo "done"
