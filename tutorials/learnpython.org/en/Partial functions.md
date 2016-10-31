Tutorial
--------

You can create partial functions in python by using the partial function from the functools library.

Partial functions allow one to derive a function with x parameters to a function with fewer parameters and fixed values set for the more limited function.

Import required:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZnJvbSBmdW5jdG9vbHMgaW1wb3J0IHBhcnRpYWwiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>
Example:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiZnJvbSBmdW5jdG9vbHMgaW1wb3J0IHBhcnRpYWxcbmRlZiBtdWx0aXBseSh4LHkpOlxuICAgIHJldHVybiB4ICogeSIsInNhbXBsZSI6IiMgY3JlYXRlIGEgbmV3IGZ1bmN0aW9uIHRoYXQgbXVsdGlwbGllcyBieSAyXG5kYmwgPSBwYXJ0aWFsKG11bHRpcGx5LDIpXG5wcmludChkYmwoNCkpIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

This code will return 8.  

An important note:  the default values will start replacing variables from the left.  The 2 will replace x.
y will equal 4 when dbl(4) is called.  It does not make a difference in this example, but it does in the example below.

Exercise
--------
Edit the function provided by calling partial() and replacing the first three variables in func(). Then print with the new partial function using only one input variable so that the output equals 60.

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiZnJvbSBmdW5jdG9vbHMgaW1wb3J0IHBhcnRpYWwiLCJzYW1wbGUiOiIjRm9sbG93aW5nIGlzIHRoZSBleGVyY2lzZSwgZnVuY3Rpb24gcHJvdmlkZWQ6XG5mcm9tIGZ1bmN0b29scyBpbXBvcnQgcGFydGlhbFxuZGVmIGZ1bmModSx2LHcseCk6XG4gICAgcmV0dXJuIHUqNCArIHYqMyArIHcqMiArIHhcbiNFbnRlciB5b3VyIGNvZGUgaGVyZSB0byBjcmVhdGUgYW5kIHByaW50IHdpdGggeW91ciBwYXJ0aWFsIGZ1bmN0aW9uXG4iLCJzb2x1dGlvbiI6ImZyb20gZnVuY3Rvb2xzIGltcG9ydCBwYXJ0aWFsXG5kZWYgZnVuYyh1LHYsdyx4KTpcbiAgICByZXR1cm4gdSo0ICsgdiozICsgdyoyICsgeFxuXG5wID0gcGFydGlhbChmdW5jLDUsNiw3KVxucHJpbnQocCg4KSkiLCJzY3QiOiJ0ZXN0X291dHB1dF9jb250YWlucyhcIjYwXCIpXG5zdWNjZXNzX21zZyhcIk5pY2Ugd29yayFcIikifQ==
</div>

