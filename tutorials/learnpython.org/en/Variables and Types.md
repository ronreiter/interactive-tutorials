Tutorial
--------

Python is completely object oriented, and not "statically typed". You do not need to declare variables before using them, or declare their type. Every variable in Python is an object.

This tutorial will go over a few basic types of variables.

### Numbers
Python supports two types of numbers - integers and floating point numbers. (It also supports complex numbers, which will not be explained in this tutorial).

To define an integer, use the following syntax:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoibXlpbnQgPSA3XG5wcmludChteWludCkifQ==
</div>

To define a floating point number, you may use one of the following notations:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoibXlmbG9hdCA9IDcuMFxubXlmbG9hdCA9IGZsb2F0KDcpXG5wcmludChteWZsb2F0KSJ9
</div>

### Strings

Strings are defined either with a single quote or a double quotes.

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoibXlzdHJpbmcgPSAnaGVsbG8nXG5teXN0cmluZyA9IFwiaGVsbG9cIlxucHJpbnQobXlzdHJpbmcpIn0=
</div>

The difference between the two is that using double quotes makes it easy to include apostrophes (whereas these would terminate the string if using single quotes)

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoibXlzdHJpbmcgPSBcIkRvbid0IHdvcnJ5IGFib3V0IGFwb3N0cm9waGVzXCJcbnByaW50KG15c3RyaW5nKSJ9
</div>

There are additional variations on defining strings that make it easier to include things such as carriage returns, backslashes and Unicode characters. These are beyond the scope of this tutorial, but are covered in the [Python documentation](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial"). 

Simple operators can be executed on numbers and strings:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoib25lID0gMVxudHdvID0gMlxudGhyZWUgPSBvbmUgKyB0d29cblxuaGVsbG8gPSBcImhlbGxvXCJcbndvcmxkID0gXCJ3b3JsZFwiXG5oZWxsb3dvcmxkID0gaGVsbG8gKyBcIiBcIiArIHdvcmxkXG5wcmludChoZWxsb3dvcmxkKSJ9
</div>

Assignments can be done on more than one variable "simultaneously" on the same line like this

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiYSwgYiA9IDMsIDRcbnByaW50KGEpXG5wcmludChiKSJ9
</div>

Mixing operators between numbers and strings is not supported:

Exercise
--------

The target of this exercise is to create a string, an integer, and a floating point number. The string should be named mystring and should contain the word "hello". The floating point number should be named myfloat and should contain the number 10, and the integer should be named myint and should contain the number 20. 

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBjaGFuZ2UgdGhpcyBjb2RlXG5teXN0cmluZyA9IE5vbmVcbm15ZmxvYXQgPSBOb25lXG5teWludCA9IE5vbmVcblxuIyB0ZXN0aW5nIGNvZGVcbmlmIG15c3RyaW5nID09IFwiaGVsbG9cIjpcbiAgICBwcmludChcIlN0cmluZzogJXNcIiAlIG15c3RyaW5nKVxuaWYgaXNpbnN0YW5jZShteWZsb2F0LCBmbG9hdCkgYW5kIG15ZmxvYXQgPT0gMTAuMDpcbiAgICBwcmludChcIkZsb2F0OiAlZFwiICUgbXlmbG9hdClcbmlmIGlzaW5zdGFuY2UobXlpbnQsIGludCkgYW5kIG15aW50ID09IDIwOlxuICAgIHByaW50KFwiSW50ZWdlcjogJWRcIiAlIG15aW50KVxuIiwic29sdXRpb24iOiIjIGNoYW5nZSB0aGlzIGNvZGVcbm15c3RyaW5nID0gXCJoZWxsb1wiXG5teWZsb2F0ID0gMTBcbm15aW50ID0gMjBcblxuIyB0ZXN0aW5nIGNvZGVcbmlmIG15c3RyaW5nID09IFwiaGVsbG9cIjpcbiAgICBwcmludChcIlN0cmluZzogJXNcIiAlIG15c3RyaW5nKVxuaWYgaXNpbnN0YW5jZShteWZsb2F0LCBmbG9hdCkgYW5kIG15ZmxvYXQgPT0gMTAuMDpcbiAgICBwcmludChcIkZsb2F0OiAlZFwiICUgbXlmbG9hdClcbmlmIGlzaW5zdGFuY2UobXlpbnQsIGludCkgYW5kIG15aW50ID09IDIwOlxuICAgIHByaW50KFwiSW50ZWdlcjogJWRcIiAlIG15aW50KVxuIiwic2N0IjoidGVzdF9vYmplY3QoJ215c3RyaW5nJywgaW5jb3JyZWN0X21zZz1cIkRvbid0IGZvcmdldCB0byBjaGFuZ2UgYG15c3RyaW5nYCB0byB0aGUgY29ycmVjdCB2YWx1ZSBmcm9tIHRoZSBleGVyY2lzZSBkZXNjcmlwdGlvbi5cIilcbnRlc3Rfb2JqZWN0KCdteWZsb2F0JywgaW5jb3JyZWN0X21zZz1cIkRvbid0IGZvcmdldCB0byBjaGFuZ2UgYG15ZmxvYXRgIHRvIHRoZSBjb3JyZWN0IHZhbHVlIGZyb20gdGhlIGV4ZXJjaXNlIGRlc2NyaXB0aW9uLlwiKVxudGVzdF9vYmplY3QoJ215aW50JywgaW5jb3JyZWN0X21zZz1cIkRvbid0IGZvcmdldCB0byBjaGFuZ2UgYG15aW50YCB0byB0aGUgY29ycmVjdCB2YWx1ZSBmcm9tIHRoZSBleGVyY2lzZSBkZXNjcmlwdGlvbi5cIilcbnRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwibXlzdHJpbmcgPSAnaGVsbG8nXCIsbm9fb3V0cHV0X21zZz0gXCJNYWtlIHN1cmUgeW91ciBzdHJpbmcsIGZsb2F0IGFuZCBpbnRlZ2VyIG1hdGNoIGV4YWN0bHkgdG8gdGhlIGV4ZXJjaXNlIGRlc2NpcHRpb24uXCIpXG50ZXN0X291dHB1dF9jb250YWlucyhcIm15ZmxvYXQgPSAxMC4wXCIsbm9fb3V0cHV0X21zZz0gXCJNYWtlIHN1cmUgeW91ciBzdHJpbmcsIGZsb2F0IGFuZCBpbnRlZ2VyIG1hdGNoIGV4YWN0bHkgdG8gdGhlIGV4ZXJjaXNlIGRlc2NpcHRpb24uXCIpXG50ZXN0X291dHB1dF9jb250YWlucyhcIm15aW50ID0gMjBcIixub19vdXRwdXRfbXNnPSBcIk1ha2Ugc3VyZSB5b3VyIHN0cmluZywgZmxvYXQgYW5kIGludGVnZXIgbWF0Y2ggZXhhY3RseSB0byB0aGUgZXhlcmNpc2UgZGVzY2lwdGlvbi5cIilcbnN1Y2Nlc3NfbXNnKFwiR3JlYXQgam9iIVwiKSJ9
</div>


