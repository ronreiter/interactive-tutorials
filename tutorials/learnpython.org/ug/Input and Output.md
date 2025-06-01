Tutorial
--------
كىرگۈزۈشنى قۇبۇل قىلىش ۋە لازىملىق ئۇسۇلدا چىقىرىشنى كۆرسىتىش كود يېزىشتا مۇھىم رول ئوينايدۇ. شۇڭا دىققەتنى كىرگۈزۈشكە ۋە
ھەر خىل سانلىق مەلۇمات تىپلىرىنىڭ چىقىرىلىشىغا قارىتايلى.

### input ()
بۇ قۇرنىڭ ئاخىرىغا بارسىلا كىرگۈزۈشكە باشلايدۇ. بوشلۇق بولماسلىقى كېرەكلىكىنى ئەستە تۇتۇش لازىم ئەلۋەتتە. كىرگۈزۈش يېڭى قۇر ھەرپ بىلەن ئاخىرلىشىدۇ ، ئەگەر كىرگۈزۈش لىنىيىسىدە بوشلۇق بولسا خاتالىق كېلىپ چىقىدۇ

    # Prints out the input received from stdin
    astring=input()# give hello as input
    print(input())

كىرگۈزۈشنى ئالغاندىن كېيىن int () ، float () ، str () قاتارلىق ئىقتىدارلارنى ئىشلىتىپ ئۇلارنى لازىملىق سانلىق مەلۇمات تىپىمىزغا ئايلاندۇرالايمىز.

    num=int(input())
    print num
    decimalnum=input()
    decimalnum=float(input()
    print decimalnum

### بىر قۇردا بوشلۇق ئارقىلىق ئايرىلغان ئىككى ياكى ئۇنىڭدىن ئارتۇق سانلىق مەلۇمات تۈرىنى قانداق كىرگۈزۈش كېرەك؟
بۇ يەردە  ()split ۋە ()map فۇنكىسىيەلىرىنى ئىشلىتىمىز

    #give two integers in first line and more than two integers in third line
    a, b = map(int, input().split())
    array = input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # prints first two integers from first line and sum of integers of second line

### چىقىرىش فورماتى
باسما باياناتىنىڭ ئاپتوماتىك ھالدا يېڭى قۇر قىستۇرغانلىقىنى ھېس قىلغان بولۇشىڭىز مۇمكىن. يۇقارقى كودتىكىگە ئوخشاش پەشنىڭ ئىشلىتىلىشى ئارقىلىق بوشلۇق بىلەن ئايرىلغان يەككە قۇردىكى قىممەتلەرنى بېسىپ چىقىرىشقا بولىدۇ.
Sys مودۇلى چىقىرىش فورماتى ئۈچۈن ھەر خىل فونكىسىيەلەر بىلەن تەمىنلەيدۇ ، ئەمما بۇ يەردە فورماتلاشنىڭ ئاساسلىق بىلىملىرىنى تەلەپ بويىچە چىقىرىش ئۈچۈن ئىشلىتىشنى ئۆگىنىمىز. چىقىرىش فورماتىنى ئۆگىنىدىغان بىر قانچە مىسالنى كۆرۈپ باقايلى

    a = 5
    b = 0.63
    c = "hello"
    print("a is : %d, b is %0.4f,c is %s" % (a,b,c))

چىقىرىش چوقۇم چۈشىنىشلىك بولىشى كېرەك.

كۆنۈكمە
--------

ئىشلەتكۈچىدىن ئۇلارنىڭ ئىسمى ، يېشى ۋە دۆلىتىنى كىرگۈزۈشىنى تەلەپ قىلىدىغان پروگرامما يېزىڭ. پروگرامما ئاندىن بۇ ئۇچۇرلارنى جۈملىنى ئۆز ئىچىگە ئالغان ئۇچۇرنى بېسىپ چىقىرىشى كېرەك. بۇ پروگرامما تۆۋەندىكىلەرنى ئۆز ئىچىگە ئېلىشى كېرەك:

1. «input()» ئارقىلىق ئىسىم كىرگۈزۈش.
2. `input () using ئارقىلىق ياشنى كىرگۈزۈش ، ھەمدە ئۇنى سانغا ئايلاندۇرۇش.
3. `input () ئارقىلىق دۆلەت نامىنى كىرگۈزۈش.
4. ئىسىم ، ياش ۋە دۆلەتنى ئۆز ئىچىگە ئالغان جۈملىنى كۆرسىتىش ئۈچۈن چىقىرىشنى فورماتلاش.

بۇ پروگرامما Python دا كىرگۈزۈش بىر تەرەپ قىلىش ۋە ھەرىپ تىزمىسى فورماتنى كۆرسىتىشى كېرەك.

Tutorial Code
-------------

    # Taking the name input using input()
    name = input("Enter your name: ")
    
    # Taking the age input using input() and converting it to integer
    age = int(input("Enter your age: "))
    
    # Taking the country input using input()
    country = input("Enter your country: ")
    
    # Displaying the formatted sentence with name, age, and country
    print("Hello, my name is {}, I am {} years old, and I am from {}.".format(name, age, country))


Expected Output
---------------

    Enter your name: John
    Enter your age: 25
    Enter your country: USA
    Hello, my name is John, I am 25 years old, and I am from USA.
    

Solution
-------------

    # Taking the name input using input()
    name = input("Enter your name: ")
    
    # Taking the age input using input() and converting it to integer
    age = int(input("Enter your age: "))
    
    # Taking the country input using input()
    country = input("Enter your country: ")
    
    # Displaying the formatted sentence with name, age, and country
    print("Hello, my name is {}, I am {} years old, and I am from {}.".format(name, age, country)) name is {}, I am {} years old, and I am from {}.".format(name, age, country))
