Tutorial
--------
### What is a view?

In database theory, a view is a result set of a stored query. A view is the way to pack a query into a named object stored in the database.

You can access the data of the underlying tables through a view. The tables that the query in the view definition refers to are called base tables.

A view is useful in some cases:

- First, views provide an abstraction layer over tables. You can add and remove the columns in the view without touching the schema of the underlying tables.
- Second, you can use views to encapsulate complex queries with joins to simplify the data access.

SQLite view is read only. It means you cannot use INSERT, DELETE, and  UPDATE statements to update data in the base tables through the view.

### SQLite CREATE View statement
To create a view, you use the CREATE VIEW statement as follows:

    CREATE [TEMP] VIEW [IF NOT EXISTS] view_name[(column-name-list)]
    AS  select-statement;

First, specify a name for the view. The IF NOT EXISTS option only creates a new view if it doesn’t exist. If the view already exists, it does nothing.

Second, use the the TEMP or TEMPORARY option if you want the view to be only visible in the current database connection. The view is called a temporary view and SQLite automatically removes the temporary view whenever the database connection is closed.

Third, specify a  SELECT statement for the view. By default, the columns of the view derive from the result set of the SELECT statement. However, you can assign the names of the view columns that are different from the column name of the table

Exercise
--------
Create a view with the customer_id,first_name, product_name and price.

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
        1,"John","Coke", 5
        2,"Jane","Sprite", 4
        3,"Billy","HotDog",7
        4,"Joe","Beer",6
        5,"Chris","Wine",9
        6,"Mike","Burger",2
        7,"Jenny","Pizza",3
        8,"Alicia","Tequila",15

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

    CREATE VIEW v_orders_customers 
    AS 
    SELECT
        c.id,
        c.first_name,
        o.product_name,
        o.price
    FROM
        Customers c
    JOIN Orders o ON C.id = O.customer_id;

    Select * from v_orders_customers;