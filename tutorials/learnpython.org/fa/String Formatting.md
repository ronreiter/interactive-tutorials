آموزش
--------

پایتون از قالب‌بندی رشته به سبک C برای ساخت رشته‌های قالب‌بندی‌شده استفاده می‌کند. عملگر "%" برای قالب‌بندی مجموعه‌ای از متغیرها که در یک "tuple" قرار دارند، همراه با یک رشتهٔ قالب استفاده می‌شود. رشتهٔ قالب شامل متن معمولی و "مشخص‌کننده‌های آرگومان" است، نمادهایی مثل "%s" و "%d".

فرض کنید متغیری به نام "name" دارید که نام کاربری شما در آن است و می‌خواهید پیغامی برای آن چاپ کنید.

    # This prints out "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

برای استفاده از دو یا چند مشخص‌کنندهٔ آرگومان از یک tuple (پرانتز) استفاده کنید:

    # This prints out "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

هر شیئی که رشته نیست نیز می‌تواند با `%s` قالب‌بندی شود؛ رشتهٔ برگشتی از متد `repr` آن شیء استفاده می‌شود. برای مثال:

    # This prints out: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

در اینجا چند مشخص‌کنندهٔ پایه‌ای که باید بدانید آمده است:


`%s - رشته (یا هر شیئی با نمایش رشته‌ای)`

`%d - اعداد صحیح`

`%f - اعداد اعشاری`

`%.<تعداد رق‌ها>f - اعداد اعشاری با تعداد ثابت ارقام اعشار.`

`%x/%X - اعداد صحیح در مبنای هگز (حروف کوچک/بزرگ)`


تمرین
--------

شما باید یک رشتهٔ قالب بنویسید که داده‌ها را به شکل زیر چاپ کند:
    `Hello John Doe. Your current balance is $53.44.`

Tutorial Code
-------------

data = ("John", "Doe", 53.44)
format_string = "Hello"

print(format_string % data)

Expected Output
---------------
#test_output_contains("Hello John Doe. Your current balance is $53.44.", no_output_msg= "Make sure you add the `%s` in the correct spaces to the `format_string` to meeet the exercise goals!")
test_object('format_string')
success_msg('Great work!')

Solution
--------

data = ("John", "Doe", 53.44)
format_string = "Hello %s %s. Your current balance is $%s."

print(format_string % data)
