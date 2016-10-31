Tutorial
--------

This section explains how to use basic operators in Python.

### Arithmetic Operators       

Just as any other programming languages, the addition, subtraction, multiplication, and division operators can be used with numbers.<br>

<div data-datacamp-exercise="" data-height="210" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoibnVtYmVyID0gMSArIDIgKiAzIC8gNC4wXG5wcmludChudW1iZXIpIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

Try to predict what the answer will be.  Does python follow order of operations?

Another operator available is the modulo (%) operator, which returns the integer remainder of the division. dividend % divisor = remainder.

<div data-datacamp-exercise="" data-height="210" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicmVtYWluZGVyID0gMTEgJSAzXG5wcmludChyZW1haW5kZXIpIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

Using two multiplication symbols makes a power relationship.

<div data-datacamp-exercise="" data-height="270" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoic3F1YXJlZCA9IDcgKiogMlxucHJpbnQoc3F1YXJlZClcblxuY3ViZWQgPSAyICoqIDNcbnByaW50KGN1YmVkKSIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

### Using Operators with Strings

Python supports concatenating strings using the addition operator:

<div data-datacamp-exercise="" data-height="210" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiaGVsbG93b3JsZCA9IFwiaGVsbG9cIiArIFwiIFwiICsgXCJ3b3JsZFwiXG5wcmludChoZWxsb3dvcmxkKVxuIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

Python also supports multiplying strings to form a string with a repeating sequence:

<div data-datacamp-exercise="" data-height="210" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoibG90c29maGVsbG9zID0gXCJoZWxsb1wiICogMTBcbnByaW50KGxvdHNvZmhlbGxvcylcbiIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

### Using Operators with Lists

Lists can be joined with the addition operators:

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZXZlbl9udW1iZXJzID0gWzIsNCw2LDhdXG5wcmludChldmVuX251bWJlcnMpXG5cbm9kZF9udW1iZXJzID0gWzEsMyw1LDddXG5wcmludChvZGRfbnVtYmVycylcblxuYWxsX251bWJlcnMgPSBvZGRfbnVtYmVycyArIGV2ZW5fbnVtYmVyc1xucHJpbnQoYWxsX251bWJlcnMpXG4iLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

Just as in strings, Python supports forming new lists with a repeating sequence using the multiplication operator:

<div data-datacamp-exercise="" data-height="210" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicHJpbnQoWzEsMiwzXSAqIDMpIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

Exercise
--------

The target of this exercise is to create two lists called `x_list` and `y_list`,
which contain 10 instances of the variables `x` and `y`, respectively.
You are also required to create a list called `big_list`, which contains
the variables `x` and `y`, 10 times each, by concatenating the two lists you have created.

<div data-datacamp-exercise data-lang="python" data-height="310" data-encoded="true">eyJwcmVfZXhlcmNpc2VfY29kZSI6IiMgbm8gcGVjIiwic2N0IjoidGVzdF9vYmplY3QoXCJhXCIpXG50ZXN0X2Z1bmN0aW9uKFwicHJpbnRcIilcbnN1Y2Nlc3NfbXNnKFwiR3JlYXQgam9iIVwiKSIsInNvbHV0aW9uIjoiIyBDcmVhdGUgYSB2YXJpYWJsZSBhLCBlcXVhbCB0byA1XG5hID0gNVxuXG4jIFByaW50IG91dCBhXG5wcmludChhKSIsImhpbnQiOiJVc2UgdGhlIGFzc2lnbm1lbnQgb3BlcmF0b3IgKDxjb2RlPj08L2NvZGU%2BKSB0byBjcmVhdGUgdGhlIHZhcmlhYmxlIDxjb2RlPmE8L2NvZGU%2BLiIsInNhbXBsZSI6IiMgQ3JlYXRlIGEgdmFyaWFibGUgYSwgZXF1YWwgdG8gNVxuXG5cbiMgUHJpbnQgb3V0IGFcblxuXG4jIE1vcmUgY29tbWVudHNcblxuXG4jIE1vcmUgd2hpdGVzcGFjZVxuXG5cbiMgTW9yZSBldmVyeXRoaW5nXG5cbiIsImxhbmd1YWdlIjoicHl0aG9uIn0%3D</div>

