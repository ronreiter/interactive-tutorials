Tutorial
--------

Python پۈتۈنلەي ئوبيېكتقا يۈزلەنگەن بولۇپ ، «تۇراقلىق ھالەتتە» ئەمەس. ئۆزگەرگۈچى مىقدارنى ئىشلىتىشتىن بۇرۇن ئېلان قىلىشىڭىز ياكى ئۇلارنىڭ تىپىنى ئېلان قىلىشىڭىزنىڭ ھاجىتى يوق. Python دىكى ھەر بىر ئۆزگەرگۈچى مىقدار ئوبيېكت.

بۇ دەرسلىك بىر قانچە ئاساسلىق ئۆزگەرگۈچى مىقدارنى ئۆتىدۇ.

### سان
Python ئىككى خىل ساننى قوللايدۇ - پۈتۈن سان (پۈتۈن سان) ۋە لەيلىمە چېكىتلىك سان (ئونلۇق سان). (ئۇ يەنە مۇرەككەپ سانلارنى قوللايدۇ ، بۇ دەرسلىكتە چۈشەندۈرۈلمەيدۇ).

پۈتۈن سانغا ئېنىقلىما بېرىش ئۈچۈن ، تۆۋەندىكى گرامماتىكىنى ئىشلىتىڭ:

    myint = 7
    print(myint)

لەيلىمە چېكىت نومۇرىنى ئېنىقلاش ئۈچۈن ، تۆۋەندىكى ئىزاھلارنىڭ بىرىنى ئىشلىتەلەيسىز:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

ھەرپ تىزمىسى يەككە نەقىل ياكى قوش تىرناق بىلەن ئېنىقلىنىدۇ.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

بۇ ئىككىسىنىڭ پەرقى شۇكى ، قوش تىرناق ئىشلىتىش ئارقىلىق ئەلچىلەرنى ئۆز ئىچىگە ئالىدۇ (ھالبۇكى بۇلار تاق تىرناق ئىشلەتسە بۇ تىزمىنى ئاخىرلاشتۇرىدۇ)

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
ۋاگونغا ئېنىقلىما بېرىشتە قوشۇمچە ئۆزگىرىشلەر بار بولۇپ ، ۋاگون قايتۇرۇش ، ئارقىغا ياندۇرۇش ۋە يۇنىكود ھەرپلىرى قاتارلىق نەرسىلەرنى ئۆز ئىچىگە ئالىدۇ. بۇلار بۇ دەرسلىكنىڭ دائىرىسىدىن ھالقىپ كەتكەن ، ئەمما [Python ھۆججىتى] (http://docs.python.org/tutorial/introduction.html#strings "Python دەرسلىكىدىكى تىزمىلار") دا يېزىلغان.

ئاددىي تىجارەتچىلەر سان ۋە تىزمىلاردا ئىجرا بولىدۇ:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

مۇشۇنىڭغا ئوخشاش بىر قۇردا بىردىن كۆپ ئۆزگەرگۈچى «بىرلا ۋاقىتتا» تاپشۇرۇق ئىشلەشكە بولىدۇ

    a, b = 3, 4
    print(a, b)

تىجارەتچىلەرنى سان بىلەن تىز ئارىلىقىنى ئارىلاشتۇرۇشنى قوللىمايدۇ:

    # This will not work!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


چېنىقىش
--------

بۇ مانېۋىرنىڭ مەقسىتى بىر قۇر ، پۈتۈن سان ۋە لەيلىمە چېكىتلىك نومۇر ھاسىل قىلىش. بۇ تىزمىنىڭ ئىسمى «سىرلىق» بولۇپ ، «ياخشىمۇسىز» دېگەن سۆزنى ئۆز ئىچىگە ئېلىشى كېرەك. لەيلىمە چېكىتلىك نومۇرنىڭ ئىسمى «myfloat» بولۇشى ھەمدە 10.0 دېگەن ساننى ئۆز ئىچىگە ئېلىشى ، پۈتۈن ساننىڭ ئىسمى «myint» بولۇشى ھەمدە 20 دېگەن سان بولۇشى كېرەك.

Tutorial Code
-------------
# change this code
mystring = None
myfloat = None
myint = None

# testing code
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)

Expected Output
---------------

test_object('mystring', incorrect_msg="Don't forget to change `mystring` to the correct value from the exercise description.")
test_object('myfloat', incorrect_msg="Don't forget to change `myfloat` to the correct value from the exercise description.")
test_object('myint', incorrect_msg="Don't forget to change `myint` to the correct value from the exercise description.")
test_output_contains("String: hello",no_output_msg= "Make sure your string matches exactly to the exercise desciption.")
test_output_contains("Float: 10.000000",no_output_msg= "Make sure your float matches exactly to the exercise desciption.")
test_output_contains("Integer: 20",no_output_msg= "Make sure your integer matches exactly to the exercise desciption.")
success_msg("Great job!")

Solution
--------

# change this code
mystring = "hello"
myfloat = 10.0
myint = 20

# testing code
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)
