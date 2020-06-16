Tutorial
--------

Tables are the foundations of all databases. A table can contain rows of data - each with a predefined set of columns that is defined when creating the table.

When creating a table, we need to specify the columns that the table will support, along with the type of data each column can hold.

SQLite has several data types:

* `INTEGER` - a whole number.
* `REAL` - a floating point number.
* `TEXT` - readable text encoded with the encoding of the database (usually UTF-8).
* `BLOB` - A "Binary Large Object" which can contain a series of bytes. Good for storing images and such.

Other databases such as MySQL and PostgreSQL have many more data types, but SQLite is a very simple database which is not focused on performance or scale,
which is why it doesn't have many different data types.

To create a table, use the following syntax:

    CREATE TABLE database_name.table_name (
        column1 <data type> PRIMARY KEY,
        column2 <data type>,
        column3 <data type>
    );

A primary key of a table is a special type of unique index which defines the primary key of the table. There can only one row for each primary key, and
it is very efficient to select on the primary because it is also an index. Unlike a unique index, a primary key cannot be NULL. Primary keys can also
be used for things like foreign keys, constraints, sharing and more, and it is always important to define one, if possible.

Here is an example:

    CREATE TABLE students (
        id INTEGER PRIMARY KEY,
        full_name TEXT,
        age INTEGER
    )

The `id` of the student is the primary key, since we cannot have more than two people with the same ID number in our table. full_name needs to be a textual
record whereas the age can be a whole number.

Exercise
--------

Create a table named `students` with a first_name, a last_name (both text columns) and an age (which should be defined as an integer).

Tutorial Code
-------------
-- enter code here

INSERT INTO students (first_name, last_name, age) VALUES ("John", "Doe", 23);
SELECT * FROM students;

Expected Output
---------------
John|Doe|23

Solution
--------
-- enter code here
CREATE TABLE students (
    first_name TEXT,
    last_name TEXT,
    age INTEGER
);

INSERT INTO students (first_name, last_name, age) VALUES ("John", "Doe", 23);
SELECT * FROM students;
