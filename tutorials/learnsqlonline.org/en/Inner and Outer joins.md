Tutorial
--------

The INNER JOIN keyword is a specific instance of the join statement that selects records that have matching values in both tables

The following is an example of an INNER JOIN statement

 .exec
    CREATE TABLE customers (
        id INTEGER PRIMARY KEY,
        first_name TEXT,
        last_name TEXT
    );

    CREATE TABLE orders (
        id INTEGER PRIMARY KEY,
        customer_id INTEGER,
        product_name TEXT
    );

    INSERT INTO customers (id,first_name, last_name) VALUES
        (1,"John", "Doe");

    INSERT INTO orders (id,customer_id, product_name) VALUES
        (1,1, "Coke"),
        (2,2, "Sprite"),
        (1,1, "Sprite"),
        (1,1, "Beer"),
        (2,2, "Wine");


    .mode column
    .headers on
    SELECT product_name, first_name, last_name
    FROM orders
    INNER JOIN customers ON orders.customer_id = customers.id;


Knowing what an inner join is, we can now define what an OUTER JOIN in. In short, Every JOIN statement except INNER JOINS is an OUTER JOIN.

-LEFT (OUTER) JOIN: Returns all records from the left table, and the matched records from the right table
-RIGHT (OUTER) JOIN: Returns all records from the right table, and the matched records from the left table
-FULL (OUTER) JOIN: Returns all records when there is a match in either left or right table

 .exec
    CREATE TABLE customers (
        id INTEGER PRIMARY KEY,
        first_name TEXT,
        last_name TEXT
    );

    CREATE TABLE orders (
        id INTEGER PRIMARY KEY,
        customer_id INTEGER,
        product_name TEXT
    );

    INSERT INTO customers (id,first_name, last_name) VALUES
        (1,"John", "Doe");

    INSERT INTO orders (id,customer_id, product_name) VALUES
        (1,1, "Coke"),
        (2,2, "Sprite"),
        (1,1, "Sprite"),
        (1,1, "Beer"),
        (2,2, "Wine");


    .mode column
    .headers on
    SELECT product_name, first_name, last_name
    FROM orders
    FULL OUTER JOIN customers ON orders.customer_id = customers.id;

Exercise
--------
Insert the missing parts in the JOIN clause to join the two tables Orders and Customers, using the CustomerID field in both tables as the relationship between the two tables in order to get all the records from the Customers Table and the records of the ORDERS table that have matching IDs

Tutorial Code
-------------
    CREATE TABLE customers (
        id INTEGER PRIMARY KEY,
        first_name TEXT,
        last_name TEXT
    );

    CREATE TABLE orders (
        id INTEGER PRIMARY KEY,
        customer_id INTEGER,
        product_name TEXT
    );

    INSERT INTO customers (id,first_name, last_name) VALUES
        (1,"John", "Doe");

    INSERT INTO orders (id,customer_id, product_name) VALUES
        (1,1, "Coke"),
        (2,2, "Sprite"),
        (1,1, "Sprite"),
        (1,1, "Beer"),
        (2,2, "Wine");



    -- write your code here
    
Expected Output
---------------
        "John", "Doe", "Coke"
        "Jane", "Doe", "Sprite"
        "John", "Doe", "Sprite"
        "John", "Doe", "Beer"
        "Jane", "Doe", "Wine"

Solution
--------
    CREATE TABLE customers (
        id INTEGER PRIMARY KEY,
        first_name TEXT,
        last_name TEXT
    );

    CREATE TABLE orders (
        id INTEGER PRIMARY KEY,
        customer_id INTEGER,
        product_name TEXT
    );

    INSERT INTO customers (id,first_name, last_name) VALUES
        (1,"John", "Doe");

    INSERT INTO orders (id,customer_id, product_name) VALUES
        (1,1, "Coke"),
        (2,2, "Sprite"),
        (1,1, "Sprite"),
        (1,1, "Beer"),
        (2,2, "Wine");



    .mode column
    .headers on
    SELECT orders.product_name, customers.first_name, customers.last_name
    FROM orders
    LEFT JOIN customers ON orders.customer_id = customers.id;