Python में प्रत्येक फ़ंक्शन पूर्व-निर्धारित संख्या में तर्क प्राप्त करता है, यदि इसे सामान्य रूप से घोषित किया जाता है, जैसे:

    def myfunction(first, second, third):
        # do something with the 3 variables
        ...

ऐसे फ़ंक्शन्स घोषित करना संभव है जो एक चर संख्या में तर्क प्राप्त करते हैं, निम्नलिखित वाक्यविन्यास का उपयोग करते हुए:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

"therest" वेरिएबल एक वेरिएबल की सूची है, जो उन सभी तर्कों को प्राप्त करता है जो "foo" फ़ंक्शन को पहले 3 तर्कों के बाद दिए गए थे। इसलिए `foo(1, 2, 3, 4, 5)` को कॉल करने पर यह प्रिंट होगा:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

यह भी संभव है कि फ़ंक्शन्स को कीवर्ड द्वारा तर्क दिए जाएं, ताकि तर्कों का क्रम महत्वपूर्ण न हो, निम्नलिखित वाक्यविन्यास का उपयोग करते हुए। निम्नलिखित कोड इस आउटपुट को देता है: 
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))

"bar" फ़ंक्शन 3 तर्कों को प्राप्त करता है। यदि कोई अतिरिक्त "action" तर्क प्राप्त किया जाता है, और यह संख्याओं को जोड़ने की सलाह देता है, तो जोड़ दिया जाता है। वैकल्पिक रूप से, फ़ंक्शन यह भी जानता है कि इसे पहला तर्क लौटाना होगा, यदि फ़ंक्शन में पास किए गए "number" पैरामीटर का मान "first" के बराबर है।

Exercise
--------

`foo` और `bar` फ़ंक्शन्स को इस प्रकार पूरा करें कि वे एक चर मात्रा में तर्क प्राप्त कर सकें (3 या अधिक)
`foo` फ़ंक्शन को प्राप्त अतिरिक्त तर्कों की संख्या लौटानी चाहिए।
`bar` को `True` लौटाना चाहिए यदि कीवर्ड `magicnumber` वाला तर्क 7 के बराबर हो, और `False` अन्यथा।