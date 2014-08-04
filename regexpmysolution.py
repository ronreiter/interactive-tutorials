# Included a regexp pattern for matching emails
# Example
import re
pattern = re.compile(r"\[(on|off)\]") # Slight optimization
re.search(pattern, "Mono: Playback 65 [75%] [-16.50dB] [on]")
# Returns a Match object!
re.search(pattern, "Nada...:-(")
# Doesn't return anything.
# End Example

# Exercise: make a regular expression that will match an email
def test_email(your_pattern):
    pattern = re.compile(your_pattern)
    emails = ["john@example.com", "python-list@python.org", '"wha.t.`1an?ug{}ly@email.com"']
    for email in emails:
        if not re.match(pattern, email):
            print "You failed to match %s" % (email)
        elif not your_pattern:
            print "Forgot to enter a pattern!"
        else:
            print "Pass"
your_pattern = r"(.*)@(.*)\.(.*)" # Your pattern here!
test_email(your_pattern)
