Objects adalah enkapsulasi dari variabel dan fungsi ke dalam satu entitas. Objek mendapatkan variabel dan fungsinya dari kelas. Kelas pada dasarnya adalah template untuk membuat objek Anda.

Sebuah kelas yang sangat dasar akan terlihat seperti ini:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Kami akan menjelaskan mengapa Anda harus menyertakan "self" sebagai parameter sedikit nanti. Pertama, untuk menetapkan kelas (template) di atas ke sebuah objek, Anda dapat melakukan hal berikut:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Sekarang variabel "myobjectx" menyimpan objek dari kelas "MyClass" yang berisi variabel dan fungsi yang didefinisikan dalam kelas yang disebut "MyClass".

### Mengakses Variabel Objek

Untuk mengakses variabel di dalam objek yang baru dibuat "myobjectx", Anda melakukan hal berikut:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Jadi, misalnya, yang di bawah ini akan mencetak string "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Anda dapat membuat beberapa objek berbeda yang berasal dari kelas yang sama (memiliki variabel dan fungsi yang sama yang didefinisikan). Namun, setiap objek berisi salinan independen dari variabel yang didefinisikan dalam kelas. Misalnya, jika kita mendefinisikan objek lain dengan kelas "MyClass" dan kemudian mengubah string dalam variabel di atas:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Kemudian cetak kedua nilai
    print(myobjectx.variable)
    print(myobjecty.variable)


### Mengakses Fungsi Objek

Untuk mengakses fungsi di dalam objek, Anda menggunakan notasi yang mirip dengan mengakses variabel:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Yang di atas akan mencetak pesan "This is a message inside the class."

### __init__()

Fungsi `__init__()`, adalah fungsi khusus yang dipanggil ketika kelas sedang diinisiasi. Ini digunakan untuk menetapkan nilai-nilai dalam sebuah kelas.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Prints '7'
    
Exercise
--------

Kami memiliki kelas yang didefinisikan untuk kendaraan. Buat dua kendaraan baru yang disebut car1 dan car2. Setel car1 sebagai mobil convertible merah senilai $60,000.00 dengan nama Fer, dan car2 sebagai van biru bernama Jump senilai $10,000.00.