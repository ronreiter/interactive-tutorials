Python बूलियन लॉजिक का उपयोग करके परिस्थितियों का मूल्यांकन करता है। जब कोई अभिव्यक्ति तुलना या मूल्यांकन की जाती है, तो बूलियन मान True और False लौटाए जाते हैं। उदाहरण के लिए:

    x = 2
    print(x == 2) # prints out True
    print(x == 3) # prints out False
    print(x < 3) # prints out True

ध्यान दें कि वेरिएबल असाइनमेंट एकल समान ऑपरेटर "=" का उपयोग करके किया जाता है, जबकि दो वेरिएबल के बीच तुलना दोहरे समान ऑपरेटर "==" का उपयोग करके की जाती है। "असमान" ऑपरेटर को "!=" के रूप में चिह्नित किया जाता है।

### Boolean operators

"and" और "or" बूलियन ऑपरेटर जटिल बूलियन अभिव्यक्तियों के निर्माण की अनुमति देते हैं, उदाहरण के लिए:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Your name is John, and you are also 23 years old.")

    if name == "John" or name == "Rick":
        print("Your name is either John or Rick.")

### The "in" operator

"in" ऑपरेटर का उपयोग यह जांचने के लिए किया जा सकता है कि क्या निर्दिष्ट वस्तु किसी अवतार वस्तु कंटेनर, जैसे कि सूची के भीतर मौजूद है:

    name = "John"
    if name in ["John", "Rick"]:
        print("Your name is either John or Rick.")

Python कोड ब्लॉकों को परिभाषित करने के लिए इंडेंटेशन का उपयोग करता है, ब्रैकेट्स की जगह। मानक Python इंडेंटेशन 4 स्थान है, हालांकि टैब और कोई भी अन्य स्थान आकार काम करेंगे, यदि यह सुसंगत है। ध्यान दें कि कोड ब्लॉकों को किसी समापन की आवश्यकता नहीं होती है।

यहाँ Python के "if" स्टेटमेंट का उपयोग करते हुए कोड ब्लॉकों का एक उदाहरण है:

    statement = False
    another_statement = True
    if statement is True:
        # do something
        pass
    elif another_statement is True: # else if
        # do something else
        pass
    else:
        # do another thing
        pass

उदाहरण के लिए:

    x = 2
    if x == 2:
        print("x equals two!")
    else:
        print("x does not equal to two.")

एक स्टेटमेंट को सत्य के रूप में मूल्यांकन किया जाता है यदि निम्नलिखित में से कोई एक सही है:
1. "True" बूलियन वेरिएबल दिया जाता है, या अंकगणितीय तुलना आदि के माध्यम से व्युत्पन्न किया जाता है।
2. एक वस्तु जो "खाली" नहीं मानी जाती है, पास की जाती है।

यहाँ कुछ उदाहरण हैं जो वस्तुओं को खाली माना जाता है:
1. एक खाली स्ट्रिंग: ""
2. एक खाली सूची: []
3. संख्या शून्य: 0
4. गलत बूलियन वेरिएबल: False

### The 'is' operator

डबल समान ऑपरेटर "==" से भिन्न, "is" ऑपरेटर वेरिएबल के मूल्यों का मिलान नहीं करता, बल्कि खुद उदाहरणों का मिलान करता है। उदाहरण के लिए:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # Prints out True
    print(x is y) # Prints out False

### The "not" operator

"not" का उपयोग किसी बूलियन अभिव्यक्ति से पहले करने पर इसे उल्टा कर देता है:

    print(not False) # Prints out True
    print((not False) == (False)) # Prints out False

अभ्यास
--------

पहले खंड में वेरिएबल्स को बदलें, ताकि प्रत्येक if स्टेटमेंट को True के रूप में हल किया जा सके।