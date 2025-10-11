Tutorial
-----------------

ئوبيېكت ئۆزگەرگۈچى مىقدار ۋە ئىقتىدارلارنىڭ يەككە گەۋدىگە ئايلىنىشىدۇر. ئوبيېكتلار ئۆزگىرىشچان ۋە ئىقتىدارلىرىنى دەرىجەلەردىن ئالىدۇ. دەرىجەلەر ماھىيەتتە ئوبيېكتلىرىڭىزنى يارىتىشنىڭ قېلىپى.

ناھايىتى ئاساسىي بىر دەرىجە مۇنداق بولىدۇ:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

نېمە ئۈچۈن بۇ «self» نى پارامېتىر قىلىپ قوشۇشىڭىز كېرەكلىكىنى بىر ئازدىن كىيىن چۈشەندۈرۈپ ئۆتىمىز.  بىرىنچى ، يۇقارقى دەرىجە (قېلىپ) نى ئوبيېكتقا تەقسىملەش ئۈچۈن تۆۋەندىكى ئىشلارنى قىلالايسىز:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

ھازىر ئۆزگەرگۈچى مىقدار «myobjectx» بولسا «MyClass» دەرىجىسىنىڭ ئوبيېكتىنى ساقلايدۇ ، ئۇنىڭدا «MyClass» دەپ ئاتىلىدىغان ئۆزگەرگۈچى مىقدار ۋە فۇنكسىيە بار.

### ئوبيېكت ئۆزگەرگۈچى مىقدارنى زىيارەت قىلىش

يېڭىدىن ياسالغان ئوبيېكت «myobjectx» نىڭ ئىچىدىكى ئۆزگەرگۈچى مىقدارنى زىيارەت قىلىش ئۈچۈن تۆۋەندىكى ئىشلارنى قىلالايسىز:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

مەسىلەن ، تۆۋەندىكىسى «bla» ھەرىپىنى چىقىرىدۇ:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

ئوخشاش بىر تۈردىكى (ئوخشاش ئۆزگەرگۈچى مىقدار ۋە فۇنكسىيە ئېنىقلانغان) ئوخشاش بولمىغان ئوبىكىتلارنى قۇرالايسىز.  قانداقلا بولمىسۇن ، ھەر بىر ئوبيېكت دەرىجىدە ئېنىقلانغان ئۆزگەرگۈچى مىقدارنىڭ مۇستەقىل كۆپەيتىلگەن نۇسخىسىنى ئۆز ئىچىگە ئالىدۇ.  مەسىلەن ، بىز «MyClass» سىنىپى بىلەن باشقا بىر ئوبيېكتنى ئېنىقلاپ ، ئاندىن يۇقىرىدىكى ئۆزگەرگۈچى مىقداردىكى تىزمىنى ئۆزگەرتمەكچى بولساق:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Then print out both values
    print(myobjectx.variable)
    print(myobjecty.variable)


### ئوبيېكت فونكىسيەسىنى زىيارەت قىلىش

ئۆزگەرگۈچى مىقدارنى زىيارەت قىلىشقا ئوخشاش ئىزاھاتنى ئىشلىتىدىغان ئوبيېكتنىڭ ئىچىدىكى فونكىسىيەگە ئېرىشىش ئۈچۈن:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

يۇقىرىقىلار «بۇ دەرىجە ئىچىدىكى ئۇچۇر» دېگەن خەتنى بېسىپ چىقىرىدۇ.

### __init __ ()

`__Init __ ()` فۇنكسىيەسى ، دەرىجە باشلانغاندا چاقىرىلىدىغان ئالاھىدە ئىقتىدار.
ئۇ بىر دەرىجىدە قىممەت تەقسىملەش ئۈچۈن ئىشلىتىلىدۇ.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Prints '7'
    
كۆنۈكمە
--------

بىزنىڭ ماشىنىلارغا ئېنىقلىما بېرىدىغان دەرىجىمىز بار. Car1 ۋە car2 دەپ ئاتىلىدىغان ئىككى يېڭى ماشىنا ياساڭ.
Car1 نى Fer نىڭ ئىسمى بىلەن 60،000 دوللار قىممىتىدىكى قىزىل ئايلاندۇرغىلى بولىدىغان قىلىپ تەڭشەڭ.
ھەمدە car2 نىڭ باھاسى 10،000.00 دوللارلىق كۆك رەڭلىك يۈك ماشىنىسى.

Tutorial Code
-------------

# define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str
# your code goes here

# test code
print(car1.description())
print(car2.description())

Expected Output
---------------

#test_output_contains('Fer is a red convertible worth $60000.00.')
#test_output_contains('Jump is a blue van worth $10000.00.')
success_msg("Great job!")

Solution
--------

# define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# your code goes here
car1 = Vehicle()
car1.name = "Fer"
car1.color = "red"
car1.kind = "convertible"
car1.value = 60000.00

car2 = Vehicle()
car2.name = "Jump"
car2.color = "blue"
car2.kind = "van"
car2.value = 10000.00

# test code
print(car1.description())
print(car2.description())
