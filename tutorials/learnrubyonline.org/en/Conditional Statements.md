Tutorial
--------
Here is if statement syntax.

    if condition
      something to be done
    end

In the above example, condition is a boolean, or something that, when evaluated, will be a boolean, and between the condition and "end", you type what you want to happen.
Here is if/else statement syntax.

    if condition
      something to be done
    else
      something to be done if the condition evaluates to false
    end

The else will only be executed if the if statement isn't run, so they will never both be executed.
Here is if/elsif/else statement syntax.

    if condition
      something to be done
    elsif different condition
      something else to be done
    else
      another different thing to be done
    end

Still only one of the code blocks will be run, because when the if statement is executed, it skips over all the elsif and else statements that go with it.
Here is an actual example.

    booleanOne = true
    randomCode = "Hi!"
    if booleanOne
      puts "I will be printed!"
    elsif randomCode.length>=1
      puts "Even though the above code is true, I won't be executed because the earlier if statement was true!"
    else
      puts "I won't be printed because the if statement was executed!"
    end


Exercise
--------
Change the value of language so that the elsif statement is the only block being executed.

Tutorial Code
-------------
language = "English"
if language === "English"
  puts "Hello!"
elsif language === "Spanish"
  puts "Hola!"
else
  puts "I don't know that language!"
end

Expected Output
---------------
Hola!

Solution
--------

language = "Spanish"
if language === "English"
  puts "Hello!"
elsif language === "Spanish"
  puts "Hola!"
else
  puts "I don't know that language!"
end
