Tutorial
--------

La capacidad de unir tablas es una de las características más importantes de una base de datos. Permite al usuario crear un nuevo conjunto de datos recopilados a partir de la unión de dos tablas.
lado a lado, "cosiendo" las columnas de la primera tabla con las columnas de la segunda tabla.

Necesitamos unir tablas cuando se quiere consultar una tabla, y luego añadir información al resultado de una sentencia `SELECT` para cada fila de otra tabla.

La unión de dos tablas crea efectivamente un resultado de "multiplicación cartesiana" a partir de una consulta con dos tablas, produciendo filas M * N en la salida resultante (suponiendo que la primera tabla contiene filas M y la segunda tabla contiene N filas). Sin embargo, cuando se unen dos tablas se utiliza una condición de unión que limita el importe de filas volvió a una condición de relación entre las dos tablas.

Veamos un ejemplo. Digamos que tenemos una base de datos que contiene los clientes y los pedidos que los clientes han hecho. La tabla de órdenes se refiere al ID del cliente desde la tabla de clientes para seguir el pedido realizado por cada cliente. Nos gustaría ver todos los pedidos realizados por nuestros clientes, junto con la nombres de clientes.

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



Ejercicio
--------

Escribe una consulta `SELECT` que seleccione el nombre del producto y el nombre del cliente que compró el producto, sólo si el nombre del cliente es John.

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

