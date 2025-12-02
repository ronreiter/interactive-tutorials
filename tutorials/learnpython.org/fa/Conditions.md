آموزش
--------

پایتون از منطق بولی برای ارزیابی شرایط استفاده می‌کند. مقادیر بولی True و False هنگام مقایسه یا ارزیابی یک عبارت بازگردانده می‌شوند. برای مثال:

    x = 2
    print(x == 2) # True را چاپ می‌کند
    print(x == 3) # False را چاپ می‌کند
    print(x < 3) # True را چاپ می‌کند

توجه کنید که انتساب متغیر با یک علامت مساوی "=" انجام می‌شود، در حالی که مقایسه بین دو مقدار با "==" انجام می‌شود. عملگر "نابرابر" به شکل "!=" است.

### عملگرهای بولی

عملگرهای بولی "and" و "or" اجازه می‌دهند عبارات بولی پیچیده‌تری بسازید، برای مثال:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Your name is John, and you are also 23 years old.")

    if name == "John" or name == "Rick":
        print("Your name is either John or Rick.")

### عملگر "in"

عملگر "in" می‌تواند برای بررسی وجود یک شیء مشخص در یک کانتینر قابل تکرار مانند لیست استفاده شود:

    name = "John"
    if name in ["John", "Rick"]:
        print("Your name is either John or Rick.")

پایتون از تورفتگی (indentation) برای تعریف بلوک‌های کد استفاده می‌کند، به جای کروشه‌ها. استاندارد پایتون ۴ فاصله است، اگرچه تب یا اندازه دیگر فضاها نیز کار می‌کنند تا زمانی که سازگار باشند. بلوک‌ها نیازی به خاتمه‌دهی ندارند.

مثالی از استفاده از دستور if:

    statement = False
    another_statement = True
    if statement is True:
        # کاری انجام بده
        pass
    elif another_statement is True: # else if
        # کار دیگری انجام بده
        pass
    else:
        # کار دیگری انجام بده
        pass

برای مثال:

    x = 2
    if x == 2:
        print("x equals two!")
    else:
        print("x does not equal to two.")

یک عبارت زمانی True ارزیابی می‌شود که یکی از موارد زیر درست باشد:
1. مقدار بولی True داده شده باشد یا با یک عبارت محاسبه شود.
2. شیئی که در نظر گرفته می‌شود "خالی" نباشد.

مثال‌هایی از اشیایی که "خالی" محسوب می‌شوند:
1. یک رشته خالی: ""
2. یک لیست خالی: []
3. عدد صفر: 0
4. مقدار بولی False

### عملگر 'is'

برخلاف "==" که مقادیر را مقایسه می‌کند، عملگر "is" نمونه‌ها را مقایسه می‌کند. برای مثال:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # True را چاپ می‌کند
    print(x is y) # False را چاپ می‌کند

### عملگر "not"

استفاده از "not" قبل از یک عبارت بولی آن را معکوس می‌کند:

    print(not False) # True را چاپ می‌کند
    print((not False) == (False)) # False را چاپ می‌کند

تمرین
--------

متغیرها را در بخش اول تغییر دهید تا هر عبارت if به True ارزیابی شود.

کد آموزش
-------------

# change this code
number = 10
second_number = 10
first_array = []
second_array = [1,2,3]

if number > 15:
    print("1")

if first_array:
    print("2")

if len(second_array) == 2:
    print("3")

if len(first_array) + len(second_array) == 5:
    print("4")

if first_array and first_array[0] == 1:
    print("5")

if not second_number:
    print("6")

خروجی مورد انتظار
---------------

test_output_contains("1", no_output_msg= "Did you print out 1 if `number` is greater than 15?")
test_output_contains("2", no_output_msg= "Did you print out 2 if there exists a list `first_array`?")
test_output_contains("3", no_output_msg= "Did you print out 3 if the length of `second_array` is 2?")
test_output_contains("4", no_output_msg= "Did you print out 4 if len(first_array) + len(second_array) == 5?")
test_output_contains("5", no_output_msg= "Did you print out 5 if first_array and first_array[0] == 1?")
test_output_contains("6", no_output_msg= "Did you print out 6 if not second_number?")
success_msg("Great Work!")

حل
--------

# change this code
number = 16
second_number = 0
first_array = [1,2,3]
second_array = [1,2]

if number > 15:
    print("1")

if first_array:
    print("2")

if len(second_array) == 2:
    print("3")

if len(first_array) + len(second_array) == 5:
    print("4")

if first_array and first_array[0] == 1:
    print("5")

if not second_number:
    print("6")
