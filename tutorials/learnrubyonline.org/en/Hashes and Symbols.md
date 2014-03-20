Tutorial
--------
Hashes are similar to arrays. Basically, the difference is how you get data. For example,

    myArray=[0, 1, 2]
    # Get the data by numbers.
    puts myArray[0] # prints 0
Hashes are different. They are defined using `Hash.new`, or `myHash={}`. For example,

    myHash={
        "Key" => "value",
        "Key2" => "value2",
    }
    puts myHash["Key"] # puts value
Note the commas.
Another way to make a hash, is

    myHash=Hash.new()
    myHash["Key"]="value"
    myHash["Key2"]="value2"
    puts myHash["Key"] # puts value
Instead of using a string as the key, you can use a symbol, like this

    myHash=Hash.new()
    myHash[:Key]="value"
    myHash[:Key2]="value2"
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
