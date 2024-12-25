Python menggunakan pemformatan string gaya C untuk membuat string baru yang terformat. Operator "%" digunakan untuk memformat satu set variabel yang ditutup dalam "tuple" (daftar ukuran tetap), bersama dengan string format, yang berisi teks biasa bersama dengan "argument specifiers", simbol khusus seperti "%s" dan "%d".

Misalkan Anda memiliki variabel yang disebut "name" dengan nama pengguna Anda di dalamnya, dan Anda ingin mencetak salam kepada pengguna tersebut.

    # Ini akan mencetak "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Untuk menggunakan dua atau lebih penentu argumen, gunakan tuple (tanda kurung):

    # Ini akan mencetak "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Objek apa pun yang bukan string dapat diformat menggunakan operator %s juga. String yang dikembalikan dari metode "repr" dari objek tersebut diformat sebagai string. Sebagai contoh:

    # Ini akan mencetak: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Berikut adalah beberapa penentu argumen dasar yang harus Anda ketahui:

`%s - String (atau objek apa pun dengan representasi string, seperti angka)`

`%d - Bilangan bulat`

`%f - Bilangan titik mengambang`

`%.<number of digits>f - Bilangan titik mengambang dengan jumlah digit tetap di sebelah kanan titik.`

`%x/%X - Bilangan bulat dalam representasi hex (huruf kecil/huruf besar)`

Latihan
--------

Anda perlu menulis string format yang mencetak data menggunakan sintaks berikut:
    `Hello John Doe. Your current balance is $53.44.`