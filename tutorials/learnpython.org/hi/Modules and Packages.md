प्रोग्रामिंग में, एक मॉड्यूल एक सॉफ़्टवेयर का ऐसा टुकड़ा होता है जो विशेष कार्यक्षमता प्रदान करता है। उदाहरण के लिए, जब एक पिंग पोंग गेम बनाना हो, तो एक मॉड्यूल गेम लॉजिक के लिए जिम्मेदार हो सकता है, और दूसरा मॉड्यूल स्क्रीन पर गेम को ड्रॉ करने के लिए। प्रत्येक मॉड्यूल में विभिन्न फाइलें होती हैं, जिन्हें अलग-अलग संपादित किया जा सकता है।

### Writing modules

Python में मॉड्यूल केवल .py एक्सटेंशन वाली Python फाइलें होती हैं। मॉड्यूल का नाम फाइल नाम के समान होता है। एक Python मॉड्यूल में एक सेट के फंक्शन, क्लास या वेरिएबल परिभाषित और लागू किए जा सकते हैं। ऊपर दिए गए उदाहरण में दो फाइलें शामिल हैं:

mygame/

- mygame/game.py

- mygame/draw.py

Python स्क्रिप्ट `game.py` गेम को लागू करता है। यह `draw.py` फाइल से `draw_game` फंक्शन का उपयोग करता है, या दूसरे शब्दों में, `draw` मॉड्यूल जो स्क्रीन पर गेम को ड्रॉ करने के लिए लॉजिक को लागू करता है।

मॉड्यूल को अन्य मॉड्यूल से `import` कमांड का उपयोग करके आयात किया जाता है। इस उदाहरण में, `game.py` स्क्रिप्ट कुछ इस प्रकार हो सकता है:

```python
# game.py
# import the draw module
import draw

def play_game():
    ...

def main():
    result = play_game()
    draw.draw_game(result)
    
# this means that if this script is executed, then 
# main() will be executed
if __name__ == '__main__':
    main()
```

`draw` मॉड्यूल कुछ इस प्रकार हो सकता है:

```python
# draw.py

def draw_game():
    ...

def clear_screen(screen):
    ...
```

इस उदाहरण में, `game` मॉड्यूल `draw` मॉड्यूल को आयात करता है, जो इसे उस मॉड्यूल में लागू किए गए फंक्शन का उपयोग करने में सक्षम बनाता है। `main` फंक्शन स्थानीय फ़ंक्शन `play_game` का उपयोग गेम चलाने के लिए करता है, और फिर `draw` मॉड्यूल में लागू किए गए फंक्शन `draw_game` का उपयोग करके गेम के परिणाम को ड्रॉ करता है। `draw` मॉड्यूल से `draw_game` फंक्शन का उपयोग करने के लिए, हमें यह निर्दिष्ट करना होता है कि फंक्शन किस मॉड्यूल में लागू किया गया है, और इसके लिए डॉट ऑपरेटर का उपयोग करते हैं। `game` मॉड्यूल से `draw_game` फंक्शन का संदर्भ देने के लिए, हमें `draw` मॉड्यूल को आयात करना होता है और फिर `draw.draw_game()` को कॉल करना होता है।

जब `import draw` निर्देश चलता है, तो Python इंटरप्रेटर उस निर्देशिका में मॉड्यूल नाम और `.py` प्रत्यय वाली फाइल खोजता है जिसमें स्क्रिप्ट निष्पादित की गई थी। इस मामले में, यह `draw.py` खोजेगा। अगर यह पाया जाता है, तो यह आयात किया जाएगा। अगर यह नहीं पाया जाता है, तो यह बिल्ट-इन मॉड्यूल की खोज जारी रखेगा।

आपने देखा होगा कि जब कोई मॉड्यूल आयात किया जाता है, तो एक `.pyc` फाइल बनाई जाती है। यह एक संकलित Python फ़ाइल है। Python फाइलों को Python बाइटकोड में परिवर्तित करता है ताकि प्रत्येक बार जब मॉड्यूल लोड किए जाते हैं तो इसे फाइलों को पार्स न करना पड़े। अगर एक `.pyc` फाइल मौजूद है, तो इसे `.py` फाइल के बजाय लोड किया जाता है। यह प्रक्रिया उपयोगकर्ता के लिए पारदर्शी होती है।

### Importing module objects to the current namespace

एक नामस्थान एक प्रणाली है जहां प्रत्येक ऑब्जेक्ट का नामांकन होता है और उन्हें Python में एक्सेस किया जा सकता है। हम `from` कमांड का उपयोग करके मुख्य स्क्रिप्ट के नामस्थान में `draw_game` फंक्शन को आयात करते हैं।

