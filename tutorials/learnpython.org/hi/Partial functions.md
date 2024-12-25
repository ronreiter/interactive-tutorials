You can create partial functions in python by using the partial function from the functools library.

आंशिक फ़ंक्शन मदद करते हैं एक फ़ंक्शन के x पैरामीटरों को एक ऐसे फ़ंक्शन में बदलने में जिसमें कम पैरामीटर होते हैं, और सीमित फ़ंक्शन के लिए निश्चित मान सेट किए गए होते हैं।

आवश्यक आयात:

    from functools import partial

यह कोड 8 लौटाएगा।

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

एक महत्वपूर्ण नोट: डिफ़ॉल्ट मान बाएं से चर को बदलना शुरू कर देंगे। 2 x की जगह लेगा। y बराबर 4 होगा जब dbl(4) को कॉल किया जाएगा। इस उदाहरण में इसका कोई फर्क नहीं पड़ता, लेकिन यह नीचे के उदाहरण में करेगा।

Exercise
--------
partial() को कॉल करते हुए प्रदान की गई फ़ंक्शन को संपादित करें और func() में पहले तीन चर को बदलें। फिर नए आंशिक फ़ंक्शन के साथ केवल एक इनपुट चर का उपयोग करते हुए प्रिंट करें ताकि आउटपुट 60 के बराबर हो।