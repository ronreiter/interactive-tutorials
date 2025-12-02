آموزش
--------

بازبینی کد (Code introspection) قابلیت بررسی کلاس‌ها، توابع و کلمات کلیدی برای دانستن اینکه چه هستند، چه می‌کنند و چه ویژگی‌هایی دارند است.

پایتون چندین تابع و ابزار برای بازبینی کد فراهم می‌کند:

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

اغلب مهم‌ترین آن‌ها تابع help است، چون می‌توانید از آن استفاده کنید تا بفهمید توابع دیگر چه کاری انجام می‌دهند.

تمرین
--------

یک لیست از تمام ویژگی‌های شیء Vehicle داده‌شده چاپ کنید.

کد آموزش
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


خروجی مورد انتظار
---------------

test_output_contains("['__doc__', '__module__', 'color', 'description', 'kind', 'name', 'value']")
test_student_typed("print")
success_msg("Very nice!")

حل
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
