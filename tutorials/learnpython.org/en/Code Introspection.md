Tutorial
--------

Code introspection is the ability to examine classes, functions and keywords to know what they are, what they do and what they know.

Python provides several functions and utilities for code introspection.

    help()
    dir()
    hasattr()
    id()
    type()
    repr()
    callable()
    issubclass()
    isinstance()
    __doc__
    __name__

Often the most important one is the help function, since you can use it to find what other functions do.

Exercise
--------

Print a list of all attributes of the given Vehicle object.

<div data-datacamp-exercise="" data-height="400" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiIyBVc2UgdGhlIGhlbHAgZnVuY3Rpb24gdG8gc2VlIHdoYXQgZWFjaCBmdW5jdGlvbiBkb2VzLlxuIyBEZWxldGUgdGhpcyB3aGVuIHlvdSBhcmUgZG9uZS5cbmhlbHAoZGlyKVxuaGVscChoYXNhdHRyKVxuaGVscChpZClcblxuIyBEZWZpbmUgdGhlIFZlaGljbGUgY2xhc3MuXG5jbGFzcyBWZWhpY2xlOlxuICAgIG5hbWUgPSBcIlwiXG4gICAga2luZCA9IFwiY2FyXCJcbiAgICBjb2xvciA9IFwiXCJcbiAgICB2YWx1ZSA9IDEwMC4wMFxuICAgIGRlZiBkZXNjcmlwdGlvbihzZWxmKTpcbiAgICAgICAgZGVzY19zdHIgPSAoXCIlcyBpcyBhICVzICVzIHdvcnRoICQlLjJmLlwiICUoc2VsZi5uYW1lLCBzZWxmLmNvbG9yLCBzZWxmLmtpbmQsIHNlbGYudmFsdWUpKVxuICAgICAgICByZXR1cm4gZGVzY19zdHJcblxuIyBQcmludCBhIGxpc3Qgb2YgYWxsIGF0dHJpYnV0ZXMgb2YgdGhlIFZlaGljbGUgY2xhc3MuXG4jIFlvdXIgY29kZSBnb2VzIGhlcmVcblxuIiwic29sdXRpb24iOiIjIERlZmluZSB0aGUgVmVoaWNsZSBjbGFzc1xuY2xhc3MgVmVoaWNsZTpcbiAgICBuYW1lID0gXCJcIlxuICAgIGtpbmQgPSBcImNhclwiXG4gICAgY29sb3IgPSBcIlwiXG4gICAgdmFsdWUgPSAxMDAuMDBcbiAgICBkZWYgZGVzY3JpcHRpb24oc2VsZik6XG4gICAgICAgIGRlc2Nfc3RyID0gKFwiJXMgaXMgYSAlcyAlcyB3b3J0aCAkJS4yZi5cIiAlKHNlbGYubmFtZSwgc2VsZi5jb2xvciwgc2VsZi5raW5kLCBzZWxmLnZhbHVlKSlcbiAgICAgICAgcmV0dXJuIGRlc2Nfc3RyXG5cbiMgUHJpbnQgYSBsaXN0IG9mIGFsbCBhdHRyaWJ1dGVzIG9mIHRoZSBWZWhpY2xlIGNsYXNzLlxucHJpbnQoZGlyKFZlaGljbGUpKSIsInNjdCI6InRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiWydfX2RvY19fJywgJ19fbW9kdWxlX18nLCAnY29sb3InLCAnZGVzY3JpcHRpb24nLCAna2luZCcsICduYW1lJywgJ3ZhbHVlJ11cIilcbnN1Y2Nlc3NfbXNnKFwiVmVyeSBuaWNlIVwiKSJ9
</div>
