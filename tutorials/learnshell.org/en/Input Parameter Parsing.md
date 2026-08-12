Tutorial
--------
When a script is called with parameters, you often need to validate them or parse them into named variables. Shell gives you a few common ways to handle this.

### Using positional parameters

The simplest way is to read `$1`, `$2`, ... directly:

    #!/bin/bash
    echo "First argument: $1"
    echo "Second argument: $2"

### Using a default value

You can provide a default when an argument is missing using `${var:-default}`:

    #!/bin/bash
    echo "User: ${1:-guest}"
    echo "Home: ${2:-/home/guest}"

### Looping over all arguments

Use `$@` to iterate over every argument passed:

    #!/bin/bash
    for arg in "$@"
    do
        echo "Got: $arg"
    done

### Counting arguments

`$#` gives the number of arguments:

    #!/bin/bash
    echo "Number of arguments: $#"

Exercise
--------
Complete the script so that it prints the second argument passed to it. Call the script with the two arguments `apple` and `banana`.

Tutorial Code
-------------
    #!/bin/bash
    # write your code here
    echo "Second argument: "

Expected Output
---------------
    Second argument: banana

Solution
--------
    #!/bin/bash
    echo "Second argument: $2"
