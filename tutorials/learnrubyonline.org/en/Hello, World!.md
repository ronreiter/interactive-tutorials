Tutorial
--------

To print things to the console, use "puts", like this

    puts 'I will be printed to the console!'

or,

    puts "I will be printed to the console!"
    
Everything between the `'` and `"` will be printed to the console.
Single quotes can't support string interpolation, which looks like this `'Hello world #{some code}'`. You need to use double quotes. Single quotes can only evaluate to a string object.
Short syntax for puts is `p` keyword , example: 
    p 'Hello world'
    
When you use puts keyword, ruby adds a newline(' \\n ') on the end of the line

    puts 'Hello World !!!'
    Hello World !!!
    => nil

     print 'Hello World !!!'
     Hello World !!!=> nil

if you want add single quotes in an string you must use `\` to escape single quotes, example:

    puts 'Hello i'm rubiest'
    #this code return error
    puts 'Hello i\'m rubiest'
    # return Hello i'm rubiest



Exercise
--------

Print "Hello, World!" to the console using puts.

Tutorial Code
-------------
    #Fix This!
    puts 'Goodbye, World!'

Expected Output
---------------
Hello, World!

Solution
--------
    #Fix This!
    puts 'Hello, World!'
