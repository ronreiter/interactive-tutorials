Tutorial
--------

La eliminación de líneas es muy similar a la actualización de líneas, sólo que el tipo de actualización realizada en la línea es una eliminación.

Aquí está la sintaxis:

    DELETE FROM table_name WHERE column1 = value1 AND column2 = value2 ...

Se eliminarán todas las filas que cumplan los criterios de la consulta DELETE.

Ejercicio
--------

Añade una declaración `DELETE` que elimine a Eric de la tabla de `clientes`.

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
