Tutorial
--------

Just like arrays, hashes allow you to store multiple values together. However, while arrays store values with a numerical index, hashes store information using key-value pairs. Each piece of information in the hash has a unique label, and you can use that label to access the value.

To create a hash, use `Hash.new`, or `myHash={}`. For example:

    myHash={
        "Key" => "value",
        "Key2" => "value2"
    }

This creates a hash with two values, each one indexed with a key. You can access a value like so:

    puts myHash["Key"] # puts value

The other method of creating a hash is shown below:

    myHash=Hash.new()
    myHash["Key"]="value"
    myHash["Key2"]="value2"

Instead of using a string as a key, you can also use a symbol, like this:

    myHash=Hash.new()
    myHash[:Key]="value"
    myHash[:Key2]="value2"

You can access a value keyed to a symbol in the same way.

    puts myHash[:Key] # puts "value"
    
When using `myHash={}` with symbols, symbols are used differently, like this

    myHash={
        Key: "value",
        Key2: "value2",
    }
    puts myHash[:Key] # puts "value"

Exercise
--------

Create a hash called `myFirstHash` and make the first key `Dad` equal to `Dave`.

Tutorial Code
-------------

    #Make your hash below


    puts myFirstHash["Dad"]
    
Expected Output
---------------
Dave
Solution
--------

    #Make your hash below
    myFirstHash={
        "Dad" => "Dave",
    }
    puts myFirstHash["Dad"]
