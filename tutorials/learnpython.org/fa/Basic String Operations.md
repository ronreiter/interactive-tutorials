آموزش
--------

رشته‌ها (Strings) قطعاتی از متن هستند. آن‌ها می‌توانند هر چیزی بین کوتیشن‌ها باشند:

    astring = "Hello world!"
    astring2 = 'Hello world!'

همانطور که می‌بینید، اولین چیزی که یاد گرفتید چاپ یک جمله ساده بود. این جمله توسط پایتون به عنوان یک رشته ذخیره شد. با این حال، به جای اینکه بلافاصله رشته‌ها را چاپ کنیم، کارهای مختلفی که می‌توانید با آن‌ها انجام دهید را بررسی خواهیم کرد.
همچنین می‌توانید از کوتیشن تکی برای مقداردهی به یک رشته استفاده کنید. اما اگر مقدار مورد نظر خودش شامل کوتیشن تکی باشد، با مشکل مواجه می‌شوید. برای مثال، برای مقداردهی رشته‌ای که در این براکت است (کوتیشن‌های تکی ' ') باید فقط از کوتیشن دوتایی استفاده کنید، مانند این:

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

این مقدار ۱۲ را چاپ می‌کند، چون "Hello world!" شامل ۱۲ کاراکتر است، شامل علائم نگارشی و فاصله‌ها.

    astring = "Hello world!"
    print(astring.index("o"))

این مقدار ۴ را چاپ می‌کند، چون اولین وقوع حرف "o" چهار کاراکتر بعد از اولین کاراکتر است. توجه کنید که در عبارت دو تا "o" وجود دارد - این متد فقط اولین را پیدا می‌کند.

اما چرا ۵ چاپ نشد؟ مگر "o" پنجمین کاراکتر رشته نیست؟ برای ساده‌تر شدن کارها، پایتون (و بیشتر زبان‌های برنامه‌نویسی دیگر) شمارش را از ۰ شروع می‌کنند نه ۱. پس اندیس "o" برابر با ۴ است.

    astring = "Hello world!"
    print(astring.count("l"))

برای کسانی که از فونت‌های عجیب استفاده می‌کنند، این یک حرف l کوچک است، نه عدد یک. این تعداد lهای موجود در رشته را می‌شمارد. بنابراین باید ۳ چاپ کند.

    astring = "Hello world!"
    print(astring[3:7])

این یک برش (slice) از رشته را چاپ می‌کند، که از اندیس ۳ شروع و در اندیس ۶ تمام می‌شود. اما چرا ۶ و نه ۷؟ باز هم، بیشتر زبان‌های برنامه‌نویسی این کار را می‌کنند - این کار انجام محاسبات داخل براکت‌ها را ساده‌تر می‌کند.

اگر فقط یک عدد داخل براکت‌ها بگذارید، کاراکتر همان اندیس را به شما می‌دهد. اگر عدد اول را حذف کنید اما دونقطه را نگه دارید، از ابتدا تا عدد دوم را می‌دهد. اگر عدد دوم را حذف کنید، از عدد اول تا انتها را می‌دهد.

حتی می‌توانید اعداد منفی داخل براکت‌ها بگذارید. این یک راه آسان برای شروع از انتهای رشته به جای ابتدای آن است. به این صورت، -۳ یعنی "سومین کاراکتر از انتها".

    astring = "Hello world!"
    print(astring[3:7:2])

این کاراکترهای رشته را از ۳ تا ۷ با پرش یک کاراکتر چاپ می‌کند. این سینتکس برش پیشرفته است. فرم کلی آن [شروع:پایان:گام] است.

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

توجه کنید که هر دو خروجی یکسانی دارند.

تابعی مانند strrev در C برای معکوس کردن رشته وجود ندارد. اما با همین نوع سینتکس برش می‌توانید به راحتی یک رشته را معکوس کنید:

    astring = "Hello world!"
    print(astring[::-1])

این

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

این‌ها یک رشته جدید با تمام حروف بزرگ یا کوچک ایجاد می‌کنند.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

این برای بررسی این است که آیا رشته با چیزی شروع یا تمام می‌شود. اولی True چاپ می‌کند چون رشته با "Hello" شروع می‌شود. دومی False چاپ می‌کند چون رشته قطعاً با "asdfasdfasdf" تمام نمی‌شود.

    astring = "Hello world!"
    afewwords = astring.split(" ")

این رشته را به چند رشته تقسیم می‌کند که در یک لیست قرار می‌گیرند. چون این مثال با فاصله تقسیم می‌کند، اولین آیتم لیست "Hello" و دومی "world!" خواهد بود.

تمرین
--------

سعی کنید کد را اصلاح کنید تا اطلاعات درست را با تغییر رشته چاپ کند.

کد آموزش
-------------

s = "Hey there! what should this string be?"
# طول باید ۲۰ باشد
print("Length of s = %d" % len(s))

# اولین وقوع "a" باید در اندیس ۸ باشد
print("The first occurrence of the letter a = %d" % s.index("a"))

# تعداد aها باید ۲ باشد
print("a occurs %d times" % s.count("a"))

# برش رشته به بخش‌های مختلف
print("The first five characters are '%s'" % s[:5]) # از ابتدا تا ۵
print("The next five characters are '%s'" % s[5:10]) # ۵ تا ۱۰
print("The thirteenth character is '%s'" % s[12]) # فقط شماره ۱۲
print("The characters with odd index are '%s'" %s[1::2]) #(اندیس‌گذاری از ۰)
print("The last five characters are '%s'" % s[-5:]) # پنج تای آخر تا انتها

# تبدیل همه چیز به حروف بزرگ
print("String in uppercase: %s" % s.upper())

# تبدیل همه چیز به حروف کوچک
print("String in lowercase: %s" % s.lower())

# بررسی شروع رشته
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# بررسی پایان رشته
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# تقسیم رشته به سه رشته جداگانه،
# هرکدام فقط شامل یک کلمه
print("Split the words of the string: %s" % s.split(" "))

خروجی مورد انتظار
---------------

test_object("s", incorrect_msg="مطمئن شوید که رشته اختصاص داده شده به `s` را طبق دستور تمرین تغییر داده‌اید.")
success_msg("آفرین!")

حل
--------

s = "Strings are awesome!"
# طول باید ۲۰ باشد
print("Length of s = %d" % len(s))

# اولین وقوع "a" باید در اندیس ۸ باشد
print("The first occurrence of the letter a = %d" % s.index("a"))

# تعداد aها باید ۲ باشد
print("a occurs %d times" % s.count("a"))

# برش رشته به بخش‌های مختلف
print("The first five characters are '%s'" % s[:5]) # از ابتدا تا ۵
print("The next five characters are '%s'" % s[5:10]) # ۵ تا ۱۰
print("The thirteenth character is '%s'" % s[12]) # فقط شماره ۱۲
print("The characters with odd index are '%s'" %s[1::2]) #(اندیس‌گذاری از ۰)
print("The last five characters are '%s'" % s[-5:]) # پنج تای آخر تا انتها

# تبدیل همه چیز به حروف بزرگ
print("String in uppercase: %s" % s.upper())

# تبدیل همه چیز به حروف کوچک
print("String in lowercase: %s" % s.lower())

# بررسی شروع رشته
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# بررسی پایان رشته
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# تقسیم رشته به سه رشته جداگانه،
# هرکدام فقط شامل یک کلمه
print("Split the words of the string: %s" % s.split(" "))
