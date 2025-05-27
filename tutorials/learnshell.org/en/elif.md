# Tutorial
--------
In Bash scripting, `elif` is used to handle multiple conditions in an `if` statement. It stands for "else if" and allows you to check additional conditions if the initial `if` condition is false. It's useful for branching  beyond just `if` and `else`.

<b> Example: </b>

```bash
if [ $num -eq 1 ]; then
    echo "One"
elif [ $num -eq 2 ]; then
    echo "Two"
else
    echo "Other"
fi
```

# Exercise 
In this exercise, you will need to use an `if`, `elif`, and `else` statement to evaluate the value of a variable called `color`.

Your task is to:
- Print `"You chose black!"` if the value of `color` is `"black"`
- Print `"You chose green!"` if the value is `"green"`

- Print `"You chose purple!"` if the value is `"purple"`
- Print `"You chose orange!"` if the value is `"orange"`
- Print `"Unknown/uncataloged color, please try again!"` for any other value

Set `color="black"` to begin, and write the conditional logic that produces the correct output.

# Tutorial Code
```bash
#!/bin/bash
#enter your code here
```
# Expected Output
You chose black!

# Solution
```bash
#!/bin/bash

color="black"

if [ "$color" == "black" ]; then
    echo "You chose black!"
elif [ "$color" == "green" ]; then
    echo "You chose green!"

elif [ "$color" == "purple" ]; then
    echo "You chose purple!"
 
elif [ "$color" == "orange" ]; then
    echo "You chose orange!"   
    
else
    echo "Unknown/uncataloged color, please try again!"
fi
```

[[Welcome]]
