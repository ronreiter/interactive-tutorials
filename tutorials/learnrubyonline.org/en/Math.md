Tutorial
--------
Math in Ruby is mostly what you would expect. + does addition, - does subtraction, * does multiplication, and / does division.
Two other ones you might not know about are 2 asterisks, and %. 2 asterisks are for exponents. 5**2 is 5 to the power of 2, which is 25. % is a little weird. In Ruby, it isn't percent, it is modulo. Modulo is like division, but it gives you the remainder of the division problem.

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
