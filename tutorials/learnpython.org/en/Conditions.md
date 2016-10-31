Tutorial
--------

Python uses boolean variables to evaluate conditions. The boolean values True and False are returned when an expression is compared or evaluated. For example:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoieCA9IDJcbnByaW50KHggPT0gMikgIyBwcmludHMgb3V0IFRydWVcbnByaW50KHggPT0gMykgIyBwcmludHMgb3V0IEZhbHNlXG5wcmludCh4IDwgMykgICMgcHJpbnRzIG91dCBUcnVlXG4iLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

Notice that variable assignment is done using a single equals operator "=", whereas comparison between two variables is done using the double equals operator "==". The "not equals" operator is marked as "!=".

### Boolean operators

The "and" and "or" boolean operators allow building complex boolean expressions, for example:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoibmFtZSA9IFwiSm9oblwiXG5hZ2UgPSAyM1xuaWYgbmFtZSA9PSBcIkpvaG5cIiBhbmQgYWdlID09IDIzOlxuICAgICAgICBwcmludChcIllvdXIgbmFtZSBpcyBKb2huLCBhbmQgeW91IGFyZSBhbHNvIDIzIHllYXJzIG9sZC5cIilcblxuaWYgbmFtZSA9PSBcIkpvaG5cIiBvciBuYW1lID09IFwiUmlja1wiOlxuICAgICAgICBwcmludChcIllvdXIgbmFtZSBpcyBlaXRoZXIgSm9obiBvciBSaWNrLlwiKVxuIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

### The "in" operator 

The "in" operator could be used to check if a specified object exists within an iterable object container, such as a list:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoibmFtZSA9IFwiSm9oblwiXG5hZ2UgPSAyM1xuXG5pZiBuYW1lIGluIFtcIkpvaG5cIiwgXCJSaWNrXCJdOlxuICAgICAgICBwcmludChcIllvdXIgbmFtZSBpcyBlaXRoZXIgSm9obiBvciBSaWNrLlwiKVxuIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

Python uses indentation to define code blocks, instead of brackets. The standard Python indentation is 4 spaces, although tabs and any other space size will work, as long as it is consistent. Notice that code blocks do not need any termination.

Here is an example for using Python's "if" statement using code blocks:

    if <statement is true>:
        <do something>
        ....
        ....
    elif <another statement is true>: # else if
        <do something else>
        ....
        ....
    else:
        <do another thing>
        ....
        ....

For example:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoieCA9IDJcbmlmIHggPT0gMjpcbiAgICAgIHByaW50KFwieCBlcXVhbHMgdHdvIVwiKVxuZWxzZTpcbiAgICAgIHByaW50KFwieCBkb2VzIG5vdCBlcXVhbCB0byB0d28uXCIpXG4iLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

A statement is evaulated as true if one of the following is correct:
1. The "True" boolean variable is given, or calculated using an expression, such as an arithmetic comparison.
2. An object which is not considered "empty" is passed.

Here are some examples for objects which are considered as empty:
1. An empty string: ""
2. An empty list: []
3. The number zero: 0
4. The false boolean variable: False

### The 'is' operator

Unlike the double equals operator "==", the "is" operator does not match the values of the variables, but the instances themselves. For example:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoieCA9IFsxLDIsM11cbnkgPSBbMSwyLDNdXG5wcmludCh4ID09IHkpICMgUHJpbnRzIG91dCBUcnVlXG5wcmludCh4IGlzIHkpICMgUHJpbnRzIG91dCBGYWxzZVxuIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

### The "not" operator

Using "not" before a boolean expression inverts it:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicHJpbnQobm90IEZhbHNlKSAjIFByaW50cyBvdXQgVHJ1ZVxucHJpbnQoKG5vdCBGYWxzZSkgPT0gKEZhbHNlKSkgIyBQcmludHMgb3V0IEZhbHNlXG4iLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

Exercise
--------

