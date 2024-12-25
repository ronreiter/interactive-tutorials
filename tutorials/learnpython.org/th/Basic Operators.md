This section explains how to use basic operators in Python.

### ตัวดำเนินการทางคณิตศาสตร์       

เช่นเดียวกับภาษาโปรแกรมอื่นๆ ตัวดำเนินการบวก ลบ คูณ และหารสามารถใช้กับตัวเลขได้<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

ลองทำนายคำตอบว่าคืออะไร Python ใช้ลำดับความสำคัญในการดำเนินการหรือไม่?

อีกตัวดำเนินการหนึ่งที่มีให้ใช้คือตัวดำเนินการโมดูโล (%) ซึ่งจะส่งคืนเศษของการหาร dividend % divisor = remainder.

    remainder = 11 % 3
    print(remainder)

การใช้สัญลักษณ์การคูณสองครั้งทำให้เกิดความสัมพันธ์ของการยกกำลัง

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### การใช้ตัวดำเนินการกับสตริง

Python สนับสนุนการต่อสตริงโดยใช้ตัวดำเนินการบวก:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python ยังสนับสนุนการคูณสตริงเพื่อสร้างสตริงที่มีลำดับการทำซ้ำ:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### การใช้ตัวดำเนินการกับรายการ

รายการสามารถจับคู่กันได้ด้วยตัวดำเนินการบวก:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

เช่นเดียวกับในสตริง Python สนับสนุนการสร้างรายการใหม่ที่มีลำดับการทำซ้ำโดยใช้ตัวดำเนินการคูณ:

    print([1,2,3] * 3)

Exercise
--------

The target of this exercise is to create two lists called `x_list` and `y_list`,
which contain 10 instances of the variables `x` and `y`, respectively.
You are also required to create a list called `big_list`, which contains
the variables `x` and `y`, 10 times each, by concatenating the two lists you have created.