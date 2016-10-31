Tutorial
--------

A dictionary is a data type similar to arrays, but works with keys and values instead of indexes. Each value stored in a dictionary can be accessed using a key, which is any type of object (a string, a number, a list, etc.) instead of using its index to address it.

For example, a database of phone numbers could be stored using a dictionary like this:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicGhvbmVib29rID0ge31cbnBob25lYm9va1tcIkpvaG5cIl0gPSA5Mzg0Nzc1NjZcbnBob25lYm9va1tcIkphY2tcIl0gPSA5MzgzNzcyNjRcbnBob25lYm9va1tcIkppbGxcIl0gPSA5NDc2NjI3ODFcbnByaW50KHBob25lYm9vaykiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

Alternatively, a dictionary can be initialized with the same values in the following notation:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicGhvbmVib29rID0ge1xuICAgIFwiSm9oblwiIDogOTM4NDc3NTY2LFxuICAgIFwiSmFja1wiIDogOTM4Mzc3MjY0LFxuICAgIFwiSmlsbFwiIDogOTQ3NjYyNzgxfVxucHJpbnQocGhvbmVib29rKSIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

### Iterating over dictionaries

Dictionaries can be iterated over, just like a list. However, a dictionary, unlike a list, does not keep the order of the values stored in it. To iterate over key value pairs, use the following syntax:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoicGhvbmVib29rID0ge1xuICAgIFwiSm9oblwiIDogOTM4NDc3NTY2LFxuICAgIFwiSmFja1wiIDogOTM4Mzc3MjY0LFxuICAgIFwiSmlsbFwiIDogOTQ3NjYyNzgxfSIsInNhbXBsZSI6ImZvciBuYW1lLCBudW1iZXIgaW4gcGhvbmVib29rLml0ZW1zKCk6XG4gICAgcHJpbnQoXCJQaG9uZSBudW1iZXIgb2YgJXMgaXMgJWRcIiAlKG5hbWUsIG51bWJlcikpIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

### Removing a value

To remove a specified index, use either one of the following notations:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoicGhvbmVib29rID0ge1xuICAgIFwiSm9oblwiIDogOTM4NDc3NTY2LFxuICAgIFwiSmFja1wiIDogOTM4Mzc3MjY0LFxuICAgIFwiSmlsbFwiIDogOTQ3NjYyNzgxfSIsInNhbXBsZSI6ImRlbCBwaG9uZWJvb2tbXCJKb2huXCJdXG5wcmludChwaG9uZWJvb2spIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

or:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoicGhvbmVib29rID0ge1xuICAgIFwiSm9oblwiIDogOTM4NDc3NTY2LFxuICAgIFwiSmFja1wiIDogOTM4Mzc3MjY0LFxuICAgIFwiSmlsbFwiIDogOTQ3NjYyNzgxfSIsInNhbXBsZSI6InBob25lYm9vay5wb3AoXCJKb2huXCIpXG5wcmludChwaG9uZWJvb2spIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

Exercise
--------

Add "Jake" to the phonebook with the phone number 938273443, and remove Jill from the phonebook.

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicGhvbmVib29rID0ge1xuICAgIFwiSm9oblwiIDogOTM4NDc3NTY2LFxuICAgIFwiSmFja1wiIDogOTM4Mzc3MjY0LFxuICAgIFwiSmlsbFwiIDogOTQ3NjYyNzgxXG59XG5cbiMgd3JpdGUgeW91ciBjb2RlIGhlcmVcblxuXG4jIHRlc3RpbmcgY29kZVxuaWYgXCJKYWtlXCIgaW4gcGhvbmVib29rOlxuICAgIHByaW50KFwiSmFrZSBpcyBsaXN0ZWQgaW4gdGhlIHBob25lYm9vay5cIilcbmlmIFwiSmlsbFwiIG5vdCBpbiBwaG9uZWJvb2s6XG4gICAgcHJpbnQoXCJKaWxsIGlzIG5vdCBsaXN0ZWQgaW4gdGhlIHBob25lYm9vay5cIikiLCJzb2x1dGlvbiI6InBob25lYm9vayA9IHtcbiAgICBcIkpvaG5cIiA6IDkzODQ3NzU2NixcbiAgICBcIkphY2tcIiA6IDkzODM3NzI2NCxcbiAgICBcIkppbGxcIiA6IDk0NzY2Mjc4MVxufVxuXG4jIHdyaXRlIHlvdXIgY29kZSBoZXJlXG5waG9uZWJvb2tbXCJKYWtlXCJdID0gOTM4MjczNDQzXG5kZWwgcGhvbmVib29rW1wiSmlsbFwiXVxuXG4jIHRlc3RpbmcgY29kZVxuaWYgXCJKYWtlXCIgaW4gcGhvbmVib29rOlxuICAgIHByaW50KFwiSmFrZSBpcyBsaXN0ZWQgaW4gdGhlIHBob25lYm9vay5cIilcbmlmIFwiSmlsbFwiIG5vdCBpbiBwaG9uZWJvb2s6XG4gICAgcHJpbnQoXCJKaWxsIGlzIG5vdCBsaXN0ZWQgaW4gdGhlIHBob25lYm9vay5cIikiLCJzY3QiOiJ0ZXN0X291dHB1dF9jb250YWlucyhcIkpha2UgaXMgbGlzdGVkIGluIHRoZSBwaG9uZWJvb2suXCIpXG50ZXN0X291dHB1dF9jb250YWlucyhcIkppbGwgaXMgbm90IGxpc3RlZCBpbiB0aGUgcGhvbmVib29rLlwiKVxuc3VjY2Vzc19tc2coXCJOaWNlIHdvcmshXCIpIn0=
</div>
