Tutorial
--------
پروگرامما تۈزگەندە خاتالىق يۈز بېرىدۇ. بۇ پەقەت ھاياتلىقنىڭ پاكىتلىرى.
بەلكىم ئىشلەتكۈچى ناچار كىرگۈزگەن بولۇشى مۇمكىن. بەلكىم تور مەنبەسى ئۈزۈلگەن بولۇشى مۇمكىن
بەلكىم پروگراممىنىڭ ئىچكى ساقلىغۇچى تۈگىگەن بولۇشى مۇمكىن. ياكى ھەتتا پروگراممېر 
 خاتالىق سادىر قىلغان بولۇشى مۇمكىن!

Python نىڭ خاتالىقلارنى ھەل قىلىشى ئۇسۇلى بولسا مۇستەسنالىق.  بەلكىم سىز ئۇنى بۇرۇن كۆرگەن بولۇشىڭىز مۇمكىن.

    print(a)
    
    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

ئاپلا! «a» ئۆزگەرگۈچى مىقدارغا قىممەت بېرىشنى ئۇنتۇپ قېلىندى.

ئەمما بەزىدە مۇستەسنانىڭ پروگراممىنى پۈتۈنلەي توختىتىشىنى خالىمايسى
مۇستەسنا يۈز-بەرگەن ۋاقىتتا ئالاھىدە بىر ئىش قىلماقچى بولۇشىڭىز مۇمكىن
. بۇ *try/except* بۆلىكى ئارقىلىق ئېلىپ بېرىلىدۇ.

بۇ يەردە ئۇششاق-چۈششەك مىسال بار: پەرەز قىلايلى. سىز بىر تىزىملىكنى باشتىن-ئاياق زىيارەت قىلىۋاتىسىز. سىر
20 دىن ئارتۇق ساننى زىيارەت قىلىشىڭىز كېرەك ، ئەمما بۇ تىزىملىك ئىشلەتكۈچى كىرگۈزۈشتىن ياسالغان ،
ھەمدە ئۇنىڭدا 20 سان بولماسلىقى مۇمكىن. تىزىملىك ئاخىرلاشقاندىن كېيىن، قالغان سانلارنىڭ 0 دەپ ئىزاھلىنىشىنى ئۈمىد قىلىسىز.
بۇنى مۇنداق قىلالايسىز:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Raised when accessing a non-existing index of a list
                do_stuff_with_number(0)
    
    catch_this()

ئۇ يەردە ، بۇ بەك تەس ئەمەس ئىدى! سىز بۇنى مۇستەسنا ئارقىلىق قىلالايسىز.
بۇنىڭدىن مۇستەسنا ئىشلارنى بىر تەرەپ قىلىشقا ئائىت تېخىمۇ كۆپ تەپسىلاتلارنى كۆرۈڭ 
[Python Docs] (http://docs.python.org/tutorial/errors.html#handling-exceptions)

كۆنۈكمە
--------

بارلىق مۇستەسنا ئەھۋاللارنى بىر تەرەپ قىلىڭ! ئالدىنقى دەرسلەرنى قايتا ئويلاپ ، ئارتىسنىڭ فامىلىسىنى قايتۇرۇڭ.

Tutorial Code
-------------

# Setup
actor = {"name": "John Cleese", "rank": "awesome"}

# Function to modify!!!
def get_last_name(): 
    return actor["last_name"]

# Test code
get_last_name()
print("All exceptions caught! Good job!")
print("The actor's last name is %s" % get_last_name())

Expected Output
---------------

test_output_contains("Cleese")
test_output_contains("All exceptions caught! Good job!")
test_output_contains("The actor's last name is Cleese")
success_msg("Great work!")

Solution
--------
actor = {"name": "John Cleese", "rank": "awesome"}

def get_last_name():
    return actor["name"].split()[1]

get_last_name()
print("All exceptions caught! Good job!")
print("The actor's last name is %s" % get_last_name())
