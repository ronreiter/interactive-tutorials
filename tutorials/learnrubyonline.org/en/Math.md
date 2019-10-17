Tutorial
--------
You can use Ruby to perform mathematical calculations. The four standard operators are probably familiar to you:

- `+` for addition
- `-` for subtraction
- `*` for multiplication
- `/` for division

Two other less-familiar but important operators are `**` and `%`.

`**` is used for exponents; `5**2` is 5 to the power of 2, which is 25. 

`%` is a little weird. In Ruby, it isn't percent, it is modulo. Modulo is like division, but it gives you just the remainder of a division problem.

    moduloAnswer=5%2 #moduloAnswer=1
    exponentAnswer=2**3 #exponentAnswer=8

Exercise
--------
Use math operations to turn old variables into new ones that the if statement will print true to the console when run.

Tutorial Code
-------------
numberOne = 6
numberTwo = 8
numberThree = 5
numberFour = 12
numberFive = 36

testOne = numberTwo  numberThree #fill in the blank to make this 40
testTwo = numberFive  numberOne #fill in the blank to make this 0
testThree = numberFour  numberThree #fill in the blank to make this 7
if testOne == 40 && testTwo == 0 && testThree == 7
    puts true
end

Expected Output
---------------
true

Solution
--------

numberOne = 6
numberTwo = 8
numberThree = 5
numberFour = 12
numberFive = 36

testOne = numberTwo * numberThree #fill in the blank to make this 40
testTwo = numberFive % numberOne #fill in the blank to make this 0
testThree = numberFour - numberThree #fill in the blank to make this 7
if testOne == 40 && testTwo == 0 && testThree == 7
    puts true
end
