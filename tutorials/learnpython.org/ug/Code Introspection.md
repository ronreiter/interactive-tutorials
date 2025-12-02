Tutorial
--------

كودنى تەكشۈرۈش بولسا فۇنكىسىيە ۋە ئاچقۇچلۇق سۆزلەرنى تەكشۈرۈش ئىقتىدارى بولۇپ ، ئۇلارنىڭ نېمە ئىكەنلىكىنى ، نېمە قىلىۋاتقانلىقىنى ۋە نېمىنى بىلىدىغانلىقىنى بىلىدۇ.

Python كودنى تەكشۈرۈش ئۈچۈن بىر قانچە ئىقتىدار ۋە ئىقتىدار بىلەن تەمىنلەيدۇ.

    help()
    dir() 
    hasattr() 
    id() 
    type() 
    repr() 
    callable() 
    issubclass() 
    isinstance() 
    __doc__ 
    __name__ 
    

ھەمىشە ئەڭ مۇھىمى ياردەم ئىقتىدارى ، چۈنكى سىز ئۇنى ئىشلىتىپ باشقا ئىقتىدارلارنىڭ نېمە ئىش قىلىدىغانلىقىنى تاپالايسىز.

چېنىقىش
--------

بېرىلگەن ماشىنا ئوبيېكتىنىڭ بارلىق خاسلىقلىرىنىڭ تىزىملىكىنى بېسىڭ.

Tutorial Code
-------------

# Use the help function to see what each function does.
# Delete this when you are done.
help(dir)
help(hasattr)
help(id)

# Define the Vehicle class.
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# Print a list of all attributes of the Vehicle class.
# Your code goes here


Expected Output
---------------

test_output_contains("['__doc__', '__module__', 'color', 'description', 'kind', 'name', 'value']")
test_student_typed("print")
success_msg("Very nice!")

Solution
--------

# Define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str

# Print a list of all attributes of the Vehicle class.
print(dir(Vehicle))
