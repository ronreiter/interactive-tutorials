This section explains how to use basic operators in Python.

### Operator Aritmatika       

Seperti bahasa pemrograman lainnya, operator penjumlahan, pengurangan, perkalian, dan pembagian dapat digunakan dengan angka.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Cobalah untuk memprediksi apa jawaban yang akan dihasilkan. Apakah Python mengikuti urutan operasi?

Operator lain yang tersedia adalah operator modulo (%) yang mengembalikan sisa hasil bagi sebagai bilangan bulat. dividend % divisor = remainder.

    remainder = 11 % 3
    print(remainder)

Menggunakan dua simbol perkalian menciptakan hubungan pangkat.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Menggunakan Operator dengan String

Python mendukung penggabungan string menggunakan operator penjumlahan:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python juga mendukung mengalikan string untuk membentuk string dengan urutan yang berulang:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Menggunakan Operator dengan Daftar

Daftar dapat digabungkan dengan operator penjumlahan:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Sama seperti pada string, Python mendukung membentuk daftar baru dengan urutan yang berulang menggunakan operator perkalian:

    print([1,2,3] * 3)

Exercise
--------

The target of this exercise is to create two lists called `x_list` and `y_list`,
which contain 10 instances of the variables `x` and `y`, respectively.
You are also required to create a list called `big_list`, which contains
the variables `x` and `y`, 10 times each, by concatenating the two lists you have created.