```python
# game.py
# import the draw module
from draw import draw_game

def main():
    result = play_game()
    draw_game(result)
```

आपने देखा होगा कि इस उदाहरण में, मॉड्यूल का नाम `draw_game` से पहले नहीं आता है, क्योंकि हमने `import` कमांड का उपयोग करके मॉड्यूल का नाम निर्दिष्ट कर दिया है।

इस नोटेशन का लाभ यह है कि आपको मॉड्यूल का बार-बार संदर्भित करने की आवश्यकता नहीं होती। हालांकि, एक नामस्थान में दो ऑब्जेक्ट्स एक ही नाम के नहीं हो सकते, इसलिए `import` कमांड किसी मौजूदा ऑब्जेक्ट को नामस्थान में प्रतिस्थापित कर सकता है।

### Importing all objects from a module

आप `import *` कमांड का उपयोग करके एक मॉड्यूल में सभी ऑब्जेक्ट्स को आयात कर सकते हैं जैसे:

```python
# game.py
# import the draw module
from draw import *

def main():
    result = play_game()
    draw_game(result)
```

यह थोड़ा जोखिम भरा हो सकता है क्योंकि मॉड्यूल में किए गए परिवर्तन उस मॉड्यूल को प्रभावित कर सकते हैं जो इसका आयात करता है, लेकिन यह छोटा होता है, और आपको उस मॉड्यूल से प्रत्येक ऑब्जेक्ट को निर्दिष्ट करने की आवश्यकता नहीं होती।

### Custom import name

मॉड्यूल को किसी भी नाम के तहत लोड किया जा सकता है जो आप चाहते हैं। यह तब उपयोगी होता है जब किसी मॉड्यूल को शर्तों पर आयात किया जाता है ताकि कोड के शेष भाग में एक ही नाम का उपयोग किया जा सके।

उदाहरण के लिए, यदि आपके पास दो `draw` मॉड्यूल समान लेकिन थोड़ा अलग नामों के साथ हैं, तो आप निम्नलिखित कर सकते हैं:

```python
# game.py
# import the draw module
if visual_mode:
    # in visual mode, we draw using graphics
    import draw_visual as draw
else:
    # in textual mode, we print out text
    import draw_textual as draw

def main():
    result = play_game()
    # this can either be visual or textual depending on visual_mode
    draw.draw_game(result)
```

### Module initialization

जब पहली बार एक मॉड्यूल किसी रनिंग Python स्क्रिप्ट में लोड किया जाता है, तो यह मॉड्यूल में कोड को एक बार निष्पादित करके आरंभिक होता है। अगर आपके कोड में कोई अन्य मॉड्यूल फिर से उसी मॉड्यूल को आयात करता है, तो इसे फिर से लोड नहीं किया जाएगा, इसलिए मॉड्यूल के अंदर के लोकल वेरिएबल एक "सिंगलटन" के रूप में कार्य करते हैं, जिसका अर्थ है कि वे केवल एक बार आरंभिक होते हैं।

आप इसे ऑब्जेक्ट्स को आरंभित करने के लिए उपयोग कर सकते हैं। उदाहरण के लिए:

```python
# draw.py

def draw_game():
    # when clearing the screen we can use the main screen object initialized in this module
    clear_screen(main_screen)
    ...

def clear_screen(screen):
    ...
    
class Screen():
    ...

# initialize main_screen as a singleton
main_screen = Screen()
```

### Extending module load path

Python इंटरप्रेटर को यह बताने के कुछ तरीके हैं कि कहां से मॉड्यूल लोड किए जाएं, डिफ़ॉल्ट लोकल डायरेक्टरी और बिल्ट-इन मॉड्यूल के अलावा। आप `PYTHONPATH` एनवायरनमेंट वेरिएबल का उपयोग करके अतिरिक्त डायरेक्टरीज को मॉड्यूल्स की खोज के लिए निर्दिष्ट कर सकते हैं जैसे:

```bash
PYTHONPATH=/foo python game.py
```

यह `game.py` को निष्पादित करता है, और स्क्रिप्ट को `foo` डायरेक्टरी के साथ ही लोकल डायरेक्टरी से मॉड्यूल्स लोड करने की अनुमति देता है।

आप `sys.path.append` फ़ंक्शन का भी उपयोग कर सकते हैं। इसे `import` कमांड चलाने से *पहले* निष्पादित करें:

```python
sys.path.append("/foo")
```

अब `foo` डायरेक्टरी उन पथों की सूची में जोड़ दी गई है जहां से मॉड्यूल्स खोजे जाते हैं।

