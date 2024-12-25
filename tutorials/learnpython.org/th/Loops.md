มีลูปสองประเภทในภาษา Python คือ for และ while

### ลูป "for"

ลูป for ทำงานวนซ้ำผ่านลำดับที่ให้มา ตัวอย่างเช่น:

```python
    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)
```

ลูป for สามารถวนซ้ำผ่านลำดับของตัวเลขโดยใช้ฟังก์ชัน "range" และ "xrange" ความแตกต่างระหว่าง range และ xrange คือฟังก์ชัน range จะคืนค่ารายการใหม่ที่มีตัวเลขของช่วงที่กำหนดไว้ ในขณะที่ xrange จะคืนค่าเป็นตัวสร้างซึ่งมีประสิทธิภาพมากกว่า (Python 3 ใช้ฟังก์ชัน range ที่ทำงานเหมือน xrange) สังเกตว่าฟังก์ชัน range จะเริ่มจากศูนย์

```python
    # แสดงผล 0,1,2,3,4
    for x in range(5):
        print(x)

    # แสดงผล 3,4,5
    for x in range(3, 6):
        print(x)

    # แสดงผล 3,5,7
    for x in range(3, 8, 2):
        print(x)
```

### ลูป "while"

ลูป while ทำงานวนซ้ำตราบใดที่เงื่อนไขบูลีนเป็นจริง ตัวอย่างเช่น:

```python
    # แสดงผล 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # เท่ากับ count = count + 1
```

### คำสั่ง "break" และ "continue"

**break** ใช้เพื่อออกจากลูป for หรือ while ในขณะที่ **continue** ใช้เพื่อข้ามบล็อคปัจจุบันและกลับไปยังคำสั่ง "for" หรือ "while" ตัวอย่างบางส่วน:

```python
    # แสดงผล 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # แสดงผลเฉพาะเลขคี่ - 1,3,5,7,9
    for x in range(10):
        # ตรวจสอบถ้า x เป็นเลขคู่
        if x % 2 == 0:
            continue
        print(x)
```

### เราสามารถใช้ "else" clause กับลูปได้ไหม?

แตกต่างจากภาษาอื่นเช่น C, CPP... เราสามารถใช้ **else** กับลูปได้ เมื่อเงื่อนไขของคำสั่ง "for" หรือ "while" ไม่เป็นจริงแล้ว โค้ดส่วนใน "else" จะถูกดำเนินการ หากมีการใช้คำสั่ง **break** ภายในลูป for ส่วน "else" จะถูกข้ามไป สังเกตว่าส่วน "else" จะถูกดำเนินการแม้ว่าจะมีคำสั่ง **continue** ก็ตาม

นี่คือตัวอย่างบางส่วน:

```python
    # แสดงผล 0,1,2,3,4 และจากนั้นแสดง "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # แสดงผล 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")
```

Exercise
--------

วนซ้ำและแสดงผลเฉพาะตัวเลขคู่จากรายการ numbers ในลำดับเดียวกับที่ได้รับ อย่าแสดงผลตัวเลขใดที่มาหลังจาก 237 ในลำดับ