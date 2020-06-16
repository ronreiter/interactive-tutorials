Tutorial
--------

Ordering the result of a query is mostly useful when we need to look at things from the most important row to the 
least important row. For example, to answer the question "who are the people who received the highest grades"
can be answered by ordering the result and reading the result row by row.

Let's take a list of grades and generate a list of alphabetically ordered names from A to Z:

    .exec
    CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);
    
    INSERT INTO grades (name, subject, grade) VALUES
        ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
        ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
        ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

    SELECT DISTINCT name 
    FROM grades
    ORDER by name;

Now, let's get a list of grades and order all grades from the highest to lowest. Notice that the ordering direction
is now opposite which means the ordering is descending. A descending order by is noted using the `DEST` command.

    .exec
    CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);
    
    INSERT INTO grades (name, subject, grade) VALUES
        ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
        ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
        ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

    SELECT name, subject, grade
    FROM grades
    ORDER by grade DESC;

Exercise
--------

Get a list of alphabetically ordered subjects from the grades list.

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

Arts
CompSci
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
SELECT DISTINCT subject
FROM grades
ORDER BY subject;
