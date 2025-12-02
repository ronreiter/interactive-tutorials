آموزش
--------
معمولاً یک تابع را با کلمه کلیدی `def` تعریف می‌کنیم و سپس هر زمان که لازم باشد آن را فراخوانی می‌کنیم.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

حال به‌جای تعریف تابع در جایی جدا، می‌توانیم از lambda برای تعریف توابع خطی (inline) استفاده کنیم، بنابراین نیازی به تعریف نام تابع در جای دیگر نداریم. این توابع می‌توانند بی‌نام باشند (anonymous).

قالب تعریف lambda:

    your_function_name = lambda inputs : output

مثال بالا با lambda:

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

در اینجا lambda به متغیر `sum` اختصاص داده شده و هنگام فراخوانی با آرگومان‌ها مثل یک تابع معمولی عمل می‌کند.

تمرین
--------
یک برنامه با استفاده از lambda بنویسید که بررسی کند عددی در لیست داده شده فرد است یا خیر. برای هر عنصر "True" را در صورتی که فرد باشد یا "False" در غیر این صورت چاپ کنید.

Tutorial Code
-------------
l = [2,4,7,3,14,19]
for i in l:
    # your code here

Expected Output
---------------
test_output_contains("False")
test_output_contains("False")
test_output_contains("True")
test_output_contains("True")
test_output_contains("False")
test_output_contains("True")
success_msg("Nice work!")

Solution
--------
l = [2,4,7,3,14,19]
for i in l:
    # your code here
    my_lambda = lambda x : (x % 2) == 1
    print(my_lambda(i))