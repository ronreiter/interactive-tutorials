Tutorial
--------

List Comprehensions is a very powerful tool, which creates a new list based on another list, in a single, readable line. 

For example, let's say we need to create a list of integers which specify the length of each word in a certain sentence, but only if the word is not the word "the".

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoic2VudGVuY2UgPSBcInRoZSBxdWljayBicm93biBmb3gganVtcHMgb3ZlciB0aGUgbGF6eSBkb2dcIlxud29yZHMgPSBzZW50ZW5jZS5zcGxpdCgpXG53b3JkX2xlbmd0aHMgPSBbXVxuZm9yIHdvcmQgaW4gd29yZHM6XG4gICAgICBpZiB3b3JkICE9IFwidGhlXCI6XG4gICAgICAgICAgd29yZF9sZW5ndGhzLmFwcGVuZChsZW4od29yZCkpXG5wcmludCh3b3JkcykiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

Using a list comprehension, we could simplify this process to this notation:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoic2VudGVuY2UgPSBcInRoZSBxdWljayBicm93biBmb3gganVtcHMgb3ZlciB0aGUgbGF6eSBkb2dcIlxud29yZHMgPSBzZW50ZW5jZS5zcGxpdCgpXG53b3JkX2xlbmd0aHMgPSBbbGVuKHdvcmQpIGZvciB3b3JkIGluIHdvcmRzIGlmIHdvcmQgIT0gXCJ0aGVcIl1cbnByaW50KHdvcmRzKSIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

Exercise
--------

Using a list comprehension, create a new list called "newlist" out of the list "numbers", which contains only the positive numbers from the list, as integers.

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoibnVtYmVycyA9IFszNC42LCAtMjAzLjQsIDQ0LjksIDY4LjMsIC0xMi4yLCA0NC42LCAxMi43XVxubmV3bGlzdCA9IFtfX19dXG5wcmludChuZXdsaXN0KVxuXG4iLCJzb2x1dGlvbiI6Im51bWJlcnMgPSBbMzQuNiwgLTIwMy40LCA0NC45LCA2OC4zLCAtMTIuMiwgNDQuNiwgMTIuN11cbm5ld2xpc3QgPSBbaW50KHgpIGZvciB4IGluIG51bWJlcnMgaWYgeCA+IDBdXG5wcmludChuZXdsaXN0KSIsInNjdCI6InRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiWzM0LCA0NCwgNjgsIDQ0LCAxMl1cIilcbnN1Y2Nlc3NfbXNnKFwiVmVyeSBuaWNlIVwiKSJ9
</div>