آموزش
--------

هر تابع در پایتون تعداد پیش‌فرضی از آرگومان‌ها را دریافت می‌کند اگر به‌صورت عادی اعلام شود، مثلاً:

    def myfunction(first, second, third):
        # do something with the 3 variables
        ...

امکان اعلام توابعی که تعداد متغیر‌تری از آرگومان‌ها را دریافت می‌کنند وجود دارد، با نحو زیر:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

متغیر "therest" لیستی از آرگومان‌ها را دریافت می‌کند که پس از سه آرگومان اول به تابع `foo` داده شده‌اند. بنابراین `foo(1, 2, 3, 4, 5)` خروجی را نشان خواهد داد:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

همچنین می‌توان آرگومان‌ها را با کلید (keyword) ارسال کرد تا ترتیب اهمیتی نداشته باشد، به شکل زیر. خروجی زیر حاصل می‌شود: 
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))



تابع "bar" سه آرگومان می‌گیرد. اگر آرگومان اضافی "action" دریافت شود و مقدار آن برای جمع زدن باشد، مجموع چاپ می‌شود. همچنین تابع می‌داند که اگر مقدار پارامتر `number` برابر "first" باشد آرگومان اول را بازگرداند.

تمرین
--------

تابع‌های `foo` و `bar` را تکمیل کنید تا بتوانند تعداد متغیر از آرگومان‌ها را دریافت کنند (3 یا بیشتر)
تابع `foo` باید تعداد آرگومان‌های اضافی را برگرداند.
تابع `bar` باید `True` را برگرداند اگر آرگومان کلیدی `magicnumber` برابر 7 باشد و در غیر این صورت `False`.

Tutorial Code
-------------

# edit the functions prototype and implementation
def foo(a, b, c):
    pass

def bar(a, b, c):
    pass


# test code
if foo(1, 2, 3, 4) == 1:
    print("Good.")
if foo(1, 2, 3, 4, 5) == 2:
    print("Better.")
if bar(1, 2, 3, magicnumber=6) == False:
    print("Great.")
if bar(1, 2, 3, magicnumber=7) == True:
    print("Awesome!")

Expected Output
---------------

test_output_contains("Good.")
test_output_contains("Better.")
test_output_contains("Great.")
test_output_contains("Awesome!")
success_msg("Great work!")

Solution
--------
# edit the functions prototype and implementation
def foo(a, b, c, *args):
    return len(args)

def bar(a, b, c, **kwargs):
    return kwargs["magicnumber"] == 7


# test code
if foo(1, 2, 3, 4) == 1:
    print("Good.")
if foo(1, 2, 3, 4, 5) == 2:
    print("Better.")
if bar(1, 2, 3, magicnumber=6) == False:
    print("Great.")
if bar(1, 2, 3, magicnumber=7) == True:
    print("Awesome!")
