Tutorial
--------

La actualización de las filas se realiza mediante la sentencia `UPDATE`. Las actualizaciones se realizan mediante dos partes: la definición de las líneas que deben actualizarse y los valores de las columnas. Para reemplazar con.

Muchas veces una sentencia `UPDATE` tendrá como objetivo reemplazar una fila, en la que la consulta utilizará la clave primaria de la tabla para seleccionar la fila a actualizar.

Veamos un ejemplo de cómo funciona una declaración `UPDATE`.

    UPDATE table_name
    SET column1 = value1, column2 = value2, ...
    WHERE key = value

Veamos un ejemplo de cómo funciona una declaración `UPDATE`.

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    INSERT INTO customers (first_name, last_name, age)
    VALUES ("John", "Doe", 23), ("Eric", "Smith", 26);

    SELECT * FROM customers;

    UPDATE customers SET last_name = "Heart" WHERE first_name = "John";

    SELECT * FROM customers;

Ejercicio
--------

Añade una declaración de actualización que actualice la edad de Eric a 27 años entre las dos declaraciones `SELECT`.

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
