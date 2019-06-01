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
        column1 <data type> PRIMARY KEY(column1, column2...)
        column2 <data type>,
        column3 <data type>
    );

Here is an example:

    CREATE TABLE students (
        id INTEGER PRIMARY KEY(id),
        full_name TEXT,
        age INTEGER
    )

Exercise
--------

Create a table named `students` with a first_name and a last_name.

Tutorial Code
-------------

Expected Output
---------------
CREATE TABLE students (
    first_name TEXT,
    last_name TEXT
)
.tables

Solution
--------
students
