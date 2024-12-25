### What are Functions?

ฟังก์ชันเป็นวิธีที่สะดวกในการแบ่งโค้ดของคุณออกเป็นบล็อกที่มีประโยชน์ ทำให้เราสามารถจัดระเบียบโค้ดของเรา ทำให้ง่ายต่อการอ่าน ใช้ซ้ำได้ และช่วยประหยัดเวลา นอกจากนี้ ฟังก์ชันยังเป็นวิธีที่สำคัญในการกำหนดอินเตอร์เฟซ เพื่อให้โปรแกรมเมอร์สามารถใช้โค้ดร่วมกันได้

### How do you write functions in Python?

ตามที่เราเห็นในบทเรียนก่อนหน้านี้ Python ใช้บล็อก

บล็อกคือตำแหน่งของโค้ดที่เขียนในรูปแบบ:

    block_head:
        1st block line
        2nd block line
        ...

บรรทัดในบล็อกคือโค้ด Python อีก (แม้จะเป็นอีกบล็อกหนึ่ง) และหัวข้อบล็อกอยู่ในรูปแบบนี้:
block_keyword block_name(argument1,argument2, ...)
คำสำคัญของบล็อกที่คุณรู้จักแล้วคือ "if", "for" และ "while"

ฟังก์ชันใน Python ถูกกำหนดโดยใช้คำสำคัญบล็อก "def" ตามด้วยชื่อของฟังก์ชันเป็นชื่อบล็อก
ตัวอย่างเช่น:

    def my_function():
        print("Hello From My Function!")

ฟังก์ชันอาจรับอาร์กิวเมนต์ (ตัวแปรที่ถูกส่งจากผู้เรียกไปยังฟังก์ชัน) ได้
ตัวอย่างเช่น:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))

ฟังก์ชันอาจส่งค่ากลับไปยังผู้เรียก โดยใช้คำสำคัญ 'return' 
ตัวอย่างเช่น:

    def sum_two_numbers(a, b):
        return a + b

### How do you call functions in Python?

เพียงแค่เขียนชื่อฟังก์ชันตามด้วย (), วางอาร์กิวเมนต์ที่ต้องการภายในวงเล็บ
ตัวอย่างเช่น ลองเรียกใช้ฟังก์ชันที่เขียนไว้ด้านบน (ในตัวอย่างก่อนหน้า):

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

ในแบบฝึกหัดนี้คุณจะใช้ฟังก์ชันที่มีอยู่แล้ว และในขณะที่เพิ่มฟังก์ชันของคุณเองเพื่อสร้างโปรแกรมที่ทำงานได้เต็มที่

1. เพิ่มฟังก์ชันชื่อ `list_benefits()` ที่ส่งคืนรายการของสตริงดังนี้: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. เพิ่มฟังก์ชันชื่อ `build_sentence(info)` ซึ่งรับอาร์กิวเมนต์เดี่ยวที่ประกอบด้วยสตริงและส่งกลับประโยคที่ขึ้นต้นด้วยสตริงที่ให้ไว้และลงท้ายด้วยสตริง " is a benefit of functions!"

3. รันและดูให้ทุกฟังก์ชันทำงานร่วมกัน!