Tutorial
--------
Shell variables are created once they are assigned a value. A variable can contain a number, a character or a string of characters. Variable name is case sensitive and can consist of a combination of letters and the underscore "_". 
Value assignment is done using the "=" sign. Note that no space permitted on either side of = sign when initializing variables.

    PRICE_PER_APPLE=5
    MyFirstLetters=ABC
    greeting='Hello        world!'

Referencing the variables

A backslash "\\" is used to escape special character meaning

    PRICE_PER_APPLE=5
    echo "The price of an Apple today is: \$HK $PRICE_PER_APPLE"

Encapsulating the variable name with ${} is used to avoid ambiguity

    MyFirstLetters=ABC
    echo "The first 10 letters in the alphabet are: ${MyFirstLetters}DEFGHIJ"

Encapsulating the variable name with "" will preserve any white space values
   
    greeting='Hello        world!'
    echo $greeting" now with spaces: $greeting"

Variables can be assigned with the value of a command output. This is referred to as substitution. Substitution can be done by encapsulating the command with `` (known as back-ticks) or with $()

    FILELIST=`ls`
    FileWithTimeStamp=/tmp/my-dir/file_$(/bin/date +%Y-%m-%d).txt

Note that when the script runs, it will run the command inside the $() parenthesis and capture its output.

Exercise
--------
The target of this exercise is to create a string, an integer, and a complex variable using command substitution. The string should be named BIRTHDATE and should contain the text "Jan 1, 2000". The integer should be named Presents and should contain the number 10. The complex variable should be named BIRTHDAY and should contain the full weekday name of the day matching the date in variable BIRTHDATE e.g. Saturday. Note that the 'date' command can be used to convert a date format into a different date format. For example, to convert date value, $date1, to day of the week of date1, use: 

    date -d "$date1" +%A

Tutorial Code
-------------
    #!/bin/bash
    # Change this code
    BIRTHDATE=
    Presents=
    BIRTHDAY=
    
    
    # Testing code - do not change it
    
    if [ "$BIRTHDATE" == "Jan 1, 2000" ] ; then
        echo "BIRTHDATE is correct, it is $BIRTHDATE"
    else
        echo "BIRTHDATE is incorrect - please retry"
    fi
    if [ $Presents == 10 ] ; then
        echo "I have received $Presents presents"
    else
        echo "Presents is incorrect - please retry"
    fi
    if [ "$BIRTHDAY" == "Saturday" ] ; then
        echo "I was born on a $BIRTHDAY"
    else
        echo "BIRTHDAY is incorrect - please retry"
    fi

Expected Output
---------------
    BIRTHDATE is correct, it is Jan 1, 2000
    I have received 10 presents
    I was born on a Saturday

Solution
--------
    #!/bin/bash
    # Change this code
    BIRTHDATE="Jan 1, 2000"
    Presents=10
    BIRTHDAY=`date -d "$BIRTHDATE" +%A`
    
    
    # Testing code - do not change it
    
    if [ "$BIRTHDATE" == "Jan 1, 2000" ] ; then
        echo "BIRTHDATE is correct, it is $BIRTHDATE"
    else
        echo "BIRTHDATE is incorrect - please retry"
    fi
    if [ $Presents == 10 ] ; then
        echo "I have received $Presents presents"
    else
        echo "Presents is incorrect - please retry"
    fi
    if [ "$BIRTHDAY" == "Saturday" ] ; then
        echo "I was born on a $BIRTHDAY"
    else
        echo "BIRTHDAY is incorrect - please retry"
    fi
