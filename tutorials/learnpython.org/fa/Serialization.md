آموزش
--------

پایتون کتابخانه‌های JSON داخلی برای رمزگذاری و رمزگشایی JSON فراهم می‌کند.

در پایتون 2.5 از ماژول simplejson استفاده می‌شد، در حالی که در پایتون 2.7 از ماژول json استفاده می‌شود. از آنجا که این مفسر از پایتون 2.7 استفاده می‌کند، ما از json استفاده خواهیم کرد.

برای استفاده از ماژول json ابتدا باید آن را وارد کنید:

    import json

دو قالب پایه برای داده‌های JSON وجود دارد: رشته (string) یا ساختار داده‌ای (object datastructure). ساختار داده‌ای در پایتون شامل لیست‌ها و دیکشنری‌های تو در تو است. با استفاده از ساختار داده‌ای می‌توان با متدهای پایتون روی داده‌ها کارهایی مثل اضافه کردن، فهرست‌برداری، جستجو و حذف انجام داد. فرمت رشته معمولاً برای ارسال داده به برنامهٔ دیگر یا بارگذاری در ساختار داده‌ای استفاده می‌شود.

برای بارگذاری JSON به ساختار داده از متد "loads" استفاده کنید. این متد یک رشته می‌گیرد و آن را به ساختار دادهٔ JSON تبدیل می‌کند:

    import json 
    print(json.loads(json_string))

برای تبدیل یک ساختار داده به JSON از متد "dumps" استفاده کنید. این متد یک شیء می‌گیرد و یک رشته برمی‌گرداند:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

پایتون از روش سریال‌سازی اختصاصی خود به نام pickle (و جایگزین سریع‌تر cPickle) نیز پشتیبانی می‌کند.

می‌توانید از آن به همان شکل استفاده کنید.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

هدف این تمرین اضافه کردن جفت کلید-مقدار `"Me" : 800` به رشتهٔ JSON داده شده و چاپ آن است.

Tutorial Code
-------------

import json

# fix this function, so it adds the given name
# and salary pair to salaries_json, and return it
def add_employee(salaries_json, name, salary):
    # Add your code here

    return salaries_json

# test code
salaries = '{"Alfred" : 300, "Jane" : 400 }'
new_salaries = add_employee(salaries, "Me", 800)
decoded_salaries = json.loads(new_salaries)
print(decoded_salaries["Alfred"])
print(decoded_salaries["Jane"])
print(decoded_salaries["Me"])

Expected Output
---------------

test_output_contains("300")
test_output_contains("400")
test_output_contains("800")
success_msg("Great work!")

Solution
--------

import json

# fix this function, so it adds the given name
# and salary pair to salaries_json, and return it
def add_employee(salaries_json, name, salary):
    salaries = json.loads(salaries_json)
    salaries[name] = salary

    return json.dumps(salaries)

# test code
salaries = '{"Alfred" : 300, "Jane" : 400 }'
new_salaries = add_employee(salaries, "Me", 800)
decoded_salaries = json.loads(new_salaries)
print(decoded_salaries["Alfred"])
print(decoded_salaries["Jane"])
print(decoded_salaries["Me"])
