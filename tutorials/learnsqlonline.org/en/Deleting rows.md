Tutorial
--------

Deleting rows is very similar to updating rows, only that type of update done to the row is a delete.

Here is the syntax:

    DELETE FROM table_name WHERE column1 = value1 AND column2 = value2 ...

All rows which meet the criteria of the DELETE query will be deleted.

Exercise
--------

Add a `DELETE` statement which deletes Eric from the `customers` table.

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

Solution
--------
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    INSERT INTO customers (first_name, last_name, age)
    VALUES ("John", "Doe", 23), ("Eric", "Smith", 26);

    SELECT * FROM customers;

    DELETE FROM customers WHERE first_name = "Eric";

    SELECT * FROM customers;
