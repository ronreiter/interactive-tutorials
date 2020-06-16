Tutorial
--------

SQL defines aggregate functions which can summarize a whole column using an aggregative operation. The two most
basic aggregate functions are `SUM` and `COUNT`, which can sum the total value of a column or count the number of
non-null entries that exist respectively. Another extremely useful function is the average function `AVG` which 
simply takes the `SUM` and divides it with the `COUNT`.

Here's an example of the aggregate functions in action on a list of students and their grades:

    .exec
    CREATE TABLE grades (name TEXT, grade INTEGER);
    
    INSERT INTO grades (name, grade) VALUES
        ("John", 97), ("Eric", 88), ("Jessica", 98), ("Mike", 82), ("Jeff", NULL);
           
    SELECT "total students", COUNT(name) FROM grades;
    SELECT "total grades", COUNT(grade) FROM grades;
    SELECT "sum of grades", SUM(grade) FROM grades;
    SELECT "grade average", AVG(grade) FROM grades;
    SELECT "lowest grade", MIN(grade) FROM grades;
    SELECT "highest grade", MAX(grade) FROM grades;
    SELECT "names", GROUP_CONCAT(name) FROM grades;
    
Aggregating numbers can be done using mathematical functions such as `SUM`, `COUNT`, `AVG`, `MIN`, `MAX`, etc. 

Aggregating strings is usually done using a function such as `GROUP_CONCAT` which simply concatenates the fields.
It's not trivial to aggregate strings, and usually also not that useful for analytical purposes.
    
### Aggregate functions in Group By statements

When grouping rows, aggregate functions must be used on all fields which are not part of the fields being grouped.
This is because referring to a column in a group by result is ambiguous. A reference to a column in a group by
statement must be done using an aggregate function.

A logical example for this can be given using an example. Let's say we have the following database:

    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);
 
Once we group the results by the class number, we create two types of fields in the grouped by result:

* Group by fields: `class`
* Aggregate fields: `name`, `grade`

The group by fields can simply be selected, whereas the aggregate fields (which are not part of the group by clause)
must be summarized using an aggregate function.

Let's calculate the grade average and list of names for each class using a GROUP BY statement:

    .exec
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);
 
    .mode column
    .headers on
    SELECT class, GROUP_CONCAT(name), AVG(grade)
    FROM grades
    GROUP BY class;

Exercise
--------
Find the highest score for each class.

Tutorial Code
-------------
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);

    -- enter code here
    
Expected Output
---------------
1|98
2|99

Solution
--------
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);

    -- enter code here
    SELECT class, MAX(grade)
    FROM grades
    GROUP BY class;