Tutorial
--------
ئادەتتە بىز كودتىكى مەلۇم بىر جايدا def ھالقىلىق سۆزنى ئىشلىتىپ فۇنكسىيەگە ئېنىقلىما بېرىمىز ۋە ئۇنى ئىشلىتىشكە ئېھتىياجلىق بولغاندا چاقىرىمىز.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

ھازىر بۇ فونكىسىيەنى بىر يەرگە ئېنىقلاپ ، ئۇنى چاقىرىشنىڭ ئورنىغا ، بىز python نىڭ ئىشلەتكەن ئورۇندا ئېنىقلىما بېرىلگەن lambda فۇنكسىيەسىنى ئىشلىتەلەيمىز. شۇڭا بىز بىر يەردە فۇنكسىيە ئىنىقلىشىمىزغا ھاجەت يوق.

ئۇلارنىڭ ئىسمى بولۇشىنىڭ ھاجىتى يوق ، شۇڭا ئۇلار نامسىز فونكىسىيە دەپ ئاتىلىدۇ. بىز lambda ھالقىلىق سۆزنى ئىشلىتىپ lambda فونكىسىيەسىنى ئېنىقلايمىز.

    your_function_name = lambda inputs : output

شۇڭا lambda فونكىسىيەسىنى ئىشلەتسەك يۇقارقى يىغىندا مىسالى مۇنداق بولىدۇ:

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

بۇ يەردە بىز ئۆزگەرگۈچى مىقدار ** sum ** غا lambda فۇنكىسىيەسىنى تەقسىملەۋاتىمىز ، مىقدارلارنى يەنى a ۋە b نى بەرگەندىن كېيىن ، ئۇ نورمال فونكىسىيەگە ئوخشاش ئىشلەيدۇ.



كۆنۈكمە
--------
Lambda فۇنكسىيەسىنى ئىشلىتىپ پروگرامما يېزىڭ ، بېرىلگەن تىزىملىكتىكى ساننىڭ تاق ياكى ئەمەسلىكىنى تەكشۈرۈڭ. ئەگەر نۆۋەتتىكى سان تاق بولسا «True» نى بېسىپ چىقىرىڭ ياكى ئۇنداق بولمىسا «False» نى بېسىڭ.

Tutorial Code
-------------
l = [2,4,7,3,14,19]
for i in l:
    # your code here

Expected Output
---------------
test_output_contains("False")
test_output_contains("False")
test_output_contains("True")
test_output_contains("True")
test_output_contains("False")
test_output_contains("True")
success_msg("Nice work!")

Solution
--------
l = [2,4,7,3,14,19]
for i in l:
    # your code here
    my_lambda = lambda x : (x % 2) == 1
    print(my_lambda(i))
