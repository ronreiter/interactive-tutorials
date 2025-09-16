### What is CSV?
CSV ย่อมาจาก 'Comma Separated Values' ซึ่งเป็นรูปแบบที่ใช้กันทั่วไปสำหรับการนำเข้าและส่งออกข้อมูลสำหรับฐานข้อมูลและสเปรดชีต ไฟล์ CSV เป็นไฟล์ข้อความธรรมดาที่มีข้อมูลอยู่ในรูปแบบรายการ ส่วนใหญ่จะใช้เครื่องหมายจุลภาค (,) ในการแยกข้อมูล แต่บางครั้งอาจใช้เครื่องหมายอื่น ๆ เช่น เครื่องหมายอัฒภาคหรือแท็บ

ตัวอย่างข้อมูล CSV:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### CSV module in Python
แม้ว่า Python จะมีฟังก์ชันในตัว open() เพื่อทำงานกับไฟล์ CSV หรือไฟล์ข้อความธรรมดาอื่นๆ แต่ก็มีโมดูล csv เฉพาะที่ประกอบด้วยคลาสเพื่ออ่านและเขียนข้อมูลในรูปแบบ csv ซึ่งทำให้การทำงานกับไฟล์ CSV ง่ายขึ้นมาก

### CSV module important functions

    csv.field_size_limit – คืนขนาดฟิลด์สูงสุด
    csv.get_dialect – รับรูปแบบการคุยที่เกี่ยวข้องกับชื่อ
    csv.list_dialects – แสดงรูปแบบการคุยที่ลงทะเบียนไว้ทั้งหมด
    csv.reader – อ่านข้อมูลจากไฟล์ csv
    csv.register_dialect - เชื่อมโยงรูปแบบการคุยกับชื่อ
    csv.writer – เขียนข้อมูลไปยังไฟล์ csv
    csv.unregister_dialect - ลบรูปแบบการคุยที่เชื่อมโยงกับชือในทะเบียนรูปแบบการคุย
    csv.QUOTE_ALL - วงเล็บข้อมูลทั้งหมดโดยไม่คำนึงถึงประเภท
    csv.QUOTE_MINIMAL - วงเล็บเฉพาะฟิลด์ที่มีอักขระพิเศษ
    csv.QUOTE_NONNUMERIC - วงเล็บฟิลด์ทั้งหมดที่ไม่ใช่ค่าตัวเลข
    csv.QUOTE_NONE – ไม่ต้องวงเล็บข้อมูลใดๆ ในเอาต์พุต

### How do you use csv module?
ขั้นแรกให้คุณนำเข้าโมดูล csv ในโปรแกรม Python ของคุณ

    import csv

ฟังก์ชัน writer และ reader อนุญาตให้คุณแก้ไข ปรับเปลี่ยน และแปลงข้อมูลในไฟล์ CSV ได้

วิธีการอ่านไฟล์ CSV :-

ในการอ่านข้อมูลจากไฟล์ CSV เราใช้ฟังก์ชัน reader เพื่อสร้างอ็อบเจกต์ reader

ตัวอย่าง:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

ที่นี่เราจะเปิดไฟล์ CSV ในโหมดการอ่าน (READ) และตั้งชื่ออ็อบเจกต์ไฟล์ว่า csvfile เราใช้ตัวจัดการบริบทเพื่อเปิดไฟล์เพื่อไม่ให้เราต้องกังวลเกี่ยวกับการปิดไฟล์ ฟังก์ชัน csv.reader จะใช้ไฟล์อ็อบเจกต์เป็นอินพุตและส่งคืนอ็อบเจกต์ที่ทำซ้ำได้ และเราบันทึกอ็อบเจกต์ที่ทำซ้ำได้นี้เป็น csvreader

เนื่องจาก csvreader เป็นอ็อบเจกต์ที่ทำซ้ำได้ เราจึงสามารถวนซ้ำโดยใช้ลูป for ได้:

ตัวอย่าง 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

โค้ดด้านบนจะแสดงรายการของแถวทั้งหมดที่เราอ่านจากไฟล์ csv โปรดทราบว่าเราจะเปิดไฟล์ในโหมด 'r' เมื่อไฟล์นั้นมีอยู่แล้ว

What's next?

cvreader คืออ็อบเจกต์ที่ทำซ้ำได้ ดังนั้นเมธอด .next() จะส่งคืนแถวปัจจุบันและย้ายตัวชี้การทำซ้ำไปยังแถวถัดไป

ตัวอย่าง 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

