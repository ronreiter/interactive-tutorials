Tutorial
--------

دائىملىق ئىپادىلەش (بەزىدە regexp ، regex ياكى re غا قىسقارتىلىدۇ) a
تېكىستتىكى ئەندىزىلەرنى ماسلاشتۇرۇش قورالى. Python دا بىزدە re مودۇلى بار.
دائىملىق ئىپادىلەش پروگراممىلىرى كەڭ تارقالغان ، ئەمما ئۇلار بار
بىر قەدەر مۇرەككەپ ، شۇڭا مەلۇم بىر ۋەزىپە ئۈچۈن regex ئىشلىتىشنى ئويلاشقاندا ،
باشقا تاللاشلارنى ئويلاڭ ۋە ئاخىرقى چارە سۈپىتىدە رېژىسسورلۇققا كېلىڭ.

Regex نىڭ بىر مىسالى «r» ^ (| | | Cc دىن). *? Python-list@python.org "` ھازىر an
چۈشەندۈرۈش:
caret `^ بىر قۇرنىڭ بېشىدىكى تېكىستكە ماس كېلىدۇ. تۆۋەندىكىسى
گۇرۇپپا ، «(| | | | Cc)» بىلەن بولغان بۆلەك قۇرنىڭ باشلىنىشى كېرەكلىكىنى كۆرسىتىدۇ
تۇرۇبا بىلەن ئايرىلغان سۆزلەرنىڭ بىرى `|`. دەپ ئاتىلىدۇ
OR مەشغۇلاتچىسى ، ئەگەر سىزىق ھەر قانداق باشلانسا regex ماس كېلىدۇ
گۇرۇپپىدىكى سۆزلەرنىڭ. `. *?` ئاچكۆزلۈك بىلەن ھەر قانداق ماسلىشىشنى كۆرسىتىدۇ
يېڭى قۇر `\ n` ھەرپتىن باشقا ھەرپلەرنىڭ سانى. ئاچكۆزلۈك
قىسمەن ئىمكانقەدەر ئاز تەكرارلاشنى ماسلاشتۇرۇشنى كۆرسىتىدۇ. `.` ھەرپ
ھەر قانداق يېڭى بولمىغان ھەرپنى كۆرسىتىدۇ ، `*` 0 ياكى ئۇنىڭدىن كۆپ تەكرارلاشنى كۆرسىتىدۇ
ۋاقىت ، ۋە `?` خاراكتېرى ئۇنى ئاچكۆزلۈك قىلىدۇ.

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
