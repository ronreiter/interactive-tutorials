Tutorial
--------

A Closure is a function object that remembers values in enclosing scopes even if they are not present in memory. Let us get to it step by step

Firstly, a **Nested Function** is a function defined inside another function. It's very important to note that the nested functions can access the variables of the enclosing scope. However, at least in python, they are only readonly. However, one can use the "nonlocal" keyword explicitly with these variables in order to modify them.

For example:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZGVmIHRyYW5zbWl0X3RvX3NwYWNlKG1lc3NhZ2UpOlxuICAgIFwiVGhpcyBpcyB0aGUgZW5jbG9zaW5nIGZ1bmN0aW9uXCJcbiAgICBkZWYgZGF0YV90cmFuc21pdHRlcigpOlxuICAgICAgICBcIlRoZSBuZXN0ZWQgZnVuY3Rpb25cIlxuICAgICAgICBwcmludChtZXNzYWdlKVxuXG4gICAgZGF0YV90cmFuc21pdHRlcigpIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

This works well as the 'data_transmitter' function can access the 'message'. To demonstrate the use of the "nonlocal" keyword, consider this 

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZGVmIHByaW50X21zZyhudW1iZXIpOlxuICAgIGRlZiBwcmludGVyKCk6XG4gICAgICAgIFwiSGVyZSB3ZSBhcmUgdXNpbmcgdGhlIG5vbmxvY2FsIGtleXdvcmRcIlxuICAgICAgICBub25sb2NhbCBudW1iZXJcbiAgICAgICAgbnVtYmVyPTNcbiAgICAgICAgcHJpbnQobnVtYmVyKVxuICAgIHByaW50ZXIoKVxuICAgIHByaW50KG51bWJlcilcblxucHJpbnRfbXNnKDkpIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

Without the nonlocal keyword, the output would be "3 9", however, with its usage, we get "3 3", that is the value of the "number" variable gets modified.

Now, how about we return the function object rather than calling the nested function within. (Remember that even functions are objects. (It's Python.))


<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZGVmIHRyYW5zbWl0X3RvX3NwYWNlKG1lc3NhZ2UpOlxuICAgIFwiVGhpcyBpcyB0aGUgZW5jbG9zaW5nIGZ1bmN0aW9uXCJcbiAgICBkZWYgZGF0YV90cmFuc21pdHRlcigpOlxuICAgICAgICBcIlRoZSBuZXN0ZWQgZnVuY3Rpb25cIlxuICAgICAgICBwcmludChtZXNzYWdlKVxuICAgIHJldHVybiBkYXRhX3RyYW5zbWl0dGVyIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

And we call the function as follows:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiZGVmIHRyYW5zbWl0X3RvX3NwYWNlKG1lc3NhZ2UpOlxuICAgIFwiVGhpcyBpcyB0aGUgZW5jbG9zaW5nIGZ1bmN0aW9uXCJcbiAgICBkZWYgZGF0YV90cmFuc21pdHRlcigpOlxuICAgICAgICBcIlRoZSBuZXN0ZWQgZnVuY3Rpb25cIlxuICAgICAgICBwcmludChtZXNzYWdlKVxuICAgIHJldHVybiBkYXRhX3RyYW5zbWl0dGVyIiwic2FtcGxlIjoiZnVuMiA9IHRyYW5zbWl0X3RvX3NwYWNlKFwiQnVybiB0aGUgU3VuIVwiKVxuZnVuMigpXG4iLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

Even though the execution of the "transmit_to_space()" was completed, the message was rather preserved. This technique by which the data is attached to some code even after end of those other original functions is called as closures in python

ADVANTAGE : Closures can avoid use of global variables and provides some form of data hiding.(Eg. When there are few methods in a class, use closures instead).

Also, Decorators in Python make extensive use of closures.
			
Exercise
--------

Make a nested loop and a python closure to make functions to get multiple multiplication functions using closures. That is using closures, one could make functions to create multiply_with_5() or multiply_with_4() functions using closures.

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyB5b3VyIGNvZGUgZ29lcyBoZXJlXG5cbm11bHRpcGx5d2l0aDUgPSBtdWx0aXBsaWVyX29mKDUpXG5tdWx0aXBseXdpdGg1KDkpIiwic29sdXRpb24iOiJkZWYgbXVsdGlwbGllcl9vZihuKTpcbiAgICBkZWYgbXVsdGlwbGllcihudW1iZXIpOlxuICAgICAgICByZXR1cm4gbnVtYmVyKm5cbiAgICByZXR1cm4gbXVsdGlwbGllclxuXG5tdWx0aXBseXdpdGg1ID0gbXVsdGlwbGllcl9vZig1KVxucHJpbnQobXVsdGlwbHl3aXRoNSg5KSkiLCJzY3QiOiJ0ZXN0X291dHB1dF9jb250YWlucyhcIjQ1XCIpXG5zdWNjZXNzX21zZyhcIkdyZWF0IHdvcmshXCIpIn0=
</div>
