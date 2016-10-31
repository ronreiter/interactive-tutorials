Tutorial
--------

Generators are very easy to implement, but a bit difficult to understand.

Generators are used to create iterators, but with a different approach. Generators are simple functions which return an iterable set of items, one at a time, in a special way.

When an iteration over a set of item starts using the for statement, the generator is run. Once the generator's function code reaches a "yield" statement, the generator yields its execution back to the for loop, returning a new value from the set. The generator function can generate as many values (possibly infinite) as it wants, yielding each one in its turn.

Here is a simple example of a generator function which returns 7 random integers:

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiaW1wb3J0IHJhbmRvbVxuXG5kZWYgbG90dGVyeSgpOlxuICAgICMgcmV0dXJucyA2IG51bWJlcnMgYmV0d2VlbiAxIGFuZCA0MFxuICBmb3IgaSBpbiByYW5nZSg2KTpcbiAgICB5aWVsZCByYW5kb20ucmFuZGludCgxLCA0MClcblxuICAgICMgcmV0dXJucyBhIDd0aCBudW1iZXIgYmV0d2VlbiAxIGFuZCAxNVxuICAgIHlpZWxkIHJhbmRvbS5yYW5kaW50KDEsMTUpXG5cbmZvciByYW5kb21fbnVtYmVyIGluIGxvdHRlcnkoKTpcbiAgICAgICBwcmludChcIkFuZCB0aGUgbmV4dCBudW1iZXIgaXMuLi4gJWQhXCIgJShyYW5kb21fbnVtYmVyKSkiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

This function decides how to generate the random numbers on its own, and executes the yield statements one at a time, pausing in between to yield execution back to the main for loop.

Exercise
--------

Write a generator function which returns the Fibonacci series. They are calculated using the following formula: The first two numbers of the series is always equal to 1, and each consecutive number returned is the sum of the last two numbers.
Hint: Can you use only two variables in the generator function? Remember that assignments can be done simultaneously. The code

    a = 1
    b = 2
    a, b = b, a

will simultaneously switch the values of a and b.

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBmaWxsIGluIHRoaXMgZnVuY3Rpb25cbmRlZiBmaWIoKTpcbiAgICBwYXNzICN0aGlzIGlzIGEgbnVsbCBzdGF0ZW1lbnQgd2hpY2ggZG9lcyBub3RoaW5nIHdoZW4gZXhlY3V0ZWQsIHVzZWZ1bCBhcyBhIHBsYWNlaG9sZGVyLlxuXG4jIHRlc3RpbmcgY29kZVxuaW1wb3J0IHR5cGVzXG5pZiB0eXBlKGZpYigpKSA9PSB0eXBlcy5HZW5lcmF0b3JUeXBlOlxuICAgIHByaW50KFwiR29vZCwgVGhlIGZpYiBmdW5jdGlvbiBpcyBhIGdlbmVyYXRvci5cIilcblxuICAgIGNvdW50ZXIgPSAwXG4gICAgZm9yIG4gaW4gZmliKCk6XG4gICAgICAgIHByaW50KG4pXG4gICAgICAgIGNvdW50ZXIgKz0gMVxuICAgICAgICBpZiBjb3VudGVyID09IDEwOlxuICAgICAgICAgICAgYnJlYWsiLCJzb2x1dGlvbiI6IiMgZmlsbCBpbiB0aGlzIGZ1bmN0aW9uXG5kZWYgZmliKCk6XG4gICAgYSwgYiA9IDEsIDFcbiAgICB3aGlsZSAxOlxuICAgICAgICB5aWVsZCBhXG4gICAgICAgIGEsIGIgPSBiLCBhICsgYlxuXG4jIHRlc3RpbmcgY29kZVxuaW1wb3J0IHR5cGVzXG5pZiB0eXBlKGZpYigpKSA9PSB0eXBlcy5HZW5lcmF0b3JUeXBlOlxuICAgIHByaW50KFwiR29vZCwgVGhlIGZpYiBmdW5jdGlvbiBpcyBhIGdlbmVyYXRvci5cIilcblxuICAgIGNvdW50ZXIgPSAwXG4gICAgZm9yIG4gaW4gZmliKCk6XG4gICAgICAgIHByaW50KG4pXG4gICAgICAgIGNvdW50ZXIgKz0gMVxuICAgICAgICBpZiBjb3VudGVyID09IDEwOlxuICAgICAgICAgICAgYnJlYWsiLCJzY3QiOiIifQ==
</div>
