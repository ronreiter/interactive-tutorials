Kandungan bahagian ini menerangkan cara menggunakan operator asas dalam Python.

### Arithmetic Operators       

Seperti bahasa pengaturcaraan lain, operator penambahan, penolakan, pendaraban, dan pembahagian boleh digunakan dengan nombor.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Cuba ramalkan apakah jawapannya. Adakah python mengikuti aturan operasi?

Satu lagi operator yang tersedia ialah operator modulo (%) yang mengembalikan baki integer pembahagian. dividend % divisor = baki.

    remainder = 11 % 3
    print(remainder)

Menggunakan dua simbol pendaraban membuat hubungan kuasa.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Menggunakan Operator dengan String

Python menyokong penggabungan string menggunakan operator penambahan:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python juga menyokong pendaraban string untuk membentuk string dengan jujukan berulang:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Menggunakan Operator dengan Senarai

Senarai boleh digabungkan dengan operator penambahan:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Seperti dalam string, Python menyokong pembentukan senarai baru dengan jujukan berulang menggunakan operator pendaraban:

    print([1,2,3] * 3)

Latihan
--------

Matlamat latihan ini adalah untuk mencipta dua senarai yang dipanggil `x_list` dan `y_list`,
yang mengandungi 10 contoh pembolehubah `x` dan `y`, masing-masing.
Anda juga dikehendaki mencipta senarai yang dipanggil `big_list`, yang mengandungi
pembolehubah `x` dan `y`, masing-masing 10 kali, dengan menggabungkan dua senarai yang telah anda cipta.