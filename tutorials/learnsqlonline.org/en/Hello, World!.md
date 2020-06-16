Tutorial
--------

*Note: This tutorial uses the SQLite engine to operate on data. It is similar to other SQL engines such as MySQL and PostgreSQL.*

SQL is a very old declarative programming language which defines what data should be returned from a query, and how. Within each tutorial, we will start
with an empty database, and construct the necessary tables and data for our exercise.

For the first tutorial, we will briefly discuss all the required instructions to start our first SQL query.

### Creating a table

To create a table, we use the CREATE TABLE syntax. We'll get into the details in one of the next tutorials on how to use the CREATE TABLE statement.

For now, in our example, we will use a very basic CREATE TABLE statement that creates a table called `helloworld` with one column in the table called `phrase`.
The `phrase` column holds data of type TEXT, which basically means you can store text in it, as opposed to numbers, boolean values, etc.

Here is the statement:

    .exec
    CREATE TABLE helloworld (phrase TEXT);
    .tables

After we execute the statement, the table is created. We use the `.tables` sqlite statement to show the list of tables.

### Inserting data into a table

After we create a table, we can start inserting data into the table we've just created using the INSERT INTO statement. We'll get into the details of
how to use the INSERT INTO statement in one of the next tutorials as well.

Data is inserted into tables on a row by row basis. We can insert a row using the INSERT INTO statement, and then update that row if we want using the
UPDATE statement. But again, we'll get into updating rows in length later on.

Now let's use the INSERT INTO statment, add two rows to the table, and then count how many row's we've added:

    .exec
    CREATE TABLE helloworld (phrase TEXT);
    INSERT INTO helloworld VALUES ("Hello, World!");
    INSERT INTO helloworld VALUES ("Goodbye, World!");
    SELECT COUNT(*) FROM helloworld;

### Selecting from a table

Selecting data from one or more tables is done using the SELECT statement.

Selecting data from a table is by far the most important skill to learn, because it is what enables us to create insights from data according to the
question we want to answer. For example - "how many students have an average higher than 80" is something we can answer using a SELECT statement.

Here is the basic syntax of a SELECT statement:

    SELECT * FROM helloworld WHERE phrase = "Hello, World!";

This statement will fetch all columns (hence the `*`) from the table `helloworld`, and filter the results only to the rows which the phrase column
is equal to `Hello, World!`.

Exercise
--------

Select all rows in the database which its phrase column is equal to "Hello, World!"

Tutorial Code
-------------

CREATE TABLE helloworld (phrase TEXT);
INSERT INTO helloworld VALUES ("Hello, World!");
INSERT INTO helloworld VALUES ("Goodbye, World!");

SELECT * FROM helloworld WHERE phrase = "Goodbye, World!";

Expected Output
---------------
Hello, World!

Solution
--------

CREATE TABLE helloworld (phrase TEXT);
INSERT INTO helloworld VALUES ("Hello, World!");
INSERT INTO helloworld VALUES ("Goodbye, World!");

SELECT * FROM helloworld WHERE phrase = "Hello, World!";
