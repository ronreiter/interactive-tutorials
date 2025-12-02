آموزش
--------

پایتون کاملاً شیءگرا است و به‌صورت "نوع‌بندی ایستا" نیست. نیازی به اعلام متغیرها قبل از استفاده یا مشخص کردن نوع آن‌ها ندارید. هر متغیری در پایتون یک شیء است.

این آموزش چند نوع پایه‌ای از متغیرها را مرور می‌کند.

### اعداد
پایتون از دو نوع عدد پشتیبانی می‌کند — اعداد صحیح (integers) و اعداد اعشاری (floating point). (همچنین اعداد مختلط پشتیبانی می‌شوند که در این آموزش بررسی نمی‌شوند).

برای تعریف یک عدد صحیح از نحو زیر استفاده کنید:

    myint = 7
    print(myint)

برای تعریف یک عدد اعشاری می‌توانید از یکی از نگارش‌های زیر استفاده کنید:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### رشته‌ها (Strings)

رشته‌ها را می‌توان با تک‌نقل یا دوتا‌نقل تعریف کرد.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

تفاوت این دو این است که استفاده از دوتا‌نقل گذاشتن آپاستروف را آسان می‌کند (در حالی که با تک‌نقل رشته قطع می‌شود).

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
روش‌های دیگری برای تعریف رشته وجود دارد که درج newline، backslash و کاراکترهای یونیکد را آسان‌تر می‌کنند. این موارد خارج از محدوده این آموزش است اما در مستندات پایتون پوشش داده شده‌اند.

روی اعداد و رشته‌ها می‌توان عملیات ساده انجام داد:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

می‌توان چند متغیر را هم‌زمان در یک خط مقداردهی کرد:

    a, b = 3, 4
    print(a, b)

ترکیب عملیات روی اعداد و رشته‌ها پشتیبانی نمی‌شود:

    # This will not work!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


تمرین
--------

هدف این تمرین ایجاد یک رشته، یک عدد صحیح و یک عدد اعشاری است. رشته باید با نام `mystring` و مقدار "hello" باشد. عدد اعشاری باید `myfloat` و مقدار 10.0 باشد، و عدد صحیح باید `myint` و مقدار 20 باشد.

Tutorial Code
-------------
# change this code
mystring = None
myfloat = None
myint = None

# testing code
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)

Expected Output
---------------

test_object('mystring', incorrect_msg="Don't forget to change `mystring` to the correct value from the exercise description.")
test_object('myfloat', incorrect_msg="Don't forget to change `myfloat` to the correct value from the exercise description.")
test_object('myint', incorrect_msg="Don't forget to change `myint` to the correct value from the exercise description.")
test_output_contains("String: hello",no_output_msg= "Make sure your string matches exactly to the exercise desciption.")
test_output_contains("Float: 10.000000",no_output_msg= "Make sure your float matches exactly to the exercise desciption.")
test_output_contains("Integer: 20",no_output_msg= "Make sure your integer matches exactly to the exercise desciption.")
success_msg("Great job!")

Solution
--------

# change this code
mystring = "hello"
myfloat = 10.0
myint = 20

# testing code
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)
