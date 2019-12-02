Tutorial
--------

Las consultas distintas nos permiten contar el número de valores únicos en una tabla o en un conjunto agrupado de filas.

Para ello, podemos utilizar la directiva `DISTINCT`. Una consulta `DISTINCT` devolverá un conjunto de entradas de-duplicadas, si todas las columnas de dos o más filas coinciden exactamente.

Un ejemplo de donde esto puede ser útil es cuando queremos obtener la lista de personas

Veamos algunos ejemplos:
    
    .exec
    CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);
    
    INSERT INTO grades (name, subject, grade) VALUES
        ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
        ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
        ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

    SELECT "all names", COUNT(name) FROM grades;
    SELECT "unique names", COUNT(DISTINCT name) FROM grades;
    SELECT DISTINCT name FROM grades;

Una consulta `DISTINCT` es muy similar a una cláusula `GROUP BY` con todas las columnas seleccionadas dentro de la cláusula. Este hace que todas las filas idénticas se agrupen. La diferencia entre una consulta `GROUP BY` y una consulta.
La consulta `DISTINCT` es que no se puede contar el número de ocurrencias idénticas que se han identificado para cada fila con una consulta `DISTINCT`. Sin embargo, es más eficiente que una consulta `GROUP BY` la mayoría de las veces.   

Ejercicio
--------

Obtenga una lista de todos los diferentes temas de la tabla de "grades".

Tutorial Code
-------------
CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);

INSERT INTO grades (name, subject, grade) VALUES
    ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
    ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
    ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

-- enter code here
    
Expected Output
---------------
CompSci
Arts
History
Physics

Solution
--------
CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);

INSERT INTO grades (name, subject, grade) VALUES
    ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
    ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
    ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

-- enter code here
SELECT DISTINCT subject FROM grades;