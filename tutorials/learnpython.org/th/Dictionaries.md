A dictionary เป็นประเภทข้อมูลที่คล้ายกับ arrays แต่ใช้คีย์และค่าแทนที่จะใช้ดัชนี แต่ละค่าที่เก็บไว้ใน dictionary สามารถเข้าถึงได้โดยใช้คีย์ซึ่งสามารถเป็นวัตถุประเภทใดก็ได้ (เช่น สายอักขระ ตัวเลข รายการ ฯลฯ) แทนที่จะใช้ดัชนีในการเข้าถึง

ตัวอย่างเช่น ฐานข้อมูลหมายเลขโทรศัพท์สามารถเก็บไว้โดยใช้ dictionary แบบนี้:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

หรือ dictionary สามารถกำหนดค่าเริ่มต้นด้วยค่าที่มีอยู่ในโน๊ตเทชันดังนี้:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### การทำซ้ำใน dictionary

dictionary สามารถทำซ้ำได้เหมือนกับรายการ แต่ dictionary ต่างจากรายการตรงที่ไม่ได้จัดเก็บค่าในลำดับที่แน่นอน ในการทำซ้ำผ่านคู่คีย์และค่า ให้ใช้ไวยากรณ์ดังนี้:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### การลบค่า

ในการลบค่าที่ระบุ สามารถใช้ได้หนึ่งในโน๊ตเทชันต่อไปนี้:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

หรือ:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Exercise
--------

เพิ่ม "Jake" ลงใน phonebook พร้อมหมายเลขโทรศัพท์ 938273443 และลบ Jill ออกจาก phonebook.