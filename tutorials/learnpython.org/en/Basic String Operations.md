Tutorial
--------

Strings are bits of text. They can be defined as anything between quotes:

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbnByaW50KGFzdHJpbmcpXG5cbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISdcbnByaW50KGFzdHJpbmcyKSJ9
</div>
    
As you can see, the first thing you learned was printing a simple sentence. This sentence was stored by Python as a string. However, instead of immediately printing strings out, we will explore the various things you can do to them.
You can also use single quotes to assing a string. However, you will face problems if the value to be assigned itself contains single quotes.For example to assign the string in these bracket(single quotes are ' ') you need to use double quotes only like this

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChcInNpbmdsZSBxdW90ZXMgYXJlICcgJ1wiKVxuICAgIFxucHJpbnQobGVuKGFzdHJpbmcpKVxuIn0=
</div>

That prints out 12, because "Hello world!" is 12 characters long, including punctuation and spaces.

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nLmluZGV4KFwib1wiKSlcbiJ9
</div>

That prints out 4, because the location of the first occurrence of the letter "o" is 4 characters away from the first character. Notice how there are actually two o's in the phrase - this method only recognizes the first.

But why didn't it print out 5? Isn't "o" the fifth character in the string? To make things more simple, Python (and most other programming languages) start things at 0 instead of 1. So the index of "o" is 4.

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nLmNvdW50KFwibFwiKSlcbiIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

For those of you using silly fonts, that is a lowercase L, not a number one. This counts the number of l's in the string. Therefore, it should print 3.

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nWzM6N10pXG4iLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

This prints a slice of the string, starting at index 3, and ending at index 6. But why 6 and not 7? Again, most programming languages do this - it makes doing math inside those brackets easier.

If you just have one number in the brackets, it will give you the single character at that index. If you leave out the first number but keep the colon, it will give you a slice from the start to the number you left in. If you leave out the second number, if will give you a slice from the first number to the end.

You can even put negative numbers inside the brackets. They are an easy way of starting at the end of the string instead of the beginning. This way, -3 means "3rd character from the end".

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nWzM6NzoyXSlcbiIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

This prints the characters of string from 3 to 7 skipping one character. This is extended slice syntax. The general form is [start:stop:step].

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nWzM6N10pXG5wcmludChhc3RyaW5nWzM6NzoxXSlcbiAgICAiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

Note that both of them produce same output

There is no function like strrev in C to reverse a string. But with the above mentioned type of slice syntax you can easily reverse a string like this

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nWzo6LTFdKVxuICAgICIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

This

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nLnVwcGVyKCkpXG5wcmludChhc3RyaW5nLmxvd2VyKCkpXG4gICAgIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

These make a new string with all letters converted to uppercase and lowercase, respectively.

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJwcmludChhc3RyaW5nLnN0YXJ0c3dpdGgoXCJIZWxsb1wiKSlcbnByaW50KGFzdHJpbmcuZW5kc3dpdGgoXCJhc2RmYXNkZmFzZGZcIikpXG4gICAgIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

This is used to determine whether the string starts with something or ends with something, respectively. The first one will print True, as the string starts with "Hello". The second one will print False, as the string certainly does not end with "asdfasdfasdf".

<div data-datacamp-exercise="" data-height="150" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYXN0cmluZyA9IFwiSGVsbG8gd29ybGQhXCJcbmFzdHJpbmcyID0gJ0hlbGxvIHdvcmxkISciLCJzYW1wbGUiOiJhZmV3d29yZHMgPSBwcmludChhc3RyaW5nLnNwbGl0KFwiIFwiKSlcbiAgICAiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

This splits the string into a bunch of strings grouped together in a list. Since this example splits at a space, the first item in the list will be "Hello", and the second will be "world!".

Exercise
--------

Try to fix the code to print out the correct information by changing the string.

