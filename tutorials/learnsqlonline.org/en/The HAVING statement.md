Tutorial
--------

The HAVING clause is an essential part of a group by query, which is almost identical to the WHERE clause, 
but works on aggregate fields after the aggregation phase, whereas the WHERE clause filters the data set before
the aggregation process.

To give an example, a WHERE statement in a GROUP BY will only group the fields that match the criteria:

    .exec
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);
 
    SELECT class, AVG(grade) 
    FROM grades 
    WHERE grade > 85 
    GROUP BY class; 
    
A HAVING statement will filter the resulting grouped data set using the result of the aggregation: 

    .exec
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);
 
    SELECT class, AVG(grade) 
    FROM grades 
    GROUP BY class
    HAVING AVG(grade) > 90;

Notice that on this specific query, the WHERE-filtered query did not change the number of classes aggregated 
(since the filter kept at least one student from each class), but the HAVING-filtered query did remove one of the
classes which did not pass the average score.

You can, of course, combine both WHERE and HAVING, to get the result you wish.  

Exercise
--------
Find the maximum score of all classes which have at least 3 students. 

Tutorial Code
-------------
CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);

INSERT INTO grades (name, class, grade) VALUES
    ("John", 1, 97), ("Eric", 1, 88),
    ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79),
    ("Steve", 3, 91), ("Bill", 3, 84), ("Barney", 3, 97);

-- write your code here
    
Expected Output
---------------
2|99
3|97

Solution
--------
CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);

INSERT INTO grades (name, class, grade) VALUES
    ("John", 1, 97), ("Eric", 1, 88),
    ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79),
    ("Steve", 3, 91), ("Bill", 3, 84), ("Barney", 3, 97);

 -- write your code here
SELECT class, MAX(grade) 
FROM grades 
GROUP BY class
HAVING COUNT(name) >= 3;