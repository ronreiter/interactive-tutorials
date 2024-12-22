यह अनुभाग बताता है कि Python में बुनियादी ऑपरेटरों का कैसे उपयोग किया जाता है।

### Arithmetic Operators 

जैसे किसी अन्य प्रोग्रामिंग भाषा में, संख्या के साथ जोड़, घटाव, गुणा, और भाग के ऑपरेटर का उपयोग किया जा सकता है।

    number = 1 + 2 * 3 / 4.0
    print(number)

अनुमान लगाने का प्रयास करें कि उत्तर क्या होगा। क्या Python संचालन का क्रम (order of operations) का पालन करता है?

एक और ऑपरेटर उपलब्ध है, जो कि मॉड्यूलो (%) ऑपरेटर है, जो विभाजन का शेषांक लौटाता है। dividend % divisor = remainder.

    remainder = 11 % 3
    print(remainder)

दो गुणा चिह्नों का उपयोग करना एक घातांक संबंध बनाता है।

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python स्ट्रिंग्स को जोड़ने के लिए जोड़ ऑपरेटर का समर्थन करता है:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python स्ट्रिंग्स को कई बार दोहराने के लिए गुणा ऑपरेटर का समर्थन करता है:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

सूचियाँ जोड़ ऑपरेटरों के साथ एकजुट की जा सकती हैं:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

जैसे स्ट्रिंग्स में, Python एक नई सूची बनाने के लिए गुणा ऑपरेटर का समर्थन करता है जिसमें एक दोहराए जाने वाला क्रम है:

    print([1,2,3] * 3)

Exercise
--------

इस अभ्यास का लक्ष्य दो सूचियाँ बनाना है जिन्हें `x_list` और `y_list` कहा जाता है, जिनमें क्रमशः 10 बार चर `x` और `y` होते हैं। आपको `big_list` नामक एक सूची भी बनानी है, जो बनाए गए उन दो सूचियों को जोड़कर, 10 बार प्रत्येक चर `x` और `y` को शामिल करता है।