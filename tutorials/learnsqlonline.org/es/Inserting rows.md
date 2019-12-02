Tutorial
--------

Una vez que se ha creado una tabla, puede rellenarla con datos utilizando el comando INSERTAR.

Aquí está la sintaxis:

    INSERT INTO table_name (column1, column2)
    VALUES (value11, value12), (value21, value22), (value31, value32), ...

La primera cláusula después de la sentencia `INSERT INTO` especifica las columnas que formarán parte de la sentencia insertada. Cada fila a insertar especificará el conjunto de columnas definido por la primera cláusula, y en el mismo orden. Cualquier otra columna que no haya sido especificada en la primera cláusula recibirá el valor por defecto. Si una columna `NOT NULL` fue definida en la tabla y la sentencia `INSERT INTO` falló en la columna, el comando `INSERT` fallará
para correr.

En un INSERT, si a la columna `INTEGER PRIMARY KEY` no se le da explícitamente un valor, entonces se rellenará automáticamente con un número entero no utilizado, normalmente la opción siguiente número actualmente en uso en la columna. Esto es cierto independientemente de si se utiliza o no la palabra clave `AUTOINCREMENT`.

Si se omite la cláusula de columnas que especifica la lista de columnas, entonces se supone que todas las columnas se proporcionarán en la sentencia `INSERT`:

    INSERT INTO table_name VALUES (value1, value2, value3, value4...);

Si falta uno de los valores, la sentencia INSERT simplemente fallará, a menos que la consulta pueda averiguar qué campos pueden ser configurados con su valor por defecto.
En general, este método de inserción nunca se recomienda porque la estructura de la base de datos cambia el significado de la consulta, lo que puede ser muy peligroso.

Nótese que es mucho más eficiente insertar valores en masa usando una sola consulta, y no varios nuevos estados `INSERT` para cada fila debido a que los valores de comunicación con la base de datos. Si necesita tener en cuenta el rendimiento, tenga esto en cuenta.

Aquí hay algunos ejemplos de una consulta `INSERT` en acción:

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);
    INSERT INTO customers (first_name, last_name, age) VALUES ("John", "Doe", 23);
    SELECT * FROM customers;

Ahora veamos qué pasa si omitimos las columnas:

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);
    INSERT INTO customers VALUES ("John", "Doe", 23);
    SELECT * FROM customers;

Eliminemos la edad - esto causará que la consulta falle:

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);
    INSERT INTO customers VALUES ("John", "Doe");
    SELECT * FROM customers;

Añadamos más gente:

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    INSERT INTO customers (first_name, last_name, age)
    VALUES ("John", "Doe", 23), ("Eric", "Smith", 26);

    SELECT * FROM customers;


### Reemplazar e ignorar

SQLite soporta tres tipos adicionales de sintaxis para insertar datos:`INSERT OR REPLACE`, `REPLACE INTO` e `INSERT OR IGNORE`.

La sentencia `REPLACE` significa que si está insertando una fila ya existente (es decir, una clave primaria que ya existe en la tabla), entonces la sentencia `INSERT` no fallará y borrará la fila antigua e insertará la nueva en su lugar. REPLACE fracasaría si esa fila no existiera mientras que `INSERT OR REPLACE` siempre funcionará y podrá insertar una nueva fila o reemplazar una existente.

`INSERT OR IGNORE` es similar a `INSERT OR REPLACE` pero en realidad ignoraría completamente el comando `INSERT` para la fila específica que ya existe. en la base de datos. Esto es útil cuando se inserta una masa de datos que algunos de ellos (o sus claves primarias) ya existen.


Ejercicio
--------
Insertar "John Snow" en la base de datos. John tiene 33 años.

Tutorial Code
-------------
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    SELECT * FROM customers;

Expected Output
---------------
    John|Snow|33

Solution
--------
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    INSERT INTO customers (first_name, last_name, age)
    VALUES ("John", "Snow", 33);

    SELECT * FROM customers;
