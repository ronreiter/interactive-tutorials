Tutorial
--------

Strings are bits of text. They can be defined as anything between quotes:

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISdcbiIsInNvbHV0aW9uIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISdcbiIsInNjdCI6IiJ9
</div>
    
As you can see, the first thing you learned was printing a simple sentence. This sentence was stored by Python as a string. However, instead of immediately printing strings out, we will explore the various things you can do to them.
You can also use single quotes to assing a string. However, you will face problems if the value to be assigned itself contains single quotes.For example to assign the string in these bracket(single quotes are ' ') you need to use double quotes only like this

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChcInNpbmdsZSBxdW90ZXMgYXJlICcgJ1wiKVxuICAgIFxucHJpbnQobGVuKGFzdHJpbmcpKVxuIiwic29sdXRpb24iOiJwcmludChcInNpbmdsZSBxdW90ZXMgYXJlICcgJ1wiKVxuICAgIFxucHJpbnQobGVuKGFzdHJpbmcpKVxuIiwic2N0IjoiIn0=
</div>

That prints out 12, because "Hello world!" is 12 characters long, including punctuation and spaces.

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nLmluZGV4KFwib1wiKSlcbiIsInNvbHV0aW9uIjoicHJpbnQoYXN0cmluZy5pbmRleChcIm9cIikpIiwic2N0IjoiIn0=
</div>

That prints out 4, because the location of the first occurrence of the letter "o" is 4 characters away from the first character. Notice how there are actually two o's in the phrase - this method only recognizes the first.

But why didn't it print out 5? Isn't "o" the fifth character in the string? To make things more simple, Python (and most other programming languages) start things at 0 instead of 1. So the index of "o" is 4.

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nLmNvdW50KFwibFwiKSlcbiIsInNvbHV0aW9uIjoicHJpbnQoYXN0cmluZy5jb3VudChcImxcIikpIiwic2N0IjoiIn0=
</div>

For those of you using silly fonts, that is a lowercase L, not a number one. This counts the number of l's in the string. Therefore, it should print 3.

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nWzM6N10pXG4iLCJzb2x1dGlvbiI6InByaW50KGFzdHJpbmdbMzo3XSkiLCJzY3QiOiIifQ==
</div>

This prints a slice of the string, starting at index 3, and ending at index 6. But why 6 and not 7? Again, most programming languages do this - it makes doing math inside those brackets easier.

If you just have one number in the brackets, it will give you the single character at that index. If you leave out the first number but keep the colon, it will give you a slice from the start to the number you left in. If you leave out the second number, if will give you a slice from the first number to the end.

You can even put negative numbers inside the brackets. They are an easy way of starting at the end of the string instead of the beginning. This way, -3 means "3rd character from the end".

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nWzM6NzoyXSlcbiIsInNvbHV0aW9uIjoicHJpbnQoYXN0cmluZ1szOjc6Ml0pIiwic2N0IjoiIn0=
</div>

This prints the characters of string from 3 to 7 skipping one character. This is extended slice syntax. The general form is [start:stop:step].

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nWzM6N10pXG5wcmludChhc3RyaW5nWzM6NzoxXSlcbiAgICAiLCJzb2x1dGlvbiI6InByaW50KGFzdHJpbmdbMzo3XSlcbnByaW50KGFzdHJpbmdbMzo3OjFdKSIsInNjdCI6IiJ9
</div>

Note that both of them produce same output

There is no function like strrev in C to reverse a string. But with the above mentioned type of slice syntax you can easily reverse a string like this

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nWzo6LTFdKVxuICAgICIsInNvbHV0aW9uIjoicHJpbnQoYXN0cmluZ1s6Oi0xXSlcbiIsInNjdCI6IiJ9
</div>

This

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nLnVwcGVyKCkpXG5wcmludChhc3RyaW5nLmxvd2VyKCkpXG4gICAgIiwic29sdXRpb24iOiJwcmludChhc3RyaW5nLnVwcGVyKCkpXG5wcmludChhc3RyaW5nLmxvd2VyKCkpIiwic2N0IjoiIn0=
</div>

These make a new string with all letters converted to uppercase and lowercase, respectively.

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nLnN0YXJ0c3dpdGgoXCJIZWxsb1wiKSlcbnByaW50KGFzdHJpbmcuZW5kc3dpdGgoXCJhc2RmYXNkZmFzZGZcIikpXG4gICAgIiwic29sdXRpb24iOiJwcmludChhc3RyaW5nLnN0YXJ0c3dpdGgoXCJIZWxsb1wiKSlcbnByaW50KGFzdHJpbmcuZW5kc3dpdGgoXCJhc2RmYXNkZmFzZGZcIikpIiwic2N0IjoiIn0=
</div>

