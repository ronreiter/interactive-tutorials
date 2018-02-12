Tutorial
--------
To extend the functionality of our methods, we can define them with parameters and provide them with arguments. Parameters are names we put between the method's parentheses when we define the method and arguments are peices of code that we put in the method's parentheses when we call the method. Take this example:

    def clap_hands(number)
        puts "Clap" * number
    end

In this example, we pass ```number``` as a parameter. Then within our method, we are putting the string "Clap" to the console and we times it by whatever number we pass in. 

Just like methods that do not have parameters, we need to call the method for it to take effect. So in this example we would call our ```clap_hands``` method like so:

    clap_hands(3)

This would ```puts``` the string "Clap" three times to the console. The value of ```3``` is the argument that we are providing the method.

Exercise
--------
Using the provide code, create a method called ```square``` that takes a parameter ```number``` and then ```puts``` the squared result of the number you pass through. To pass the test, square the number ```2```. Remember to call the method!

Tutorial Code
-------------
    #define the method here
    def
    end

    #don't forget to call the method with the argument

Expected Output
---------------
4

Solution
--------
def square(number)
    puts number ** 2
end

square(2)