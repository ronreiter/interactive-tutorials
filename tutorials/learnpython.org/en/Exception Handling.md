Tutorial
--------
When programming, errors happen. It's just a fact of life.
Perhaps the user gave bad input. Maybe a network resource was
unavailable. Maybe the program ran out of memory. Or the programmer
may have even made a mistake!

Python's solution to errors are exceptions. You might have seen an
exception before.

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicHJpbnQoYSlcbiIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
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

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZGVmIGRvX3N0dWZmX3dpdGhfbnVtYmVyKG4pOlxuICAgICAgICBwcmludChuKVxuXG50aGVfbGlzdCA9ICgxLCAyLCAzLCA0LCA1KVxuXG5mb3IgaSBpbiByYW5nZSgyMCk6XG4gICAgdHJ5OlxuICAgICAgICBkb19zdHVmZl93aXRoX251bWJlcih0aGVfbGlzdFtpXSlcbiAgICBleGNlcHQgSW5kZXhFcnJvcjogIyBSYWlzZWQgd2hlbiBhY2Nlc3NpbmcgYSBub24tZXhpc3RpbmcgaW5kZXggb2YgYSBsaXN0XG4gICAgICAgIGRvX3N0dWZmX3dpdGhfbnVtYmVyKDApXG4iLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

There, that wasn't too hard! You can do that with any exception. For 
more details on handling exceptions, look no further than [here](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBIYW5kbGUgYWxsIHRoZSBleGNlcHRpb25zIVxuI1NldHVwXG5hY3RvciA9IHtcIm5hbWVcIjogXCJKb2huIENsZWVzZVwiLCBcInJhbmtcIjogXCJhd2Vzb21lXCJ9XG5cbiNGdW5jdGlvbiB0byBtb2RpZnksIHNob3VsZCByZXR1cm4gdGhlIGxhc3QgbmFtZSBvZiB0aGUgYWN0b3IgXG5kZWYgZ2V0X2xhc3RfbmFtZSgpOlxuI3JldHVybiBhY3RvcltcImxhc3RfbmFtZVwiXVxuXG4jVGVzdCBjb2RlXG5wcmludChnZXRfbGFzdF9uYW1lKCkpXG5wcmludChcIkFsbCBleGNlcHRpb25zIGNhdWdodCEgR29vZCBqb2IhXCIpXG5wcmludChcIlRoZSBhY3RvcidzIGxhc3QgbmFtZSBpcyAlc1wiICUoZ2V0X2xhc3RfbmFtZSgpKSlcbiIsInNvbHV0aW9uIjoiIyBIYW5kbGUgYWxsIHRoZSBleGNlcHRpb25zIVxuI1NldHVwXG5hY3RvciA9IHtcIm5hbWVcIjogXCJKb2huIENsZWVzZVwiLCBcInJhbmtcIjogXCJhd2Vzb21lXCJ9XG5cbiNGdW5jdGlvbiB0byBtb2RpZnksIHNob3VsZCByZXR1cm4gdGhlIGxhc3QgbmFtZSBvZiB0aGUgYWN0b3IgXG5kZWYgZ2V0X2xhc3RfbmFtZSgpOlxuXG5cbiIsInNjdCI6InRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiQWxsIGV4Y2VwdGlvbnMgY2F1Z2h0ISBHb29kIGpvYiFcIilcbnRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiVGhlIGFjdG9yJ3MgbGFzdCBuYW1lIGlzIENsZWVzZVwiKVxuc3VjY2Vzc19tc2coR3JlYXQgam9iISkifQ==
</div>
