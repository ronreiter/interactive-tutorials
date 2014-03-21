Tutorial
--------
The shell allows some common string operations which can be very useful for script writing.

### String Length

    #       1234567890123456
    STRING="this is a string"
    echo ${#STRING}            # 16

### Index

Find the numerical position in $STRING of any single character in $SUBSTRING that matches. Note that the 'expr' command is used in this case.

    STRING="this is a string"
    SUBSTRING="hat"
    expr index "$STRING" "$SUBSTRING"     # 1 is the position of the first 't' in $STRING

### Substring Extraction

Extract substring of length $LEN from $STRING starting after position $POS. Note that first position is 0.

    STRING="this is a string"
    POS=1
    LEN=3
    echo ${STRING:$POS:$LEN}   # his

If :$LEN is omitted, extract substring from $POS to end of line

    STRING="this is a string"
    echo ${STRING:1}           # $STRING contents without leading character
    echo ${STRING:12}          # ring

### Simple data extraction example:

    # Code to extract the First name from the data record
    DATARECORD="last=Clifford,first=Johnny Boy,state=CA"
    COMMA1=`expr index "$DATARECORD" ','`  # 14 position of first comma
    CHOP1FIELD=${DATARECORD:$COMMA1}       #
    COMMA2=`expr index "$CHOP1FIELD" ','`
    LENGTH=`expr $COMMA2 - 6 - 1`
    FIRSTNAME=${CHOP1FIELD:6:$LENGTH}      # Johnny Boy
    echo $FIRSTNAME

### Substring Replacement

    STRING="to be or not to be"

Replace first occurrence of substring with replacement

    STRING="to be or not to be"
    echo ${STRING[@]/be/eat}        # to eat or not to be

Replace all occurrences of substring

    STRING="to be or not to be"
    echo ${STRING[@]//be/eat}        # to eat or not to eat

Delete all occurrences of substring (replace with empty string)

    STRING="to be or not to be"
    echo ${STRING[@]// not/}        # to be or to be

Replace occurrence of substring if at the beginning of $STRING

    STRING="to be or not to be"
    echo ${STRING[@]/#to be/eat now}    # eat now or not to be

Replace occurrence of substring if at the end of $STRING

    STRING="to be or not to be"
    echo ${STRING[@]/%be/eat}        # to be or not to eat

replace occurrence of substring with shell command output

    STRING="to be or not to be"
    echo ${STRING[@]/%be/be on $(date +%Y-%m-%d)}    # to be or not to be on 2012-06-14

Exercise
--------
In this exercise, you will need to change Warren Buffett's known saying. First create a variable ISAY and assign it the original saying value. Then re-assign it with a new changed value using the string operations and following the 4 defined changes: 
Change1: replace the first occurrence of 'snow' with 'foot'. 
Change2: delete the second occurrence of 'snow'. 
Change3: replace 'finding' with 'getting'. 
Change4: delete all characters following 'wet'. Tip: One way to implement Change4, if to find the index of 'w' in the word 'wet' and then use substring extraction.

Tutorial Code
-------------
#!/bin/bash

BUFFETT="Life is like a snowball. The important thing is finding wet snow and a really long hill."
# write your code here
ISAY=
ISAY=










# Test code - do not modify
echo "Warren Buffett said:"
echo $BUFFETT
echo "and I say:"
echo $ISAY

Expected Output
---------------
Warren Buffett said:
Life is like a snowball. The important thing is finding wet snow and a really long hill.
and I say:
Life is like a football. The important thing is getting wet

Solution
--------
#!/bin/bash

BUFFETT="Life is like a snowball. The important thing is finding wet snow and a really long hill."

    # write your code here
    ISAY=$BUFFETT
    change1=${ISAY[@]/snow/foot}
    change2=${change1[@]//snow/}
    change3=${change2[@]/finding/getting}
    loc=`expr index "$change3" 'w'`
    ISAY=${change3::$loc+2}

# Test code - do not modify
echo "Warren Buffett said:"
echo $BUFFETT
echo "and I say:"
echo "$ISAY"
