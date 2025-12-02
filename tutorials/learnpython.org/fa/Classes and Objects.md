آموزش
-----------------

اشیاء (Objects) ترکیبی از متغیرها و توابع در یک موجودیت واحد هستند. اشیاء متغیرها و توابع خود را از کلاس‌ها می‌گیرند. کلاس‌ها در واقع یک قالب برای ساخت اشیاء شما هستند.

یک کلاس بسیار ساده به شکل زیر خواهد بود:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

بعداً توضیح خواهیم داد که چرا باید "self" را به عنوان پارامتر وارد کنید. ابتدا، برای اختصاص کلاس (قالب) بالا به یک شیء، به صورت زیر عمل می‌کنید:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

حالا متغیر "myobjectx" یک شیء از کلاس "MyClass" است که متغیر و تابع تعریف شده در کلاس را دارد.

### دسترسی به متغیرهای شیء

برای دسترسی به متغیر داخل شیء تازه ساخته شده "myobjectx" به صورت زیر عمل می‌کنید:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

مثلاً کد زیر رشته "blah" را چاپ می‌کند:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

می‌توانید چندین شیء مختلف از یک کلاس بسازید (که متغیرها و توابع یکسانی دارند). اما هر شیء نسخه مستقل خود از متغیرهای تعریف شده در کلاس را دارد. مثلاً اگر یک شیء دیگر با کلاس "MyClass" تعریف کنیم و مقدار متغیر بالا را تغییر دهیم:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # سپس هر دو مقدار را چاپ می‌کنیم
    print(myobjectx.variable)
    print(myobjecty.variable)


### دسترسی به توابع شیء

برای دسترسی به یک تابع داخل شیء، مشابه دسترسی به متغیر عمل می‌کنید:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

کد بالا پیام "This is a message inside the class." را چاپ می‌کند.

### __init__()

تابع `__init__()` یک تابع ویژه است که هنگام مقداردهی اولیه کلاس فراخوانی می‌شود.
برای مقداردهی متغیرها در کلاس استفاده می‌شود.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) # عدد ۷ را چاپ می‌کند
    
تمرین
--------

یک کلاس برای وسایل نقلیه تعریف شده است. دو وسیله نقلیه جدید به نام‌های car1 و car2 بسازید.
car1 را یک کروکی قرمز به ارزش ۶۰٬۰۰۰ دلار با نام Fer قرار دهید،
و car2 را یک ون آبی به نام Jump به ارزش ۱۰٬۰۰۰ دلار قرار دهید.

کد آموزش
-------------

# تعریف کلاس Vehicle
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s یک %s %s به ارزش $%.2f است." % (self.name, self.color, self.kind, self.value)
        return desc_str
# کد شما اینجا می‌رود

# کد تست
print(car1.description())
print(car2.description())

خروجی مورد انتظار
---------------

#test_output_contains('Fer is a red convertible worth $60000.00.')
#test_output_contains('Jump is a blue van worth $10000.00.')
success_msg("آفرین!")

حل
--------

# تعریف کلاس Vehicle
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s یک %s %s به ارزش $%.2f است." % (self.name, self.color, self.kind, self.value)
        return desc_str

# کد شما اینجا می‌رود
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

# کد تست
print(car1.description())
print(car2.description())
