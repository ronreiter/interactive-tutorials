### Apa Itu Fungsi?

Fungsi adalah cara yang nyaman untuk membagi kode Anda menjadi blok-blok yang berguna, memungkinkan kita untuk mengatur kode kita, membuatnya lebih mudah dibaca, menggunakannya kembali, dan menghemat waktu. Fungsi juga merupakan cara utama untuk mendefinisikan antarmuka agar pemrogram dapat berbagi kode mereka.

### Bagaimana cara menulis fungsi di Python?

Seperti yang telah kita lihat pada tutorial sebelumnya, Python menggunakan blok.

Sebuah blok adalah area kode yang ditulis dalam format:

    block_head:
        1st block line
        2nd block line
        ...

Di mana baris blok adalah lebih banyak kode Python (bahkan blok lain), dan kepala blok memiliki format berikut:
block_keyword block_name(argument1,argument2, ...)
Kata kunci blok yang sudah diketahui adalah "if", "for", dan "while".

Fungsi di Python didefinisikan menggunakan kata kunci blok "def", diikuti dengan nama fungsi sebagai nama blok.
Sebagai contoh:

    def my_function():
        print("Hello From My Function!")


Fungsi juga dapat menerima argumen (variabel yang diteruskan dari pemanggil ke fungsi).
Sebagai contoh:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Fungsi dapat mengembalikan nilai ke pemanggil, menggunakan kata kunci 'return'.
Sebagai contoh:

    def sum_two_numbers(a, b):
        return a + b

### Bagaimana cara memanggil fungsi di Python?

Cukup tulis nama fungsi diikuti dengan (), tempatkan argumen yang diperlukan di dalam tanda kurung.
Sebagai contoh, mari kita panggil fungsi yang ditulis di atas (dalam contoh sebelumnya):

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


Exercise
--------

Dalam latihan ini Anda akan menggunakan fungsi yang sudah ada, dan sementara menambahkan fungsi Anda sendiri untuk membuat program yang sepenuhnya berfungsi.

1. Tambahkan fungsi bernama `list_benefits()` yang mengembalikan daftar string berikut: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Tambahkan fungsi bernama `build_sentence(info)` yang menerima satu argumen yang berisi string dan mengembalikan kalimat yang dimulai dengan string yang diberikan dan diakhiri dengan string " is a benefit of functions!"

3. Jalankan dan lihat semua fungsi bekerja sama!