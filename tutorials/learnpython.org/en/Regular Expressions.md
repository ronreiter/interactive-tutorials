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

<div data-datacamp-exercise="" data-height="300" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBFeGFtcGxlOiBcbmltcG9ydCByZVxucGF0dGVybiA9IHJlLmNvbXBpbGUoclwiXFxbKG9ufG9mZilcXF1cIikgIyBTbGlnaHQgb3B0aW1pemF0aW9uXG5wcmludChyZS5zZWFyY2gocGF0dGVybiwgXCJNb25vOiBQbGF5YmFjayA2NSBbNzUlXSBbLTE2LjUwZEJdIFtvbl1cIikpXG4jIFJldHVybnMgYSBNYXRjaCBvYmplY3QhXG5wcmludChyZS5zZWFyY2gocGF0dGVybiwgXCJOYWRhLi4uOi0oXCIpKVxuIyBEb2Vzbid0IHJldHVybiBhbnl0aGluZy5cbiMgRW5kIEV4YW1wbGVcblxuIyBFeGVyY2lzZTogbWFrZSBhIHJlZ3VsYXIgZXhwcmVzc2lvbiB0aGF0IHdpbGwgbWF0Y2ggYW4gZW1haWxcbmRlZiB0ZXN0X2VtYWlsKHlvdXJfcGF0dGVybik6XG4gICAgcGF0dGVybiA9IHJlLmNvbXBpbGUoeW91cl9wYXR0ZXJuKVxuICAgIGVtYWlscyA9IFtcImpvaG5AZXhhbXBsZS5jb21cIiwgXCJweXRob24tbGlzdEBweXRob24ub3JnXCIsIFwid2hhLnQuYDFhbj91Z3t9bHlAZW1haWwuY29tXCJdXG4gICAgZm9yIGVtYWlsIGluIGVtYWlsczpcbiAgICAgICAgaWYgbm90IHJlLm1hdGNoKHBhdHRlcm4sIGVtYWlsKTpcbiAgICAgICAgICAgIHByaW50KFwiWW91IGZhaWxlZCB0byBtYXRjaCAlc1wiICUgKGVtYWlsKSlcbiAgICAgICAgZWxpZiBub3QgeW91cl9wYXR0ZXJuOlxuICAgICAgICAgICAgcHJpbnQoXCJGb3Jnb3QgdG8gZW50ZXIgYSBwYXR0ZXJuIVwiKVxuICAgICAgICBlbHNlOlxuICAgICAgICAgICAgcHJpbnQoXCJQYXNzXCIpXG5wYXR0ZXJuID0gclwiXCIgIyBZb3VyIHBhdHRlcm4gaGVyZSFcbnRlc3RfZW1haWwocGF0dGVybilcbiAgICAiLCJzb2x1dGlvbiI6IiMgRXhlcmNpc2U6IG1ha2UgYSByZWd1bGFyIGV4cHJlc3Npb24gdGhhdCB3aWxsIG1hdGNoIGFuIGVtYWlsXG5pbXBvcnQgcmVcbmRlZiB0ZXN0X2VtYWlsKHlvdXJfcGF0dGVybik6XG4gICAgcGF0dGVybiA9IHJlLmNvbXBpbGUoeW91cl9wYXR0ZXJuKVxuICAgIGVtYWlscyA9IFtcImpvaG5AZXhhbXBsZS5jb21cIiwgXCJweXRob24tbGlzdEBweXRob24ub3JnXCIsIFwid2hhLnQuYDFhbj91Z3t9bHlAZW1haWwuY29tXCJdXG4gICAgZm9yIGVtYWlsIGluIGVtYWlsczpcbiAgICAgICAgaWYgbm90IHJlLm1hdGNoKHBhdHRlcm4sIGVtYWlsKTpcbiAgICAgICAgICAgIHByaW50KFwiWW91IGZhaWxlZCB0byBtYXRjaCAlc1wiICUoZW1haWwpKVxuICAgICAgICBlbGlmIG5vdCB5b3VyX3BhdHRlcm46XG4gICAgICAgICAgICBwcmludChcIkZvcmdvdCB0byBlbnRlciBhIHBhdHRlcm4hXCIpXG4gICAgICAgIGVsc2U6XG4gICAgICAgICAgICBwcmludChcIlBhc3NcIilcbiMgWW91ciBwYXR0ZXJuIGhlcmUhXG5wYXR0ZXJuID0gclwiXFxcIj8oWy1hLXpBLVowLTkuYD97fV0rQFxcdytcXC5cXHcrKVxcXCI/XCJcbnRlc3RfZW1haWwocGF0dGVybikiLCJzY3QiOiJ0ZXN0X291dHB1dF9jb250YWlucyhcIlBhc3NcIilcbnN1Y2Nlc3NfbXNnKFwiR3JlYXQgd29yayFcIikifQ==
</div>

