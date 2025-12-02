Tutorial
--------

دائىملىق ئىپادىلەش (بەزىدە regexp ، regex ياكى re غا قىسقارتىلىدۇ) بولسا
تېكىستتىكى ئەندىزىلەرنى ماسلاشتۇرۇش قورالى. Python دا بىزدە re مودۇلى بار.
دائىملىق ئىپادىلەش پروگراممىلىرى كەڭ تارقالغان ، ئەمما ئۇلار بار
بىر قەدەر مۇرەككەپ ، شۇڭا مەلۇم بىر ۋەزىپە ئۈچۈن regex ئىشلىتىشنى ئويلاشقاندا ،
باشقا تاللاشلارنى ئويلاڭ ۋە ئاخىرقى چارە سۈپىتىدە قوللىنىڭ.

Regex نىڭ بىر مىسالى `r"^(From|To|Cc).*?python-list@python.org"` نىڭ چۈشەندۈرۈلىشى:

بەلگە `^` بىر قۇرنىڭ بېشىدىكى تېكىستكە ماس كېلىدۇ. تۆۋەندىكى
گۇرۇپپا ، `(From|To|Cc)` بۆلەك بولسا قۇرنىڭ `|` تۇرۇبا بىلەن ئايرىلغان سۆزلەر بىلەن باشلىنىشى كېرەكلىكىنى كۆرسىتىدۇ
ئۇ بولسا OR ئەمىلى دىيىلىدۇ. بۇنىڭدا ئەگەر قۇر شۇ گۇرۇپپىدىكى ھەر قانداق سۆز بىلەن باشلانسا بۇلىدۇ.
كىيىنكى `. *?` بولسا ئاچكۆزلۈك بىلەن ھەر قانداق ساندىكى ھەرىپلەرنىڭ ماسلىشىشنى كۆرسىتىدۇ، `\n` يېڭى قۇر ھەرىپدىن باشقا.
ئاچكۆزسىز قىسمەن ئىمكانقەدەر ئاز ماسلىشىشنى بەلگىلەيدۇ.
بۇ `.` بەلگە ھەر قانداق يېڭى بولمىغان ھەرپنى كۆرسىتىدۇ ، `*` 0 ياكى ئۇنىڭدىن كۆپ تەكرارلاشنى كۆرسىتىدۇ ۋە `?` بەلگىسى ئۇنى ئاچكۆزسىز قىلىدۇ.


شۇڭا ، تۆۋەندىكى قۇرلار ئاشۇ regex بىلەن ماس كېلىدۇ:
`From: python-list @ python.org`
`To :! Asp] <,.      python-list @ python.org`

[Python] دا re گرامماتىكىسىنىڭ تولۇق پايدىلىنىشى بار
docs] (http://docs.python.org/library/re.html#regular-expression-syntax
"RE گرامماتىكىسى).

«مۇۋاپىق» ئېلېكترونلۇق خەت ماسلاشتۇرۇلغان regex نىڭ مىسالى سۈپىتىدە
چېنىقىش) ، [بۇنى] كۆرۈڭ (http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)

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