### Exploring built-in modules

Python स्टैंडर्ड लाइब्रेरी में बिल्ट-इन मॉड्यूल्स की पूरी सूची [यहाँ](https://docs.python.org/3/library/) देखें।

Python में मॉड्यूल्स का पता लगाने में दो बहुत महत्वपूर्ण फंक्शन काम में आते हैं - `dir` और `help` फंक्शन।

`urllib` मॉड्यूल को आयात करने के लिए, जो हमें URLs से डेटा पढ़ने में सक्षम बनाता है, हम मॉड्यूल को `import` करते हैं:

```python
# import the library
import urllib

# use it
urllib.urlopen(...)
```

हम `dir` फंक्शन का उपयोग करके देख सकते हैं कि किस मॉड्यूल में कौन-कौन से फंक्शन लागू किए गए हैं:

```python
>>> import urllib
>>> dir(urllib)
['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', 
'__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', 
'_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', 
'_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', 
'_tagprog', '_thishost', '_typeprog', '_urlopener', '_userprog', '_valueprog', 'addbase', 'addclosehook', 
'addinfo', 'addinfourl', 'always_safe', 'basejoin', 'c', 'ftpcache', 'ftperrors', 'ftpwrapper', 'getproxies', 
'getproxies_environment', 'getproxies_macosx_sysconf', 'i', 'localhost', 'main', 'noheaders', 'os', 
'pathname2url', 'proxy_bypass', 'proxy_bypass_environment', 'proxy_bypass_macosx_sysconf', 'quote', 
'quote_plus', 'reporthook', 'socket', 'splitattr', 'splithost', 'splitnport', 'splitpasswd', 'splitport', 
'splitquery', 'splittag', 'splittype', 'splituser', 'splitvalue', 'ssl', 'string', 'sys', 'test', 'test1', 
'thishost', 'time', 'toBytes', 'unquote', 'unquote_plus', 'unwrap', 'url2pathname', 'urlcleanup', 'urlencode', 
'urlopen', 'urlretrieve']
```

जब हम मॉड्यूल में उस फंक्शन को पाते हैं जिसका हम उपयोग करना चाहते हैं, तो हम इसके बारे में अधिक जानकारी `help` फंक्शन का उपयोग करके पढ़ सकते हैं, Python इंटरप्रेटर का उपयोग करके:

```python
help(urllib.urlopen)
```

### Writing packages

पैकेज कई पैकेजों और मॉड्यूलों को समाहित करने वाले नामस्थान होते हैं। वे बस निर्देशिकाएँ होती हैं, लेकिन कुछ आवश्यकताओं के साथ।

Python में प्रत्येक पैकेज एक निर्देशिका होती है जो एक विशेष फाइल `__init__.py` को अनिवार्य रूप से रखना चाहिए। यह फाइल, जो खाली भी हो सकती है, इंगित करती है कि जिस डायरेक्टरी में यह स्थित है वह एक Python पैकेज है। इस तरह इसे एक मॉड्यूल की तरह आयात किया जा सकता है।

यदि हम एक डायरेक्टरी बनाते हैं जिसका नाम `foo` है, जो पैकेज का नाम दर्शाता है, हम तब इस पैकेज के अंदर `bar` नाम का एक मॉड्यूल बना सकते हैं। फिर हम `foo` डायरेक्टरी के अंदर `__init__.py` फाइल जोड़ते हैं।

`bar` मॉड्यूल का उपयोग करने के लिए, हम इसे दो तरीकों से आयात कर सकते हैं:

```python
import foo.bar
```

या:

```python
from foo import bar
```

पहले उदाहरण में, जब भी हम मॉड्यूल `bar` का उपयोग करते हैं तो हमें `foo` उपसर्ग का उपयोग करना होता है। दूसरे उदाहरण में, हमें ऐसा नहीं करना पड़ता, क्योंकि हमने मॉड्यूल को हमारे मॉड्यूल के नामस्थान में आयात कर लिया है।

`__init__.py` फाइल इस बात का निर्णय भी ले सकती है कि कौन से मॉड्यूल पैकेज के API के रूप में निर्यात करे, जबकि अन्य मॉड्यूल को आंतरिक रखते हुए, `__all__` वेरिएबल को अधिलेखित करके जैसे:

```python
__init__.py:

__all__ = ["bar"]
```

Exercise
--------

इस अभ्यास में, `re` मॉड्यूल में सभी फंक्शनों की वर्णानुक्रमित सूची प्रिंट करें जिनमें शब्द `find` शामिल है।