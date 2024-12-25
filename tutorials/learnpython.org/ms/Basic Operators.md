Tutorial--------
    
Bahagian ini menerangkan cara menggunakan pengendali asas dalam Python.

### Pengendali Aritmetik  

Sama seperti bahasa pengaturcaraan lain, pengendali tambah, tolak, darab, dan bahagi boleh digunakan dengan nombor.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Cuba ramalkan apa jawapannya. Adakah Python mengikuti aturan operasi?

Pengendali lain yang tersedia ialah pengendali modulo (%) yang mengembalikan baki integer pembahagian. dividend % divisor = baki.

    remainder = 11 % 3
    print(remainder)

Menggunakan dua simbol darab membentuk hubungan kuasa.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Menggunakan Pengendali dengan Rentetan

Python menyokong menggabungkan rentetan menggunakan pengendali tambah:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python juga menyokong pendaraban rentetan untuk membentuk rentetan dengan urutan berulang:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Menggunakan Pengendali dengan Senarai

Senarai boleh disatukan dengan pengendali tambah:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Seperti dalam rentetan, Python menyokong pembentukan senarai baru dengan urutan berulang menggunakan pengendali pendaraban:

    print([1,2,3] * 3)

Latihan
--------

Matlamat latihan ini adalah untuk mencipta dua senarai yang dipanggil `x_list` dan `y_list`, yang mengandungi 10 contoh pemboleh ubah `x` dan `y` masing-masing. Anda juga dikehendaki mencipta senarai yang dipanggil `big_list`, yang mengandungi pemboleh ubah `x` dan `y`, 10 kali setiap satu, dengan menggabungkan dua senarai yang anda telah cipta.