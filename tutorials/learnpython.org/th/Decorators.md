Decorators ช่วยให้คุณสามารถแก้ไขวัตถุที่เรียกใช้งานได้ เช่น [functions](http://www.learnpython.org/en/Functions ""), [methods, or classes](http://www.learnpython.org/en/Classes%20and%20Objects "") ได้โดยง่าย ในบทเรียนนี้เราจะจัดการกับ functions สำหรับไวยากรณ์

    @decorator
    def functions(arg):
        return "value"

เท่ากับว่า:

    def function(arg):
        return "value"
    function = decorator(function) # นี้คือการส่งผ่านฟังก์ชันไปยัง decorator และกำหนดค่าใหม่ให้กับฟังก์ชัน

ตามที่คุณเห็น, decorator ก็คือฟังก์ชันอีกตัวหนึ่งที่รับฟังก์ชันแล้วส่งคืนหนึ่งฟังก์ชัน ตัวอย่างเช่น คุณสามารถทำเช่นนี้:

    def repeater(old_function):
        def new_function(*args, **kwds): # ดู learnpython.org/en/Multiple%20Function%20Arguments สำหรับการทำงานของ *args และ **kwds
            old_function(*args, **kwds) # เราเรียกใช้ฟังก์ชันเก่า
            old_function(*args, **kwds) # เราทำซ้ำสองครั้ง
        return new_function # เราต้องส่งคืน new_function มิฉะนั้นจะไม่กำหนดใหม่ให้กับค่า

นี่จะทำให้ฟังก์ชันทำซ้ำสองครั้ง

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

คุณยังสามารถให้มันเปลี่ยนผลลัพธ์ได้

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # แก้ไขค่าที่ส่งคืน
        return new_function

เปลี่ยน input

    def double_Ii(old_function):
        def new_function(arg): # ใช้งานได้เฉพาะฟังก์ชันเก่าที่มีอาร์กิวเมนต์ตัวเดียว
            return old_function(arg * 2) # แก้ไขอาร์กิวเมนต์ที่ส่งผ่าน
        return new_function

และทำการตรวจสอบ

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # นี่ทำให้เกิดข้อผิดพลาด ซึ่งดีกว่าการทำสิ่งที่ผิดพลาด
            old_function(arg)
        return new_function

สมมุติว่าคุณต้องการคูณผลลัพธ์ด้วยค่าตัวแปร คุณสามารถกำหนด decorator และใช้งานดังนี้:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # มันส่งคืนตัวสร้างใหม่

    # การใช้งาน
    @multiply(3) # multiply ไม่ใช่ generator แต่ multiply(3) ใช่
    def return_num(num):
        return num
        
    # ตอนนี้ return_num ถูกตกแต่งและกำหนดใหม่ให้กับตัวมันเอง
    return_num(5) # ควรส่งคืน 15

คุณสามารถทำอะไรก็ได้ที่คุณต้องการกับฟังก์ชั่นเก่า แม้กระทั่งละเลยอย่างสิ้นเชิง! Decorator ระดับสูงยังสามารถจัดการกับ doc string และจำนวนอาร์กิวเมนต์ได้อีกด้วย
สำหรับ decorators ที่น่าสนใจ ดูที่ <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
สร้างโรงงาน decorator ที่ส่งคืน decorator ที่ตกแต่งฟังก์ชันที่มีอาร์กิวเมนต์เดียว โรงงานควรรับอาร์กิวเมนต์หนึ่งตัว, เป็น type, จากนั้นส่งคืน decorator ที่ทำให้ฟังก์ชันควรตรวจสอบว่าข้อความ input เป็น type ที่ถูกต้องหรือไม่ ถ้าไม่ถูกควรพิมพ์ว่า "Bad Type" (ในความเป็นจริง ควรจะให้เกิดข้อผิดพลาด แต่การแจ้งข้อผิดพลาดไม่อยู่ในบทเรียนนี้) ดูที่โค้ดในบทเรียนและผลลัพธ์ที่คาดหวังเพื่อดูว่ามันคืออะไรถ้าคุณสับสน (ฉันเข้าใจดีว่าฉันก็จะสับสน) การใช้ isinstance(object, type_of_object) หรือ type(object) อาจช่วยได้.