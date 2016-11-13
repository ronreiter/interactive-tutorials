Tutorial
--------

Regular Expressions (sometimes shortened to regexp, regex, or re) are a
tool for matching patterns in text. In Python, we have the re module.
The applications for regular expressions are wide-spread, but they are
fairly complex, so when contemplating using a regex for a certain task,
think about alternatives, and come to regexes as a last resort.

An example regex is `r"^(From|To|Cc).*?python-list@python.org"` Now for an
explanation:
the caret `^` matches text at the beginning of a line. The following
group, the part with `(From|To|Cc)` means that the line has to start with
one of the words that are separated by the pipe `|`. That is called
the OR operator, and the regex will match if the line starts with any
of the words in the group. The `.*?` means to un-greedily match any
number of  characters, except the newline `\n` character. The un-greedy
part means to match as few repetitions as possible. The `.` character
means any non-newline character, the `*` means to repeat 0 or more
times, and the `?` character makes it un-greedy.

So, the following lines would be matched by that regex:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

A complete reference for the re syntax is available at the [python
docs](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax).

As an example of a "proper" email-matching regex (like the one in the
exercise), see [this](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)

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
