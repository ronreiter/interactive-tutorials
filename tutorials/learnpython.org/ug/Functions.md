Tutorial
--------

### ئىقتىدار دېگەن نېمە؟

ئىقتىدارلار كودىڭىزنى پايدىلىق بۆلەكلەرگە بۆلۈشنىڭ قۇلايلىق ئۇسۇلى بولۇپ ، بىزنىڭ كودىمىزنى زاكاز قىلىشىمىزغا ، ئۇنى تېخىمۇ ئاسان ئوقۇشقا ، قايتا ئىشلىتىشكە ۋە بىر ئاز ۋاقىت تېجەپ بېرىدۇ. ئىقتىدارلار يەنە كۆرۈنمە يۈزىگە ئېنىقلىما بېرىشنىڭ ئاچقۇچلۇق ئۇسۇلى ، پروگراممېرلار ئۇلارنىڭ كودىنى ئورتاقلىشالايدۇ.

### Python دا ئىقتىدارلارنى قانداق يازىسىز؟

ئالدىنقى دەرسلىكلەردە كۆرگىنىمىزدەك ، Python بۆلەكلەردىن پايدىلىنىدۇ.

بىر بۆلەك: فورماتتا يېزىلغان كود رايونى.

    block_head:
        1st block line
        2nd block line
        ...

بىر بۆلەك سىزىق تېخىمۇ كۆپ Python كودى (ھەتتا باشقا بىر بۆلەك) بولسا ، بۆلەك بېشى تۆۋەندىكى فورماتتا:
block_keyword block_name (argument1, argument2, ...)
سىز بىلگەن ئاچقۇچلۇق سۆزلەرنى «ئەگەر» ، «ئۈچۈن» ۋە «بىر مەزگىل» دىن ئىبارەت.

بوغما يىلاندىكى ئىقتىدارلار توسۇش ئاچقۇچلۇق سۆز «def» ئارقىلىق ئېنىقلىنىدۇ ، ئاندىن فۇنكىسىيەنىڭ ئىسمى توساقنىڭ ئىسمى بولىدۇ.
مەسىلەن:

    def my_function():
        print("Hello From My Function!")


فۇنكسىيە يەنە تالاش-تارتىشلارنى قوبۇل قىلىشى مۇمكىن (چاقىرغۇچىدىن ئىقتىدارغا ئۆزگەرگۈچى مىقدار).
مەسىلەن:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


ئىقتىدار ئاچقۇچلۇق سۆز- «قايتۇرۇش» ئارقىلىق تېلېفون ئۇرغۇچىغا قىممەت قايتۇرىدۇ.
مەسىلەن:

    def sum_two_numbers(a, b):
        return a + b

### Python دىكى ئىقتىدارلارنى قانداق دەيسىز؟

فۇنكسىيەنىڭ نامىنى () دىن كېيىن يېزىڭ ، لازىملىق تالاش-تارتىشلارنى تىرناق ئىچىگە قويۇڭ.
مەسىلەن ، يۇقىرىدا يېزىلغان ئىقتىدارلارغا تېلېفون قىلايلى (ئالدىنقى مىسالدا):

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


چېنىقىش
--------

بۇ مانېۋىردا سىز بار بولغان ئىقتىدارنى ئىشلىتىسىز ، ھەمدە ئۆزىڭىزنى قوشقاندا تولۇق ئىقتىدارلىق پروگرامما قۇرىسىز.

1. تۆۋەندىكى تىزىملىكلەرنى قايتۇرىدىغان «list_benefits ()» دېگەن ئىقتىدارنى قوشۇڭ: «تېخىمۇ تەشكىللىك كود» ، «تېخىمۇ كۆپ ئوقۇغىلى بولىدىغان كود» ، «ئاسان كودنى قايتا ئىشلىتىش» ، «پروگراممېرلارنىڭ كودنى ئورتاقلىشىشى ۋە ئۇلىنىشىغا يول قويۇش».

2. "build_sentence (info)" دېگەن فۇنكسىيەنى قوشۇڭ ، ئۇ بىر قۇرنى ئۆز ئىچىگە ئالغان يەككە تالاش-تارتىشنى قوبۇل قىلىدۇ ھەمدە بېرىلگەن ھەرپتىن باشلانغان ۋە ھەرپ تىزمىسى بىلەن ئاخىرلاشقان جۈملىنى قايتۇرىدۇ "ئىقتىدارنىڭ پايدىسى!"

3. يۈگۈرۈپ بارلىق ئىقتىدارلارنىڭ بىرلىكتە ئىشلەۋاتقانلىقىنى كۆرۈڭ!

Tutorial Code
-------------

# Modify this function to return a list of strings as defined above
def list_benefits():
    return []

# Modify this function to concatenate to each benefit - " is a benefit of functions!"
def build_sentence(benefit):
    return ""

def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print(build_sentence(benefit))

name_the_benefits_of_functions()


Expected Output
---------------

test_output_contains("More organized code is a benefit of functions!")
test_output_contains("More readable code is a benefit of functions!")
test_output_contains("Easier code reuse is a benefit of functions!")
test_output_contains("Allowing programmers to share and connect code together is a benefit of functions!")
success_msg("Nice work!")

Solution
--------

# Modify this function to return a list of strings as defined above
def list_benefits():
    return "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

# Modify this function to concatenate to each benefit - " is a benefit of functions!"
def build_sentence(benefit):
    return "%s is a benefit of functions!" % benefit


def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print(build_sentence(benefit))

name_the_benefits_of_functions()
