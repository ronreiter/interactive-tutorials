Tutorial
--------

Updating rows is done using the `UPDATE` statement. Updates are done using two parts: defining which rows should be updated, and the values of the columns
to replace with.

A lot of times an `UPDATE` statement will aim to replace one row, in which the query will use the primary key of the table to select the row to update.

Here is the syntax of an `UPDATE` statement:

    UPDATE table_name
    SET column1 = value1, column2 = value2, ...
    WHERE key = value

Let's look at an example of how an `UPDATE` statement works.

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    INSERT INTO customers (first_name, last_name, age)
    VALUES ("John", "Doe", 23), ("Eric", "Smith", 26);

    SELECT * FROM customers;

    UPDATE customers SET last_name = "Heart" WHERE first_name = "John";

    SELECT * FROM customers;

Exercise
--------

Add an update statement which updates Eric's age to 27 between the two `SELECT` statements.

Tutorial Code
-------------
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    INSERT INTO customers (first_name, last_name, age)
    VALUES ("John", "Doe", 23), ("Eric", "Smith", 26);

    SELECT * FROM customers;

    -- enter code here

    SELECT * FROM customers;

Expected Output
---------------
John|Doe|23
Eric|Smith|26
John|Doe|23
Eric|Smith|27

Solution
--------
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    INSERT INTO customers (first_name, last_name, age)
    VALUES ("John", "Doe", 23), ("Eric", "Smith", 26);

    SELECT * FROM customers;

    UPDATE customers SET age = 27 WHERE first_name = "Eric";

    SELECT * FROM customers;
