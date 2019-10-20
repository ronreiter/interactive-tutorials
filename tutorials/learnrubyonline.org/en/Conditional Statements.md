Tutorial
--------

Conditionals are used to add branching logic to your programs; they allow you to include complex behaviour that only occurs under specific conditions.

Here is the syntax of an `if` statement:

    if condition
      something to be done
    end

`condition` is an expression that can be checked for truth. If the expression evaluates to `true`, then the code within the block is executed.

Here are some examples of expressions that evaluate to `true`:

    3 < 4
    true
    "cat" == "cat"

You can combine `if` with the keyword `else`. This lets you execute one block of code if the condition is `true`, and a different block if it is `false`. 

    if condition
      something to be done
    else
      something to be done if the condition evaluates to false
    end

The `else` block will only be executed if the `if` block doesn't run, so they will never both be executed.

When you want more than two options, you can use `elsif`. This allows you to add more conditions to be checked.

Here is if/elsif/else statement syntax:

    if condition
      something to be done
    elsif different condition
      something else to be done
    else
      another different thing to be done
    end

Still only one of the code blocks will be run, because the statement only executes the code in the first applicable block; Once a condition has been satisfied, the whole statement ends. 

Below is an actual example of an `if` statement with both an `elsif` and an `else`.

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
