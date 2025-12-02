آموزش
--------

کلوجر (Closure) یک شیء تابع است که مقادیر در دامنه‌های محیطی را حتی اگر آن‌ها دیگر در حافظه محلی نباشند، به خاطر می‌سپارد. بیایید مرحله‌به‌مرحله جلو برویم.

اولاً، یک تابع تو در تو (Nested Function) تابعی است که داخل یک تابع دیگر تعریف می‌شود. بسیار مهم است بدانید که توابع تو در تو می‌توانند به متغیرهای دامنه احاطه‌کننده دسترسی داشته باشند. اما در پایتون به طور پیش‌فرض فقط قابل‌قرائت هستند. با این حال، می‌توان از کلیدواژه "nonlocal" برای تغییر آن‌ها استفاده کرد.

برای مثال:

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

این کار می‌کند چون data_transmitter می‌تواند به message دسترسی داشته باشد. برای نشان دادن کاربرد nonlocal، در نظر بگیرید:

    def print_msg(number):
        def printer():
            "Here we are using the nonlocal keyword"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

بدون nonlocal خروجی "3 9" خواهد بود، اما با آن خروجی "3 3" می‌شود؛ یعنی مقدار number تغییر می‌یابد.

حال فرض کنید به جای فراخوانی تابع داخلی، خود شیء تابع را برمی‌گردانیم. (به یاد داشته باشید که توابع هم اشیاء هستند.)

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter

و آن‌گاه تابع را این‌گونه فراخوانی می‌کنیم:

    fun2 = transmit_to_space("Burn the Sun!")
    fun2()

حتی اگر اجرای transmit_to_space تمام شود، پیام حفظ می‌شود. این تکنیک که داده‌ها به همراه کد بعد از پایان توابع اصلی حفظ می‌شوند در پایتون به عنوان closure شناخته می‌شود.

مزیت: کلوجرها می‌توانند از استفاده از متغیرهای سراسری جلوگیری کنند و نوعی پنهان‌سازی داده فراهم کنند.

همچنین دکوراتورها در پایتون به شدت از کلوجرها استفاده می‌کنند.

تمرین
--------

یک حلقه تو در تو و یک closure بسازید تا توابع ضرب با ضرایب مختلف تولید کنید، مثلاً تابع multiply_with_5() یا multiply_with_4() با استفاده از closureها.

کد آموزش
-------------

# your code goes here

multiplywith5 = multiplier_of(5)
multiplywith5(9)

خروجی مورد انتظار
---------------

test_output_contains("45")
success_msg("Great work!")

حل
--------

def multiplier_of(n):
    def multiplier(number):
        return number*n
    return multiplier

multiplywith5 = multiplier_of(5)
print(multiplywith5(9))
