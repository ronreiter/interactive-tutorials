ส่วนนี้อธิบายวิธีการใช้ตัวดำเนินการพื้นฐานใน Python

### Arithmetic Operators

เหมือนกับภาษาโปรแกรมอื่น ๆ ตัวดำเนินการบวก ลบ คูณ และหาร สามารถใช้กับตัวเลขได้<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

ลองทำนายว่าคำตอบจะเป็นอย่างไร Python ใช้ลำดับขั้นของการดำเนินการหรือไม่?

อีกตัวดำเนินการหนึ่งคือ operator โมดูลัส (%) ซึ่งจะคืนค่าเศษของการหาร dividend % divisor = remainder

    remainder = 11 % 3
    print(remainder)

การใช้สัญลักษณ์คูณสองครั้งจะเป็นการทำกำลัง

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python สนับสนุนการต่อสายอักขระโดยใช้ตัวดำเนินการบวก:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python ยังสนับสนุนการคูณสายอักขระเพื่อสร้างสายอักขระที่มีลำดับซ้ำ:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

รายการสามารถรวมกันโดยใช้ตัวดำเนินการบวก:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

เช่นเดียวกับในสายอักขระ Python สนับสนุนการสร้างรายการใหม่ที่มีลำดับซ้ำโดยใช้ตัวดำเนินการคูณ:

    print([1,2,3] * 3)

Exercise
--------

เป้าหมายของแบบฝึกหัดนี้คือการสร้างสองรายการที่ชื่อว่า `x_list` และ `y_list`
ซึ่งมี 10 อินสแตนซ์ของตัวแปร `x` และ `y` ตามลำดับ
คุณยังต้องสร้างรายการที่ชื่อว่า `big_list` ซึ่งประกอบด้วย
ตัวแปร `x` และ `y`, 10 ครั้งต่ออัน, โดยการเชื่อมต่อสองรายการที่คุณสร้างขึ้น