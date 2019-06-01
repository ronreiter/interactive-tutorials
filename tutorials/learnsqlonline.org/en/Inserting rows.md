Tutorial
--------

Once a table has been created, you can populate it with data using the INSERT command.

Here is the syntax:

    INSERT INTO table_name (column1, column2)
    VALUES (value11, value12), (value21, value22), (value31, value32), ...

The first clause after the `INSERT INTO` statement specifies the columns which will be part of the insert statement. Each row to insert will specify
the set of columns defined by the first clause, and in the same order. Any other column which was not specified in the first clause will receive
the default value. If a `NOT NULL` column was defined in the table and the `INSERT INTO` statement missed the column, the `INSERT` command will fail
to run.

On an INSERT, if the INTEGER PRIMARY KEY column is not explicitly given a value, then it will be filled automatically with an unused integer, usually the
next number currently in use in the column. This is true regardless of whether or not the `AUTOINCREMENT` keyword is used.

If the columns clause that specifies the list of columns is omitted, then the assumption is that all columns will be provided in the `INSERT` statement:

    INSERT INTO table_name VALUES (value1, value2, value3, value4...);

If one of the values is missing then the INSERT statement will simply fail, unless the query can figure out which fields can be set to their default value.
In general, this method of inserting is never recommended because the database structure changes the meaning of the query, which can be very dangerous.

Note that it is much much more efficient to insert values in bulk using one query, and not several new `INSERT` statments for each row because of the
communication with the database. If you need to take performance into consideration, keep this in mind.

Here are some examples of an `INSERT` query in action:

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);
    INSERT INTO customers (first_name, last_name, age) VALUES ("John", "Doe", 23);
    SELECT * FROM customers;

Now let's see what happens if we omit the columns list:

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);
    INSERT INTO customers VALUES ("John", "Doe", 23);
    SELECT * FROM customers;

Let's remove the age - this will cause the query to fail:

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);
    INSERT INTO customers VALUES ("John", "Doe");
    SELECT * FROM customers;

Let's add more people:

    .exec
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    INSERT INTO customers (first_name, last_name, age)
    VALUES ("John", "Doe", 23), ("Eric", "Smith", 26);

    SELECT * FROM customers;


### Replacing and ignoring

SQLite supports three additional types of syntax to insert data: `INSERT OR REPLACE`, `REPLACE INTO` and `INSERT OR IGNORE`.

The `REPLACE` statement means that if you are inserting an already existing row (meaning, a primary key which already exists in the table) then the `INSERT`
statement will not fail and would actually delete the old row and insert the new one instead. `REPLACE` would fail if that row doesn't exist whereas
`INSERT OR REPLACE` will always work and will either insert a new row or replace an existing one.

`INSERT OR IGNORE` is similar to `INSERT OR REPLACE` but would actually completely ignore the `INSERT` command for the specific row that already exists
in the database. This is useful when inserting a bulk of data which some of it (or its primary keys) may already exist.


Exercise
--------
Insert "John Snow" into the database. John is 33 years old.

Tutorial Code
-------------
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    SELECT * FROM customers;

Expected Output
---------------
    John|Snow|33

Solution
--------
    CREATE TABLE customers (first_name NOT NULL, last_name NOT NULL, age);

    INSERT INTO customers (first_name, last_name, age)
    VALUES ("John", "Snow", 33);

    SELECT * FROM customers;
