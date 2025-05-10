Tutorial
--------

تىزىملىك سانلار گۇرپىسىغا ناھايىتى ئوخشايدۇ. ئۇلار ھەر قانداق ئۆزگەرگۈچى مىقدارنى ئۆز ئىچىگە ئالىدۇ ، ئۇلار سىز خالىغان ئۆزگەرگۈچى مىقدارنى ئۆز ئىچىگە ئالىدۇ. تىزىملىكلەرنىمۇ ناھايىتى ئاددىي ئۇسۇلدا تەكرارلىغىلى بولىدۇ. بۇ يەردە قانداق قىلىپ تىزىملىك قۇرۇشنىڭ بىر مىسالى بار.

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

مەۋجۇت بولمىغان كۆرسەتكۈچكە ئېرىشىش بۇنىڭ سىرتىدا (خاتالىق).

    mylist = [1,2,3]
    print(mylist[10])

چېنىقىش
--------

بۇ مانېۋىردا سىز «قوشۇش» تىزىملىك ئۇسۇلىنى ئىشلىتىپ توغرا تىزىملىككە سان ۋە تىزمىلارنى قوشۇشىڭىز كېرەك. سىز چوقۇم «سان» تىزىملىكىگە 1,2 ، 3 دېگەن سانلارنى ، «ئۆزگەرگۈچى» ۋە «دۇنيا» دېگەن سۆزلەرنى ھەرپ تىزمىسىغا قوشۇشىڭىز كېرەك.

سىز يەنە تىرناق مەشغۇلاتچىسى `[]` نى ئىشلىتىپ ئۆزگەرگۈچى ئىككىنچى_ ئىسىمنى ئىسىم تىزىملىكىدىكى ئىككىنچى ئىسىم بىلەن تولدۇرۇشىڭىز كېرەك. شۇنىڭغا دىققەت قىلىڭكى ، كۆرسەتكۈچ نۆلنى ئاساس قىلىدۇ ، شۇڭا تىزىملىكتىكى ئىككىنچى تۈرگە كىرمەكچى بولسىڭىز ، ئۇنىڭ كۆرسەتكۈچى 1 بولىدۇ.

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
