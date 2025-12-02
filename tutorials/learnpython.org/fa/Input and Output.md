آموزش
--------
دریافت ورودی و نمایش خروجی به شکل مورد نیاز در برنامه‌های تعاملی اهمیت زیادی دارد. بنابراین بیایید روی ورودی و خروجی انواع مختلف داده تمرکز کنیم.

### input()
از این تابع برای خواندن ورودی تا انتهای خط استفاده می‌شود. توجه کنید که ورودی تا رسیدن به newline خوانده می‌شود. پس از خواندن می‌توان ورودی را با توابعی مثل int()، float()، str() به نوع دلخواه تبدیل کرد.

    # Prints out the input received from stdin
    astring=input()# give hello as input
    print(input())

پس از گرفتن ورودی می‌توان آن را به نوع دلخواه تبدیل کرد:

    num=int(input())
    print num
    decimalnum=input()
    decimalnum=float(input()
    print decimalnum

### چگونه چند مقدار از یک خط جدا شده با فاصله بگیریم؟
از split() و map() استفاده می‌کنیم:

    #give two integers in first line and more than two integers in third line
    a, b = map(int, input().split())
    array = input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # prints first two integers from first line and sum of integers of second line

### قالب‌بندی خروجی
تابعی مانند print به‌صورت خودکار یک newline اضافه می‌کند. استفاده از ویرگول در print (در پایتون 2) مقادیر را در یک خط جداشده با فاصله چاپ می‌کند. ماژول sys توابع متنوعی برای قالب‌بندی خروجی دارد، اما در این‌جا نشان می‌دهیم چگونه با قالب‌بندی ساده خروجی را شکل دهیم.

مثال:

    a = 5
    b = 0.63
    c = "hello"
    print("a is : %d, b is %0.4f,c is %s" % (a,b,c))

تمرین
--------

برنامه‌ای بنویسید که از کاربر نام، سن و کشور را دریافت کند. سپس پیام حاوی این اطلاعات را چاپ کند. موارد زیر لازم است:

1. گرفتن نام با `input()`.
2. گرفتن سن با `input()` و تبدیل آن به عدد صحیح.
3. گرفتن نام کشور با `input()`.
4. قالب‌بندی خروجی برای نمایش جمله‌ای که نام، سن و کشور را نشان دهد.

Tutorial Code
-------------

    # Taking the name input using input()
    name = input("Enter your name: ")
    
    # Taking the age input using input() and converting it to integer
    age = int(input("Enter your age: "))
    
    # Taking the country input using input()
    country = input("Enter your country: ")
    
    # Displaying the formatted sentence with name, age, and country
    print("Hello, my name is {}, I am {} years old, and I am from {}.".format(name, age, country))


Expected Output
---------------

    Enter your name: John
    Enter your age: 25
    Enter your country: USA
    Hello, my name is John, I am 25 years old, and I am from USA.
    

Solution
-------------

    # Taking the name input using input()
    name = input("Enter your name: ")
    
    # Taking the age input using input() and converting it to integer
    age = int(input("Enter your age: "))
    
    # Taking the country input using input()
    country = input("Enter your country: ")
    
    # Displaying the formatted sentence with name, age, and country
    print("Hello, my name is {}, I am {} years old, and I am from {}.".format(name, age, country))
