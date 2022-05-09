Tutorial
--------

The Union operator is a useful way to combine the result-set of multiple SELECT statements.
In order to use the union operator, each SELECT statement must have
    >The same number of columns
    >Similar data types on each column
    >The columns in the same order

An example of the syntax of the UNION statement is as follows:

    .exec
    CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);
    CREATE TABLE Supplier ( name TEXT,supplierID INTERGER, city TEXT);

    INSERT INTO Customer ( name, customerID, city,email) VALUES
        ("John", 1, "Huston", NULL), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"),
        ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, NULL, "Jeff@custom.com"),("Ben", 6, NULL, "Ben@custom.com");

    INSERT INTO Supplier ( name ,supplierID , city ) VALUES
        ("Kevin", 1, "Madrid"), ("Nikolai", 2, "Kiev"), ("Joao",3, "Fortaleza"),
        ("Kim", 4, "Seul"), ("Emir", 5, "Dheli"),("Natasha", 6, "Kiev"),("Eric", 2, "Paris");
 
    SELECT name, customerID, city
    FROM Customer 
    UNION
    SELECT  name ,supplierID , city
    FROM Supplier

Notice that ONLY the columns in the select statement must mach with others other columns in select statements within the UNION Statement.
As you can see in the example shown above, the supplier's table lacks a fourth column, but the union still works due to it not
selecting a fourth field in any select

The UNION statement only select the distinct values by default. To allow duplicate values, use UNION ALL:

    .exec
    CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);
    CREATE TABLE Supplier ( name TEXT,supplierID INTERGER, city TEXT);

    INSERT INTO Customer ( name, customerID, city,email) VALUES
        ("John", 1, "Huston", NULL), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"),
        ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, NULL, "Jeff@custom.com"),("Ben", 6, NULL, "Ben@custom.com");

    INSERT INTO Supplier ( name ,supplierID , city ) VALUES
        ("Kevin", 1, "Madrid"), ("Nikolai", 2, "Kiev"), ("Joao",3, "Fortaleza"),
        ("Kim", 4, "Seul"), ("Emir", 5, "Dheli"),("Natasha", 6, "Kiev"),("Eric", 2, "Paris");
 
    SELECT name, customerID, city
    FROM Customer 
    UNION ALL
    SELECT  name ,supplierID , city
    FROM Supplier

The UNION statement is specially useful when each select is paired with a where clause, allowing multiple filters in the same query.


Exercise
--------
Retrieve  all the data of suppliers from Kiev and all the customers from Paris. 

Tutorial Code
-------------
CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);
CREATE TABLE Supplier ( name TEXT,supplierID INTERGER, city TEXT);

INSERT INTO Customer ( name, customerID, city,email) VALUES
    ("John", 1, "Huston", NULL), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"),
    ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, NULL, "Jeff@custom.com"),("Ben", 6, NULL, "Ben@custom.com");

INSERT INTO Supplier ( name ,supplierID , city ) VALUES
    ("Kevin", 1, "Madrid"), ("Nikolai", 2, "Kiev"), ("Joao",3, "Fortaleza"),
    ("Kim", 4, "Seul"), ("Emir", 5, "Dheli"),("Natasha", 6, "Kiev"),("Eric", 2, "Paris");

-- write your code here
    
Expected Output
---------------
"Eric", 2, "Paris"
"Mike", 4, "Paris"
"Nikolai", 2, "Kiev"
"Natasha", 6, "Kiev"

Solution
--------
CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);
CREATE TABLE Supplier ( name TEXT,supplierID INTERGER, city TEXT);

INSERT INTO Customer ( name, customerID, city,email) VALUES
    ("John", 1, "Huston", NULL), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"),
    ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, NULL, "Jeff@custom.com"),("Ben", 6, NULL, "Ben@custom.com");

INSERT INTO Supplier ( name ,supplierID , city ) VALUES
    ("Kevin", 1, "Madrid"), ("Nikolai", 2, "Kiev"), ("Joao",3, "Fortaleza"),
    ("Kim", 4, "Seul"), ("Emir", 5, "Dheli"),("Natasha", 6, "Kiev"),("Eric", 2, "Paris");

 -- write your code here
SELECT name, customerID, city
FROM Customer 
WHERE city in ("Paris")
UNION ALL
SELECT  name ,supplierID , city
FROM Supplier
WHERE city in ("Kiev")
;