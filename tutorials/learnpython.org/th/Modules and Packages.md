ในโปรแกรมมิ่ง โมดูลคือซอฟต์แวร์ที่มีฟังก์ชันการทำงานเฉพาะ เมื่อสร้างเกมปิงปอง โมดูลหนึ่งอาจรับผิดชอบด้านตรรกะของเกม และอีกโมดูลหนึ่งวาดเกมลงบนหน้าจอ แต่ละโมดูลประกอบด้วยไฟล์ที่แตกต่างกัน ซึ่งสามารถแก้ไขแยกกันได้

### การเขียนโมดูล

โมดูลใน Python ก็คือไฟล์ Python ที่มีนามสกุล .py ชื่อของโมดูลเหมือนกับชื่อไฟล์ โมดูล Python สามารถมีชุดฟังก์ชัน คลาส หรือ ตัวแปร ที่ถูกกำหนดและใช้งาน ตัวอย่างข้างต้นประกอบด้วยสองไฟล์:

mygame/

- mygame/game.py

- mygame/draw.py

สคริปต์ Python `game.py` นั้นใช้เพื่อสร้างเกม มันใช้ฟังก์ชัน `draw_game` จากไฟล์ `draw.py` หรือในอีกคำคือ โมดูล `draw` ซึ่งได้รับผิดชอบการวาดเกมลงบนหน้าจอ 

โมดูลถูกนำเข้าจากโมดูลอื่นโดยใช้คำสั่ง `import` ในตัวอย่างนี้ สคริปต์ `game.py` อาจมีลักษณะดังนี้:

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

โมดูล `draw` อาจมีลักษณะดังนี้:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

ในตัวอย่างนี้ โมดูล `game` นำเข้าโมดูล `draw` ซึ่งทำให้สามารถใช้ฟังก์ชันที่ถูกใช้งานในโมดูนั้นได้ ฟังก์ชัน `main` ใช้ฟังก์ชันท้องถิ่น `play_game` เพื่อรันเกม และจากนั้นวาดผลลัพธ์ของเกมโดยใช้ฟังก์ชัน `draw_game` ซึ่งถูกใช้งานในโมดูล `draw` เพื่อใช้ฟังก์ชัน `draw_game` จากโมดูล `draw` เราจำเป็นต้องระบุในโมดูลที่ฟังก์ชันถูกใช้งานโดยใช้เครื่องหมายจุด

เมื่อคำสั่ง `import draw` ทำงานขึ้น ตัวแปลของ Python จะมองหาไฟล์ภายในไดเรกทอรีที่สคริปต์ถูกเรียกใช้ด้วยชื่อโมดูลและนามสกุล `.py` ในกรณีนี้จะมองหา `draw.py` ถ้าพบจะถูกนำเข้า ถ้าไม่พบก็จะนำเข้ามองหาโมดูลในตัวอื่นๆต่อ

คุณอาจสังเกตเห็นว่าเมื่อมีการนำเข้าโมดูล ไฟล์ `.pyc` จะถูกสร้างขึ้น นี่คือไฟล์ Python ที่ถูกคอมไพล์ Python จะคอมไพล์ไฟล์เป็นไบต์โค้ด Python เพื่อที่จะไม่ต้องแยกวิเคราะห์ไฟล์ทุกครั้งที่มีการโหลดโมดูล หากมีไฟล์ `.pyc` อยู่แล้ว มันจะถูกโหลดแทนไฟล์ `.py` กระบวนการนี้เป็นโปร่งใสต่อผู้ใช้

### การนำวัตถุจากโมดูลเข้าสู่ namespace ปัจจุบัน

Namespace เป็นระบบที่ทุกวัตถุถูกตั้งชื่อและสามารถเข้าถึงได้ใน Python เรานำเข้าฟังก์ชัน `draw_game` เข้าสู่ namespace ของสคริปต์หลักโดยใช้คำสั่ง `from`

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

คุณอาจสังเกตเห็นว่าในตัวอย่างนี้ ชื่อโมดูลไม่ได้มาก่อนหน้า `draw_game` เพราะเราได้ระบุชื่อโมดูลโดยใช้คำสั่ง `import`

ข้อดีของการนำเข้ารูปแบบนี้คือ คุณไม่จำเป็นต้องอ้างอิงโมดูลซ้ำแล้วซ้ำอีก แต่ namespace ไม่สามารถมีวัตถุสองตัวที่มีชื่อเดียวกันได้ ดังนั้นคำสั่ง `import` อาจแทนที่วัตถุที่มีอยู่ใน namespace ได้

### การนำเข้าวัตถุทั้งหมดจากโมดูล

คุณสามารถใช้คำสั่ง `import *` เพื่อนำเข้าวัตถุทั้งหมดในโมดูล เช่นนี้:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

นี่อาจจะเสี่ยงเล็กน้อยเนื่องจากการเปลี่ยนแปลงในโมดูลอาจส่งผลกระทบต่อโมดูลที่นำเข้า แต่ก็สั้นกว่า และไม่จำเป็นต้องระบุทุกวัตถุที่คุณต้องการนำเข้าจากโมดูล

### ชื่อการนำเข้าที่ออกแบบเอง

คุณสามารถโหลดโมดูลด้วยชื่อใดก็ได้ที่คุณต้องการ สิ่งนี้มีประโยชน์เมื่อการนำเข้าโมดูลเป็นเงื่อนไขเพื่อที่จะใช้ชื่อเดียวกันในโค้ดที่เหลือ

