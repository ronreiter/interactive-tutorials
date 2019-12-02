Tutorial
--------

La cláusula HAVING es una parte esencial de un grupo por consulta, que es casi idéntica a la cláusula WHERE, 
pero funciona en campos agregados después de la fase de agregación, mientras que la cláusula WHERE filtra el conjunto de datos anterior.

Para dar un ejemplo, una sentencia WHERE en un GROUP BY sólo agrupará los campos que coincidan con los criterios

    .exec
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);
 
    SELECT class, AVG(grade) 
    FROM grades 
    WHERE grade > 85 
    GROUP BY class; 
    
Una sentencia HAVING filtrará el conjunto de datos agrupados resultante utilizando el resultado de la agregación: 

    .exec
    CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);
    
    INSERT INTO grades (name, class, grade) VALUES
        ("John", 1, 97), ("Eric", 1, 88), ("Jessica", 1, 98), ("Mike", 1, 82), ("Jeff", 1, NULL),
        ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79);
 
    SELECT class, AVG(grade) 
    FROM grades 
    GROUP BY class
    HAVING AVG(grade) > 90;

Observe que en esta consulta específica, la consulta WHERE-filtrada no cambió el número de clases agregadas 
(ya que el filtro mantuvo al menos a un estudiante de cada clase), pero la consulta HAVING-filtrada eliminó una de las clases que no superaron la puntuación media.

Por supuesto, puede combinar WHERE y HAVING para obtener el resultado deseado.   

Ejercicio
--------
Encuentre la puntuación máxima de todas las clases que tengan al menos 3 estudiantes. 

Tutorial Code
-------------
CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);

INSERT INTO grades (name, class, grade) VALUES
    ("John", 1, 97), ("Eric", 1, 88),
    ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79),
    ("Steve", 3, 91), ("Bill", 3, 84), ("Barney", 3, 97);

-- write your code here
    
Expected Output
---------------
2|99
3|97

Solution
--------
CREATE TABLE grades (name TEXT, class INTEGER, grade INTEGER);

INSERT INTO grades (name, class, grade) VALUES
    ("John", 1, 97), ("Eric", 1, 88),
    ("Ben", 2, 93), ("Andrew", 2, 82), ("Jason", 2, 87), ("Carol", 2, 99), ("Fred", 2, 79),
    ("Steve", 3, 91), ("Bill", 3, 84), ("Barney", 3, 97);

 -- write your code here
SELECT class, MAX(grade) 
FROM grades 
GROUP BY class
HAVING COUNT(name) >= 3;