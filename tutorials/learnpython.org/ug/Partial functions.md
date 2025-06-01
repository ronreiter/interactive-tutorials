Tutorial
--------

فۇنكسىيە ئامبىرىدىكى قىسمەن ئىقتىدارنى ئىشلىتىپ python قىسمەن فۇنكىسىيەلەرنى قۇرالايسىز.

قىسمەن فونكىىيەلەر x پارامېتىرلىرى بولغان فۇنكسىيەنى ئازايتىلغان پارامېتىر ۋە تېخىمۇ چەكلىك ئىقتىدارى بولغان ۋە بېكىتىلگەن مۇقىم قىممەتكە ئىگە ئىقتىدارغا ئېرىشتۈرىدۇ.

ئىمپورت تەلەپ قىلىنىدۇ:

    from functools import partial

بۇ كود 8 نى قايتۇرىدۇ.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

مۇھىم ئەسكەرتىش: سۈكۈتتىكى قىممەتلەر سولدىن ئۆزگەرگۈچى مىقدارنى ئالماشتۇرۇشقا باشلايدۇ.  2 بولسا x نىڭ ئورنىنى ئالىدۇ.
dbl (4) چاقىرىلغاندا y بولسا 4 گە تەڭ بولىدۇ.  ئۇنىڭ بۇ مىسالدا ھېچقانداق پەرقى يوق ، ئەمما تۆۋەندىكى مىسالدا بار.

كۆنۈكمە
--------
ق()partial فۇنكىسىيەسىن چاقىرىپ ۋە فۇنكسىيەدىكى ئالدىنقى ئۈچ ئۆزگەرگۈچى مىقدارنى ئالماشتۇرۇش ئارقىلىق تەمىنلەنگەن فۇنكىسيەنى تەھرىرلەڭ. ئاندىن يېڭى قىسمەن فۇنكىسىيە بىلەن پەقەت بىرلا كىرگۈزگۈچى ئۆزگەرگۈچى مىقدار ئارقىلىق بېسىپ چىقىرىڭ ، بۇنداق بولغاندا چىقىرىش 60 گە تەڭ.


Tutorial Code
-------------
#Following is the exercise, function provided:
from functools import partial
def func(u, v, w, x):
    return u*4 + v*3 + w*2 + x
#Enter your code here to create and print with your partial function

Expected Output
---------------
#test_object('p')
test_output_contains('60')
success_msg('Good job!')

Solution
--------
from functools import partial
def func(u, v, w, x):
    return u*4 + v*3 + w*2 + x

p = partial(func,5,6,7)
print(p(8))
