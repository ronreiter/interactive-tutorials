Tutorial
--------

The CASE operator is similar to the IF statement of multiple programming languages
The operator goes through a number of conditions and returns a given value when the FIRST condition is met. 
This means that once a condition is true, it will stop reading and return the result. If no conditions are true, it returns the value in the ELSE clause
If there is no ELSE clause, and no conditions are true, it will return NULL.

A scenario where this operator shines the most is when identifying null values.

An example of the syntax of the UNION statement is as follows:

    .exec
    CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);

    INSERT INTO Customer ( name, customerID, city,email) VALUES
    ("John", 1, "Huston", NULL), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"),
    ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, NULL, "Jeff@custom.com"),("Ben", 6, NULL, "Ben@custom.com");

    CREATE TABLE CustomerCountry as 
    SELECT 
        name,
        city, 
        CASE city
            WHEN "Huston" THEN "USA"
            WHEN "Paris" THEN "France"
            WHEN "Kiev" THEN "Ukraine"
            ELSE "N/a"
        END as Country
    FROM Customer;

    SELECT *
    FROM CustomerCountry;



Exercise
--------
Create a new table containing all the data from the table Supplier, adding a new field that returns if there is low stock (less than 500).
Then show the data of the new table

Tutorial Code
-------------
	CREATE TABLE Supplier ( name TEXT,customerID INTERGER, city TEXT, email TEXT, stock INTERGER);

	INSERT INTO Supplier ( name, customerID, city,email) VALUES
		("John", 1, "Huston", NULL,1000), ("Eric", 2, "Paris", "Eric@Supplier.com",200), 
		("Mike", 3, "Paris", "Mike@Supplier.com", 20000),("Ben", 4, "Tokio", "Ben@Supplier.com",500);


-- write your code here
    
Expected Output
---------------
    "John", 1, "Huston", 1000, "ok"
    "Mike", 2, "Paris", 200, "low stock"
    "Eric", 3, "Kiev", 20000, "ok"
    "Ben", 4, "Tokio", 500, "ok"

Solution
--------
	CREATE TABLE Supplier ( name TEXT,customerID INTERGER, city TEXT, email TEXT, stock INTERGER);

	INSERT INTO Supplier ( name, customerID, city,email) VALUES
		("John", 1, "Huston", NULL,1000), ("Eric", 2, "Paris", "Eric@Supplier.com",200), 
		("Mike", 3, "Paris", "Mike@Supplier.com", 20000),("Ben", 4, "Tokio", "Ben@Supplier.com",500);

 -- write your code here

	CREATE TABLE StockWarning as 
	SELECT 
		name,
		city, 
		stock,
		CASE 
			WHEN stock < 500 THEN "low stock"
			ELSE "ok"
		END as StockWarnText
	FROM Supplier;

    SELECT *
    FROM StockWarning;
