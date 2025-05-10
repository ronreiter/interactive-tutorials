Tutorial
--------

Python دىكى ھەر بىر ئىقتىدار نورمال ئېلان قىلىنسا ، ئالدىن بېكىتىلگەن سانلارنى قوبۇل قىلىدۇ:

    def myfunction(first, second, third):
        # do something with the 3 variables
        ...

تۆۋەندىكى گرامماتىكىنى ئىشلىتىپ ئۆزگىرىشچان سانلارنى قوبۇل قىلىدىغان ئىقتىدارلارنى ئېلان قىلىشقا بولىدۇ:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

«Therest» ئۆزگەرگۈچى مىقدار ئۆزگىرىشچان تىزىملىك بولۇپ ، ئالدىنقى 3 تالاش-تارتىشتىن كېيىن «foo» ئىقتىدارىغا بېرىلگەن بارلىق تالاش-تارتىشلارنى قوبۇل قىلىدۇ. شۇڭا «foo» (1 ، 2 ، 3 ، 4 ، 5) نى چاقىرىش بېسىپ چىقىرىلىدۇ:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

تۆۋەندىكى گرامماتىكىنى ئىشلىتىپ فۇنكسىيە تالاش-تارتىشلىرىنى ئاچقۇچلۇق سۆز ئارقىلىق ئەۋەتىشكىمۇ بولىدۇ. تۆۋەندىكى كود تۆۋەندىكىدەك ئۈنۈم بېرىدۇ: 
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))



The "bar" function receives 3 arguments. If an additional "action" argument is received, and it instructs on summing up the numbers, then the sum is printed out. Alternatively, the function also knows it must return the first argument, if the value of the "number" parameter, passed into the function, is equal to "first".

Exercise
--------

Fill in the `foo` and `bar` functions so they can receive a variable amount of arguments (3 or more)
The `foo` function must return the amount of extra arguments received.
The `bar` must return `True` if the argument with the keyword `magicnumber` is worth 7, and `False` otherwise.

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
