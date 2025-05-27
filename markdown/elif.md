# Tutorial
--------
In Bash scripting, `elif` is used to handle multiple conditions in an `if` statement. It stands for "else if" and allows you to check additional conditions if the initial `if` condition is false. It's useful for branching logic beyond just `if` and `else`.

<b> Example: </b>

```bash
if [ $num -eq 1 ]; then
    echo "One"
elif [ $num -eq 2 ]; then
    echo "Two"
else
    echo "Other"
fi
