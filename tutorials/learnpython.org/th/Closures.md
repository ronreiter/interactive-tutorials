A Closure คือวัตถุที่เป็นฟังก์ชันที่สามารถจำค่าต่างๆ ในขอบเขตที่ครอบคลุมอยู่ได้ แม้ว่าเราจะไม่ได้มีค่าดังกล่าวอยู่ในหน่วยความจำอีกต่อไป มาดูวิธีการแบบทีละขั้นตอนกันเถอะ

เริ่มต้นด้วย **ฟังก์ชันที่ซ้อนกัน** ซึ่งเป็นฟังก์ชันที่ถูกกำหนดไว้ภายในฟังก์ชันอีกฟังก์ชันหนึ่ง สิ่งสำคัญที่จะต้องทราบคือ ฟังก์ชันที่ซ้อนกันสามารถเข้าถึงตัวแปรที่อยู่ในขอบเขตที่ครอบคลุมได้ อย่างไรก็ตาม อย่างน้อยใน Python ฟังก์ชันเหล่านี้สามารถเข้าถึงได้เพียงแบบอ่านอย่างเดียวเท่านั้น แต่สามารถใช้คำว่า "nonlocal" เพื่อแก้ไขตัวแปรดังกล่าวได้

ตัวอย่างเช่น:

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

ทำงานได้ดีเพราะฟังก์ชัน 'data_transmitter' สามารถเข้าถึง 'message' ได้ ในการแสดงการใช้งานคำว่า "nonlocal" ให้พิจารณาตัวอย่างนี้

    def print_msg(number):
        def printer():
            "Here we are using the nonlocal keyword"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

หากไม่ใช้คำว่า nonlocal ผลลัพธ์จะเป็น "3 9" แต่ถ้าใช้ จะได้ "3 3" ซึ่งค่าของตัวแปร "number" ถูกเปลี่ยนแปลง

ตอนนี้, อยากให้ลองคืนค่าวัตถุฟังก์ชันแทนที่จะเรียกใช้ฟังก์ชันที่ซ้อนกันภายใน (จำไว้ว่าฟังก์ชันใน Python ก็เป็นวัตถุเช่นกัน)

    def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter

และสามารถเรียกใช้ฟังก์ชันได้ดังนี้:

    
      def transmit_to_space(message):
        "This is the enclosing function"
        def data_transmitter():
            "The nested function"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

แม้ว่าการดำเนินการของ "transmit_to_space()" จะเสร็จสิ้นแล้ว แต่ข้อความยังคงถูกรักษาไว้ เทคนิคนี้ที่ข้อมูลถูกแนบกับโค้ดแม้ว่าฟังก์ชันเดิมที่ต่างกันจะสิ้นสุดลงแล้วเรียกว่า closures ใน Python

ข้อดี: Closures สามารถหลีกเลี่ยงการใช้ตัวแปรระดับโลกและให้รูปแบบของการปกปิดข้อมูลบางอย่าง (เช่น เมื่อมีบางวิธีในคลาส, ใช้ closures แทน)

นอกจากนี้ Decorators ใน Python ยังใช้ closures อย่างกว้างขวาง

Exercise
--------

สร้างลูปซ้อนกันและ closure ใน Python เพื่อสร้างฟังก์ชันที่มีการคูณหลายตัวโดยใช้ closures นั่นคือใช้ closures เพื่อสร้างฟังก์ชันเช่น multiply_with_5() หรือ multiply_with_4() ได้โดยใช้ closures