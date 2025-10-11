Tutorial
--------

Python دىكى ھەر بىر فونكىسىە نورمال ئېنىقلانسا، ئالدىن بېكىتىلگەن سانلارنى قوبۇل قىلىدۇ:

    def myfunction(first, second, third):
        # do something with the 3 variables
        ...

تۆۋەندىكى گرامماتىكىنى ئىشلىتىپ ئۆزگىرىشچان سانلارنى قوبۇل قىلىدىغان فونكىسىيەنى ئېنىقلاشقا بولىدۇ:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

«Therest» ئۆزگەرگۈچى مىقدار بىر تىزىملىك بولۇپ ، ئالدىنقى 3 مىقداردىن كېيىن «foo» فونكىسىيەسىگە بېرىلگەن بارلىق مىقدارلارنى قوبۇل قىلىدۇ. شۇڭا «foo (1 ، 2 ، 3 ، 4 ، 5)» نى چاقىرىش تۆۋەندىكىلەرنى بېسىپ چىقىرىلىدۇ:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

تۆۋەندىكى گرامماتىكىنى ئىشلىتىپ فۇنكسىيە مىقدارلىرىنى ئاچقۇچلۇق سۆز ئارقىلىق ئەۋەتىشكىمۇ بولىدۇ. تۆۋەندىكى كود تۆۋەندىكىدەك ئۈنۈم بېرىدۇ: 
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))



«bar» فۇنكىيەسى 3 مىقدار تاپشۇرۇۋالىدۇ. ئەگەر قوشۇمچە «action» مىقدارى قوبۇل قىلىنسا، ھەمدە ئۇ سانلارنى يىغىنچاقلاشقا بۇيرۇلسا ، ئۇنداقتا بۇ يىغىندا بېسىپ چىقىرىلىدۇ. ئۇنىڭدىن باشقا ، بۇ فونكىسىە يەنە چوقۇم بىرىنچى مىقدارنى قايتۇرىدىغانلىقىنى بىلىدۇ ، ئەگەر فونكىسىەگە ئۆتكەن «سان» پارامېتىرىنىڭ قىممىتى «بىرىنچى» بىلەن تەڭ بولغان تەقدىردە.

كۆنۈكمە
--------

«Foo» ۋە «bar» فۇنكىسىيەسىنى تولدۇرۇڭ ، ئۇلار ئوخشىمىغان ساندىكى مىقدارلارنى قوبۇل قىلالايدۇ (3 ياكى ئۇنىڭدىن يۇقىرى)
"Foo" فۇنكىسىسى قوبۇل قىلىنغان قوشۇمچە مىقدارلارنىڭ سانىنى قايتۇرۇشى كېرەك.
ئەگەر «magicnumber» ھالقىلىق سۆز بىلەن بولغان مىقدار 7 بولسا ، «bar» چوقۇم «True» نى قايتۇرۇشى كېرەك.

Tutorial Code
-------------

# edit the functions prototype and implementation
def foo(a, b, c):
    pass

def bar(a, b, c):
    pass


# test code
if foo(1, 2, 3, 4) == 1:
    print("Good.")
if foo(1, 2, 3, 4, 5) == 2:
    print("Better.")
if bar(1, 2, 3, magicnumber=6) == False:
    print("Great.")
if bar(1, 2, 3, magicnumber=7) == True:
    print("Awesome!")

Expected Output
---------------

test_output_contains("Good.")
test_output_contains("Better.")
test_output_contains("Great.")
test_output_contains("Awesome!")
success_msg("Great work!")

Solution
--------
# edit the functions prototype and implementation
def foo(a, b, c, *args):
    return len(args)

def bar(a, b, c, **kwargs):
    return kwargs["magicnumber"] == 7


# test code
if foo(1, 2, 3, 4) == 1:
    print("Good.")
if foo(1, 2, 3, 4, 5) == 2:
    print("Better.")
if bar(1, 2, 3, magicnumber=6) == False:
    print("Great.")
if bar(1, 2, 3, magicnumber=7) == True:
    print("Awesome!")
