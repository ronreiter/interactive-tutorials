آموزش
--------

می‌توانید با استفاده از تابع partial از ماژول functools در پایتون توابع جزئی (partial functions) بسازید.

توابع جزئی اجازه می‌دهند تا تابعی با x پارامتر را به تابعی با پارامترهای کمتر و مقادیر ثابت‌شده برای پارامترهای اول تبدیل کنید.

واردات مورد نیاز:

    from functools import partial

این کد مقدار 8 را برمی‌گرداند:

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

یک نکته مهم: مقادیر پیش‌فرض از سمت چپ جایگزین متغیرها می‌شوند. مقدار 2 جایگزین x می‌شود. y برابر 4 خواهد بود زمانی که dbl(4) فراخوانی می‌شود. در این مثال فرق چندانی ایجاد نمی‌کند، ولی در مثال بعدی فرق خواهد داشت.

تمرین
--------
تابع ارائه‌شده را با فراخوانی partial() و جایگزین کردن سه متغیر اول در func() ویرایش کنید. سپس با استفاده از تابع جزئی جدید و تنها یک ورودی چاپ کنید تا خروجی برابر 60 شود.


Tutorial Code
-------------
#Following is the exercise, function provided:
from functools import partial
def func(u, v, w, x):
    return u*4 + v*3 + w*2 + x
#Enter your code here to create and print with your partial function

Expected Output
---------------
#test_object('p')
test_output_contains('60')
success_msg('Good job!')

Solution
--------
from functools import partial
def func(u, v, w, x):
    return u*4 + v*3 + w*2 + x

p = partial(func,5,6,7)
print(p(8))
