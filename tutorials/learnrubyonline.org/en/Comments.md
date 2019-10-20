Tutorial
--------

As you start to write more complicated programs, it will become necessary to start using comments. Comments allows you to add explanations to your code, so that other developers (and you) can always understand what a particular piece of code is for. It's good practice to comment your code extensively.

There are two types of comments, multi-line comments, and single-line comments. Single-line are started with `#` and multi-line comments are started with `=begin` and ended with `=end`.

    =begin
    I'm a comment!
    =end

Single-line comments can be started after another thing in the same line.

    puts "Hi!" #I'm a comment, but Hi! will still be printed to the console.

Exercise
--------
Using whichever method you prefer, comment everything out EXCEPT "Don't comment me out!" still needs to be printed out.

Tutorial Code
-------------
puts "Hi!"
puts "Hi!"
puts "Hi!"
puts "Hi!"
puts "Don't comment me out!"
puts "Hi!"
puts "Hi!"

Expected Output
---------------
Don't comment me out!

Solution
--------

=begin
puts "Hi!"
puts "Hi!"
puts "Hi!"
puts "Hi!"
=end
puts "Don't comment me out!"
=begin
puts "Hi!"
puts "Hi!"
=end
