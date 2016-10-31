Tutorial
--------

### What are Functions?

Functions are a convenient way to divide your code into useful blocks, allowing us to order our code, make it more readable, reuse it and save some time. Also functions are a key way to define interfaces so programmers can share their code.
 
###How do you write functions in Python?

As we have seen on previous tutorials, Python makes use of blocks.
 
A block is a area of code of written in the format of: 

    block_head: 
        1st block line 
        2nd block line 
        ... 

Where a block line is more Python code (even another block), and the block head is of the following format:
block_keyword block_name(argument1,argument2, ...)
Block keywords you already know are "if", "for", and "while".

Functions in python are defined using the block keyword "def", followed with the function's name as the block's name.
For example: 

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZGVmIG15X2Z1bmN0aW9uKCk6XG4gICAgcHJpbnQoXCJIZWxsbyBGcm9tIE15IEZ1bmN0aW9uIVwiKVxuXG5teV9mdW5jdGlvbigpIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>
 
Functions may also receive arguments (variables passed from the caller to the function). 
For example:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZGVmIG15X2Z1bmN0aW9uX3dpdGhfYXJncyh1c2VybmFtZSwgZ3JlZXRpbmcpOlxuICAgIHByaW50IChcIkhlbGxvLCAlcyAsIEZyb20gTXkgRnVuY3Rpb24hLCBJIHdpc2ggeW91ICVzXCIgJSh1c2VybmFtZSwgZ3JlZXRpbmcpKVxuXG5teV9mdW5jdGlvbl93aXRoX2FyZ3MoXCJQeXRob25pc3RhXCIsIFwiaGFwcHkgY29kaW5nIVwiKSIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>
 
Functions may return a value to the caller, using the keyword- 'return' .
For example: 

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZGVmIHN1bV90d29fbnVtYmVycyhhLCBiKTpcbiAgICByZXR1cm4oYSArIGIpXG5cbnN1bV90d29fbnVtYmVycygyLCAyKSIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

### How do you call functions in Python?

Simply write the function's name followed by (), placing any required arguments within the brackets.
For example, lets call the functions written above (in the previous example): 

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiZGVmIG15X2Z1bmN0aW9uKCk6XG4gICAgcHJpbnQoXCJIZWxsbyBGcm9tIE15IEZ1bmN0aW9uIVwiKVxuICAgIFxuZGVmIG15X2Z1bmN0aW9uX3dpdGhfYXJncyh1c2VybmFtZSwgZ3JlZXRpbmcpOlxuICAgIHByaW50IChcIkhlbGxvLCAlcyAsIEZyb20gTXkgRnVuY3Rpb24hLCBJIHdpc2ggeW91ICVzXCIgJSh1c2VybmFtZSwgZ3JlZXRpbmcpKVxuXG5kZWYgc3VtX3R3b19udW1iZXJzKGEsIGIpOlxuICAgIHJldHVybihhICsgYikiLCJzYW1wbGUiOiIjIHByaW50IGEgc2ltcGxlIGdyZWV0aW5nIFxubXlfZnVuY3Rpb24oKSBcbiAgIFxuI3ByaW50cyAtIFwiSGVsbG8sIEpvaG4gRG9lLCBGcm9tIE15IEZ1bmN0aW9uISwgSSB3aXNoIHlvdSBhIGdyZWF0IHllYXIhXCJcbm15X2Z1bmN0aW9uX3dpdGhfYXJncyhcIkpvaG4gRG9lXCIsIFwiYSBncmVhdCB5ZWFyIVwiKSBcbiAgICBcbiMgYWZ0ZXIgdGhpcyBsaW5lIHggd2lsbCBob2xkIHRoZSB2YWx1ZSAzIVxueCA9IHN1bV90d29fbnVtYmVycygxLDIpICAiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>
 
Exercise
--------
 
In this exercise you'll use an existing function, and while adding your own to create a fully functional program.
 
1. Add a function named `list_benefits()` that returns the following list of strings: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"
 
2. Add a function named `build_sentence(info)` which receives a single argument containing a string and returns a sentence starting with the given string and ending with the string " is a benefit of functions!"
 
3. Run and see all the functions work together!

