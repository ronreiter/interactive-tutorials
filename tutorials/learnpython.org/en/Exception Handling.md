Tutorial
--------
When programming, errors happen. It's just a fact of life.
Perhaps the user gave bad input. Maybe a network resource was
unavailable. Maybe the program ran out of memory. Or the programmer
may have even made a mistake!

Python's solution to errors are exceptions. You might have seen an
exception before.

    >>> print a
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicHJpbnQoYSlcbiIsInNvbHV0aW9uIjoicHJpbnQoYSlcbiIsInNjdCI6IiJ9
</div>

Oops! Forgot to assign a value to the 'a' variable.

But sometimes you don't want exceptions to completely stop the
program. You might want to do something special when an exception
is raised. This is done in a *try/except* block.

Here's a trivial example: Suppose you're iterating over a list. You
need to iterate over 20 numbers, but the list is made from user input,
and might not have 20 numbers in it. After you reach the end of the
list, you just want the rest of the numbers to be interpreted as a 0.
Here's how you could do that:

    def do_stuff_with_number(n):
        print n

    the_list = (1, 2, 3, 4, 5)

    for i in range(20):
        try:
            do_stuff_with_number(the_list[i])
        except IndexError: # Raised when accessing a non-existing index of a list
            do_stuff_with_number(0)

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZGVmIGRvX3N0dWZmX3dpdGhfbnVtYmVyKG4pOlxuICAgICAgICBwcmludChuKVxuXG50aGVfbGlzdCA9ICgxLCAyLCAzLCA0LCA1KVxuXG5mb3IgaSBpbiByYW5nZSgyMCk6XG4gICAgdHJ5OlxuICAgICAgICBkb19zdHVmZl93aXRoX251bWJlcih0aGVfbGlzdFtpXSlcbiAgICBleGNlcHQgSW5kZXhFcnJvcjogIyBSYWlzZWQgd2hlbiBhY2Nlc3NpbmcgYSBub24tZXhpc3RpbmcgaW5kZXggb2YgYSBsaXN0XG4gICAgICAgIGRvX3N0dWZmX3dpdGhfbnVtYmVyKDApXG4iLCJzb2x1dGlvbiI6ImRlZiBkb19zdHVmZl93aXRoX251bWJlcihuKTpcbiAgICAgICAgcHJpbnQobilcblxudGhlX2xpc3QgPSAoMSwgMiwgMywgNCwgNSlcblxuZm9yIGkgaW4gcmFuZ2UoMjApOlxuICAgIHRyeTpcbiAgICAgICAgZG9fc3R1ZmZfd2l0aF9udW1iZXIodGhlX2xpc3RbaV0pXG4gICAgZXhjZXB0IEluZGV4RXJyb3I6ICMgUmFpc2VkIHdoZW4gYWNjZXNzaW5nIGEgbm9uLWV4aXN0aW5nIGluZGV4IG9mIGEgbGlzdFxuICAgICAgICBkb19zdHVmZl93aXRoX251bWJlcigwKVxuXG4iLCJzY3QiOiIifQ==
</div>

There, that wasn't too hard! You can do that with any exception. For 
more details on handling exceptions, look no further than [here](http://docs.python.org/tutorial/errors.html#handling-exceptions)

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBIYW5kbGUgYWxsIHRoZSBleGNlcHRpb25zIVxuI1NldHVwXG5hY3RvciA9IHtcIm5hbWVcIjogXCJKb2huIENsZWVzZVwiLCBcInJhbmtcIjogXCJhd2Vzb21lXCJ9XG5cbiNGdW5jdGlvbiB0byBtb2RpZnksIHNob3VsZCByZXR1cm4gdGhlIGxhc3QgbmFtZSBvZiB0aGUgYWN0b3IgLSB0aGluayBiYWNrIHRvIHByZXZpb3VzIGxlc3NvbnMgZm9yIGhvdyB0byBnZXQgaXRcbmRlZiBnZXRfbGFzdF9uYW1lKClcbiAgcmV0dXJuIGFjdG9yW1wibGFzdF9uYW1lXCJdXG5cbiNUZXN0IGNvZGVcbnByaW50KGdldF9sYXN0X25hbWUoKSlcbnByaW50KFwiQWxsIGV4Y2VwdGlvbnMgY2F1Z2h0ISBHb29kIGpvYiFcIilcbnByaW50KFwiVGhlIGFjdG9yJ3MgbGFzdCBuYW1lIGlzICVzXCIgJShnZXRfbGFzdF9uYW1lKCkpKVxuIiwic29sdXRpb24iOiIjIEhhbmRsZSBhbGwgdGhlIGV4Y2VwdGlvbnMhXG4jU2V0dXBcbmFjdG9yID0ge1wibmFtZVwiOiBcIkpvaG4gQ2xlZXNlXCIsIFwicmFua1wiOiBcImF3ZXNvbWVcIn1cblxuI0Z1bmN0aW9uIHRvIG1vZGlmeSwgc2hvdWxkIHJldHVybiB0aGUgbGFzdCBuYW1lIG9mIHRoZSBhY3RvciAtIHRoaW5rIGJhY2sgdG8gcHJldmlvdXMgbGVzc29ucyBmb3IgaG93IHRvIGdldCBpdFxuZGVmIGdldF9sYXN0X25hbWUoKVxuICByZXR1cm4gYWN0b3JbXCJuYW1lXCJdLnNwbGl0KClbMV1cblxucHJpbnQoZ2V0X2xhc3RfbmFtZSgpKVxucHJpbnQoXCJBbGwgZXhjZXB0aW9ucyBjYXVnaHQhIEdvb2Qgam9iIVwiKVxucHJpbnQoXCJUaGUgYWN0b3IncyBsYXN0IG5hbWUgaXMgJXNcIiAlKGdldF9sYXN0X25hbWUoKSkpXG5cbiIsInNjdCI6IlxudGVzdF9vdXRwdXRfY29udGFpbnMoXCJBbGwgZXhjZXB0aW9ucyBjYXVnaHQhIEdvb2Qgam9iIVwiKVxudGVzdF9vdXRwdXRfY29udGFpbnMoXCJUaGUgYWN0b3IncyBsYXN0IG5hbWUgaXMgQ2xlZXNlXCIpXG5zdWNjZXNzX21zZyhHcmVhdCBqb2IhKSJ9
</div>

Tutorial Code
-------------

# Handle all the exceptions!
#Setup
actor = {"name": "John Cleese", "rank": "awesome"}

#Function to modify, should return the last name of the actor - think back to previous lessons for how to get it
def get_last_name():
    return actor["last_name"]

#Test code
get_last_name()
print "All exceptions caught! Good job!"
print "The actor's last name is %s" % get_last_name()

Expected Output
---------------

All exceptions caught! Good job!
The actor's last name is Cleese

Solution
--------
actor = {"name": "John Cleese", "rank": "awesome"}

def get_last_name():
    return actor["name"].split()[1]

get_last_name()
print "All exceptions caught! Good job!"
print "The actor's last name is %s" % get_last_name()
