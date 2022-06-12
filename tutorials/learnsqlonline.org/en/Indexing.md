### What is an index?

In relational databases, a table is a list of rows. In the same time, each row has the same column structure that consists of cells. Each row also has a consecutive row-id sequence number used to identify the row. Therefore, you can consider a table as a list of pairs: (rowid, row).

Unlike a table, an index has an opposite relationship: (row, rowid). An index is an additional data structure that helps improve the performance of a query.

SQLite uses B-tree for organizing indexes. Note that B stands for balanced, B-tree is a balanced tree, not a binary tree.

The B-tree keeps the amount of data at both sides of the tree balanced so that the number of levels that must be traversed to locate a row is always in the same approximate number. In addition, querying using equality (=) and ranges (>, >=, <,<=) on the B-tree indexes are very efficient.

### SQLite CREATE INDEX statement
To create an index, you use the CREATE INDEX statement with the following syntax:

    CREATE [UNIQUE] INDEX index_name 
    ON table_name(column_list);

To create an index, you specify three important information:

- The name of the index after the CREATE INDEX keywords.
- The name of the table to the index belongs.
- A list of columns of the index.

In case you want to make sure that values in one or more columns are unique like email and phone, you use the UNIQUE option in the CREATE INDEX statement. The CREATE UNIQUE INDEX creates a new unique index.

Suppose, you want to enforce that the email is unique, you create a unique index as follows:

    .exec
        CREATE TABLE contacts (
        first_name text NOT NULL,
        last_name text NOT NULL,
        email text NOT NULL
        );

        CREATE UNIQUE INDEX idx_contacts_email 
        ON contacts (email);

        INSERT INTO contacts (first_name, last_name, email)
        VALUES('David','Brown','david@brown.net'),
            ('Johny','Doe','john@doe.net'),
            ('Lisa','Smith','lisa@Smith.net');

If you want to insert a duplicated row, an error message will appear, indicating that the unique index has been violated. Because when you inserted the second row, SQLite checked and made sure that the email is unique across of rows in email of the contacts table.

If you query data from the contacts table based on a specific email, SQLite will use the index to locate the data

    .exec
        CREATE TABLE contacts (
        first_name text NOT NULL,
        last_name text NOT NULL,
        email text NOT NULL
        );

        CREATE UNIQUE INDEX idx_contacts_email 
        ON contacts (email);

        INSERT INTO contacts (first_name, last_name, email)
        VALUES('David','Brown','david@brown.net'),
            ('Johny','Doe','john@doe.net'),
            ('Lisa','Smith','lisa@Smith.net');

        SELECT
            first_name,
            last_name,
            email
        FROM
            contacts
        WHERE
            email = 'lisa@Smith.net';

To check if SQLite uses the index or not, you use the EXPLAIN QUERY PLAN

    .exec
        CREATE TABLE contacts (
        first_name text NOT NULL,
        last_name text NOT NULL,
        email text NOT NULL
        );

        CREATE UNIQUE INDEX idx_contacts_email 
        ON contacts (email);

        INSERT INTO contacts (first_name, last_name, email)
        VALUES('David','Brown','david@brown.net'),
            ('Johny','Doe','john@doe.net'),
            ('Lisa','Smith','lisa@Smith.net');
        
        EXPLAIN QUERY PLAN 
        SELECT
            first_name,
            last_name,
            email
        FROM
            contacts
        WHERE
            email = 'lisa@Smith.net';

### SQLite multicolumn index example
If you create an index that consists of one column, SQLite uses that column as the sort key. In case you create an index that has multiple columns, SQLite uses the additional columns as the second, third, … as the sort keys.

SQLite sorts the data on the multicolumn index by the first column specified in the CREATE INDEX statement. Then, it sorts the duplicate values by the second column, and so on.

Therefore, the column order is very important when you create a multicolumn index.

To utilize a multicolumn index, the query must contain the condition that has the same column order as defined in the index.

### SQLite DROP INDEX statement
To remove an index from a database, you use the DROP INDEX statement as follows:

    DROP INDEX [IF EXISTS] index_name;

In this syntax, you specify the name of the index that you want to drop after the DROP INDEX keywords. The IF EXISTS option removes an index only if it exists.

Exercise
--------
Create an index for the following table, index by customerID. Then select all.

Tutorial Code
-------------
   CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);

    INSERT INTO Customer ( name, customerID, city,email) VALUES
        ("John", 1, "Huston", John@custom.com), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"), ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, Antananarivo, "Jeff@custom.com"),("Ben", 6, Antananarivo, "Ben@custom.com");

    -- write your code here
    
Expected Output
---------------
    "John", 1, "Huston", John@custom.com"
    "Eric", 2, "Paris", "Eric@custom.com"
    "Jessica",3, "Kiev", "Jess@custom.com"
    "Mike", 4, "Paris", "Mike@custom.com"
    "Jeff", 5, Antananarivo, "Jeff@custom.com"
    "Ben", 6, Antananarivo, "Ben@custom.com"

Solution
--------
    CREATE TABLE Customer ( name TEXT,customerID INTERGER, city TEXT, email TEXT);

    INSERT INTO Customer ( name, customerID, city,email) VALUES
        ("John", 1, "Huston", John@custom.com), ("Eric", 2, "Paris", "Eric@custom.com"), ("Jessica",3, "Kiev", "Jess@custom.com"), ("Mike", 4, "Paris", "Mike@custom.com"), ("Jeff", 5, Antananarivo, "Jeff@custom.com"),("Ben", 6, Antananarivo, "Ben@custom.com");

    -- write your code here

    CREATE UNIQUE INDEX idx_Cus_id
        ON Customer (customerID);

    Select * from Customer