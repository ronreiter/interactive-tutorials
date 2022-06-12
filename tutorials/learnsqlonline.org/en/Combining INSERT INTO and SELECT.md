Tutorial
--------

The INSERT INTO SELECT statement copies data from one table and inserts it into another table, the statement requires that the data types in source and target tables match.
Note that the records in the target table are unaffected.

The following is an example of this statement. Note that is specially useful if you want to do backups of tables.
    .exec
        CREATE TABLE contacts (
        first_name text NOT NULL,
        last_name text NOT NULL,
        email text NOT NULL
        );


        INSERT INTO contacts (first_name, last_name, email)
        VALUES('David','Brown','david@brown.net'),
            ('Johny','Doe','john@doe.net'),
            ('Lisa','Smith','lisa@Smith.net');
        
        CREATE TABLE contacts_bkp (
        first_name text NOT NULL,
        last_name text NOT NULL,
        email text NOT NULL
        );

        INSERT INTO contacts_bkp
        select * from contacts

Additionally, you can add a WHERE clause to the query to filter the target dataset

    .exec
        CREATE TABLE contacts (
        first_name text NOT NULL,
        last_name text NOT NULL,
        email text NOT NULL,
        gender text NOT NULL
        );


        INSERT INTO contacts (first_name, last_name, email, gender)
        VALUES('David','Brown','david@brown.net','M'),
            ('Johny','Doe','john@doe.net','M'),
            ('Lisa','Smith','lisa@Smith.net','F');
        
        CREATE TABLE contacts_bkp (
        first_name text NOT NULL,
        last_name text NOT NULL,
        email text NOT NULL
        gender text NOT NULL
        );

        INSERT INTO contacts_bkp
        select * from contacts
        Where gender like 'F'

    
Exercise
--------
Create a table and fill it just with the customer's table records, which names starts with the letter J

Tutorial Code
-------------
   CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);

    INSERT INTO Customer ( name, customerID, city,email) VALUES
        ("John", 1, "Huston", John@custom.com), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"), ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, Antananarivo, "Jeff@custom.com"),("Ben", 6, Antananarivo, "Ben@custom.com");

    -- write your code here
    
Expected Output
---------------
    "John", 1, "Huston", John@custom.com"
    "Jessica",3, "Kiev", "Jess@custom.com"
    "Jeff", 5, Antananarivo, "Jeff@custom.com"

Solution
--------
    CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);

    INSERT INTO Customer ( name, customerID, city,email) VALUES
        ("John", 1, "Huston", John@custom.com), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"), ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, Antananarivo, "Jeff@custom.com"),("Ben", 6, Antananarivo, "Ben@custom.com");

    -- write your code here

    CREATE TABLE Customer_J ( name TEXT,customerID INTERGER, city TEXT, email TEXT);

    INSERT INTO Customer_J
    Select * From Customer 
    Where name like 'J%';

    Select * from Customer_J;