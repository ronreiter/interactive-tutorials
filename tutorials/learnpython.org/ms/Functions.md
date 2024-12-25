### Apakah Itu Fungsi?

Fungsi adalah cara yang mudah untuk membahagikan kod anda kepada blok-blok yang berguna, membolehkan kita menyusun kod kita, menjadikannya lebih mudah dibaca, diguna semula dan menjimatkan masa. Fungsi juga merupakan cara utama untuk menetapkan antara muka supaya pengaturcara boleh berkongsi kod mereka.

### Bagaimana Menulis Fungsi dalam Python?

Seperti yang kita telah lihat dalam tutorial sebelumnya, Python menggunakan blok.

Blok adalah kawasan kod yang ditulis dalam format:

    block_head:
        1st block line
        2nd block line
        ...

Di mana satu baris blok adalah lebih banyak kod Python (malah blok lain), dan blok kepala adalah dalam format berikut:
block_keyword block_name(argument1,argument2, ...)
Kata kunci blok yang anda sudah tahu adalah "if", "for", dan "while".

Fungsi dalam python ditakrifkan menggunakan kata kunci blok "def", diikuti dengan nama fungsi sebagai nama blok.
Sebagai contoh:

    def my_function():
        print("Hello From My Function!")


Fungsi juga boleh menerima argumen (pembolehubah yang dihantar dari pemanggil ke fungsi).
Sebagai contoh:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Fungsi boleh memulangkan nilai kepada pemanggil, menggunakan kata kunci 'return'.
Sebagai contoh:

    def sum_two_numbers(a, b):
        return a + b

### Bagaimana Anda Memanggil Fungsi dalam Python?

Cuma tuliskan nama fungsi diikuti dengan (), letakkan apa-apa argumen yang diperlukan di dalam kurungan.
Sebagai contoh, mari kita panggil fungsi-fungsi yang ditulis di atas (dalam contoh sebelumnya):

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

Dalam latihan ini, anda akan menggunakan fungsi yang sedia ada, dan sambil menambah fungsi anda sendiri untuk mencipta program yang berfungsi sepenuhnya.

1. Tambah satu fungsi bernama `list_benefits()` yang memulangkan senarai rentetan berikut: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Tambah satu fungsi bernama `build_sentence(info)` yang menerima satu argumen yang mengandungi satu rentetan dan mengembalikan ayat yang bermula dengan rentetan yang diberikan dan berakhir dengan rentetan " is a benefit of functions!"

3. Jalankan dan lihat semua fungsi berfungsi bersama!