# Generators

Generators นั้นง่ายมากต่อการ implement แต่ค่อนข้างยากที่จะเข้าใจ

Generators ถูกใช้เพื่อสร้าง iterators แต่ด้วยวิธีการที่แตกต่างออกไป Generators เป็นฟังก์ชันง่าย ๆ ซึ่งจะคืนชุดของ items ที่สามารถ iterable ได้ทีละหนึ่งชิ้นในวิธีพิเศษ

เมื่อเริ่มทำการ iteration ผ่านชุดของ items โดยใช้คำสั่ง for, generator จะเริ่มทำงาน เมื่อโค้ดในฟังก์ชัน generator มาถึงคำสั่ง "yield" generator จะคืนการทำงานกลับไปที่ลูป for โดยจะคืนค่าชิ้นใหม่จากชุดนั้น ฟังก์ชัน generator สามารถสร้างค่าได้หลายค่า (อาจจะไม่มีที่สิ้นสุด) ตามที่ต้องการ โดยจะ yield ทีละค่าในแต่ละครั้ง

นี่คือตัวอย่างง่าย ๆ ของฟังก์ชัน generator ที่จะคืนเลขสุ่ม 7 ค่า:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

ฟังก์ชันนี้ตัดสินใจด้วยตนเองว่าจะสร้างเลขสุ่มอย่างไร และทำการ execute คำสั่ง yield ทีละอัน โดยจะหยุดชั่วคราวระหว่างการ yield เพื่อคืนการทำงานกลับไปให้กับลูป for หลัก

Exercise
--------

เขียนฟังก์ชัน generator ซึ่งคืนค่า Fibonacci series โดยคำนวณจากสูตรดังนี้: สองตัวเลขแรกของ series จะเท่ากับ 1 เสมอ และแต่ละตัวเลขถัดไปจะเป็นผลรวมของสองตัวเลขล่าสุด
เคล็ดลับ: คุณสามารถใช้ตัวแปรเพียงสองตัวในฟังก์ชัน generator ได้หรือไม่? จำไว้ว่าการกำหนดค่าตัวแปรสามารถทำได้พร้อมกัน โค้ดนี้

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

จะสลับค่าของ a และ b พร้อมกัน