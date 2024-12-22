Objek adalah pengkapsulan pembolehubah dan fungsi ke dalam satu entiti. Objek mendapatkan pembolehubah dan fungsi mereka daripada kelas. Kelas pada dasarnya adalah templat untuk mencipta objek anda.

Kelas yang sangat asas akan kelihatan seperti ini:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Kami akan menerangkan mengapa anda perlu menyertakan "self" sebagai parameter nanti. Pertama, untuk menetapkan kelas(templat) di atas kepada objek, anda akan melakukan yang berikut:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Sekarang pembolehubah "myobjectx" memegang objek kelas "MyClass" yang mengandungi pembolehubah dan fungsi yang ditakrifkan dalam kelas yang dipanggil "MyClass".

### Mengakses Pembolehubah Objek

Untuk mengakses pembolehubah di dalam objek "myobjectx" yang baru dicipta, anda akan melakukan yang berikut:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Sebagai contoh, baris di bawah akan mengeluarkan string "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Anda boleh mencipta pelbagai objek yang berbeza yang berasal dari kelas yang sama(mempunyai pembolehubah dan fungsi yang ditakrifkan sama). Walau bagaimanapun, setiap objek mengandungi salinan yang bebas daripada pembolehubah yang ditakrifkan dalam kelas. Sebagai contoh, jika kita ingin mentakrifkan satu lagi objek dengan kelas "MyClass" dan kemudian menukar string dalam pembolehubah di atas:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Kemudian cetak kedua-dua nilai
    print(myobjectx.variable)
    print(myobjecty.variable)

### Mengakses Fungsi Objek

Untuk mengakses fungsi di dalam objek, anda menggunakan notasi yang serupa dengan mengakses pembolehubah:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Yang di atas akan mencetak mesej, "This is a message inside the class."

### __init__()

Fungsi `__init__()`, adalah fungsi khas yang dipanggil apabila kelas sedang diinisialisasikan. Ia digunakan untuk menetapkan nilai-nilai dalam kelas.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Prints '7'
    
Exercise
--------

Kami mempunyai kelas yang ditakrifkan untuk kenderaan. Cipta dua kenderaan baru bernama car1 dan car2. Tetapkan car1 sebagai convertible merah bernilai $60,000.00 dengan nama Fer, dan car2 sebagai van biru bernama Jump bernilai $10,000.00.