Tutorial
--------

Python uses C-style string formatting to create new, formatted strings. The "%" operator is used to format a set of variables enclosed in a "tuple" (a fixed size list), together with a format string, which contains normal text together with "argument specifiers", special symbols like "%s" and "%d".

Let's say you have a variable called "name" with your user name in it, and you would then like to print out a greeting to that user.

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBUaGlzIHByaW50cyBvdXQgXCJIZWxsbywgSm9obiFcIlxubmFtZSA9IFwiSm9oblwiXG5wcmludChcIkhlbGxvLCAlcyFcIiAlKG5hbWUpKSAgIiwic29sdXRpb24iOiIjIFRoaXMgcHJpbnRzIG91dCBcIkhlbGxvLCBKb2huIVwiXG5uYW1lID0gXCJKb2huXCJcbnByaW50KFwiSGVsbG8sICVzIVwiICUobmFtZSkpICIsInNjdCI6IiJ9
</div>

To use two or more argument specifiers, use a tuple (parentheses):

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBUaGlzIHByaW50cyBvdXQgXCJKb2huIGlzIDIzIHllYXJzIG9sZC5cIlxubmFtZSA9IFwiSm9oblwiXG5hZ2UgPSAyM1xucHJpbnQgKFwiJXMgaXMgJXMgeWVhcnMgb2xkLlwiICUobmFtZSxhZ2UpKVxuIiwic29sdXRpb24iOiIjIFRoaXMgcHJpbnRzIG91dCBcIkpvaG4gaXMgMjMgeWVhcnMgb2xkLlwiXG5uYW1lID0gXCJKb2huXCJcbmFnZSA9IDIzXG5wcmludCAoXCIlcyBpcyAlcyB5ZWFycyBvbGQuXCIgJShuYW1lLGFnZSkpXG4iLCJzY3QiOiIifQ==
</div>

Any object which is not a string can be formatted using the %s operator as well. The string which returns from the "repr" method of that object is formatted as the string. For example:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBUaGlzIHByaW50cyBvdXQ6IEEgbGlzdDogWzEsIDIsIDNdXG5teWxpc3QgPSBbMSwyLDNdXG5wcmludChcIkEgbGlzdDogJXNcIiAlKG15bGlzdCkpXG4iLCJzb2x1dGlvbiI6IiMgVGhpcyBwcmludHMgb3V0OiBBIGxpc3Q6IFsxLCAyLCAzXVxubXlsaXN0ID0gWzEsMiwzXVxucHJpbnQoXCJBIGxpc3Q6ICVzXCIgJShteWxpc3QpKVxuIiwic2N0IjoiIn0=
</div>

Here are some basic argument specifiers you should know:

    %s - String (or any object with a string representation, like numbers)
    %d - Integers
    %f - Floating point numbers
    %.<number of digits>f - Floating point numbers with a fixed amount of digits to the right of the dot.
    %x/%X - Integers in hex representation (lowercase/uppercase)

Exercise
--------

You will need to write a format string which prints out the data using the following syntax:
    Hello John Doe. Your current balance is 53.44$.

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBBZGQgdGhlIGFwcHJvcHJhaXRlICVzIHRvIHRoZSBmb3JtYXRfc3RyaW5nIHRvIHByaW50IG91dCB0aGUgc3RyaW5nIGluIHRoZSBleGVyY2lzZSBkZXNjcmlwdGlvblxuZGF0YSA9IChcIkpvaG5cIiwgXCJEb2VcIiwgNTMuNDQpXG5mb3JtYXRfc3RyaW5nID0gXCJIZWxsb1wiXG5cbnByaW50KGZvcm1hdF9zdHJpbmcgJShkYXRhKSlcbiIsInNvbHV0aW9uIjoiZGF0YSA9IChcIkpvaG5cIiwgXCJEb2VcIiwgNTMuNDQpXG5mb3JtYXRfc3RyaW5nID0gXCJIZWxsbyAlcyAlcy4gWW91ciBjdXJyZW50IGJhbGFuY2UgaXMgJXMkLlwiXG5cbnByaW50KGZvcm1hdF9zdHJpbmcgJShkYXRhKSlcbiIsInNjdCI6InRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiSGVsbG8gSm9obiBEb2UuIFlvdXIgY3VycmVudCBiYWxhbmNlIGlzIDUzLjQ0JC5cIiwgbm9fb3V0cHV0X21zZz0gXCJNYWtlIHN1cmUgeW91IGFkZCB0aGUgYCVzYCBpbiB0aGUgY29ycmVjdCBzcGFjZXMgdG8gdGhlIGBmb3JtYXRfc3RyaW5nYCB0byBtZWVldCB0aGUgZXhlcmNpc2UgZ29hbHMhXCIpIn0=
</div>
