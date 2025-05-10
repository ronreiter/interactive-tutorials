Tutorial
--------

Python شارائىتنى باھالاش ئۈچۈن ئاق رەڭلىك لوگىكا ئىشلىتىدۇ. Boolean قىممىتى True ۋە False ئىپادىلەش سېلىشتۇرۇلغاندا ياكى باھالانغاندا قايتۇرۇلىدۇ. مەسىلەن:

    x = 2
    print(x == 2) # prints out True
    print(x == 3) # prints out False
    print(x < 3) # prints out True

ئۆزگىرىشچان تاپشۇرۇقنىڭ تەڭ باراۋەر تىجارەتچى "=" ئارقىلىق ئېلىپ بېرىلىدىغانلىقىغا دىققەت قىلىڭ ، ھالبۇكى ئىككى ئۆزگەرگۈچى مىقدارنى سېلىشتۇرۇش قوش تەڭلىك مەشغۇلاتچىسى "==" ئارقىلىق ئېلىپ بېرىلىدۇ. «باراۋەر ئەمەس» تىجارەتچى «! =» دەپ بەلگە قويۇلغان.

### Boolean مەشغۇلاتچىلىرى

"ۋە" ۋە "ياكى" بولان تىجارەتچىلىرى مۇرەككەپ بولان ئىپادىسىنى قۇرۇشقا يول قويىدۇ ، مەسىلەن:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Your name is John, and you are also 23 years old.")

    if name == "John" or name == "Rick":
        print("Your name is either John or Rick.")

### «in» مەشغۇلاتچىسى

«In» مەشغۇلاتچىسى تىزىملىك قاتارلىق تەكرارلىنىدىغان ئوبيېكت قاچىسى ئىچىدە مەلۇم جىسىمنىڭ بار-يوقلۇقىنى تەكشۈرۈشكە ئىشلىتىلىدۇ:

    name = "John"
    if name in ["John", "Rick"]:
        print("Your name is either John or Rick.")

Python تىرناقنىڭ ئورنىغا كود بۆلەكلىرىگە ئېنىقلىما بېرىدۇ. ئۆلچەملىك Python كۆرسەتكۈچ 4 بوشلۇق ، گەرچە بەتكۈچ ۋە باشقا بوشلۇق چوڭلۇقى ماس كەلسىلا ئىشلەيدۇ. كود بۆلەكلىرىنىڭ ھېچقانداق ئاخىرلىشىشقا ئېھتىياجلىق ئەمەسلىكىگە دىققەت قىلىڭ.

بۇ يەردە Python نىڭ «if» جۈملىسىنى كود بۆلەكلىرى ئارقىلىق ئىشلىتىشنىڭ بىر مىسالى:

    statement = False
    another_statement = True
    if statement is True:
        # do something
        pass
    elif another_statement is True: # else if
        # do something else
        pass
    else:
        # do another thing
        pass

مەسىلەن:

    x = 2
    if x == 2:
        print("x equals two!")
    else:
        print("x does not equal to two.")

تۆۋەندىكىلەرنىڭ بىرى توغرا بولسا ، بىر بايان راست دەپ باھالىنىدۇ:
1.
2. «قۇرۇق» دەپ قارالمىغان جىسىم ئۆتۈپ كەتتى.

بۇ يەردە قۇرۇق دەپ قارالغان ئوبيېكتلارغا ئائىت بىر قانچە مىسال بار:
1. قۇرۇق قۇر: ""
2. قۇرۇق تىزىملىك: []
3. نۆل سان: 0
4. يالغان رەڭ ئۆزگەرگۈچى مىقدار: يالغان

### The 'is' operator

قوش تەڭلىك مەشغۇلاتچىسى "==" غا ئوخشىمايدىغىنى ، "is" مەشغۇلاتچىسى ئۆزگەرگۈچى مىقدارنىڭ قىممىتىگە ماس كەلمەيدۇ ، بەلكى ئەھۋالنىڭ ئۆزى. مەسىلەن:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # Prints out True
    print(x is y) # Prints out False

### «ئەمەس» تىجارەتچى

ئاقىلانە ئىپادىلەشتىن بۇرۇن «ئەمەس» نى ئىشلىتىش:

    print(not False) # Prints out True
    print((not False) == (False)) # Prints out False

چېنىقىش
--------

بىرىنچى بۆلەكتىكى ئۆزگەرگۈچى مىقدارنى ئۆزگەرتىڭ ، ئەگەر ھەر بىر جۈملە توغرا بولسا ھەل بولىدۇ.

Tutorial Code
-------------

# change this code
number = 10
second_number = 10
first_array = []
second_array = [1,2,3]

if number > 15:
    print("1")

if first_array:
    print("2")

if len(second_array) == 2:
    print("3")

if len(first_array) + len(second_array) == 5:
    print("4")

if first_array and first_array[0] == 1:
    print("5")

if not second_number:
    print("6")

Expected Output
---------------

test_output_contains("1", no_output_msg= "Did you print out 1 if `number` is greater than 15?")
test_output_contains("2", no_output_msg= "Did you print out 2 if there exists a list `first_array`?")
test_output_contains("3", no_output_msg= "Did you print out 3 if the length of `second_array` is 2?")
test_output_contains("4", no_output_msg= "Did you print out 4 if len(first_array) + len(second_array) == 5?")
test_output_contains("5", no_output_msg= "Did you print out 5 if first_array and first_array[0] == 1?")
test_output_contains("6", no_output_msg= "Did you print out 6 if not second_number?")
success_msg("Great Work!")

Solution
--------

# change this code
number = 16
second_number = 0
first_array = [1,2,3]
second_array = [1,2]

if number > 15:
    print("1")

if first_array:
    print("2")

if len(second_array) == 2:
    print("3")

if len(first_array) + len(second_array) == 5:
    print("4")

if first_array and first_array[0] == 1:
    print("5")

if not second_number:
    print("6")
