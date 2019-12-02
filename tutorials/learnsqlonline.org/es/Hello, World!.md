Tutorial
--------

*Nota: Este tutorial utiliza el motor SQLite para operar con datos. Es similar a otros motores SQL como MySQL y PostgreSQL.*

SQL es un lenguaje de programación declarativo muy antiguo que define qué datos deben ser devueltos de una consulta, y cómo. Dentro de cada tutorial, empezaremos
con una base de datos vacía, y construir las tablas y datos necesarios para nuestro ejercicio.

Para el primer tutorial, discutiremos brevemente todas las instrucciones necesarias para iniciar nuestra primera consulta SQL.

### Creación de tablas

Para crear una tabla, se utiliza la sintaxis CREATE TABLE. Entraremos en los detalles en uno de los siguientes tutoriales sobre cómo usar la sentencia CREATE TABLE.

Por ahora, en nuestro ejemplo, usaremos una sentencia muy básica CREATE TABLE que crea una tabla llamada `helloworld` con una columna en la tabla llamada `frase`.
La columna `frase` contiene datos de tipo TEXT, lo que básicamente significa que puedes almacenar texto en ella, a diferencia de números, valores booleanos, etc.

Aquí está la declaración:

    .exec
    CREATE TABLE helloworld (phrase TEXT);
    .tables

Después de ejecutar la sentencia, se crea la tabla. Usamos la sentencia `.tables` sqlite para mostrar la lista de tablas.

### Insertar datos en la tabla

Después de crear una tabla, podemos empezar a insertar datos en la tabla que acabamos de crear utilizando la sentencia INSERT INTO. Vamos a entrar en los detalles de
cómo utilizar la sentencia INSERT INTO en uno de los siguientes tutoriales.

Los datos se insertan en las tablas fila por fila. Podemos insertar una fila usando la sentencia INSERT INTO, y luego actualizar esa fila si queremos usar la directiva UPDATE. Pero de nuevo, entraremos en la actualización de las filas en longitud más adelante.

Ahora usemos el estado INSERT INTO, agreguemos dos filas a la tabla, y luego contemos cuántas filas hemos agregado:

    .exec
    CREATE TABLE helloworld (phrase TEXT);
    INSERT INTO helloworld VALUES ("Hello, World!");
    INSERT INTO helloworld VALUES ("Goodbye, World!");
    SELECT COUNT(*) FROM helloworld;

### Selección de una tabla

La selección de datos de una o más tablas se realiza mediante la sentencia SELECT.

La selección de datos de una tabla es, con mucho, la habilidad más importante de aprender, porque es lo que nos permite crear perspectivas a partir de los datos de acuerdo con la pregunta que queremos responder. Por ejemplo - "cuántos estudiantes tienen un promedio superior a 80" es algo que podemos responder usando una declaración SELECT.

Aquí está la sintaxis básica de una instrucción SELECT:

    SELECT * FROM helloworld WHERE phrase = "Hello, World!";

Esta declaración obtendrá todas las columnas (de ahí el `*`) de la tabla `helloworld`, y filtrará los resultados sólo a las filas que la columna de la frase
es igual a ``Hola, mundo!``.

Ejercicio
--------

Seleccione todas las filas de la base de datos cuya columna de frases sea igual a "Hola, mundo!".

Tutorial Code
-------------

CREATE TABLE helloworld (phrase TEXT);
INSERT INTO helloworld VALUES ("Hello, World!");
INSERT INTO helloworld VALUES ("Goodbye, World!");

SELECT * FROM helloworld WHERE phrase = "Goodbye, World!";

Expected Output
---------------
Hello, World!

Solution
--------

CREATE TABLE helloworld (phrase TEXT);
INSERT INTO helloworld VALUES ("Hello, World!");
INSERT INTO helloworld VALUES ("Goodbye, World!");

SELECT * FROM helloworld WHERE phrase = "Hello, World!";
