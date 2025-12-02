آموزش
--------

مجموعه‌ها (Sets) لیست‌هایی بدون ورودی تکراری هستند. فرض کنید می‌خواهید لیستی از کلمات به‌کاررفته در یک پاراگراف جمع‌آوری کنید:

    print(set("my name is Eric and Eric is my name".split()))

این مجموعه لیستی شامل "my", "name", "is", "Eric", و "and" را چاپ می‌کند. از آنجا که بقیهٔ جمله شامل کلماتی است که قبلاً در مجموعه وجود دارند، دوباره اضافه نمی‌شوند.

مجموعه‌ها ابزار قدرتمندی هستند زیرا می‌توانند تفاوت‌ها و اشتراک‌ها را بین مجموعه‌های دیگر محاسبه کنند. برای مثال، فرض کنید لیست شرکت‌کنندگان در رویدادهای A و B را دارید:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

برای یافتن اعضایی که در هر دو رویداد شرکت کرده‌اند، می‌توانید از متد "intersection" استفاده کنید:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

برای یافتن اعضایی که فقط در یکی از رویدادها شرکت کرده‌اند از "symmetric_difference" استفاده کنید:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

برای یافتن اعضایی که فقط در یک رویداد و نه دیگری شرکت کرده‌اند از متد "difference" استفاده کنید:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

برای دریافت لیست تمام شرکت‌کنندگان از متد "union" استفاده کنید:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

در تمرین زیر، با استفاده از لیست‌های داده‌شده، مجموعه‌ای از تمام شرکت‌کنندگانی که در رویداد A حضور داشتند اما در رویداد B شرکت نکرده‌اند را چاپ کنید.

Tutorial Code
-------------
a = ["Jake", "John", "Eric"]
b = ["John", "Jill"]

Expected Output
---------------
test_output_contains("['Jake', 'Eric']")
success_msg("Nice work!")

Solution
--------
a = ["Jake", "John", "Eric"]
b = ["John", "Jill"]

A = set(a)
B = set(b)

print(A.difference(B))
