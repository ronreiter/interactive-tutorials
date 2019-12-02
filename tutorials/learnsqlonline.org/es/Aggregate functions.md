Tutorial
--------

SQL define funciones de agregación que pueden resumir una columna entera utilizando una operación agregativa. Las funciones de agregación básicas son `SUM` y `COUNT`, que pueden sumar el valor total de una columna o contar el número de entradas no nulas que existen respectivamente. Otra función extremadamente útil es la función `AVG` que simplemente toma la `SUMA` y la divide con el `COUNT`.

He aquí un ejemplo de las funciones agregadas en acción en una lista de estudiantes y sus calificaciones:

    .exec
    CREATE TABLE grades (name TEXT, grade INTEGER);
    
    INSERT INTO grades (name, grade) VALUES
        ("John", 97), ("Eric", 88), ("Jessica", 98), ("Mike", 82), ("Jeff", NULL);
           
    SELECT "total students", COUNT(name) FROM grades;
    SELECT "total grades", COUNT(grade) FROM grades;
    SELECT "sum of grades", SUM(grade) FROM grades;
    SELECT "grade average", AVG(grade) FROM grades;
    SELECT "lowest grade", MIN(grade) FROM grades;
    SELECT "highest grade", MAX(grade) FROM grades;
    SELECT "names", GROUP_CONCAT(name) FROM grades;
    
La suma de números se puede hacer usando funciones matemáticas como `SUM`, `COUNT`, `AVG`, `MIN`, `MAX`, etc. 

La agregación de cadenas se realiza normalmente utilizando una función como `GROUP_CONCAT` que simplemente concatena los campos.
No es trivial agregar cadenas, y por lo general tampoco es tan útil para propósitos analíticos.
    
### Funciones de agregación por instrucciones

Al agrupar filas, las funciones de agregación deben utilizarse en todos los campos que no forman parte de los campos que se están agrupando.
Esto se debe a que referirse a una columna en un grupo por resultado es ambiguo. Una referencia a una columna en un grupo debe hacerse usando una función de agregación.

Un ejemplo lógico para esto puede ser dado usando un ejemplo. Digamos que tenemos la siguiente base de datos:

    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);
 
Una vez que agrupamos los resultados por el número de clase, creamos dos tipos de campos en el grupo por resultado:

* Agrupar por campos: `class`
* Agregar campos: `name`, `grade`

El grupo por campos puede seleccionarse simplemente, mientras que los campos agregados (que no forman parte del grupo por cláusula) deben integrarse mediante una función de agregación.

Calculemos el promedio de calificaciones y la lista de nombres para cada clase usando una declaración GROUP BY:

    .exec
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);
 
    .mode column
    .headers on
    SELECT class, GROUP_CONCAT(name), AVG(grade)
    FROM grades
    GROUP BY class;

Ejercicio
--------
Encuentre la puntuación más alta para cada clase.

Tutorial Code
-------------
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);

    -- enter code here
    
Expected Output
---------------
1|98
2|99

Solution
--------
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);

    -- enter code here
    SELECT class, MAX(grade)
    FROM grades
    GROUP BY class;