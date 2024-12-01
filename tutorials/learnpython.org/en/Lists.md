Tutorial
--------

Lists are very similar to arrays. They can contain any type of variable, and they can contain as many variables as you wish. Lists can also be iterated over in a very simple manner. Here is an example of how to build a list.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

Accessing an index which does not exist generates an exception (an error).

    mylist = [1,2,3]
    print(mylist[10])

Exercise
--------

In this exercise, you will need to add numbers and strings to the correct lists using the "append" list method. You must add the numbers 1,2, and 3 to the "numbers" list, and the words 'hello' and 'world' to the strings variable.

You will also have to fill in the variable second_name with the second name in the names list, using the brackets operator `[]`. Note that the index is zero-based, so if you want to access the second item in the list, its index will be 1.

<div style="padding: 20px 0;">
    <a href="https://app.datacamp.com/workspace/new?_tag=template&templateKey=learnpython-lists&utm_source=learnpython.org&utm_medium=docs&utm_term=lists&utm_content=run_code_in_workspace"
                    style="font-size: 16px; padding: 12px 16px; border-radius: 4px; background: rgba(3, 239, 98); color: #1f2937; font-weight: 600; text-decoration: none;"
                    target="_blank">
    Run & Edit Full Tutorial
    </a>
</div>

Tutorial Code
-------------
    numbers = []
    strings = []
    names = ["John", "Eric", "Jessica"]

    # write your code here
    second_name = None


    # this code should write out the filled arrays and the second name in the names list (Eric).
    print(numbers)
    print(strings)
    print("The second name on the names list is %s" % second_name)


Expected Output
---------------

test_output_contains("[1,2,3]", no_output_msg= "Make sure that you have printed the `numbers` list.")
test_output_contains("['hello', 'world']", no_output_msg= "Make sure that you have printed the `strings` list.")
test_output_contains("The second name on the names list is Eric", no_output_msg= "Did you fill in the variable `second_name` with the second name in the names list?")
success_msg("Great Job!")

Solution
--------

numbers = []
strings = []
names = ["John", "Eric", "Jessica"]

# write your code here
numbers.append(1)
numbers.append(2)
numbers.append(3)

strings.append("hello")
strings.append("world")

second_name = names[1]

# this code should write out the filled arrays and the second name in the names list (Eric).
print(numbers)
print(strings)
print("The second name on the names list is %s" % second_name)
