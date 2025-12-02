آموزش
--------

ژنراتورها (Generators) پیاده‌سازی ساده‌ای دارند اما فهم آن ممکن است کمی دشوار باشد.

ژنراتورها برای ساخت تکرارشونده‌ها (iterators) استفاده می‌شوند، اما با رویکردی متفاوت. ژنراتورها توابع ساده‌ای هستند که مجموعه‌ای از آیتم‌ها را یکی‌یکی بازمی‌گردانند.

زمانی که حلقه `for` روی مجموعه‌ای از آیتم‌ها اجرا می‌شود، ژنراتور اجرا می‌شود. هر بار که اجرای تابع به دستور `yield` می‌رسد، مقدار جدیدی تولید شده و کنترل به حلقه `for` بازمی‌گردد. تابع ژنراتور می‌تواند هر تعداد مقدار (حتی بی‌نهایت) را تولید کند.

مثال ساده‌ای از یک ژنراتور که 7 عدد تصادفی برمی‌گرداند:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

این تابع خودش تصمیم می‌گیرد چگونه اعداد تصادفی را تولید کند و هر بار به `yield` می‌رسد اجرای آن متوقف و مقدار برگردانده می‌شود.

تمرین
--------

یک تابع ژنراتور بنویسید که دنباله فیبوناچی را تولید کند. دو عدد اول دنباله همیشه برابر 1 هستند و هر عدد بعدی جمع دو عدد قبلی است.
راهنما: می‌توانید از دو متغیر استفاده کنید و از انتساب هم‌زمان بهره ببرید.

Tutorial Code
-------------

# fill in this function
def fib():
    pass #this is a null statement which does nothing when executed, useful as a placeholder.

# testing code
import types
if type(fib()) == types.GeneratorType:
    print("Good, The fib function is a generator.")

    counter = 0
    for n in fib():
        print(n)
        counter += 1
        if counter == 10:
            break



Expected Output
---------------

test_output_contains("Good, The fib function is a generator.")
success_msg('Good work!')

Solution
--------

# fill in this function
def fib():
    a, b = 1, 1
    while 1:
        yield a
        a, b = b, a + b

# testing code
import types
if type(fib()) == types.GeneratorType:
    print("Good, The fib function is a generator.")

    counter = 0
    for n in fib():
        print(n)
        counter += 1
        if counter == 10:
            break
