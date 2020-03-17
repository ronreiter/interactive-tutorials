Tutorial
--------
As in popular programming languages, the shell also supports logical decision making.

The basic conditional decision making construct is:

**if [ expression ]; then**

code if 'expression' is true

**fi**

    NAME="John"
    if [ "$NAME" = "John" ]; then
      echo "True - my name is indeed John"
    fi

It can be expanded with 'else'

    NAME="Bill"
    if [ "$NAME" = "John" ]; then
      echo "True - my name is indeed John"
    else
      echo "False"
      echo "You must mistaken me for $NAME"
    fi

It can be expanded with 'elif' (else-if)

    NAME="George"
    if [ "$NAME" = "John" ]; then
      echo "John Lennon"
    elif [ "$NAME" = "George" ]; then
      echo "George Harrison"
    else
      echo "This leaves us with Paul and Ringo"
    fi

The expression used by the conditional construct is evaluated to either true or false.
The expression can be a single string or variable. A empty string or a string consisting of spaces or an undefined variable name, are evaluated as false.
The expression can be a logical combination of comparisons: negation is denoted by !, logical AND (conjunction) is denoted by &&, and logical OR (disjunction) is denoted by ||. Conditional expressions should be surrounded by double brackets \[\[ ]].

### Types of numeric comparisons

    comparison    Evaluated to true when
    $a -lt $b    $a < $b
    $a -gt $b    $a > $b
    $a -le $b    $a <= $b
    $a -ge $b    $a >= $b
    $a -eq $b    $a is equal to $b
    $a -ne $b    $a is not equal to $b

### Types of string comparisons

    comparison    Evaluated to true when
    "$a" = "$b"     $a is the same as $b
    "$a" == "$b"    $a is the same as $b
    "$a" != "$b"    $a is different from $b
    -z "$a"         $a is empty

- note1: whitespace around = is required

- note2: use "" around string variables to avoid shell expansion of special characters as *

### Logical combinations

    if [[ $VAR_A -eq 1 && ($VAR_B = "bee" || $VAR_T = "tee") ]] ; then
        command...
    fi

### case structure

    case "$variable" in
        "$condition1" )
            command...
        ;;
        "$condition2" )
            command...
        ;;
    esac

### simple case bash structure

Note in this case $case is variable and does not have to be named case - this is just an example

    mycase=1
    case $mycase in
        1) echo "You selected bash";;
        2) echo "You selected perl";;
        3) echo "You selected phyton";;
        4) echo "You selected c++";;
        5) exit
    esac

Exercise
--------
Change the variables in the first section, so that each if statement resolves as True.

Tutorial Code
-------------

    #!/bin/bash
    # change these variables
    NUMBER=10
    APPLES=12
    KING=GEORGE
    # modify above variables
    # to make all decisions below TRUE
    if [ $NUMBER -gt 15 ] ; then
      echo 1
    fi
    if [ $NUMBER -eq $APPLES ] ; then
      echo 2
    fi
    if [[ ($APPLES -eq 12) || ("$KING" = "LUIS") ]] ; then
      echo 3
    fi
    if [[ $(($NUMBER + $APPLES)) -le 32 ]] ; then
      echo 4
    fi

Expected Output
---------------
    1
    2
    3
    4

Solution
--------

    #!/bin/bash
    # change these variables
    NUMBER=16
    APPLES=16
    KING="LUIS"
    # modify above variables
    # to make all decisions below TRUE
    if [ $NUMBER -gt 15 ] ; then
      echo 1
    fi
    if [ $NUMBER -eq $APPLES ] ; then
      echo 2
    fi
    if [[ ($APPLES -eq 12) || ("$KING" = "LUIS") ]] ; then
      echo 3
    fi
    if [[ $(($NUMBER + $APPLES)) -le 32 ]] ; then
      echo 4
    fi
