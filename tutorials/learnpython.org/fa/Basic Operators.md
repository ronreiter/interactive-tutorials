آموزش
--------

این بخش نحوه استفاده از عملگرهای پایه در پایتون را توضیح می‌دهد.

### عملگرهای حسابی       

مانند سایر زبان‌های برنامه‌نویسی، عملگرهای جمع، تفریق، ضرب و تقسیم را می‌توان با اعداد استفاده کرد.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

سعی کنید پیش‌بینی کنید جواب چه خواهد شد. آیا پایتون ترتیب عملیات را رعایت می‌کند؟

یک عملگر دیگر که وجود دارد عملگر باقیمانده (%) است که باقی‌مانده صحیح تقسیم را برمی‌گرداند. تقسیم‌شونده % تقسیم‌کننده = باقی‌مانده.

    remainder = 11 % 3
    print(remainder)

استفاده از دو علامت ضرب پشت سر هم، توان را نشان می‌دهد.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### استفاده از عملگرها با رشته‌ها

پایتون از الحاق رشته‌ها با استفاده از عملگر جمع پشتیبانی می‌کند:

    helloworld = "hello" + " " + "world"
    print(helloworld)

پایتون همچنین از ضرب رشته‌ها برای ساخت رشته‌ای با توالی تکراری پشتیبانی می‌کند:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### استفاده از عملگرها با لیست‌ها

لیست‌ها را می‌توان با عملگر جمع به هم متصل کرد:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

مانند رشته‌ها، پایتون از ساخت لیست‌های جدید با توالی تکراری با استفاده از عملگر ضرب پشتیبانی می‌کند:

    print([1,2,3] * 3)

تمرین
--------

هدف این تمرین ساخت دو لیست به نام‌های `x_list` و `y_list` است،
که هر کدام شامل ۱۰ نمونه از متغیرهای `x` و `y` باشند.
همچنین باید لیستی به نام `big_list` بسازید که
متغیرهای `x` و `y` را هر کدام ۱۰ بار، با الحاق دو لیست ساخته شده، داشته باشد.

کد آموزش
-------------

x = object()
y = object()

# TODO: این کد را تغییر دهید
x_list = [x]
y_list = [y]
big_list = []

print("x_list شامل %d شیء است" % len(x_list))
print("y_list شامل %d شیء است" % len(y_list))
print("big_list شامل %d شیء است" % len(big_list))

# کد تست
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print("تقریباً تمام شد...")
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print("عالی!")

خروجی مورد انتظار
---------------

Ex().check_object('x_list').has_equal_value(expr_code = 'len(x_list)')
Ex().check_object('y_list').has_equal_value(expr_code = 'len(y_list)')
Ex().check_object('big_list').has_equal_value(expr_code = 'len(big_list)')
success_msg('کارت عالی بود!')

حل
--------

x = object()
y = object()

# TODO: این کد را تغییر دهید
x_list = [x] * 10
y_list = [y] * 10
big_list = x_list + y_list

print("x_list شامل %d شیء است" % len(x_list))
print("y_list شامل %d شیء است" % len(y_list))
print("big_list شامل %d شیء است" % len(big_list))

# کد تست
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print("تقریباً تمام شد...")
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print("عالی!")
