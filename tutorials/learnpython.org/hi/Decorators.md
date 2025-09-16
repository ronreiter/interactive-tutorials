डेकोरेटर्स आपको [फ़ंक्शंस](http://www.learnpython.org/en/Functions ""), [मेथड्स, या क्लासेस](http://www.learnpython.org/en/Classes%20and%20Objects "") जैसे कॉल करने योग्य ऑब्जेक्ट्स में सरल संशोधन करने की अनुमति देते हैं। इस ट्यूटोरियल में हम फ़ंक्शंस पर बात करेंगे। सिंटैक्स

    @decorator
    def functions(arg):
        return "value"

के बराबर है:

    def function(arg):
        return "value"
    function = decorator(function) # यह फ़ंक्शन को डेकोरेटर के पास भेजता है, और इसे फंक्शन से पुनः असाइन करता है

जैसा कि आपने देखा होगा, एक डेकोरेटर सिर्फ एक और फंक्शन है जो एक फंक्शन लेता है और एक को वापस लौटाता है। उदाहरण के लिए आप ऐसा कर सकते हैं:

    def repeater(old_function):
        def new_function(*args, **kwds): # देखें learnpython.org/en/Multiple%20Function%20Arguments कि *args और **kwds कैसे काम करते हैं
            old_function(*args, **kwds) # हम पुराने फंक्शन को रन करते हैं
            old_function(*args, **kwds) # हम इसे दोहराते हैं
        return new_function # हमें new_function को वापस लौटाना होगा, नहीं तो यह इसे मूल्य में पुनः असाइन नहीं करेगा

यह एक फंक्शन को दो बार दोहराएगा।

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

आप इसे आउटपुट बदलने के लिए भी बना सकते हैं

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # रिटर्न वैल्यू को संशोधित करें
        return new_function

इनपुट बदलें

    def double_Ii(old_function):
        def new_function(arg): # यह तभी काम करता है जब पुराने फंक्शन का एक ही आर्ग्युमेंट हो
            return old_function(arg * 2) # भेजे गए आर्ग्युमेंट को संशोधित करें
        return new_function

और चेकिंग करें।

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # यह एक त्रुटि उत्पन्न करता है, जो गलत कार्य करने से बेहतर है
            old_function(arg)
        return new_function

मान लीजिए आप आउटपुट को एक वेरिएबल मात्रा से गुणा करना चाहते हैं। आप डेकोरेटर को परिभाषित कर सकते हैं और निम्नलिखित की तरह उपयोग कर सकते हैं:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # यह नए जनरेटर को वापस लौटाता है
    
    # उपयोग
    @multiply(3) # multiply एक जनरेटर नहीं है, लेकिन multiply(3) है
    def return_num(num):
        return num
        
    # अब return_num सजाया गया है और इसे वापस अपने में असाइन किया गया है
    return_num(5) # 15 लौटाना चाहिए

आप पुराने फंक्शन के साथ कुछ भी कर सकते हैं, यहां तक कि इसे पूरी तरह से अनदेखा भी कर सकते हैं! उन्नत डेकोरेटर्स डॉक स्ट्रिंग और आर्ग्युमेंट संख्या को भी बदल सकते हैं। कुछ शानदार डेकोरेटर्स के लिए, <http://wiki.python.org/moin/PythonDecoratorLibrary> पर जाएं।

Exercise
--------
एक डेकोरेटर फैक्ट्री बनाएं जो एक डेकोरेटर लौटाता है जो एक आर्ग्युमेंट के साथ फंक्शन को सजाता है। फैक्ट्री को एक आर्ग्युमेंट लेना चाहिए, एक प्रकार, और फिर एक डेकोरेटर लौटाना चाहिए जो फंक्शन सुनिश्चित करता है कि इनपुट सही प्रकार का है। यदि यह गलत है, तो इसे print("Bad Type") करना चाहिए (वास्तव में, इसे एक त्रुटि उत्पन्न करनी चाहिए, लेकिन त्रुटि उठाना इस ट्यूटोरियल में नहीं है)। यदि आप उलझन में हैं तो ट्यूटोरियल कोड और अपेक्षित आउटपुट देखें (मैं जानता हूँ कि मैं होता)। isinstance(object, type_of_object) या type(object) का उपयोग करना मदद कर सकता है।