Tutorial
--------

Python بولسا C ئۇسلۇبىدىكى فورماتنى ئىشلىتىپ يېڭى ، فورماتلانغان تىزمىلارنى ھاسىل قىلىدۇ. «%» ئەمىلى «tuple» (مۇقىم چوڭلۇق تىزىملىكى) ئىچىگە ئورالغان بىر يۈرۈش ئۆزگەرگۈچى مىقدارنى فورماتلاشقا ئىشلىتىلىدۇ ، بۇ فورمات شەكى «ئۆزگەرگۈچى مىقدار بەلگىلىگۈچىلەر» بىلەن نورمال تېكىستنى ئۆز ئىچىگە ئالىدۇ ، ھەمدە «%s» ۋە «%d» غا ئوخشاش ئالاھىدە بەلگىلەرنى ئۆز ئىچىگە ئالىدۇ.

ئئاالايلۇق ، ئىشلەتكۈچى ئىسمىڭىز بىلەن «name» دەپ ئاتىلىدىغان ئۆزگەرگۈچى مىقدار بار ، ئاندىن ئۇنى بېسىپ چىقارماقچى (ئۇ ئىشلەتكۈچىگە سالام يوللاڭ.)

    # This prints out "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

ئىككى ياكى ئۇنىڭدىن ئارتۇق ئۆزگەرگۈچى مىقدارلارنى بېسىش ئۈچۈن ، بىر جۈپ (تىرناق) ئىشلىتىڭ:

    # This prints out "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

ھەرپ تىزمىسى بولمىغان ھەر قانداق نەرسىنى %s مەشغۇلاتچىسى ئارقىلىقمۇ فورماتلىغىلى بولىدۇ. ئۇ ئوبيېكتنىڭ «repr» ئۇسۇلىدىن قايتىدىغان ھەرپ تىزمىسى تىزما شەكلىدە فورماتلىنىدۇ. مەسىلەن:

    # This prints out: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

بۇ يەردە سىز بىلىشكە تېگىشلىك بىر قىسىم ئاساسلىق دەلىللىگۈچىلەر بار:


"%s - تىزما (ياكى سانغا ئوخشاش ھەرپ تىزمىسى بار ھەر قانداق جىسىم)"

`%d - پۈتۈن سان`

"%f - كەسىر سان"

"%. <رەقەم سانى> f - چېكىتنىڭ ئوڭ تەرىپىگە مۇقىم مىقداردىكى ئونلۇق كەسىرلىك سانلار."

"% x /% X -ئون-ئالتىلىك ئىپادىلەشتىكى پۈتۈن سان (كىچىك ھەرپ / چوڭ ھەرپ)"


كۆنۈكمە
--------

تۆۋەندىكى گرامماتىكىدىن پايدىلىنىپ سانلىق مەلۇماتلارنى بېسىپ چىقىرىدىغان فورمات تىزمىسىنى يېزىشىڭىز لازىم:
    `Hello John Doe. Your current balance is $53.44.`

Tutorial Code
-------------

data = ("John", "Doe", 53.44)
format_string = "Hello"

print(format_string % data)

Expected Output
---------------
#test_output_contains("Hello John Doe. Your current balance is $53.44.", no_output_msg= "Make sure you add the `%s` in the correct spaces to the `format_string` to meeet the exercise goals!")
test_object('format_string')
success_msg('Great work!')

Solution
--------

data = ("John", "Doe", 53.44)
format_string = "Hello %s %s. Your current balance is $%s."

print(format_string % data)
