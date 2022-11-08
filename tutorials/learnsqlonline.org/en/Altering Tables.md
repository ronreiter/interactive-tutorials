Tutorial
--------

Unlike SQL-standard and other database systems, SQLite supports a very limited functionality of the ALTER TABLE statement.

By using an SQLite ALTER TABLE statement, you can perform three actions:

    Rename a table.
    Add a new column to a table.
    Rename a column

To rename a table, you use the following ALTER TABLE RENAME TO statement:

    .exec
    CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);

    INSERT INTO Customer ( name, customerID, city,email) VALUES
    ("John", 1, "Huston", NULL), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"),
    ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, NULL, "Jeff@custom.com"),("Ben", 6, NULL, "Ben@custom.com");

    ALTER TABLE Customer
    RENAME TO Customer_Alter;

    SELECT *
    FROM Customer_Alter;

Something important to consider is if a table is referenced by views or statements in triggers, you must manually change the definition of views and triggers


You can use the SQLite ALTER TABLE statement to add a new column to an existing table. In this scenario, SQLite appends the new column at the end of the existing column list

There are some restrictions on the new column:

    The new column cannot have a UNIQUE or PRIMARY KEY constraint.

    If the new column has a NOT NULL constraint, you must specify a default value for the column other than a NULL value.

    The new column cannot have a default of CURRENT_TIMESTAMP, CURRENT_DATE, and CURRENT_TIME, or an expression.

    If the new column is a foreign key and the foreign key constraint check is enabled, the new column must accept a default value NULL.


    .exec
    CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);

    ALTER TABLE Customer 
    ADD COLUMN PhoneNum text

    INSERT INTO Customer ( name, customerID, city,email) VALUES
    ("John", 1, "Huston", NULL,1111), ("Eric", 2, "Paris", "Eric@custom.com",2222), ("Jessica",3, "Kiev", "Jess@custom.com",3333),
    ("Mike", 4, "Paris", "Mike@custom.com",4444), ("Jeff", 5, NULL, "Jeff@custom.com",5555),("Ben", 6, NULL, "Ben@custom.com",6666);

    SELECT *
    FROM Customer;


SQLite added the support for renaming a column using ALTER TABLE RENAME COLUMN statement in version 3.20.0. Syntax is as follows:

    .exec
    CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);

    INSERT INTO Customer ( name, customerID, city,email) VALUES
    ("John", 1, "Huston", NULL), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"),
    ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, NULL, "Jeff@custom.com"),("Ben", 6, NULL, "Ben@custom.com");
    
    ALTER TABLE Customer
    RENAME COLUMN city TO location;

    SELECT *
    FROM Customer;

Exercise
--------
Rename the suppliers table and show its contents

Tutorial Code
-------------
	CREATE TABLE Supplier ( name TEXT,customerID INTERGER, city TEXT, stock INTERGER);

	INSERT INTO Supplier ( name, customerID, city, stock) VALUES
		("John", 1, "Huston"1000), ("Eric", 2, "Paris",200), 
		("Mike", 3, "Paris", 20000),("Ben", 4, "Tokio",500);


    -- write your code here
    
Expected Output
---------------
    "John", 1, "Huston", 1000
    "Mike", 2, "Paris", 200
    "Eric", 3, "Kiev", 20000
    "Ben", 4, "Tokio", 500

Solution
--------
	CREATE TABLE Supplier ( name TEXT,customerID INTERGER, city TEXT, stock INTERGER);

	INSERT INTO Supplier ( name, customerID, city, stock) VALUES
		("John", 1, "Huston"1000), ("Eric", 2, "Paris",200), 
		("Mike", 3, "Paris", 20000),("Ben", 4, "Tokio",500);

    -- write your code here

    ALTER TABLE Customer
    RENAME TO Customer_Alter;

    SELECT *
    FROM Customer_Alter;
