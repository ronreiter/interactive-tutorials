Tutorial
--------
A subquery is a SELECT statement nested in another statement. See the following statement.


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
        (1,"John", "Doe"),
        (2,"Jane", "Doe"),
        (3,"Billy", "Doe"),

    INSERT INTO orders (id,customer_id, product_name,price) VALUES
        (1,1, "Coke", 5),
        (2,2, "Sprite", 4),
        (3,3, "HotDog",7),
        (4,4, "Beer",6),
        (5,5, "Wine",9),



    .mode column
    .headers on
    SELECT *
    FROM orders
    WHERE customer_id IN (
        SELECT DISTINCT customer_id from customers
    )


You must use a pair of parentheses to enclose a subquery. Note that you can nest a subquery inside another subquery with a certain depth.

Typically, a subquery returns a single row as an atomic value, though it may return multiple rows for comparing values with the IN operator.

You can use a subquery in the SELECT, FROM, WHERE, and JOIN clauses.

In the example shown above the outer query has a subquery in the WHERE clause, the outer query checks if a given 'customer_id' is part of the result-set given by the subquery.

###Subquerys in the FROM clause

Sometimes you want to apply aggregate functions to a column multiple times. It works just the same as shown in the WHERE clause, the only distinction is that SQLite first executes the subquery in the FROM clause and returns a result set. Then, SQLite uses this result set as a derived table in the outer query.


Exercise
--------
Select all customers which orders have prices above 6

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
        product_name TEXT,
        price INTEGER
    );

    INSERT INTO customers (id,first_name, last_name) VALUES
        (1,"John", "Doe"),
        (2,"Jane", "Doe"),
        (3,"Billy", "Doe"),
        (4,"Joe", "Doe"),
        (5,"Chris", "Doe"),
        (6,"Mike", "Doe"),
        (7,"Jenny", "Doe"),
        (8,"Alicia", "Doe");

    INSERT INTO orders (id,customer_id, product_name,price) VALUES
        (1,1, "Coke", 5),
        (2,2, "Sprite", 4),
        (3,3, "HotDog",7),
        (4,4, "Beer",6),
        (5,5, "Wine",9),
        (6,6, "Burger",2),
        (7,7, "Pizza",3),
        (8,8, "Tequila",15);

    -- write your code here

    
Expected Output
---------------
        3,"Billy", "Doe"
        5,"Chris", "Doe"
        8,"Alicia", "Doe"

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
        product_name TEXT,
        price INTEGER
    );

    INSERT INTO customers (id,first_name, last_name) VALUES
        (1,"John", "Doe"),
        (2,"Jane", "Doe"),
        (3,"Billy", "Doe"),
        (4,"Joe", "Doe"),
        (5,"Chris", "Doe"),
        (6,"Mike", "Doe"),
        (7,"Jenny", "Doe"),
        (8,"Alicia", "Doe");

    INSERT INTO orders (id,customer_id, product_name,price) VALUES
        (1,1, "Coke", 5),
        (2,2, "Sprite", 4),
        (3,3, "HotDog",7),
        (4,4, "Beer",6),
        (5,5, "Wine",9),
        (6,6, "Burger",2),
        (7,7, "Pizza",3),
        (8,8, "Tequila",15);

    -- write your code here

    .mode column
    .headers on
    SELECT *
    FROM Customers
    WHERE customer_id IN (
        SELECT DISTINCT customer_id from Orders
        where price > 6
    )
