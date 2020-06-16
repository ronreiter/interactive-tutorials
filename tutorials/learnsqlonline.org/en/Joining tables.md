Tutorial
--------

The ability to join tables is one of the most important feature of a database. It allows the user to create a new set of data gathered from joining two tables
side by side, "stitching" the columns of the first table with the columns of the second table.

We need to join tables when you want to query one table, and then add information to the result of a `SELECT` statement for each row from another table.

Joining two tables effectively creates a "cartesian multiplication" result from a query with two tables, producing M * N rows in the resulting output (assuming
the first table contains M rows and the second table contains N rows). However, when joining two tables a join condition is used which limits the amount
of rows returned to a relationship condition between the two tables.

Let's see an example. Let's say we have a database that contains customers and orders which the customers have made. The orders table refers to the ID
of the customer from the customer table to track which order was made by each customer. We'd like to see all orders done by our customers, alongside the
customer names.

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

    INSERT INTO customers (first_name, last_name) VALUES
        ("John", "Doe");

    INSERT INTO orders (customer_id, product_name) VALUES
        (last_insert_rowid(), "Coke"),
        (last_insert_rowid(), "Sprite");

    .mode column
    .headers on
    SELECT product_name, first_name, last_name
    FROM orders
    JOIN customers ON orders.customer_id = customers.id;



Exercise
--------

Write a `SELECT` query which selects the product name and the first name of the customer which bought the product, only if the name
of the customer is John.

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

    INSERT INTO customers (first_name, last_name) VALUES
        ("John", "Doe");

    INSERT INTO orders (customer_id, product_name) VALUES
        (last_insert_rowid(), "Coke"),
        (last_insert_rowid(), "Sprite");

    INSERT INTO customers (first_name, last_name) VALUES
        ("Eric", "Smith");

    INSERT INTO orders (customer_id, product_name) VALUES
        (last_insert_rowid(), "Doritos"),
        (last_insert_rowid(), "Water");

    -- enter code here

Expected Output
---------------
Coke|John
Sprite|John

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

    INSERT INTO customers (first_name, last_name) VALUES
        ("John", "Doe");

    INSERT INTO orders (customer_id, product_name) VALUES
        (last_insert_rowid(), "Coke"),
        (last_insert_rowid(), "Sprite");

    INSERT INTO customers (first_name, last_name) VALUES
        ("Eric", "Smith");

    INSERT INTO orders (customer_id, product_name) VALUES
        (last_insert_rowid(), "Doritos"),
        (last_insert_rowid(), "Water");

    -- enter code here
    SELECT product_name, first_name
    FROM orders
    JOIN customers ON orders.customer_id = customers.id
    WHERE first_name = 'John';

