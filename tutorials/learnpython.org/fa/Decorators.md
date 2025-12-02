آموزش
--------

دکوراتورها به شما اجازه می‌دهند تغییرات ساده‌ای روی اشیاء قابل‌صدا زدن مثل توابع، متدها یا کلاس‌ها انجام دهید. در این آموزش روی توابع تمرکز می‌کنیم. سینتکس

    @decorator
    def functions(arg):
        return "value"

معادل است با:

    def function(arg):
        return "value"
    function = decorator(function) # این تابع را به دکوراتور ارسال می‌کند و دوباره اختصاص می‌دهد

همانطور که ممکن است دیده باشید، دکوراتور فقط یک تابع دیگر است که یک تابع را می‌گیرد و یک تابع بازمی‌گرداند. برای مثال می‌توانید این کار را انجام دهید:

    def repeater(old_function):
        def new_function(*args, **kwds): # برای نحوه کار *args و **kwds به آموزش مربوطه مراجعه کنید
            old_function(*args, **kwds) # تابع قدیمی را اجرا می‌کنیم
            old_function(*args, **kwds) # دوبار اجرا می‌کنیم
        return new_function # باید new_function را برگردانیم تا دوباره اختصاص یابد

این باعث می‌شود یک تابع دو بار اجرا شود.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

همچنین می‌توانید خروجی را تغییر دهید:

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # مقدار بازگشتی را تغییر می‌دهد
        return new_function

یا ورودی را تغییر دهید:

    def double_Ii(old_function):
        def new_function(arg): # فقط زمانی کار می‌کند که تابع قدیمی یک آرگومان داشته باشد
            return old_function(arg * 2) # آرگومان ارسال‌شده را تغییر می‌دهد
        return new_function

و برای اعتبارسنجی استفاده کنید:

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # باعث بروز خطا می‌شود که بهتر از نتیجه اشتباه است
            old_function(arg)
        return new_function

فرض کنید می‌خواهید خروجی را در یک ضریب متغیر ضرب کنید. می‌توانید دکوراتور را به صورت زیر بسازید:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # یک تولیدکننده دکوراتور بازمی‌گرداند
    
    # استفاده
    @multiply(3) # multiply خودش دکوراتور نیست اما multiply(3) یک دکوراتور ایجاد می‌کند
    def return_num(num):
        return num
        
    # اکنون return_num دکورت شده و دوباره اختصاص یافته است
    return_num(5) # باید 15 بازگرداند

شما می‌توانید هر کاری با تابع قدیمی انجام دهید، حتی کاملاً آن را نادیده بگیرید! دکوراتورهای پیشرفته می‌توانند رشته مستندات و تعداد آرگومان را نیز دستکاری کنند.
برای دکوراتورهای جالب‌تر به http://wiki.python.org/moin/PythonDecoratorLibrary مراجعه کنید.

تمرین
--------

یک کارخانه دکوراتور بسازید که یک دکوراتور برمی‌گرداند که توابع یک آرگومان را دکورت می‌کند. این کارخانه یک نوع (type) می‌گیرد و سپس دکوراتوری بازمی‌گرداند که چک می‌کند ورودی از نوع صحیح است؛ در غیر این صورت باید print("Bad Type") کند. از isinstance(object, type_of_object) یا type(object) می‌توانید استفاده کنید.

کد آموزش
-------------

def type_check(correct_type):
    #put code here

@type_check(int)
def times2(num):
    return num*2

print(times2(2))
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print(first_letter('Hello World'))
first_letter(['Not', 'A', 'String'])


خروجی مورد انتظار
---------------

test_output_contains("4")
test_output_contains("Bad Type")
test_output_contains("H")
test_output_contains("Bad Type")
success_msg("Good job!")

حل
--------

def type_check(correct_type):
    def check(old_function):
        def new_function(arg):
            if (isinstance(arg, correct_type)):
                return old_function(arg)
            else:
                print("Bad Type")
        return new_function
    return check

@type_check(int)
def times2(num):
    return num*2

print(times2(2))
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print(first_letter('Hello World'))
first_letter(['Not', 'A', 'String'])
