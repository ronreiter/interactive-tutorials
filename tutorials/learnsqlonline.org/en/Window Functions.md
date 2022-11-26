Tutorial
--------

### What are window functions?

A window function is an SQL function where the input values are taken from a "window" of one or more rows in the results set of a SELECT statement.

Window functions are distinguished from other SQL functions by the presence of an OVER clause. If a function has an OVER clause, then it is a window function. If it lacks an OVER clause, then it is an ordinary aggregate or scalar function. Window functions might also have a FILTER clause in between the function and the OVER clause.

Unlike ordinary functions, window functions cannot use the DISTINCT keyword. Also, Window functions may only appear in the result set and in the ORDER BY clause of a SELECT statement

Window functions come in two varieties: **aggregate window functions** and **built-in window functions**. Every aggregate window function can also work as a ordinary aggregate function, simply by omitting the OVER and FILTER clauses. Furthermore, all of the built-in aggregate functions of SQLite can be used as an aggregate window function by adding an appropriate OVER clause. Applications can register new aggregate window functions using the **sqlite3_create_window_function() interface**. The built-in window functions, however, require special-case handling in the query planner and hence new window functions that exhibit the exceptional properties found in the built-in window functions cannot be added by the application.

Here is an example using the built-in **row_number()** window function:

.exec 
    CREATE TABLE t0(x INTEGER PRIMARY KEY, y TEXT);
    INSERT INTO t0 VALUES (1, 'aaa'), (2, 'ccc'), (3, 'bbb');
    SELECT x, y, row_number() OVER (ORDER BY y) AS row_number FROM t0 ORDER BY x;

The row_number() window function assigns consecutive integers to each row in order of the "ORDER BY" clause within the window-defn (in this case "ORDER BY y"). Note that this does not affect the order in which results are returned from the overall query. The order of the final output is still governed by the ORDER BY clause attached to the SELECT statement (in this case "ORDER BY x").

Named window-defn clauses may also be added to a SELECT statement using a WINDOW clause and then referred to by name within window function invocations. For example, the following SELECT statement contains two named window-defs clauses, "win1" and "win2":

.exec
    CREATE TABLE t0(x INTEGER PRIMARY KEY, y TEXT);
    INSERT INTO t0 VALUES (1, 'aaa'), (2, 'ccc'), (3, 'bbb');
    SELECT x, y, row_number() OVER win1, rank() OVER win2 
    FROM t0 
    WINDOW win1 AS (ORDER BY y RANGE BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW),
        win2 AS (PARTITION BY y ORDER BY x)
    ORDER BY x;

The WINDOW clause, when one is present, comes after any HAVING clause and before any ORDER BY.

Exercise
--------

Tutorial Code
-------------
    
Expected Output
---------------

Solution
--------