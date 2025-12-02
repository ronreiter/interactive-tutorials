آموزش
-----
شما می‌توانید از Ruby برای انجام محاسبات ریاضی استفاده کنید. چهار عملگر استاندارد احتمالاً برای شما آشنا هستند:

- `+` برای جمع
- `-` برای تفریق
- `*` برای ضرب
- `/` برای تقسیم

دو عملگر دیگر که کمتر آشنا هستند اما مهم می‌باشند `**` و `%` هستند.

`**` برای توان استفاده می‌شود؛ `5**2` یعنی 5 به توان 2، که برابر 25 است.

`%` کمی عجیب است. در Ruby، این درصد نیست، بلکه باقی‌مانده است. باقی‌مانده مانند تقسیم است، اما فقط باقی‌مانده مسئله تقسیم را به شما می‌دهد.

    moduloAnswer=5%2 #moduloAnswer=1
    exponentAnswer=2**3 #exponentAnswer=8

تمرین
-----
از عملیات ریاضی استفاده کنید تا متغیرهای قدیمی را به متغیرهای جدیدی تبدیل کنید که دستور if می‌تواند true را در کنسول چاپ کند.

کد آموزشی
----------
numberOne = 6
numberTwo = 8
numberThree = 5
numberFour = 12
numberFive = 36

testOne = numberTwo  numberThree #جای خالی را پر کنید تا این عدد 40 شود
testTwo = numberFive  numberOne #جای خالی را پر کنید تا این عدد 0 شود
testThree = numberFour  numberThree #جای خالی را پر کنید تا این عدد 7 شود
if testOne == 40 && testTwo == 0 && testThree == 7
    puts true
end

خروجی مورد انتظار
------------------
true

راه‌حل
------

numberOne = 6
numberTwo = 8
numberThree = 5
numberFour = 12
numberFive = 36

testOne = numberTwo * numberThree #جای خالی را پر کنید تا این عدد 40 شود
testTwo = numberFive % numberOne #جای خالی را پر کنید تا این عدد 0 شود
testThree = numberFour - numberThree #جای خالی را پر کنید تا این عدد 7 شود
if testOne == 40 && testTwo == 0 && testThree == 7
    puts true
end
