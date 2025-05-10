Tutorial
--------

بۇ بۆلەك Python دىكى ئاساسىي مەشغۇلاتچىلارنى قانداق ئىشلىتىشنى چۈشەندۈرۈپ بېرىدۇ.

### ھېسابلاش مەشغۇلاتچىلىرى       

باشقا پروگرامما تىللىرىغا ئوخشاش ، قوشۇش ، ئېلىش ، كۆپەيتىش ۋە بۆلۈش مەشغۇلاتلىرىنى سان بىلەن ئىشلىتىشكە بولىدۇ. <br>

    number = 1 + 2 * 3 / 4.0
    print(number)

بۇنىڭ جاۋابىنىڭ نېمە بولىدىغانلىقىنى پەرەز قىلىپ بېقىڭ.  بوغما يىلان مەشغۇلات تەرتىپىگە ئەمەل قىلامدۇ؟

ئىشلەتكىلى بولىدىغان يەنە بىر تىجارەتچى بۆلەكنىڭ پۈتۈن ساننى قايتۇرىدىغان مودۇل (%) مەشغۇلاتچىسى. dividend% divisor = قالدۇق.

    remainder = 11 % 3
    print(remainder)

ئىككى كۆپەيتىش بەلگىسىنى ئىشلىتىش كۈچ مۇناسىۋىتى ھاسىل قىلىدۇ.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### ھەرپ تىزمىسى بىلەن مەشغۇلاتچىلارنى ئىشلىتىش

Python قوشۇش مەشغۇلاتچىسى ئارقىلىق تۇتاشتۇرۇش لىنىيىسىنى قوللايدۇ:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python يەنە كۆپەيتىش تىزمىسىنى كۆپەيتىشنى قوللايدۇ.

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### تىزىملىك بىلەن مەشغۇلاتچىلارنى ئىشلىتىش

تىزىملىكنى قوشۇمچە تىجارەتچىلەر بىلەن بىرلەشتۈرگىلى بولىدۇ:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

خۇددى تىزمىلاردىكىگە ئوخشاش ، Python كۆپەيتىش مەشغۇلاتچىسى ئارقىلىق تەكرارلانغان تەرتىپ بىلەن يېڭى تىزىملىك ھاسىل قىلىشنى قوللايدۇ:

    print([1,2,3] * 3)

چېنىقىش
--------

بۇ مانېۋىرنىڭ مەقسىتى «x_list» ۋە «y_list» دەپ ئاتىلىدىغان ئىككى تىزىملىك قۇرۇش.
بۇنىڭدا ئايرىم-ئايرىم ھالدا «x» ۋە «y» ئۆزگەرگۈچى مىقدارنىڭ 10 مىسالى بار.
سىز يەنە «big_list» دەپ ئاتىلىدىغان تىزىملىك قۇرۇشىڭىز تەلەپ قىلىنىدۇ
سىز قۇرغان ئىككى تىزىملىكنى بىرلەشتۈرۈش ئارقىلىق «x» ۋە «y» ئۆزگەرگۈچى مىقدارلار ھەر قېتىمدا 10 قېتىم.

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
