Decorator memungkinkan Anda untuk melakukan modifikasi sederhana pada objek yang dapat dipanggil seperti [fungsi](http://www.learnpython.org/en/Functions ""), [metode, atau kelas](http://www.learnpython.org/en/Classes%20and%20Objects ""). Kita akan membahas fungsi untuk tutorial ini. Sintaksnya

    @decorator
    def functions(arg):
        return "value"

Setara dengan:

    def function(arg):
        return "value"
    function = decorator(function) # ini mengoper fungsi ke decorator, dan menetapkan ulang ke fungsi tersebut

Seperti yang mungkin Anda lihat, sebuah decorator hanyalah fungsi lain yang menerima fungsi dan mengembalikannya. Misalnya Anda bisa melakukan ini:

    def repeater(old_function):
        def new_function(*args, **kwds): # Lihat learnpython.org/en/Multiple%20Function%20Arguments untuk cara kerja *args dan **kwds
            old_function(*args, **kwds) # kita menjalankan fungsi lama
            old_function(*args, **kwds) # kita melakukannya dua kali
        return new_function # kita harus mengembalikan new_function, atau itu tidak akan menetapkannya ke nilai tersebut

Ini akan membuat fungsi mengulang dua kali.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Anda juga bisa membuatnya mengubah output

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # memodifikasi nilai yang dikembalikan
        return new_function

mengubah input

    def double_Ii(old_function):
        def new_function(arg): # hanya bekerja jika fungsi lama memiliki satu argumen
            return old_function(arg * 2) # memodifikasi argumen yang diberikan
        return new_function

dan melakukan pengecekan.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Ini menyebabkan error, yang lebih baik daripada melakukan hal yang salah
            old_function(arg)
        return new_function

Misalkan Anda ingin mengalikan output dengan jumlah variabel tertentu. Anda bisa mendefinisikan decorator dan menggunakannya sebagai berikut:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # ini mengembalikan generator baru
    
    # Penggunaan
    @multiply(3) # multiply bukan generator, tetapi multiply(3) adalah
    def return_num(num):
        return num
        
    # Sekarang return_num didekorasi dan diterapkan kembali ke dirinya sendiri
    return_num(5) # seharusnya mengembalikan 15

Anda bisa melakukan apa saja yang Anda inginkan dengan fungsi lama, bahkan mengabaikannya sepenuhnya! Decorator tingkat lanjut juga dapat memanipulasi string dokumentasi dan jumlah argumen.
Untuk beberapa decorator keren, kunjungi <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
Buatlah pabrik decorator yang mengembalikan decorator yang mendekorasi fungsi dengan satu argumen. Pabrik tersebut harus menerima satu argumen, jenis, dan kemudian mengembalikan decorator yang membuat fungsi harus memeriksa apakah input adalah tipe yang benar. Jika salah, seharusnya mencetak("Bad Type") (Pada kenyataannya, seharusnya menimbulkan kesalahan, tetapi penanganan kesalahan tidak dibahas dalam tutorial ini). Melihat kode tutorial dan output yang diharapkan mungkin dapat membantu jika Anda bingung (Saya pun akan bingung). Menggunakan isinstance(object, type_of_object) atau type(object) mungkin membantu.