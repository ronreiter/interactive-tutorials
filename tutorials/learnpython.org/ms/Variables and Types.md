Python sepenuhnya berorientasikan objek, dan tidak "diketik secara statik". Anda tidak perlu mengisytiharkan pembolehubah sebelum menggunakannya, atau mengisytiharkan jenisnya. Setiap pembolehubah dalam Python adalah objek.

Tutorial ini akan merangkumi beberapa jenis asas pembolehubah.

### Nombor
Python menyokong dua jenis nombor - integer (nombor bulat) dan nombor titik terapung (nombor perpuluhan). (Ia juga menyokong nombor kompleks, yang tidak akan dijelaskan dalam tutorial ini).

Untuk mendefinisikan integer, gunakan sintaks berikut:

    myint = 7
    print(myint)

Untuk mendefinisikan nombor titik terapung, anda boleh menggunakan salah satu notasi berikut:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Rentetan

Rentetan didefinisikan sama ada dengan tanda petikan tunggal atau tanda petikan dua.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Perbezaan antara keduanya adalah bahawa menggunakan tanda petikan dua memudahkan untuk memasukkan apostrof (walaupun ini akan menamatkan rentetan jika menggunakan tanda petikan tunggal)

    mystring = "Don't worry about apostrophes"
    print(mystring)

Terdapat variasi tambahan dalam mendefinisikan rentetan yang memudahkan untuk memasukkan perkara seperti carriage return, garis miring terbalik dan aksara Unicode. Ini berada di luar skop tutorial ini, tetapi dibahas dalam [dokumentasi Python](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Pengoperasi mudah boleh dieksekusi pada nombor dan rentetan:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Pengagihan boleh dilakukan pada lebih daripada satu pembolehubah "serentak" pada baris yang sama seperti ini

    a, b = 3, 4
    print(a, b)

Pencampuran pengoperasi antara nombor dan rentetan tidak disokong:

    # Ini tidak akan berfungsi!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Latihan
--------

Matlamat latihan ini adalah untuk membuat rentetan, integer, dan nombor titik terapung. Rentetan itu sepatutnya dinamakan `mystring` dan harus mengandungi perkataan "hello". Nombor titik terapung sepatutnya dinamakan `myfloat` dan harus mengandungi nombor 10.0, dan integer sepatutnya dinamakan `myint` dan harus mengandungi nombor 20.