<div data-datacamp-exercise="" data-height="600" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYSA9IFwiU3RyaW5ncyBhcmUgYXdlc29tZSFcIiIsInNhbXBsZSI6InMgPSBcIkhleSB0aGVyZSEgd2hhdCBzaG91bGQgdGhpcyBzdHJpbmcgYmU/XCJcbiMgTGVuZ3RoIHNob3VsZCBiZSAyMFxucHJpbnQoXCJMZW5ndGggb2YgcyA9ICVkXCIgJShsZW4ocykpKVxuXG4jIEZpcnN0IG9jY3VycmVuY2Ugb2YgXCJhXCIgc2hvdWxkIGJlIGF0IGluZGV4IDhcbnByaW50KFwiVGhlIGZpcnN0IG9jY3VycmVuY2Ugb2YgdGhlIGxldHRlciBhID0gJWRcIiAlKGEuaW5kZXgoXCJhXCIpKSlcblxuIyBOdW1iZXIgb2YgYSdzIHNob3VsZCBiZSAyXG5wcmludChcImEgb2NjdXJzICVkIHRpbWVzXCIgJShhLmNvdW50KFwiYVwiKSkpXG5cbiMgU2xpY2luZyB0aGUgc3RyaW5nIGludG8gYml0c1xucHJpbnQoXCJUaGUgZmlyc3QgZml2ZSBjaGFyYWN0ZXJzIGFyZSAnJXMnXCIgJShhWzA6NV0pKSBcbiMgNSB0byAxMFxucHJpbnQoXCJUaGUgbmV4dCBmaXZlIGNoYXJhY3RlcnMgYXJlICclcydcIiAlKGFbNToxMF0pKSBcbiMgSnVzdCBudW1iZXIgMTJcbnByaW50KFwiVGhlIHRoaXJ0ZWVudGggY2hhcmFjdGVyIGlzICclcydcIiAlKGFbMTJdKSkgXG4jKDAtYmFzZWQgaW5kZXhpbmcpXG5wcmludChcIlRoZSBjaGFyYWN0ZXJzIHdpdGggb2RkIGluZGV4IGFyZSAnJXMnXCIgJShhWzE6OjJdKSkgXG4jIDV0aC1mcm9tLWxhc3QgdG8gZW5kXG5wcmludChcIlRoZSBsYXN0IGZpdmUgY2hhcmFjdGVycyBhcmUgJyVzJ1wiICUoYVstNTpdKSkgXG5cbiMgQ29udmVydCBldmVyeXRoaW5nIHRvIHVwcGVyY2FzZVxucHJpbnQoXCJTdHJpbmcgaW4gdXBwZXJjYXNlOiAlc1wiICUgKGEudXBwZXIoKSkpXG5cbiMgQ29udmVydCBldmVyeXRoaW5nIHRvIGxvd2VyY2FzZVxucHJpbnQoXCJTdHJpbmcgaW4gbG93ZXJjYXNlOiAlc1wiICUgKGEubG93ZXIoKSkpXG5cbiMgQ2hlY2sgaG93IGEgc3RyaW5nIHN0YXJ0c1xuaWYgYS5zdGFydHN3aXRoKFwiU3RyXCIpOlxuICAgIHByaW50KFwiU3RyaW5nIHN0YXJ0cyB3aXRoICdTdHInLiBHb29kIVwiKVxuXG4jIENoZWNrIGhvdyBhIHN0cmluZyBlbmRzXG5pZiBhLmVuZHN3aXRoKFwib21lIVwiKTpcbiAgICBwcmludChcIlN0cmluZyBlbmRzIHdpdGggJ29tZSEnLiBHb29kIVwiKVxuXG4jIFNwbGl0IHRoZSBzdHJpbmcgaW50byB0aHJlZSBzZXBhcmF0ZSBzdHJpbmdzLFxuIyBlYWNoIGNvbnRhaW5pbmcgb25seSBhIHdvcmRcbnByaW50KFwiU3BsaXQgdGhlIHdvcmRzIG9mIHRoZSBzdHJpbmc6ICVzXCIgJShhLnNwbGl0KFwiIFwiKSkpXG4iLCJzb2x1dGlvbiI6InMgPSBcIlN0cmluZ3MgYXJlIGF3ZXNvbWUhXCJcbiMgTGVuZ3RoIHNob3VsZCBiZSAyMFxucHJpbnQoXCJMZW5ndGggb2YgcyA9ICVkXCIgJShsZW4ocykpKVxuXG4jIEZpcnN0IG9jY3VycmVuY2Ugb2YgXCJhXCIgc2hvdWxkIGJlIGF0IGluZGV4IDhcbnByaW50KFwiVGhlIGZpcnN0IG9jY3VycmVuY2Ugb2YgdGhlIGxldHRlciBhID0gJWRcIiAlKHMuaW5kZXgoXCJhXCIpKSlcblxuIyBOdW1iZXIgb2YgYSdzIHNob3VsZCBiZSAyXG5wcmludChcImEgb2NjdXJzICVkIHRpbWVzXCIgJShzLmNvdW50KFwiYVwiKSkpXG5cbiMgU2xpY2luZyB0aGUgc3RyaW5nIGludG8gYml0c1xucHJpbnQoXCJUaGUgZmlyc3QgZml2ZSBjaGFyYWN0ZXJzIGFyZSAnJXMnXCIgJShzWzA6NV0pKSBcbiMgNSB0byAxMFxucHJpbnQoXCJUaGUgbmV4dCBmaXZlIGNoYXJhY3RlcnMgYXJlICclcydcIiAlKHNbNToxMF0pKSBcbiMgSnVzdCBudW1iZXIgMTJcbnByaW50KFwiVGhlIHRoaXJ0ZWVudGggY2hhcmFjdGVyIGlzICclcydcIiAlKHNbMTJdKSkgXG4jKDAtYmFzZWQgaW5kZXhpbmcpXG5wcmludChcIlRoZSBjaGFyYWN0ZXJzIHdpdGggb2RkIGluZGV4IGFyZSAnJXMnXCIgJShzWzE6OjJdKSkgXG4jIDV0aC1mcm9tLWxhc3QgdG8gZW5kXG5wcmludChcIlRoZSBsYXN0IGZpdmUgY2hhcmFjdGVycyBhcmUgJyVzJ1wiICUoc1stNTpdKSkgXG5cbiMgQ29udmVydCBldmVyeXRoaW5nIHRvIHVwcGVyY2FzZVxucHJpbnQoXCJTdHJpbmcgaW4gdXBwZXJjYXNlOiAlc1wiICUgKHMudXBwZXIoKSkpXG5cbiMgQ29udmVydCBldmVyeXRoaW5nIHRvIGxvd2VyY2FzZVxucHJpbnQoXCJTdHJpbmcgaW4gbG93ZXJjYXNlOiAlc1wiICUgKHMubG93ZXIoKSkpXG5cbiMgQ2hlY2sgaG93IGEgc3RyaW5nIHN0YXJ0c1xuaWYgcy5zdGFydHN3aXRoKFwiU3RyXCIpOlxuICAgIHByaW50KFwiU3RyaW5nIHN0YXJ0cyB3aXRoICdTdHInLiBHb29kIVwiKVxuXG4jIENoZWNrIGhvdyBhIHN0cmluZyBlbmRzXG5pZiBzLmVuZHN3aXRoKFwib21lIVwiKTpcbiAgICBwcmludChcIlN0cmluZyBlbmRzIHdpdGggJ29tZSEnLiBHb29kIVwiKVxuXG4jIFNwbGl0IHRoZSBzdHJpbmcgaW50byB0aHJlZSBzZXBhcmF0ZSBzdHJpbmdzLFxuIyBlYWNoIGNvbnRhaW5pbmcgb25seSBhIHdvcmRcbnByaW50KFwiU3BsaXQgdGhlIHdvcmRzIG9mIHRoZSBzdHJpbmc6ICVzXCIgJShzLnNwbGl0KFwiIFwiKSkpXG5cbiIsInNjdCI6InRlc3Rfb2JqZWN0KFwic1wiLCBpbmNvcnJlY3RfbXNnPVwiTWFrZSBzdXJlIHlvdSBjaGFuZ2UgdGhlIHN0cmluZyBhc3NpZ25lZCB0byBgc2AgdG8gbWF0Y2ggdGhlIGV4ZXJjaXNlIGluc3RydWN0aW9ucy5cIilcbnN1Y2Nlc3NfbXNnKFwiR3JlYXQgd29yayFcIikifQ==
</div>