آموزش
--------
هنگامی که برنامه می‌نویسید خطا رخ می‌دهد — این یک واقعیت است.
شاید کاربر ورودی نامناسب داد؛ شاید منبع شبکه در دسترس نبود؛ شاید حافظه تمام شد یا خود برنامه‌نویس اشتباه کرده باشد!

راه حل پایتون برای خطاها استثناها (exceptions) هستند. ممکن است قبلاً یک استثنا دیده باشید.

    print(a)
    
    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

اوه! فراموش کردیم به متغیر `a` مقدار بدهیم.

گاهی نمی‌خواهید استثناها اجرای برنامه را کاملاً متوقف کنند. ممکن است بخواهید هنگام وقوع استثنا کار خاصی انجام شود. این کار با بلوک `try/except` انجام می‌شود.

نمونه‌ای ساده: فرض کنید دارید روی لیستی می‌چرخید که ممکن است کمتر از 20 عنصر داشته باشد. وقتی به انتهای لیست رسیدید، می‌خواهید مابقی اعداد را صفر در نظر بگیرید. می‌توانید این‌گونه عمل کنید:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Raised when accessing a non-existing index of a list
                do_stuff_with_number(0)
    
    catch_this()

کار با استثناها خیلی سخت نیست! برای جزئیات بیشتر به مستندات پایتون مراجعه کنید.

تمرین
--------

تمام استثناها را مدیریت کنید! با استفاده از درس‌های قبلی نام خانوادگی بازیگر را بازگردانید.

Tutorial Code
-------------

# Setup
actor = {"name": "John Cleese", "rank": "awesome"}

# Function to modify!!!
def get_last_name(): 
    return actor["last_name"]

# Test code
get_last_name()
print("All exceptions caught! Good job!")
print("The actor's last name is %s" % get_last_name())

Expected Output
---------------

test_output_contains("Cleese")
test_output_contains("All exceptions caught! Good job!")
test_output_contains("The actor's last name is Cleese")
success_msg("Great work!")

Solution
--------
actor = {"name": "John Cleese", "rank": "awesome"}

def get_last_name():
    return actor["name"].split()[1]

get_last_name()
print("All exceptions caught! Good job!")
print("The actor's last name is %s" % get_last_name())
