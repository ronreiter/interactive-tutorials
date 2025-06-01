Tutorial
--------

### فونكىسىيە دېگەن نېمە؟

فونكىسىيە كودىڭىزنى پايدىلىق بۆلەكلەرگە بۆلۈشنىڭ قۇلايلىق ئۇسۇلى بولۇپ ، بىزنىڭ كودىمىزنى تەرتىپكە سېلىشىمىزغا ، ئۇنى تېخىمۇ ئاسان ئوقۇشقا ، قايتا ئىشلىتىشكە ۋە ۋاقتىمىزنى تېجىشىمىزگە ياردەم بېرىدۇ. ئىقتىدارلار يەنە كۆرۈنمە يۈزىگە ئېنىقلىما بېرىشنىڭ ئاچقۇچلۇق ئۇسۇلى ، پروگراممېرلار ئۇلارنىڭ كودىنى ئورتاقلىشالايدۇ.

### Python دا فونكىسىيەنى قانداق يازىسىز؟

ئالدىنقى دەرسلىكلەردە كۆرگىنىمىزدەك ، Python بۆلەكلەردىن پايدىلىنىدۇ.

بىر بۆلەك: فورماتتا يېزىلغان كود رايونى.

    block_head:
        1st block line
        2nd block line
        ...

بىر بۆلەك قۇرىدا تېخىمۇ كۆپ Python كودى (ھەتتا باشقا بىر بۆلەك) بولسا ، بۆلەك بېشى تۆۋەندىكى فورماتتا:
block_keyword block_name (argument1, argument2, ...)
سىز بىلگەن ئاچقۇچلۇق سۆزلەرنى «if» ،«for» ۋە «while» دىن ئىبارەت.

Python دا يىلاندىكى فونكىسىيە بولسا بۆلەك ئاچقۇچلۇق سۆزى «def» ئارقىلىق ئېنىقلىنىدۇ ، ئاندىن فۇنكىسىيەنىڭ ئىسمى بۆلەكنىڭ ئىسمى بولىدۇ.
مەسىلەن:

    def my_function():
        print("Hello From My Function!")


فۇنكسىيە يەنە ئۆزگەرگۈچى مىقدارلارنى قوبۇل قىلىشى مۇمكىن (چاقىرغۇچىدىن فونكىسىيەگە تەمىنلەنگەن ئۆزگەرگۈچى مىقدار).
مەسىلەن:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


فونكىسىيە ئاچقۇچلۇق سۆز- «return» ئارقىلىق چاقىرغۇچىغا قىممەت قايتۇرىدۇ.
مەسىلەن:

    def sum_two_numbers(a, b):
        return a + b

### Python دىكى فونكىسىيەنى قانداق چاقىرىسىز؟

فۇنكسىيەنىڭ نامىنى () دىن بۇرۇن يېزىڭ ، لازىملىق مىقدارلارنى تىرناق ئىچىگە قويۇڭ.
مەسىلەن ، يۇقىرىدا يېزىلغان فونكىسىيەنى چاقىرايلى (ئالدىنقى مىسالدا):

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


كۆنۈكمە
--------

بۇ مەشىقتە سىز بار بولغان فونكىسىيەنى ئىشلىتىسىز ، ھەمدە ئۆزىڭىزنىڭكىنى قوشۇش ئارقىلىق تولۇق ئىقتىدارلىق پروگرامما قۇرىسىز.

1. تۆۋەندىكى تىزىملىكلەرنى قايتۇرىدىغان «list_benefits ()» دېگەن فونكىسىيەنى قوشۇڭ: «تېخىمۇ تەشكىللىك كود» ، «تېخىمۇ كۆپ ئوقۇغىلى بولىدىغان كود» ، «ئاسان كودنى قايتا ئىشلىتىش» ، «پروگراممېرلارنىڭ كودنى ئورتاقلىشىشى ۋە ئۇلىنىشىغا يول قويۇش».

2. "build_sentence (info)" دېگەن فۇنكسىيەنى قوشۇڭ ، ئۇ بىر قۇرنى ئۆز ئىچىگە ئالغان يەككە مىقدارنى قوبۇل قىلىدۇ ھەمدە بېرىلگەن ھەرپتىن باشلانغان ۋە ھەرپ تىزمىسى بىلەن ئاخىرلاشقان "ئىقتىدارنىڭ پايدىسى!" جۈملىنى قايتۇرىدۇ 

3. كودنى يۈرگۈزۈپ بارلىق ئىقتىدارلارنىڭ بىرلىكتە ئىشلەۋاتقانلىقىنى كۆرۈڭ!

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
