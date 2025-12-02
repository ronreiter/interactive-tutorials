آموزش
--------

لیست‌ها بسیار شبیه آرایه‌ها هستند. آن‌ها می‌توانند هر نوع مقدار را نگهدارند و به هر اندازه‌ای که خواستید عنصر داشته باشند. لیست‌ها را می‌توان به راحتی تکرار (iterate) کرد. در اینجا مثالی از ساخت یک لیست آورده شده است.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

دسترسی به اندیسی که وجود ندارد یک استثنا (خطا) ایجاد می‌کند.

    mylist = [1,2,3]
    print(mylist[10])

تمرین
--------

در این تمرین باید اعداد و رشته‌ها را به لیست‌های مناسب با استفاده از متد `append` اضافه کنید. باید اعداد 1، 2 و 3 را به لیست `numbers` اضافه کنید و کلمات 'hello' و 'world' را به `strings`.

همچنین باید مقدار `second_name` را با نام دوم در لیست `names` پر کنید، با استفاده از عملگر براکت `[]`. توجه داشته باشید اندیس‌ها از صفر شروع می‌شوند، بنابراین برای دسترسی به آیتم دوم اندیس 1 است.

Tutorial Code
-------------
numbers = []
strings = []
names = ["John", "Eric", "Jessica"]

# write your code here
second_name = None


# this code should write out the filled arrays and the second name in the names list (Eric).
print(numbers)
print(strings)
print("The second name on the names list is %s" % second_name)

Expected Output
---------------

test_output_contains("[1,2,3]", no_output_msg= "Make sure that you have printed the `numbers` list.")
test_output_contains("['hello', 'world']", no_output_msg= "Make sure that you have printed the `strings` list.")
test_output_contains("The second name on the names list is Eric", no_output_msg= "Did you fill in the variable `second_name` with the second name in the names list?")
success_msg("Great Job!")

Solution
--------

numbers = []
strings = []
names = ["John", "Eric", "Jessica"]

# write your code here
numbers.append(1)
numbers.append(2)
numbers.append(3)

strings.append("hello")
strings.append("world")

second_name = names[1]

# this code should write out the filled arrays and the second name in the names list (Eric).
print(numbers)
print(strings)
print("The second name on the names list is %s" % second_name)
