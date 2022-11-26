Tutorial
--------

String functions are a set of operations that can be performed on an input string and return a new string or a numeric value.
The followinf are the most common:

Operator | Description
------------- | -------------
SUBSTR | Extract and returns a substring with a predefined length starting at a specified position in a source string
TRIM | Return a copy of a string that has specified characters removed from the beginning and the end of a string.
LTRIM | Return a copy of a string that has specified characters removed from the beginning of a string.
RTRIM | Return a copy of a string that has specified characters removed from the end of a string.
LENGTH | Return the number of characters in a string or the number of bytes in a BLOB.
REPLACE | Return a copy of a string with each instance of a substring replaced by another substring.
UPPER | Return a copy of a string with all of the characters converted to uppercase.
LOWER | Return a copy of a string with all of the characters converted to lowercase.
INSTR | Find a substring in a string and returns an integer indicating the position of the first occurrence of the substring.
Concatenation Operator &#124; &#124; | Concatenate two strings into a single string.


 ### INSTR
    .exec
        SELECT INSTR('SQLite String Functions','Functions') Position;

 
 ### LENGTH
    .exec
        SELECT 
            LENGTH('SQLite');

### LOWER
    .exec
        SELECT
            LOWER('String Functions');


### LTRIM
    .exec
        SELECT 
        LTRIM(' SQLite '),
        LENGTH(' SQLite ') LengthBefore,
        LENGTH(LTRIM(' SQLite ')) LengthAfter;

### RTRIM
    .exec
        SELECT
        RTRIM(' SQLite '),
        LENGTH(' SQLite ') LengthBefore,
        LENGTH(RTRIM(' SQLite ')) LengthAfter;

### REPLACE
    .exec
        SELECT 
            REPLACE('These are string functions', 'These', 'Those');

### SUBSTR
    .exec
        SELECT 
            SUBSTR('SQLite String Functions', 1, 6);

### TRIM
    .exec   
        SELECT 
            TRIM(' SQLite ');

### UPPER
    .exec
        SELECT
            UPPER('String Functions');

### Concatenation Operator ||
This example shows how to concatenate two strings into a single string:

    .exec
        SELECT 'Concatenation ' || 'Operator';



Exercise
--------
Use the following sentence and replace the 'strong' strings with 'sad' and return it in all uppercase

'Appear weak when you are strong, and strong when you are weak'

Tutorial Code
-------------
    SELECT 'Appear weak when you are strong, and strong when you are weak'
    -- write your code here
    
Expected Output
---------------
'APPEAR WEAK WHEN YOU ARE SAD, AND SAD WHEN YOU ARE WEAK'

Solution
--------
    SELECT 'Appear weak when you are strong, and strong when you are weak';
    -- write your code here

    SELECT UPPER(REPLACE('Appear weak when you are strong, and strong when you are weak','strong','sad'));