<div data-datacamp-exercise="" data-height="400" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiXG4jIE1vZGlmeSB0aGlzIGZ1bmN0aW9uIHRvIHJldHVybiBhIGxpc3Qgb2Ygc3RyaW5ncyBhcyBkZWZpbmVkIGFib3ZlXG5kZWYgbGlzdF9iZW5lZml0cygpOlxuICAgIHBhc3NcblxuIyBNb2RpZnkgdGhpcyBmdW5jdGlvbiB0byBjb25jYXRlbmF0ZSB0byBlYWNoIGJlbmVmaXQgLSBcIiBpcyBhIGJlbmVmaXQgb2YgZnVuY3Rpb25zIVwiXG5kZWYgYnVpbGRfc2VudGVuY2UoYmVuZWZpdCk6XG4gICAgcGFzc1xuXG5kZWYgbmFtZV90aGVfYmVuZWZpdHNfb2ZfZnVuY3Rpb25zKCk6XG4gICAgbGlzdF9vZl9iZW5lZml0cyA9IGxpc3RfYmVuZWZpdHMoKVxuICAgIGZvciBiZW5lZml0IGluIGxpc3Rfb2ZfYmVuZWZpdHM6XG4gICAgICAgIHByaW50KGJ1aWxkX3NlbnRlbmNlKGJlbmVmaXQpKVxuXG5uYW1lX3RoZV9iZW5lZml0c19vZl9mdW5jdGlvbnMoKSIsInNvbHV0aW9uIjoiZGVmIGxpc3RfYmVuZWZpdHMoKTpcbiAgICByZXR1cm4oXCJNb3JlIG9yZ2FuaXplZCBjb2RlXCIsIFwiTW9yZSByZWFkYWJsZSBjb2RlXCIsIFwiRWFzaWVyIGNvZGUgcmV1c2VcIiwgXCJBbGxvd2luZyBwcm9ncmFtbWVycyB0byBzaGFyZSBhbmQgY29ubmVjdCBjb2RlIHRvZ2V0aGVyXCIpXG5cbiMgTW9kaWZ5IHRoaXMgZnVuY3Rpb24gdG8gY29uY2F0ZW5hdGUgdG8gZWFjaCBiZW5lZml0IC0gXCIgaXMgYSBiZW5lZml0IG9mIGZ1bmN0aW9ucyFcIlxuZGVmIGJ1aWxkX3NlbnRlbmNlKGJlbmVmaXQpOlxuICAgIHJldHVybihcIiVzIGlzIGEgYmVuZWZpdCBvZiBmdW5jdGlvbnMhXCIgJShiZW5lZml0KSlcblxuXG5kZWYgbmFtZV90aGVfYmVuZWZpdHNfb2ZfZnVuY3Rpb25zKCk6XG4gICAgbGlzdF9vZl9iZW5lZml0cyA9IGxpc3RfYmVuZWZpdHMoKVxuICAgIGZvciBiZW5lZml0IGluIGxpc3Rfb2ZfYmVuZWZpdHM6XG4gICAgICAgIHByaW50KGJ1aWxkX3NlbnRlbmNlKGJlbmVmaXQpKVxuXG5uYW1lX3RoZV9iZW5lZml0c19vZl9mdW5jdGlvbnMoKSIsInNjdCI6InRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiTW9yZSBvcmdhbml6ZWQgY29kZSBpcyBhIGJlbmVmaXQgb2YgZnVuY3Rpb25zIVwiKVxudGVzdF9vdXRwdXRfY29udGFpbnMoXCJNb3JlIHJlYWRhYmxlIGNvZGUgaXMgYSBiZW5lZml0IG9mIGZ1bmN0aW9ucyFcIilcbnRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiRWFzaWVyIGNvZGUgcmV1c2UgaXMgYSBiZW5lZml0IG9mIGZ1bmN0aW9ucyFcIilcbnRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiQWxsb3dpbmcgcHJvZ3JhbW1lcnMgdG8gc2hhcmUgYW5kIGNvbm5lY3QgY29kZSB0b2dldGhlciBpcyBhIGJlbmVmaXQgb2YgZnVuY3Rpb25zIVwiKVxuc3VjY2Vzc19tc2coXCJOaWNlIHdvcmshXCIpIn0=
</div>
 