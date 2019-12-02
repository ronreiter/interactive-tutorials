Tutorial
--------

Las tablas son la base de todas las bases de datos. Una tabla puede contener filas de datos, cada una con un conjunto predefinido de columnas que se define al crear la tabla.

Al crear una tabla, necesitamos especificar las columnas que la tabla soportará, junto con el tipo de datos que cada columna puede contener.

SQLite tiene varios tipos de datos:

* `INTEGER` - un número entero.
* `REAL` - un número en coma flotante.
* `TEXT` - texto legible codificado con la codificación de la base de datos (usualmente UTF-8).
* `BLOB` - Un "objeto grande binario" que puede contener una serie de bytes. Bueno para almacenar imágenes y cosas así.

Otras bases de datos como MySQL y PostgreSQL tienen muchos más tipos de datos, pero SQLite es una base de datos muy simple que no se centra en el rendimiento o la escala, por lo que no tiene muchos tipos de datos diferentes.

Para crear una tabla, utilice la siguiente sintaxis:

    CREATE TABLE database_name.table_name (
        column1 <data type> PRIMARY KEY,
        column2 <data type>,
        column3 <data type>
    );

Una clave primaria de una tabla es un tipo especial de índice único que define la clave primaria de la tabla. Sólo puede haber una fila para cada clave primaria, y es muy eficiente seleccionar en el primario porque también es un índice. A diferencia de un índice único, una clave primaria no puede ser NULL. Las claves primarias también pueden servir para cosas como claves externas, restricciones, compartir y más, y siempre es importante definir una, si es posible.

Aquí hay un ejemplo:

    CREATE TABLE students (
        id INTEGER PRIMARY KEY,
        full_name TEXT,
        age INTEGER
    )

El `id` del alumno es la clave primaria, ya que no podemos tener más de dos personas con el mismo número de identificación en nuestra tabla. full_name tiene que ser un texto
mientras que la edad puede ser un número entero.


Ejercicio
--------

Crea una tabla llamada `students` que contenga first_name, a last_name (ambas columnas de texto) y age (que debería definirse como un número entero).

Tutorial Code
-------------
-- enter code here

INSERT INTO students (first_name, last_name, age) VALUES ("John", "Doe", 23);
SELECT * FROM students;

Expected Output
---------------
John|Doe|23

Solution
--------
-- enter code here
CREATE TABLE students (
    first_name TEXT,
    last_name TEXT,
    age INTEGER
);

INSERT INTO students (first_name, last_name, age) VALUES ("John", "Doe", 23);
SELECT * FROM students;
