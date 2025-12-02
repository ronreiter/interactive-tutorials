آموزش
--------

دیکشنری یک نوع داده‌ای مشابه آرایه‌ها است، اما به‌جای ایندکس‌ها با کلیدها و مقادیر کار می‌کند. هر مقدار ذخیره‌شده در یک دیکشنری را می‌توان با استفاده از یک کلید که می‌تواند هر نوع شیء‌ای باشد (رشته، عدد، لیست و غیره) دسترسی پیدا کرد، به‌جای این‌که از ایندکس آن استفاده شود.

برای مثال، یک پایگاه داده شماره تلفن‌ها می‌تواند با استفاده از یک دیکشنری به این شکل ذخیره شود:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

به‌طور جایگزین، می‌توان دیکشنری را با همان مقادیر به شکل زیر مقداردهی اولیه کرد:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### تکرار روی دیکشنری‌ها

دیکشنری‌ها را می‌توان مانند یک لیست تکرار کرد. با این حال، بر خلاف لیست، دیکشنری ترتیب مقادیری که در آن ذخیره شده‌اند را نگهداری نمی‌کند. برای تکرار روی جفت‌های کلید-مقدار از سینتکس زیر استفاده کنید:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### حذف یک مقدار

برای حذف یک ایندکس مشخص، از یکی از نگارش‌های زیر استفاده کنید:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

یا:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


تمرین
--------

عبارت "Jake" را به phonebook با شماره تلفن 938273443 اضافه کنید و Jill را از phonebook حذف کنید.

کد آموزش
-------------

phonebook = {  
    "John" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}  
# کد شما اینجا می‌رود

# کد تست
if "Jake" in phonebook:  
    print("Jake is listed in the phonebook.")
    
if "Jill" not in phonebook:      
    print("Jill is not listed in the phonebook.")  


خروجی مورد انتظار
---------------

test_output_contains("Jake is listed in the phonebook.")
test_output_contains("Jill is not listed in the phonebook.")
success_msg("Nice work!")

حل
--------

phonebook = {  
    "John" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}  

# کد شما اینجا می‌رود
phonebook["Jake"] = 938273443  
del phonebook["Jill"]  

# کد تست
if "Jake" in phonebook:  
    print("Jake is listed in the phonebook.")
    
if "Jill" not in phonebook:      
    print("Jill is not listed in the phonebook.")