ในตัวอย่างที่ 1 คุณจะเห็นว่าแถวทั้งหมดถูกพิมพ์บนคอนโซลพร้อมกับส่วนหัว ในตัวอย่างที่ 2 เมธอด .next() จะอ่านส่วนหัวในอ็อบเจกต์ fields และย้ายตัวชี้การทำซ้ำไปยังแถวถัดไป ดังนั้นแถวทั้งหมดจะถูกพิมพ์ยกเว้นส่วนหัว


วิธีการเขียนในไฟล์ CSV-

ในการเขียนข้อมูลในไฟล์ csv โมดูล csv มีฟังก์ชัน csv.writer สำหรับการเขียนข้อมูลเราจะเปิดไฟล์ CSV ในโหมดเขียน (WRITE) ('w') ก่อน อ็อบเจกต์ไฟล์ถูกตั้งชื่อว่า csvfile เราบันทึกอ็อบเจกต์ csv.writer เป็น csvwriter

ตัวอย่าง:
    #ประกาศส่วนหัว
    fields = ['column1','column2', 'column3']

    #ประกาศแถว
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

ในตัวอย่างด้านบน ฟังก์ชัน writerow() จะเขียนแถวเดียวซึ่งเป็นอ็อบเจกต์ fields ในขณะที่เมธอด writerows() จะเขียนรายการทั้งหมดของแถวตามที่ประกาศไว้ข้างต้นลงในไฟล์ csv

ตอนนี้ให้เราก้าวไปข้างหน้าอีกขั้น อ่านเนื้อหาของไฟล์ csv หนึ่งไฟล์แล้วเขียนลงในอีกไฟล์ csv หนึ่ง

ตัวอย่าง:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # store the headers and advance reader pointer
            csvwriter.writerow(header) #writes the header into new file
            for row in reader:
                csvwriter.writerow(row)

ตรงนี้เป็นการเปิด 'newfilename.csv' ในโหมด 'W' เป็น f2 และเปิด 'mycsvfile.csv' ในโหมด 'r' เป็น f1 เราจะใช้เมธอดต่างๆ ของโมดูล csv เช่น .next(), .reader(), .writer(), .writerow() โดยใช้ .next() เพื่อนำตัวชี้ตัวตรวจสอบไปข้างหน้าและใช้งาน csvwriter.writerow() สำหรับการเขียนแถวที่เข้ามาแถวละแถว

### DictReader and DictWriter classes in Python

ด้านล่างนี้เป็นสองคลาสที่สำคัญใน Python สำหรับการอ่านและเขียนไฟล์ csv

csv.Dictwriter class  
csv.DictReader class

DictReader และ DictWriter เป็นคลาสที่มีอยู่ใน Python สำหรับการอ่านและเขียนไฟล์ CSV ถึงแม้ว่าพวกมันจะคล้ายกับฟังก์ชัน reader และ writer ก็ตาม คลาสเหล่านี้จะใช้อ็อบเจกต์พจนานุกรมเพื่ออ่านและเขียนไฟล์ csv

DictReader:

มันสร้างอ็อบเจกต์ที่แมปข้อมูลที่อ่านเข้าไปในพจนานุกรมซึ่งคีย์จะถูกกำหนดโดยพารามิเตอร์ fieldnames พารามิเตอร์นี้เป็นทางเลือก แต่เมื่อไม่ได้ระบุในไฟล์ ข้อมูลแถวแรกจะกลายเป็นคีย์ของพจนานุกรม

ตัวอย่างไฟล์ csv (info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

ตัวอย่าง:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

คลาส csv.DictWriter ทำงานเหมือนกับ writer ปกติแต่แมปพจนานุกรม Python ลงในแถว CSV พารามิเตอร์ fieldnames เป็นลำดับของคีย์ที่ระบุลำดับที่ค่าของพจนานุกรมที่ถูกผ่านไปยังวิธีการ writerow() จะถูกเขียนลงในไฟล์ CSV คลาสนี้ถูกกำหนดเป็น csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

ตัวอย่าง:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Exercise
--------

ในแบบฝึกหัดนี้ คุณจะได้ทำงานกับข้อมูล CSV งานของคุณคือการสร้างโปรแกรม Python ที่อ่านข้อมูลจากไฟล์ CSV แล้วเขียนลงในอีกไฟล์ CSV โดยให้รวมเฉพาะแถวที่มีค่าในคอลัมน์แรกมากกว่า 50 ในไฟล์ผลลัพธ์เท่านั้น