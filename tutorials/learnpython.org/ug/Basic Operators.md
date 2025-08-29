Tutorial
--------

بۇ بۆلەك Python دىكى ئاساسىي ئەمەللەرنى قانداق ئىشلىتىشنى چۈشەندۈرۈپ بېرىدۇ.

### ھېسابلاش ئەمەللىرى       

باشقا پروگرامما تىللىرىغا ئوخشاش ، قوشۇش ، ئېلىش ، كۆپەيتىش ۋە بۆلۈش ئەمەللىرىنى سان بىلەن ئىشلىتىشكە بولىدۇ. <br>

    number = 1 + 2 * 3 / 4.0
    print(number)

بۇنىڭ جاۋابىنىڭ نېمە بولىدىغانلىقىنى پەرەز قىلىپ بېقىڭ.  Python مەشغۇلات تەرتىپىگە ئەمەل قىلامدۇ؟

ئىشلەتكىلى بولىدىغان يەنە بىر ئەمەل بولسا بۆلۈنمىنىڭ پۈتۈن سان قالدۇقىنى قايتۇرىدىغان مودۇل (%) مەشغۇلاتچىسى. dividend% divisor = قالدۇق.

    remainder = 11 % 3
    print(remainder)

ئىككى كۆپەيتىش بەلگىسىنى ئىشلىتىش ئارقىلىق دەرىجە مۇناسىۋىتى ھاسىل قىلغىلى بولىدۇ.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### تېكىست بىلەن ئەمەللەرنى ئىشلىتىش

Python دا قوشۇش ئەمىلى ئارقىلىق تېكىستلەرنى بىرلەشتۈرگىلى بولىدۇ:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python  دا يەنە كۆپەيتىش ئەمىلى ئارقىلىق تېكىستنى تەكرارلىغىلى بولىدۇ.

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### تىزىملىك بىلەن ئەمەللەرنى ئىشلىتىش

تىزىملىكنى قوشۇمچە ئەمەللەر بىلەن بىرلەشتۈرگىلى بولىدۇ:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

خۇددى تېكىستكە ئوخشاش ، Python كۆپەيتىش ئەمىلى ئارقىلىق تەكرارلانغان تىزىملىك ھاسىل قىلغىلى بولىدۇ:

    print([1,2,3] * 3)

چېنىقىش
--------

بۇ كۆنۈكمىنىڭ مەقسىتى «x_list» ۋە «y_list» دەپ ئاتىلىدىغان ئىككى تىزىملىك قۇرۇش.
بۇنىڭدا ئايرىم-ئايرىم ھالدا «x» ۋە «y» ئۆزگەرگۈچى مىقدارنىڭ 10 مىسالى بار.
سىزدىن يەنە سىز قۇرغان، «x» ۋە «y» ئۆزگەرگۈچى مىقدارلارنى ئۆز-ئىچىگە ئالىدىغا ئىككى تىزىملىكنى بىرلەشتۈرۈش ئارقىلىق، «big_list» دەپ ئاتىلىدىغان تىزىملىك قۇرۇشىڭىز تەلەپ قىلىنىدۇ.

Tutorial Code
-------------

x = object()
y = object()

# TODO: change this code
x_list = [x]
y_list = [y]
big_list = []

print("x_list contains %d objects" % len(x_list))
print("y_list contains %d objects" % len(y_list))
print("big_list contains %d objects" % len(big_list))

# testing code
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print("Almost there...")
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print("Great!")

Expected Output
---------------

Ex().check_object('x_list').has_equal_value(expr_code = 'len(x_list)')
Ex().check_object('y_list').has_equal_value(expr_code = 'len(y_list)')
Ex().check_object('big_list').has_equal_value(expr_code = 'len(big_list)')
success_msg('Good work!')

Solution
--------

x = object()
y = object()

# TODO: change this code
x_list = [x] * 10
y_list = [y] * 10
big_list = x_list + y_list

print("x_list contains %d objects" % len(x_list))
print("y_list contains %d objects" % len(y_list))
print("big_list contains %d objects" % len(big_list))

# testing code
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print("Almost there...")
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print("Great!")
