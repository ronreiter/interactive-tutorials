Pelekat membolehkan anda membuat pengubahsuaian ringkas pada objek boleh panggil seperti [functions](http://www.learnpython.org/en/Functions ""), [methods, atau classes](http://www.learnpython.org/en/Classes%20and%20Objects ""). Kita akan berurusan dengan fungsi untuk tutorial ini. Sintaks

    @decorator
    def functions(arg):
        return "value"

Adalah bersamaan dengan:

    def function(arg):
        return "value"
    function = decorator(function) # ini menghantar fungsi kepada decorator, dan menugaskannya semula kepada functions

Seperti yang anda mungkin lihat, pelekat hanyalah fungsi lain yang mengambil fungsi dan mengembalikannya. Contohnya anda boleh buat ini:

    def repeater(old_function):
        def new_function(*args, **kwds): # Lihat learnpython.org/en/Multiple%20Function%20Arguments untuk bagaimana *args dan **kwds berfungsi
            old_function(*args, **kwds) # kita jalankan fungsi lama
            old_function(*args, **kwds) # kita lakukannya dua kali
        return new_function # kita perlu kembalikan new_function, atau ia tidak akan menugaskannya semula kepada nilai

Ini akan membuat fungsi ulang dua kali.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Anda juga boleh mengubah output

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # ubah nilai pulangan
        return new_function

ubah input

    def double_Ii(old_function):
        def new_function(arg): # hanya berfungsi jika fungsi lama mempunyai satu argumen
            return old_function(arg * 2) # ubah argumen yang dihantar
        return new_function

dan lakukan pemeriksaan.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Ini menyebabkan ralat, yang lebih baik daripada melakukan perkara yang salah
            old_function(arg)
        return new_function

Katakan anda mahu darabkan output dengan jumlah pemboleh ubah. Anda boleh definisikan pelekat tersebut dan gunakannya seperti berikut:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # ia mengembalikan penjana baru
    
    # Penggunaan
    @multiply(3) # multiply bukan penjana, tetapi multiply(3) adalah
    def return_num(num):
        return num
        
    # Sekarang return_num adalah dihias dan ditugaskan semula kepada dirinya sendiri
    return_num(5) # harus mengembalikan 15

Anda boleh melakukan apa sahaja yang anda mahu dengan fungsi lama, bahkan mengabaikannya sepenuhnya! Pelekat maju juga boleh memanipulasi string doc dan bilangan argumen.
Untuk beberapa pelekat menarik, pergi ke <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
Buat kilang pelekat yang mengembalikan pelekat yang menghias fungsi dengan satu argumen. Kilang itu harus mengambil satu argumen, iaitu satu jenis, dan kemudian mengembalikan pelekat yang membuat fungsi harus memeriksa jika inputnya adalah jenis yang betul. Jika salah, ia harus mencetak("Bad Type") (Dalam kenyataannya, ia harus menimbulkan ralat, tetapi timbulkan kesilapan tidak ada dalam tutorial ini). Lihatlah kod tutorial dan jangkaan output untuk melihat apa ia jika anda keliru (Saya tahu saya pasti akan keliru). Menggunakan isinstance(object, type_of_object) atau type(object) mungkin membantu.