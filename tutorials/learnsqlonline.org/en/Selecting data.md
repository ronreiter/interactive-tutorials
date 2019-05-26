Tutorial
--------

Selecting data is the foundation of SQL (a.k.a Structured Querying Language) and can be used for querying anywhere from tiny amounts to huge amounts of data.

Here is the SELECT statement syntax:

    SELECT column1, column2, column3...
    FROM table1, table2, table3...
    WHERE condition1 AND condition2...

The first line right after the SELECT statement specifies the columns we'd like to select in the query. We can use the asterisk (`*`) if we want to select
all fields of a table. You should avoid selecting all fields if the query returns a lot of data, because the more data you fetch, the more time
the query will take in terms of time and network resources.

After the FROM clause, you will need to specify the table (or tables) which you'd like to fetch the data. Fetching more than one table is another syntax
of the term "joining" tables in SQL. We won't get into what "joining" tables is on this character yet, so for now we'll assume that you should only
put one table in the SELECT query.

The last (and optional) part of the query is the WHERE clause which dictates under which conditions the row should be returned from the query. Or in other
words, it enables you to filter the result based on specific parameters. The WHERE clause can be used for analyzing data by looking only at a specific
subset of the data within the table, to gain insights.

WHERE statements receive boolean statements which can use text comparison operators, numerical comparison operators, the IS NULL check, and more.

Exercise
--------
Write a SELECT query which selects all students from the `students` table who received a grade of more than 80. Return only the name of the student.


Tutorial Code
-------------

CREATE TABLE students (name text, grade int);
INSERT INTO students VALUES ("Eric", 83);
INSERT INTO students VALUES ("John", 78);
INSERT INTO students VALUES ("Andrew", 91);
INSERT INTO students VALUES ("Jessica", 95);
INSERT INTO students VALUES ("Chris", 79);


Expected Output
---------------
Eric
Andrew
Jessica

Solution
--------
CREATE TABLE students (name text, grade int);
INSERT INTO students VALUES ("Eric", 83);
INSERT INTO students VALUES ("John", 78);
INSERT INTO students VALUES ("Andrew", 91);
INSERT INTO students VALUES ("Jessica", 95);
INSERT INTO students VALUES ("Chris", 79);

SELECT name FROM students WHERE grade > 80;
