Tutorial
--------

Distinct queries enable us count the number of unique values in a table or in a grouped set of rows.

To do this, we can use the `DISTINCT` directive. A `DISTINCT` query will return a de-duplicated set of entries, if
all of the columns for two or more rows exactly match.

An example of where this can be useful is when we want to get the list of people

Let's look at some examples:
    
    .exec
    CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);
    
    INSERT INTO grades (name, subject, grade) VALUES
        ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
        ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
        ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

    SELECT "all names", COUNT(name) FROM grades;
    SELECT "unique names", COUNT(DISTINCT name) FROM grades;
    SELECT DISTINCT name FROM grades;

A `DISTINCT` query is very similar to a `GROUP BY` clause with all of the columns selected inside the clause. This
effectively causes all identical rows to be grouped together. The difference between a `GROUP BY` query and a 
`DISTINCT` query is that you cannot count the number of identical occurrences have been identified for each row with
a `DISTINCT` query. However, it is more efficient than a `GROUP BY` query most of the times.   

Exercise
--------

Get a list of all different subjects from the `grades` table.

Tutorial Code
-------------
CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);

INSERT INTO grades (name, subject, grade) VALUES
    ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
    ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
    ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

-- enter code here
    
Expected Output
---------------
CompSci
Arts
History
Physics

Solution
--------
CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);

INSERT INTO grades (name, subject, grade) VALUES
    ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
    ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
    ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

-- enter code here
SELECT DISTINCT subject FROM grades;