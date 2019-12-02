Tutorial
--------

Ordenar el resultado de una consulta es muy útil cuando necesitamos ver las cosas desde la fila más importante hasta la sección la fila menos importante. Por ejemplo, para responder a la pregunta "¿quiénes son las personas que recibieron las mejores calificaciones?" se puede responder ordenando el resultado y leyendo el resultado fila por fila.

Tomemos una lista de calificaciones y generemos una lista de nombres ordenados alfabéticamente de la A a la Z:

    .exec
    CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);
    
    INSERT INTO grades (name, subject, grade) VALUES
        ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
        ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
        ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

    SELECT DISTINCT name 
    FROM grades
    ORDER by name;

Ahora, vamos a obtener una lista de calificaciones y a ordenar todas las calificaciones de la más alta a la más baja. Observe que la dirección de pedido
es ahora opuesta, lo que significa que el orden es descendente. Un orden descendente por se anota usando el comando `DEST`.

    .exec
    CREATE TABLE grades (name TEXT, subject TEXT, grade INTEGER);
    
    INSERT INTO grades (name, subject, grade) VALUES
        ("John", "CompSci", 97), ("Eric", "CompSci", 88), ("Carol", "Arts", 99),
        ("John", "History", 93), ("Andrew", "History", 82), ("Eric", "History", 87),  
        ("Steve", "Physics", 91), ("John", "Physics", 84), ("Barney", "Physics", 97);

    SELECT name, subject, grade
    FROM grades
    ORDER by grade DESC;

Ejercicio
--------

Obtenga una lista de materias ordenadas alfabéticamente de la lista de grados.

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

Arts
CompSci
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
SELECT DISTINCT subject
FROM grades
ORDER BY subject;
