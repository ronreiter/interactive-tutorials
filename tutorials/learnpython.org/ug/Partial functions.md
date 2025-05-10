Tutorial
--------

فۇنكسىيە ئامبىرىدىكى قىسمەن ئىقتىدارنى ئىشلىتىپ بوغما يىلاندا قىسمەن ئىقتىدارلارنى قۇرالايسىز.

قىسمەن ئىقتىدارلار x پارامېتىرلىرى بىلەن فۇنكسىيەنى بىر ئاز پارامېتىر ۋە تېخىمۇ چەكلىك ئىقتىدار ئۈچۈن بېكىتىلگەن مۇقىم قىممەتكە ئىگە ئىقتىدارغا ئېرىشتۈرەلەيدۇ.

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
dbl (4) چاقىرىلغاندا y 4 گە تەڭ بولىدۇ.  ئۇ بۇ مىسالدا ھېچقانداق پەرقى يوق ، ئەمما تۆۋەندىكى مىسالدا قىلىدۇ.

چېنىقىش
--------
قىسمەن () چاقىرىش ۋە فۇنكسىيە () دىكى ئالدىنقى ئۈچ ئۆزگەرگۈچى مىقدارنى ئالماشتۇرۇش ئارقىلىق تەمىنلەنگەن ئىقتىدارنى تەھرىرلەڭ. ئاندىن يېڭى قىسمەن ئىقتىدار بىلەن پەقەت بىرلا كىرگۈزگۈچى ئۆزگەرگۈچى مىقدارنى بېسىپ چىقىرىڭ ، بۇنداق بولغاندا چىقىرىش 60 گە تەڭ.


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
