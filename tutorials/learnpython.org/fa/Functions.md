آموزش
--------

### توابع چیستند؟

توابع راهی مناسب برای تقسیم کد به بلوک‌های مفید هستند که به ما کمک می‌کنند کد را سازمان‌دهی کنیم، قابل خواندن‌تر کنیم، آن را مجدداً استفاده کنیم و زمان صرفه‌جویی کنیم. همچنین توابع روش مهمی برای تعریف رابط‌ها (interfaces) بین برنامه‌نویسان هستند.

### چگونه در پایتون تابع بنویسیم؟

همان‌طور که در درس‌های قبلی دیدید، پایتون از بلوک‌های تو در تو استفاده می‌کند.

یک بلوک به شکل زیر است:

    block_head:
        1st block line
        2nd block line
        ...

برای توابع از کلمه کلیدی `def` استفاده می‌کنیم:

    def my_function():
        print("Hello From My Function!")

توابع می‌توانند آرگومان دریافت کنند:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))

توابع می‌توانند مقداری بازگردانند با `return`:

    def sum_two_numbers(a, b):
        return a + b

### نحوه فراخوانی توابع

نام تابع را نوشته و پرانتز باز و بسته می‌کنیم و آرگومان‌ها را می‌دهیم.

مثال‌ها در بلوک‌های کد حفظ شده‌اند.

تمرین
--------

در این تمرین باید از یک تابع موجود استفاده کنید و توابع خود را اضافه کنید تا برنامه کامل شود.

1. تابع `list_benefits()` را اضافه کنید که لیستی از رشته‌ها را بازگرداند: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. تابع `build_sentence(info)` را اضافه کنید که یک آرگومان رشته‌ای می‌گیرد و جمله‌ای را بازمی‌گرداند که با آن رشته شروع شده و با " is a benefit of functions!" تمام می‌شود.

3. همه را اجرا کنید و نتیجه را مشاهده کنید.

Tutorial Code
-------------

# Modify this function to return a list of strings as defined above
def list_benefits():
    return []

# Modify this function to concatenate to each benefit - " is a benefit of functions!"
def build_sentence(benefit):
    return ""

def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print(build_sentence(benefit))

name_the_benefits_of_functions()


Expected Output
---------------

test_output_contains("More organized code is a benefit of functions!")
test_output_contains("More readable code is a benefit of functions!")
test_output_contains("Easier code reuse is a benefit of functions!")
test_output_contains("Allowing programmers to share and connect code together is a benefit of functions!")
success_msg("Nice work!")

Solution
--------

# Modify this function to return a list of strings as defined above
def list_benefits():
    return "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

# Modify this function to concatenate to each benefit - " is a benefit of functions!"
def build_sentence(benefit):
    return "%s is a benefit of functions!" % benefit


def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print(build_sentence(benefit))

name_the_benefits_of_functions()
