### What are Functions?

फ़ंक्शन आपके कोड को उपयोगी ब्लॉकों में विभाजित करने का एक सुविधाजनक तरीका है, जो हमें हमारे कोड को क्रमबद्ध करने, इसे अधिक पठनीय बनाने, इसे पुन: उपयोग करने और कुछ समय बचाने की अनुमति देता है। इसके अलावा, फ़ंक्शन इंटरफेस को परिभाषित करने का एक मुख्य तरीका हैं ताकि प्रोग्रामर अपने कोड को साझा कर सकें।

### How do you write functions in Python?

जैसा कि हमने पिछले ट्यूटोरियल में देखा, पायथन ब्लॉकों का उपयोग करता है।

एक ब्लॉक को निम्नलिखित प्रारूप में लिखे गए कोड के रूप में परिभाषित किया जाता है:

    block_head:
        1st block line
        2nd block line
        ...

जहां एक ब्लॉक लाइन अधिक पायथन कोड है (यहां तक कि एक और ब्लॉक भी हो सकता है), और ब्लॉक हेड का निम्नलिखित प्रारूप होता है:
block_keyword block_name(argument1,argument2, ...)
ब्लॉक कीवर्ड आप पहले से जानते हैं जैसे "if", "for", और "while"।

Python में फ़ंक्शन को ब्लॉक कीवर्ड "def" का उपयोग करके परिभाषित किया जाता है, इसके बाद फ़ंक्शन का नाम ब्लॉक का नाम होता है।
उदाहरण के लिए:

    def my_function():
        print("Hello From My Function!")


फ़ंक्शन भी आर्गुमेंट्स (कैलेर से फ़ंक्शन को पास की गई वेरिएबल) प्राप्त कर सकते हैं।
उदाहरण के लिए:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


फ़ंक्शन कैलेर को एक मान लौटाने के लिए 'return' कीवर्ड का उपयोग कर सकते हैं।
उदाहरण के लिए:

    def sum_two_numbers(a, b):
        return a + b

### How do you call functions in Python?

सरलता से फ़ंक्शन का नाम लिखें उसके बाद (), आवश्यक आर्गुमेंट्स ब्रैकेट्स के भीतर रखें।
उदाहरण के लिए, चलिए ऊपर लिखे गए फ़ंक्शन को कॉल करते हैं (पिछले उदाहरण में):

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


Exercise
--------

इस अभ्यास में आप एक मौजूदा फ़ंक्शन का उपयोग करेंगे, और अपना खुद का जोड़ते हुए एक पूरी तरह से कार्यात्मक प्रोग्राम बनाएंगे।

1. `list_benefits()` नामक एक फ़ंक्शन जोड़ें जो निम्नलिखित स्ट्रिंग्स की सूची लौटाता है: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. `build_sentence(info)` नामक एक फ़ंक्शन जोड़ें जो एक आर्गुमेंट स्वीकार करता है जो एक स्ट्रिंग बनाता है और वाक्य की शुरुआत दिए हुए स्ट्रिंग से करते हुए इन शब्दों के साथ समाप्त करता है: " is a benefit of functions!"

3. सभी फ़ंक्शंस को एकसाथ काम करते देखिए!