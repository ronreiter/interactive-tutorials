Tutorial
--------

زىننەتلىگۈچىلەر [فونكىسىيە] (http://www.learnpython.org/en/Functions "") ، [ئۇسۇل ياكى دەرىجىلەر] (http://www.learnpython.org/en/Classes%20and%20Objects ") غا ئوخشاش چاقىرىشقا بولىدىغان ئوبيېكتلارغا ئاددىي ئۆزگەرتىش ئېلىپ بارالايدۇ. بىز بۇ دەرسلىكتە فونكىسىيەنى تەتقىق قىلىمىز. گرامماتىكىسى:

    @decorator
    def functions(arg):
        return "value"

بۇنىڭغا باراۋەر:

    def function(arg):
        return "value"
    function = decorator(function) # this passes the function to the decorator, and reassigns it to the functions

كۆرگىنىڭىزدەك ، زىننەتلىگۈچى پەقەت فونكىسىيەدىن بىرنى ئېلىپ ،يەنە بىرنى قايتۇرىدىغان باشقا فونكىسىيە. مەسىلەن سىز بۇنى قىلالايسىز:

    def repeater(old_function):
        def new_function(*args, **kwds): # See learnpython.org/en/Multiple%20Function%20Arguments for how *args and **kwds works
            old_function(*args, **kwds) # we run the old function
            old_function(*args, **kwds) # we do it twice
        return new_function # we have to return the new_function, or it wouldn't reassign it to the value

بۇ فونكىسىيەنى ئىككى قېتىم تەكرارلايدۇ.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

ئۇنى چىقىرىشنى ئۆزگەرتەلەيسىز

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # modify the return value
        return new_function

كىرگۈزۈشنى ئۆزگەرتىش

    def double_Ii(old_function):
        def new_function(arg): # only works if the old function has one argument
            return old_function(arg * 2) # modify the argument passed
        return new_function

ۋە تەكشۈرۈڭ.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # This causes an error, which is better than it doing the wrong thing
            old_function(arg)
        return new_function

ئالايلى ، چىقىرىش مىقدارىنى ئۆزگىرىشچان مىقدارغا كۆپەيتمەكچى. بېزەكچىگە ئېنىقلىما بېرىپ ، ئۇنى تۆۋەندىكىدەك ئىشلىتەلەيسىز: 

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # it returns the new generator
    
    # Usage
    @multiply(3) # multiply is not a generator, but multiply(3) is
    def return_num(num):
        return num
        
    # Now return_num is decorated and reassigned into itself
    return_num(5) # should return 15

 كونا فونكىسىيە بىلەن ئۆزىڭىز خالىغان ئىشنى قىلالايسىز ، ھەتتا ئۇنىڭغا سەل قارىماڭ! ئىلغار بېزەكچىلەر يەنە ھۆججەت نامى ۋە فونكىسىيە مىقدارىنىڭ نومۇرىنى كونترول قىلالايدۇ.
بەزى ئاددى بېزەكچىلەر ئۈچۈن <http://wiki.python.org/moin/PythonDecoratorLibrary> غا كىرىڭ.

كۆنۈكمە
--------
بىر تال فۇنكسىيە مىقدارىنى زىننەتلەيدىغان زىننەتنى قايتۇرىدىغان بېزەك زاۋۇتى ياساڭ. زاۋۇت بىر تال كىرگۈچى مىقدار ، بىر تۈرنى ئېلىپ ، ئاندىن كىرگۈزۈشنىڭ توغرا تىپ ياكى ئەمەسلىكىنى تەكشۈرىدىغان فۇنكسىيە ياسايدىغان بېزەكنى قايتۇرىدۇ. ئەگەر خاتا بولسا ، مانى بېسىپ چىقىرىشى كېرەك («Bad Type») (ئەمەلىيەتتە ئۇ خاتالىق مەلۇم قىلىشى كېرەك ، ئەمما خاتالىق مەلۇم قىلىق بۇ دەرسلىكتە سۆزلەنمەيدۇ). ئەگەر گاڭگىراپ قالسىڭىز (ئۇنىڭ قانداق بولىدىغانلىقىمنى بىلمىسىڭىز.) دەرسلىك كودى ۋە مۆلچەردىكى چىقىرىشقا قاراڭ ، isinstance (type_of_object، type_of_object) ياكى تىپ (object) نى ئىشلىتىشنىڭ ياردىمى بولۇشى مۇمكىن.

Tutorial Code
-------------
def type_check(correct_type):
    #put code here

@type_check(int)
def times2(num):
    return num*2

print(times2(2))
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print(first_letter('Hello World'))
first_letter(['Not', 'A', 'String'])


Expected Output
---------------

test_output_contains("4")
test_output_contains("Bad Type")
test_output_contains("H")
test_output_contains("Bad Type")
success_msg("Good job!")

Solution
--------

def type_check(correct_type):
    def check(old_function):
        def new_function(arg):
            if (isinstance(arg, correct_type)):
                return old_function(arg)
            else:
                print("Bad Type")
        return new_function
    return check

@type_check(int)
def times2(num):
    return num*2

print(times2(2))
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print(first_letter('Hello World'))
first_letter(['Not', 'A', 'String'])
