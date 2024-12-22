Python sepenuhnya berorientasi objek, dan tidak "bertipe statis". Anda tidak perlu mendeklarasikan variabel sebelum menggunakannya, atau mendeklarasikan tipe mereka. Setiap variabel dalam Python adalah sebuah objek.

Tutorial ini akan membahas beberapa jenis dasar variabel.

### Numbers
Python mendukung dua jenis bilangan - integer (bilangan bulat) dan bilangan titik mengambang (desimal). (Python juga mendukung bilangan kompleks, yang tidak akan dijelaskan dalam tutorial ini).

Untuk mendefinisikan bilangan bulat, gunakan sintaks berikut:

    myint = 7
    print(myint)

Untuk mendefinisikan bilangan titik mengambang, Anda dapat menggunakan salah satu notasi berikut:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

String didefinisikan dengan tanda kutip tunggal atau tanda kutip ganda.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Perbedaan antara keduanya adalah menggunakan tanda kutip ganda memudahkan untuk menyertakan apostrof (sedangkan ini akan mengakhiri string jika menggunakan tanda kutip tunggal)

    mystring = "Don't worry about apostrophes"
    print(mystring)

Ada variasi tambahan dalam mendefinisikan string yang membuatnya lebih mudah untuk menyertakan hal-hal seperti carriage return, backslashes, dan karakter Unicode. Ini di luar cakupan tutorial ini, tetapi dibahas dalam [dokumentasi Python](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Operator sederhana dapat dieksekusi pada bilangan dan string:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Penugasan dapat dilakukan pada lebih dari satu variabel "secara simultan" pada baris yang sama seperti ini

    a, b = 3, 4
    print(a, b)

Penggabungan operator antara bilangan dan string tidak didukung:

    # Ini tidak akan berhasil!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

Tujuan dari latihan ini adalah untuk membuat sebuah string, sebuah bilangan bulat, dan sebuah bilangan titik mengambang. String harus diberi nama `mystring` dan harus berisi kata "hello". Bilangan titik mengambang harus diberi nama `myfloat` dan harus berisi angka 10.0, dan bilangan bulat harus diberi nama `myint` dan harus berisi angka 20.