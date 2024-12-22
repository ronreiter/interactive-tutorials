A dictionary एक डेटा प्रकार है जो arrays के समान होता है, लेकिन indexes के बजाय keys और values के साथ काम करता है। एक dictionary में संग्रहीत प्रत्येक value को एक key का उपयोग करके एक्सेस किया जा सकता है, जो किसी भी प्रकार की object (एक string, एक number, एक list, आदि) हो सकती है, इसके index का उपयोग करके इसे संबोधित करने के बजाय।

उदाहरण के लिए, फोन नंबरों का एक डेटाबेस dictionary का उपयोग करके इस तरह संग्रहीत किया जा सकता है:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

वैकल्पिक रूप से, एक dictionary को निम्नलिखित नोटेशन में समान values के साथ इनिशियलाइज़ किया जा सकता है:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterating over dictionaries

Dictionaries को list की तरह iterate किया जा सकता है। हालांकि, एक list के विपरीत, dictionary उसमें संग्रहीत values के क्रम को नहीं रखता है। key value pairs पर iterate करने के लिए, निम्नलिखित सिंटैक्स का उपयोग करें:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Removing a value

किसी निर्दिष्ट index को हटाने के लिए, निम्नलिखित नोटेशन्स में से किसी एक का उपयोग करें:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

या:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercise
--------

फोनबुक में "Jake" को 938273443 फोन नंबर के साथ जोड़ें, और फोनबुक से Jill को हटाएं।