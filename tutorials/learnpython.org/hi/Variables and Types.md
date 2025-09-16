Python पूरी तरह से ऑब्जेक्ट ओरिएंटेड है और "स्टैटिकली टाइप्ड" नहीं है। आपको उनका उपयोग करने से पहले वेरिएबल्स की घोषणा करने की ज़रूरत नहीं है, या उनके प्रकार की घोषणा करने की ज़रूरत नहीं है। Python में हर वेरिएबल एक ऑब्जेक्ट होता है।

यह ट्यूटोरियल कुछ मूल प्रकार के वेरिएबल्स पर चर्चा करेगा।

### Numbers
Python दो प्रकार के नंबरों का समर्थन करता है - integers (पूर्णांक) और floating point numbers (दशमलव)। (यह complex numbers का भी समर्थन करता है, जिन्हें इस ट्यूटोरियल में नहीं समझाया जाएगा)।

एक integer को परिभाषित करने के लिए, निम्नलिखित सिंटैक्स का उपयोग करें:

    myint = 7
    print(myint)

एक floating point number को परिभाषित करने के लिए, आप निम्नलिखित में से किसी एक संकेतन का उपयोग कर सकते हैं:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Strings को या तो सिंगल क्वोट या डबल क्वोट के साथ परिभाषित किया जा सकता है।

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

दोनों के बीच का अंतर यह है कि डबल क्वोट्स का उपयोग करने से अपॉस्ट्रोफ्स को शामिल करना आसान हो जाता है (जबकि सिंगल क्वोट्स का उपयोग करने पर यह स्ट्रिंग समाप्ति का कारण बन सकता है)

    mystring = "Don't worry about apostrophes"
    print(mystring)

Strings को परिभाषित करने के लिए अतिरिक्त विभिन्नताएँ हैं जो कैरिज रिटर्न्स, बैक्सलैशेज़ और यूनिकोड कैरेक्टर्स जैसी चीजों को शामिल करना आसान बनाती हैं। ये इस ट्यूटोरियल के दायरे से बाहर हैं, लेकिन [Python डॉक्यूमेंटेशन](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial") में कवर की गई हैं।

सरल ऑपरेटर नंबरों और स्ट्रिंग्स पर निष्पादित किए जा सकते हैं:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

असाइनमेंट एक से अधिक वेरिएबल्स पर "एक ही समय में" एक ही लाइन पर किया जा सकता है, जैसे

    a, b = 3, 4
    print(a, b)

नंबर्स और स्ट्रिंग्स के बीच ऑपरेटर को मिलाना समर्थित नहीं है:

    # This will not work!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

इस अभ्यास का लक्ष्य एक स्ट्रिंग, एक integer, और एक floating point number बनाना है। स्ट्रिंग का नाम `mystring` होना चाहिए और उसमें "hello" शब्द होना चाहिए। floating point number का नाम `myfloat` होना चाहिए और उसमें 10.0 अंक होना चाहिए, और integer का नाम `myint` होना चाहिए और उसमें 20 अंक होना चाहिए।