Tutorial
--------

Python provides built-in JSON libraries to encode and decode JSON.

In Python 2.5, the simplejson module is used, whereas in Python 2.7, the json module is used. Since this interpreter uses Python 2.7, we'll be using json.

In order to use the json module, it must first be imported:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiaW1wb3J0IGpzb24iLCJzb2x1dGlvbiI6ImltcG9ydCBqc29uIiwic2N0IjoiIn0=
</div>

There are two basic formats for JSON data.  Either in a string or the object datastructure.  The object datastructure, in Python, consists of lists and dictionaries nested inside each other.  The object datastructure allows one to use python methods (for lists and dictionaries) to add, list, search and remove elements from the datastructure.  The String format is mainly used to pass the data into another program or load into a datastructure.

To load JSON back to a data structure, use the "loads" method.  This method takes a string and turns it back into the json object datastructure:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiaW1wb3J0IGpzb24iLCJzYW1wbGUiOiJwcmludChqc29uLmxvYWRzKGpzb25fc3RyaW5nKSkiLCJzb2x1dGlvbiI6InByaW50KGpzb24ubG9hZHMoanNvbl9zdHJpbmcpKSIsInNjdCI6IiJ9
</div>

To encode a data structure to JSON, use the "dumps" method.  This method takes an object and returns a String:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiaW1wb3J0IGpzb24iLCJzYW1wbGUiOiJqc29uX3N0cmluZyA9IGpzb24uZHVtcHMoWzEsIDIsIDMsIFwiYVwiLCBcImJcIiwgXCJjXCJdKSIsInNvbHV0aW9uIjoianNvbl9zdHJpbmcgPSBqc29uLmR1bXBzKFsxLCAyLCAzLCBcImFcIiwgXCJiXCIsIFwiY1wiXSkiLCJzY3QiOiIifQ==
</div>

Python supports a Python proprietary data serialization method called pickle (and a faster alternative called cPickle).

You can use it exactly the same way.

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiaW1wb3J0ICBwaWNrbGUiLCJzYW1wbGUiOiJpbXBvcnQgcGlja2xlXG5waWNrbGVkX3N0cmluZyA9IHBpY2tsZS5kdW1wcyhbMSwgMiwgMywgXCJhXCIsIFwiYlwiLCBcImNcIl0pXG5wcmludChwaWNrbGUubG9hZHMocGlja2xlZF9zdHJpbmcpKSIsInNvbHV0aW9uIjoiaW1wb3J0cFBpY2tsZVxucGlja2xlZF9zdHJpbmcgPSBwaWNrbGUuZHVtcHMoWzEsIDIsIDMsIFwiYVwiLCBcImJcIiwgXCJjXCJdKVxucHJpbnQocGlja2xlLmxvYWRzKHBpY2tsZWRfc3RyaW5nKSkiLCJzY3QiOiIifQ==
</div>

The aim of this exercise is to print out the JSON string with key-value pair "Me" : 800 added to it.

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiaW1wb3J0ICBwaWNrbGUiLCJzYW1wbGUiOiJpbXBvcnQganNvblxuXG4jIGZpeCB0aGlzIGZ1bmN0aW9uLCBzbyBpdCBhZGRzIHRoZSBnaXZlbiBuYW1lXG4jIGFuZCBzYWxhcnkgcGFpciB0byBzYWxhcmllc19qc29uLCBhbmQgcmV0dXJuIGl0XG5kZWYgYWRkX2VtcGxveWVlKHNhbGFyaWVzX2pzb24sIG5hbWUsIHNhbGFyeSk6XG5cbnJldHVybiBzYWxhcmllc19qc29uXG5cbiMgdGVzdCBjb2RlXG5zYWxhcmllcyA9ICd7XCJBbGZyZWRcIiA6IDMwMCwgXCJKYW5lXCIgOiA0MDAgfSdcbm5ld19zYWxhcmllcyA9IGFkZF9lbXBsb3llZShzYWxhcmllcywgXCJNZVwiLCA4MDApXG5kZWNvZGVkX3NhbGFyaWVzID0ganNvbi5sb2FkcyhuZXdfc2FsYXJpZXMpXG5wcmludChkZWNvZGVkX3NhbGFyaWVzW1wiQWxmcmVkXCJdKVxucHJpbnQoZGVjb2RlZF9zYWxhcmllc1tcIkphbmVcIl0pXG5wcmludChkZWNvZGVkX3NhbGFyaWVzW1wiTWVcIl0pXG4iLCJzb2x1dGlvbiI6ImltcG9ydCBqc29uXG5cbiMgZml4IHRoaXMgZnVuY3Rpb24sIHNvIGl0IGFkZHMgdGhlIGdpdmVuIG5hbWVcbiMgYW5kIHNhbGFyeSBwYWlyIHRvIHNhbGFyaWVzX2pzb24sIGFuZCByZXR1cm4gaXRcbmRlZiBhZGRfZW1wbG95ZWUoc2FsYXJpZXNfanNvbiwgbmFtZSwgc2FsYXJ5KTpcbiAgICBzYWxhcmllcyA9IGpzb24ubG9hZHMoc2FsYXJpZXNfanNvbilcbiAgICBzYWxhcmllc1tuYW1lXSA9IHNhbGFyeVxuXG5yZXR1cm4ganNvbi5kdW1wcyhzYWxhcmllcylcblxuIyB0ZXN0IGNvZGVcbnNhbGFyaWVzID0gJ3tcIkFsZnJlZFwiIDogMzAwLCBcIkphbmVcIiA6IDQwMCB9J1xubmV3X3NhbGFyaWVzID0gYWRkX2VtcGxveWVlKHNhbGFyaWVzLCBcIk1lXCIsIDgwMClcbmRlY29kZWRfc2FsYXJpZXMgPSBqc29uLmxvYWRzKG5ld19zYWxhcmllcylcbnByaW50KGRlY29kZWRfc2FsYXJpZXNbXCJBbGZyZWRcIl0pXG5wcmludChkZWNvZGVkX3NhbGFyaWVzW1wiSmFuZVwiXSlcbnByaW50KGRlY29kZWRfc2FsYXJpZXNbXCJNZVwiXSkiLCJzY3QiOiJ0ZXN0X291dHB1dF9jb250YWlucyhcIjMwMFwiKVxudGVzdF9vdXRwdXRfY29udGFpbnMoXCI0MDBcIilcbnRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiODAwXCIpXG5zdWNjZXNzX21zZyhcIkdyZWF0IHdvcmshXCIpIn0=
</div>

