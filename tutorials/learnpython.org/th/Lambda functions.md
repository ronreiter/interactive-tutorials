Normally we define a function using the def keyword somewhere in the code and call it whenever we need to use it.

ปกติแล้วเราจะกำหนดฟังก์ชันโดยใช้คำสำคัญ def ในโค้ดและเรียกใช้เมื่อใดก็ตามที่เราต้องการใช้มัน

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Now instead of defining the function somewhere and calling it, we can use python's lambda functions, which are inline functions defined at the same place we use it. So we don't need to declare a function somewhere and revisit the code just for a single time use.

ตอนนี้แทนที่จะกำหนดฟังก์ชันที่ไหนสักแห่งและเรียกใช้ เราสามารถใช้ฟังก์ชัน lambda ของ Python ซึ่งเป็นฟังก์ชันอินไลน์ที่กำหนดไว้ในตำแหน่งที่เราใช้มัน ดังนั้นเราจึงไม่จำเป็นต้องกำหนดฟังก์ชันที่ไหนสักแห่งและกลับไปใช้โค้ดนั้นเพียงครั้งเดียว

They don't need to have a name, so they also called anonymous functions. We define a lambda function using the keyword lambda.

พวกมันไม่จำเป็นต้องมีชื่อ จึงถูกเรียกว่าเป็นฟังก์ชันนิรนามด้วย เรากำหนดฟังก์ชัน lambda โดยใช้คำสำคัญ lambda

    your_function_name = lambda inputs : output

So the above sum example using lambda function would be,

ตัวอย่างการบวกที่กล่าวมาข้างต้นโดยใช้ฟังก์ชัน lambda จะเป็นดังนี้

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Here we are assigning the lambda function to the variable **sum**, and upon giving the arguments i.e. a and b, it works like a normal function.

ที่นี่เรากำหนดฟังก์ชัน lambda ให้กับตัวแปร **sum** และเมื่อให้ค่าพารามิเตอร์คือ a และ b มันจะทำงานเหมือนฟังก์ชันปกติ



Exercise
--------
เขียนโปรแกรมโดยใช้ฟังก์ชัน lambda เพื่อตรวจสอบว่าตัวเลขในรายการที่กำหนดเป็นเลขคี่หรือไม่ พิมพ์ "True" หากตัวเลขเป็นเลขคี่ หรือ "False" หากไม่ใช่ สำหรับแต่ละองค์ประกอบ