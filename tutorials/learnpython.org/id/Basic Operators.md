Konten bagian ini menjelaskan cara menggunakan operator dasar dalam Python.

### Arithmetic Operators

Seperti bahasa pemrograman lainnya, operator penjumlahan, pengurangan, perkalian, dan pembagian bisa digunakan dengan angka.

    number = 1 + 2 * 3 / 4.0
    print(number)

Cobalah untuk memprediksi apa hasilnya. Apakah Python mengikuti aturan urutan operasi?

Operator lain yang tersedia adalah operator modulo (%) yang mengembalikan sisa pembagian bilangan bulat. dividend % divisor = remainder.

    remainder = 11 % 3
    print(remainder)

Menggunakan dua simbol perkalian menghasilkan hubungan pangkat.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Menggunakan Operator dengan Strings

Python mendukung penggabungan string menggunakan operator penjumlahan:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python juga mendukung perkalian string untuk membentuk string dengan urutan yang berulang:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Menggunakan Operator dengan Lists

List dapat digabung dengan operator penjumlahan:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Seperti pada string, Python mendukung pembentukan list baru dengan urutan yang berulang menggunakan operator perkalian:

    print([1,2,3] * 3)

Exercise
--------

Tujuan dari latihan ini adalah membuat dua list bernama `x_list` dan `y_list`, yang masing-masing berisi 10 instance dari variabel `x` dan `y`. Anda juga diharuskan membuat sebuah list bernama `big_list`, yang berisi variabel `x` dan `y`, masing-masing 10 kali, dengan menggabungkan kedua list yang Anda buat.