This is used to determine whether the string starts with something or ends with something, respectively. The first one will print True, as the string starts with "Hello". The second one will print False, as the string certainly does not end with "asdfasdfasdf".

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJhZmV3d29yZHMgPSBwcmludChhc3RyaW5nLnNwbGl0KFwiIFwiKSlcbiAgICAiLCJzb2x1dGlvbiI6ImFmZXd3b3JkcyA9IHByaW50KGFzdHJpbmcuc3BsaXQoXCIgXCIpKSIsInNjdCI6IiJ9
</div>

This splits the string into a bunch of strings grouped together in a list. Since this example splits at a space, the first item in the list will be "Hello", and the second will be "world!".

Exercise
--------

Try to fix the code to print out the correct information by changing the string.

<div data-datacamp-exercise="" data-height="500" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicyA9IFwiSGV5IHRoZXJlISB3aGF0IHNob3VsZCB0aGlzIHN0cmluZyBiZT9cIlxuIyBMZW5ndGggc2hvdWxkIGJlIDIwXG5wcmludChcIkxlbmd0aCBvZiBzID0gJWRcIiAlIGxlbihzKSlcblxuIyBGaXJzdCBvY2N1cnJlbmNlIG9mIFwiYVwiIHNob3VsZCBiZSBhdCBpbmRleCA4XG5wcmludChcIlRoZSBmaXJzdCBvY2N1cnJlbmNlIG9mIHRoZSBsZXR0ZXIgYSA9ICVkXCIgJSBzLmluZGV4KFwiYVwiKSlcblxuIyBOdW1iZXIgb2YgYSdzIHNob3VsZCBiZSAyXG5wcmludChcImEgb2NjdXJzICVkIHRpbWVzXCIgJSBzLmNvdW50KFwiYVwiKSlcblxuIyBTbGljaW5nIHRoZSBzdHJpbmcgaW50byBiaXRzXG5wcmludChcIlRoZSBmaXJzdCBmaXZlIGNoYXJhY3RlcnMgYXJlICclcydcIiAlcyhbOjVdKSkgIyBTdGFydCB0byA1XG5wcmludCBcIlRoZSBuZXh0IGZpdmUgY2hhcmFjdGVycyBhcmUgJyVzJ1wiICVzKFs1OjEwXSkpICMgNSB0byAxMFxucHJpbnQgXCJUaGUgdGhpcnRlZW50aCBjaGFyYWN0ZXIgaXMgJyVzJ1wiICVzKFsxMl0pKSAjIEp1c3QgbnVtYmVyIDEyXG5wcmludCBcIlRoZSBjaGFyYWN0ZXJzIHdpdGggb2RkIGluZGV4IGFyZSAnJXMnXCIgJXMoWzE6OjJdKSkgIygwLWJhc2VkIGluZGV4aW5nKVxucHJpbnQgXCJUaGUgbGFzdCBmaXZlIGNoYXJhY3RlcnMgYXJlICclcydcIiAlcyhbLTU6XSkpICMgNXRoLWZyb20tbGFzdCB0byBlbmRcblxuIyBDb252ZXJ0IGV2ZXJ5dGhpbmcgdG8gdXBwZXJjYXNlXG5wcmludChcIlN0cmluZyBpbiB1cHBlcmNhc2U6ICVzXCIgJSAocy51cHBlcigpKSlcblxuIyBDb252ZXJ0IGV2ZXJ5dGhpbmcgdG8gbG93ZXJjYXNlXG5wcmludChcIlN0cmluZyBpbiBsb3dlcmNhc2U6ICVzXCIgJSAocy5sb3dlcigpKSlcblxuIyBDaGVjayBob3cgYSBzdHJpbmcgc3RhcnRzXG5pZiBzLnN0YXJ0c3dpdGgoXCJTdHJcIik6XG4gICAgcHJpbnQoXCJTdHJpbmcgc3RhcnRzIHdpdGggJ1N0cicuIEdvb2QhXCIpXG5cbiMgQ2hlY2sgaG93IGEgc3RyaW5nIGVuZHNcbmlmIHMuZW5kc3dpdGgoXCJvbWUhXCIpOlxuICAgIHByaW50KFwiU3RyaW5nIGVuZHMgd2l0aCAnb21lIScuIEdvb2QhXCIpXG5cbiMgU3BsaXQgdGhlIHN0cmluZyBpbnRvIHRocmVlIHNlcGFyYXRlIHN0cmluZ3MsXG4jIGVhY2ggY29udGFpbmluZyBvbmx5IGEgd29yZFxucHJpbnQoXCJTcGxpdCB0aGUgd29yZHMgb2YgdGhlIHN0cmluZzogJXNcIiAlKHMuc3BsaXQoXCIgXCIpKSlcbiAgICAiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>