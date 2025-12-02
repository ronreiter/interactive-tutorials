آموزش
--------

عبارات منظم (Regular Expressions) که گاهی regexp، regex یا re نامیده می‌شوند، ابزاری برای تطابق الگوها در متن هستند. در پایتون ماژول re در دسترس است.
کاربردهای عبارات منظم گسترده‌اند اما پیچیده هم هستند، بنابراین قبل از استفاده از regex برای یک کار مشخص، جایگزین‌ها را بررسی کنید و به عنوان آخرین راه‌حل به regexها فکر کنید.

مثالی از یک regex: `r"^(From|To|Cc).*?python-list@python.org"` حالا توضیح:
Caret `^` متن در ابتدای خط را مطابقت می‌دهد. گروه بعدی `(From|To|Cc)` به این معنی است که خط باید با یکی از کلمات داخل گروه شروع شود. این همان عملگر OR است. `.*?` به معنی مطابقت غیرحریصی (non-greedy) با صفر یا بیشمار کاراکتر غیر newline است. `.` هر کاراکتر غیر newline را نشان می‌دهد، `*` به معنی تکرار 0 یا بیشمار، و `?` حالت غیرحریصی را فعال می‌کند.

بنابراین خطوط زیر توسط آن regex مطابقت خواهند داشت:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

مراجع کامل نحو re در [مستندات پایتون](http://docs.python.org/library/re.html#regular-expression-syntax) موجود است.

برای نمونه یک regex "درست" برای مطابقت ایمیل (مانند تمرین) این لینک را ببینید: http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html

Tutorial Code
-------------
# Example: 
import re
pattern = re.compile(r"\[(on|off)\]") # Slight optimization
print(re.search(pattern, "Mono: Playback 65 [75%] [-16.50dB] [on]"))
# Returns a Match object!
print(re.search(pattern, "Nada...:-("))
# Doesn't return anything.
# End Example

# Exercise: make a regular expression that will match an email
def test_email(your_pattern):
    pattern = re.compile(your_pattern)
    emails = ["john@example.com", "python-list@python.org", "wha.t.`1an?ug{}ly@email.com"]
    for email in emails:
        if not re.match(pattern, email):
            print("You failed to match %s" % (email))
        elif not your_pattern:
            print("Forgot to enter a pattern!")
        else:
            print("Pass")
pattern = r"" # Your pattern here!
test_email(pattern)
    

Expected Output
---------------
test_output_contains("Pass")
success_msg("Great work!")

Solution
--------
# Exercise: make a regular expression that will match an email
import re
def test_email(your_pattern):
    pattern = re.compile(your_pattern)
    emails = ["john@example.com", "python-list@python.org", "wha.t.`1an?ug{}ly@email.com"]
    for email in emails:
        if not re.match(pattern, email):
            print("You failed to match %s" % (email))
        elif not your_pattern:
            print("Forgot to enter a pattern!")
        else:
            print("Pass")
# Your pattern here!
pattern = r"\"?([-a-zA-Z0-9.`?{}]+@\w+\.\w+)\"?"
test_email(pattern)
