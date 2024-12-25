Python เป็นภาษาที่เรียบง่ายมาก และมีไวยากรณ์ที่ตรงไปตรงมา มันสนับสนุนให้โปรแกรมเมอร์เขียนโปรแกรมโดยไม่ต้องใช้โค้ดที่ไม่จำเป็น คำสั่งที่ง่ายที่สุดใน Python คือคำสั่ง "print" ซึ่งจะพิมพ์บรรทัดออกมา (และยังรวมถึงการขึ้นบรรทัดใหม่ แตกต่างจากในภาษา C)

มีเวอร์ชันของ Python สองเวอร์ชันหลัก คือ Python 2 และ Python 3 ซึ่งมีความแตกต่างกันพอสมควร บทเรียนนี้ใช้ Python 3 เนื่องจากมีความถูกต้องในทางความหมายมากกว่า และสนับสนุนฟีเจอร์ใหม่ๆ

ตัวอย่างเช่น หนึ่งในความแตกต่างระหว่าง Python 2 และ 3 คือคำสั่ง `print` ใน Python 2 คำสั่ง "print" ไม่ใช่ฟังก์ชัน ดังนั้นจึงถูกเรียกใช้โดยไม่มีวงเล็บ อย่างไรก็ตาม ใน Python 3 มันเป็นฟังก์ชัน และต้องเรียกใช้ด้วยวงเล็บ

เพื่อพิมพ์สตริงใน Python 3 เพียงเขียน:

    print("This line will be printed.")

### Indentation

Python ใช้การเยื้องบรรทัดสำหรับบล็อกของโค้ด แทนที่จะใช้วงเล็บปีกกา รองรับทั้งแท็บและช่องว่าง แต่การเยื้องบรรทัดมาตรฐานของ Python คือลูกศรความยาวสี่ช่องว่าง ตัวอย่างเช่น:

    x = 1
    if x == 1:
        # indented four spaces
        print("x is 1.")

Exercise
--------

ใช้ฟังก์ชัน "print" เพื่อพิมพ์บรรทัด "Hello, World!".