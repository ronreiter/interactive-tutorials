آموزش
--------

رشته‌ای (String) مجموعه‌ای از کاراکترها/نمادها درون علامات نقل‌قول است. رشته‌ها توسط کامپیوتر به‌عنوان متن خام تفسیر می‌شوند.

می‌توانید از علامات نقل‌قول تک یا دوتایی برای رشته‌ها استفاده کنید - هر دو قابل قبول هستند.

    myFirstString = 'I am a string!' #single quotes
    mySecondString = "Me too!" #double quotes

روش‌های توکار زیادی در Ruby برای کار با رشته‌ها وجود دارند.

`.length` تعداد کاراکترهای رشته را به شما می‌دهد.

    "Hi!".length #is 3

`.reverse` رشته را برعکس می‌کند.

    "Hi!".reverse #is !iH

`.upcase` رشته را به حروف بزرگ تبدیل می‌کند.

    "Hi!".upcase #is HI!

و `.downcase` رشته را به حروف کوچک تبدیل می‌کند.

    "Hi!".downcase #is hi!

همچنین می‌توانید بسیاری از روش‌ها را در یک‌باره استفاده کنید. آن‌ها از چپ به راست حل می‌شوند.

    "Hi!".downcase.reverse #is !ih

اگر می‌خواهید بررسی کنید که یک رشته شامل رشته‌ای دیگر است یا نه، می‌توانید از `.include?` استفاده کنید.

    "Happy Birthday!".include?("Happy")

کد بالا به `true` ارزیابی می‌شود.

تمرین
--------
از رشته داده‌شده استفاده کنید و روش‌ها را به‌کار ببرید تا کد "!edoc ma i !ih" را چاپ کند.

کد آموزشی
-------------

    myString = "Hi! I am code!" #In the next line, use methods to change it.
    myNewString = myString
    puts myNewString

خروجی مورد انتظار
---------------

    !edoc ma i !ih

حل
--------

    myString = "Hi! I am code!" #In the next lines, use methods to change it.
    myNewString = myString.reverse.downcase
    puts myNewString
