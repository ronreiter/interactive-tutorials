Tutorial
--------
The unless statement syntax is almost the same as if statement syntax.

    unless condition
      #thing to be done if the condition is false
    end


It is basically the reverse of the if statement, because if statements will only be done if the condition is true, but the unless statement will only be done if the condition is false. Unless statements can also be used with else statements like the if statements.

Here is while statement syntax.

    while condition
        #something to do
    end

While statements will keep doing what's in the loop, until the condition is false.
Until statements are the opposite of while statements. Here is their syntax.

    until condition
        #something to do
    end

###Important!
Make sure that you don't make an **infinite loop**. An infinite loop is a while or until statement that does not end, because the condition never changes to what will stop the loop.
Exercise
--------
Make a while or until statement from scratch that will ```puts``` "I'm looping!" to the console 7 times.

Tutorial Code
-------------
   #Make your loop below!

Expected Output
---------------
I'm looping!
I'm looping!
I'm looping!
I'm looping!
I'm looping!
I'm looping!
I'm looping!

Solution
--------
   #Make your loop below!
condition = 0
while condition<=6
    puts "I'm looping!"
    condition = condition + 1
end
