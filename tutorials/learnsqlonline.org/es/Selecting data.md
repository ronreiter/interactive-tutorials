Tutorial
--------

La selección de datos es la base de SQL (también conocido como Lenguaje de consulta estructurado) y se puede utilizar para realizar consultas en cualquier lugar, desde pequeñas cantidades hasta grandes cantidades de datos.

Aquí está la sintaxis de la instrucción SELECT:

    SELECT columna1, columna2, columna3....
    FROM tabla1, tabla2, tabla3....
    WHERE condición1 Y condición2....

La primera línea justo después de la secuencia SELECT especifica las columnas que nos gustaría seleccionar en la consulta. Podemos usar el asterisco (`*`) si queremos seleccionar todos los campos de una tabla. Debe evitar seleccionar todos los campos si la consulta devuelve muchos datos, ya que cuantos más datos obtenga, más tiempo le llevará la consulta se realizará en términos de tiempo y recursos de red.

Después de la cláusula FROM, deberá especificar la tabla (o tablas) que desea obtener los datos. Obtener más de una tabla es otra sintaxis del término "unión" de tablas en SQL. No vamos a entrar en lo que son las tablas de "unir" en este personaje todavía, así que por ahora vamos a asumir que sólo deberías
poner una tabla en la consulta SELECT.

La última parte (y opcional) de la consulta es la cláusula WHERE que dicta bajo qué condiciones se debe devolver la fila de la consulta. O en otros le permite filtrar el resultado en función de parámetros específicos. La cláusula WHERE se puede utilizar para analizar los datos observando sólo una variable específica de los datos de la tabla, para obtener información más detallada.

WHERE reciben expresiones booleanas que pueden utilizar operadores de comparación de texto, operadores de comparación numérica, la verificación IS NULL y mucho más.

Ejercicio
--------
Escriba una consulta SELECT que seleccione a todos los estudiantes de la tabla de `students` que recibieron una calificación de más de 80. Devuelva sólo el nombre del estudiante.


Tutorial Code
-------------

CREATE TABLE students (name text, grade int);
INSERT INTO students VALUES ("Eric", 83);
INSERT INTO students VALUES ("John", 78);
INSERT INTO students VALUES ("Andrew", 91);
INSERT INTO students VALUES ("Jessica", 95);
INSERT INTO students VALUES ("Chris", 79);


Expected Output
---------------
Eric
Andrew
Jessica

Solution
--------
CREATE TABLE students (name text, grade int);
INSERT INTO students VALUES ("Eric", 83);
INSERT INTO students VALUES ("John", 78);
INSERT INTO students VALUES ("Andrew", 91);
INSERT INTO students VALUES ("Jessica", 95);
INSERT INTO students VALUES ("Chris", 79);

SELECT name FROM students WHERE grade > 80;