Change the variables in the first section, so that each if statement resolves as True.

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBjaGFuZ2UgdGhpcyBjb2RlXG5udW1iZXIgPSAxMFxuc2Vjb25kX251bWJlciA9IDEwXG5maXJzdF9hcnJheSA9IFtdXG5zZWNvbmRfYXJyYXkgPSBbMSwyLDNdXG5cbmlmIG51bWJlciA+IDE1OlxuICAgIHByaW50KFwiMVwiKVxuXG5pZiBmaXJzdF9hcnJheTpcbiAgICBwcmludChcIjJcIilcblxuaWYgbGVuKHNlY29uZF9hcnJheSkgPT0gMjpcbiAgICBwcmludChcIjNcIilcblxuaWYgbGVuKGZpcnN0X2FycmF5KSArIGxlbihzZWNvbmRfYXJyYXkpID09IDU6XG4gICAgcHJpbnQoXCI0XCIpXG5cbmlmIGZpcnN0X2FycmF5IGFuZCBmaXJzdF9hcnJheVswXSA9PSAxOlxuICAgIHByaW50KFwiNVwiKVxuXG5pZiBub3Qgc2Vjb25kX251bWJlcjpcbiAgICBwcmludChcIjZcIilcbiIsInNvbHV0aW9uIjoiIyBjaGFuZ2UgdGhpcyBjb2RlXG5udW1iZXIgPSAxNlxuc2Vjb25kX251bWJlciA9IDBcbmZpcnN0X2FycmF5ID0gWzEsMiwzXVxuc2Vjb25kX2FycmF5ID0gWzEsMl1cblxuaWYgbnVtYmVyID4gMTU6XG4gICAgcHJpbnQoXCIxXCIpXG5cbmlmIGZpcnN0X2FycmF5OlxuICAgIHByaW50KFwiMlwiKVxuXG5pZiBsZW4oc2Vjb25kX2FycmF5KSA9PSAyOlxuICAgIHByaW50KFwiM1wiKVxuXG5pZiBsZW4oZmlyc3RfYXJyYXkpICsgbGVuKHNlY29uZF9hcnJheSkgPT0gNTpcbiAgICBwcmludChcIjRcIilcblxuaWYgZmlyc3RfYXJyYXkgYW5kIGZpcnN0X2FycmF5WzBdID09IDE6XG4gICAgcHJpbnQoXCI1XCIpXG5cbmlmIG5vdCBzZWNvbmRfbnVtYmVyOlxuICAgIHByaW50KFwiNlwiKVxuIiwic2N0IjoidGVzdF9vdXRwdXRfY29udGFpbnMoXCIxXCIsIG5vX291dHB1dF9tc2c9IFwiRGlkIHlvdSBwcmludCBvdXQgMSBpZiBgbnVtYmVyYCBpcyBncmVhdGVyIHRoYW4gMTU/XCIpXG50ZXN0X291dHB1dF9jb250YWlucyhcIjJcIiwgbm9fb3V0cHV0X21zZz0gXCJEaWQgeW91IHByaW50IG91dCAyIGlmIHRoZXJlIGV4aXN0cyBhIGxpc3QgYGZpcnN0X2FycmF5YD9cIilcbnRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiM1wiLCBub19vdXRwdXRfbXNnPSBcIkRpZCB5b3UgcHJpbnQgb3V0IDMgaWYgdGhlIGxlbmd0aCBvZiBgc2Vjb25kX2FycmF5YCBpcyAyP1wiKVxudGVzdF9vdXRwdXRfY29udGFpbnMoXCI0XCIsIG5vX291dHB1dF9tc2c9IFwiRGlkIHlvdSBwcmludCBvdXQgNCBpZiBsZW4oZmlyc3RfYXJyYXkpICsgbGVuKHNlY29uZF9hcnJheSkgPT0gNT9cIilcbnRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiNVwiLCBub19vdXRwdXRfbXNnPSBcIkRpZCB5b3UgcHJpbnQgb3V0IDUgaWYgZmlyc3RfYXJyYXkgYW5kIGZpcnN0X2FycmF5WzBdID09IDE/XCIpXG50ZXN0X291dHB1dF9jb250YWlucyhcIjZcIiwgbm9fb3V0cHV0X21zZz0gXCJEaWQgeW91IHByaW50IG91dCA2IGlmIG5vdCBzZWNvbmRfbnVtYmVyP1wiKVxuc3VjY2Vzc19tc2coXCJHcmVhdCBXb3JrIVwiKSJ9
</div>