ตัวอย่างเช่น ถ้าคุณมีสองโมดูล `draw` ที่มีชื่อที่แตกต่างกันเล็กน้อย คุณอาจทำดังนี้:

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

### การเริ่มต้นโมดูล

ครั้งแรกที่โมดูลถูกโหลดเข้าสู่สคริปต์ Python ที่กำลังทำงาน มันถูกเริ่มต้นโดยการประมวลผลโค้ดในโมดูลหนึ่งครั้ง หากมีโมดูลอื่นในโค้ดของคุณนำเข้าโมดูลเดียวกันอีกครั้ง มันจะไม่ถูกโหลดอีกครั้งดังนั้นตัวแปรท้องถิ่นภายในโมดูลจะทำหน้าที่เป็น "ซิงเกิลตัน" หมายความว่า มันจะถูกเริ่มต้นเพียงครั้งเดียว

คุณสามารถใช้สิ่งนี้ได้เพื่อเริ่มต้นวัตถุ ตัวอย่าง:

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

### การขยาย path โหลดโมดูล

มีวิธีอยู่สองสามวิธีที่จะบอกตัวแปล Python ให้มองหาโมดูลนอกจากไดเรกทอรีท้องถิ่นและโมดูลในตัว คุณสามารถใช้ตัวแปรสภาพแวดล้อม `PYTHONPATH` เพื่อระบุไดเรกทอรีเพิ่มเติมที่จะมองหาโมดูลได้ดังนี้:

    PYTHONPATH=/foo python game.py

นี่คือการรัน `game.py` และเปิดใช้งานสคริปต์เพื่อโหลดโมดูลจากไดเรกทอรี `foo` รวมถึงไดเรกทอรีท้องถิ่นด้วย

คุณอาจจะใช้ฟังก์ชัน `sys.path.append` เพื่อดำเนินการก่อนที่จะรันคำสั่ง `import`:

    sys.path.append("/foo")

ตอนนี้ไดเรกทอรี `foo` ถูกเพิ่มเข้าไปในรายการ paths ที่ใช้ค้นหาโมดูลแล้ว

### การสำรวจโมดูลในตัว

ตรวจสอบรายการโมดูลในตัวทั้งหมดในไลบรารีมาตรฐานของ Python [ที่นี่](https://docs.python.org/3/library/)

ฟังก์ชันสำคัญสองฟังก์ชันที่มีประโยชน์เมื่อสำรวจโมดูลใน Python คือฟังก์ชั่น `dir` และ `help`

ในการนำเข้าโมดูล `urllib` ซึ่งอนุญาตให้เราสร้างเพื่ออ่านข้อมูลจาก URLs เรา `import` โมดูล:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)

เราสามารถค้นหาว่าฟังก์ชันใดถูกใช้งานในแต่ละโมดูลโดยใช้ฟังก์ชัน `dir`:

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

เมื่อเราพบฟังก์ชันในโมดูลที่เราต้องการใช้ เราสามารถอ่านเพิ่มเติมเกี่ยวกับมันด้วยฟังก์ชั่น `help` โดยใช้ตัวแปล Python:

    help(urllib.urlopen)

### การเขียนแพ็กเกจ

แพ็กเกจคื village Namesace ที่มีแพ็กเกจและโมดูลหลายๆตัว มันก็เป็นแค่ไดเรกทอรี แต่มีข้อกำหนดบางประการ

แต่ละแพ็กเกจใน Python คือไดเรกทอรีที่ **ต้อง** มีไฟล์พิเศษที่ชื่อว่า `__init__.py` ไฟล์นี้สามารถว่างได้ เป็นไฟล์ที่ระบุว่าไดเรกทอรีที่มันอยู่เป็นแพ็กเกจ Python ดังนั้นมันจึงสามารถนำเข้าได้เหมือนกับโมดูล

ถ้าเราสร้างไดเรกทอรีที่ชื่อว่า `foo` ซึ่งจะระบุชื่อของแพ็กเกจ แล้วเราสามารถสร้างโมดูลด้านในแพ็กเกจนั้นได้โดยเรียกว่า `bar` จากนั้นเราจะเพิ่มไฟล์ `__init__.py` ภายในไดเรกทอรี `foo`

เพื่อใช้โมดูล `bar` เราสามารถนำเข้าได้สองวิธี:

    import foo.bar

หรือ:

    from foo import bar

ในตัวอย่างแรกด้านบน เราต้องใช้คำนำหน้า `foo` ทุกครั้งที่เข้าถึงโมดูล `bar` ในตัวอย่างที่สองเราจะไม่ทำเช่นนั้น เพราะเราได้นำเข้าโมดูลไปยัง namespace ของโมดูลเราแล้ว

ไฟล์ `__init__.py` ยังสามารถกำหนดได้ว่าโมดูลไหนในแพ็กเกจที่ถูกส่งออกเป็น API ขณะเดียวกันยังเก็บโมดูลอื่นๆ เป็นภายในโดยการกำหนดตัวแปร `__all__` ดังนี้:

    __init__.py:

    __all__ = ["bar"]

Exercise
--------

ในแบบฝึกหัดนี้ พิมพ์รายการฟังก์ชันทั้งหมดในโมดูล `re` ซึ่งเรียงตามตัวอักษรที่มีคำว่า `find`.