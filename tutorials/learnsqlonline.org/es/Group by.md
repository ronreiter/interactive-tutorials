Tutorial
--------

La sentencia `GROUP BY` es la más crucial para propósitos analíticos, y nos proporciona la habilidad de agregar un conjunto de filas y resumir un resultado de ellos. Por ejemplo - usando una base de datos de clientes y pedidos, podemos usar una declaración `GROUP BY` para contar cuántos tiene cada cliente.

Tomemos nuestra base de datos de clientes y contemos cuántos pedidos tiene cada cliente:

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

    INSERT INTO customers (first_name, last_name) VALUES
        ("Eric", "Smith");

    INSERT INTO orders (customer_id, product_name) VALUES
        (last_insert_rowid(), "Doritos");

    .mode column
    .headers on
    SELECT first_name, last_name, COUNT(*) AS total_orders FROM customers
    JOIN orders ON orders.customer_id = customers.id
    GROUP BY orders.customer_id;


Ejercicio
--------

Escribe una consulta que muestre el nombre de pila y el número de pedidos disponibles para cada persona en la base de datos.

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
        (last_insert_rowid(), "Doritos");

    -- enter your code here



Expected Output
---------------
John|2
Eric|1

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
        (last_insert_rowid(), "Doritos");

    -- enter your code here
    SELECT first_name, COUNT(*) AS total_orders FROM customers
    JOIN orders ON orders.customer_id = customers.id
    GROUP BY orders.customer_id;

