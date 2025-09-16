Strings adalah potongan teks. Mereka dapat didefinisikan sebagai apa pun di antara tanda kutip:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Seperti yang Anda lihat, hal pertama yang Anda pelajari adalah mencetak kalimat sederhana. Kalimat ini disimpan oleh Python sebagai string. Namun, alih-alih langsung mencetak string, kita akan menjelajahi berbagai hal yang dapat Anda lakukan dengannya. Anda juga dapat menggunakan tanda kutip tunggal untuk menetapkan sebuah string. Namun, Anda akan menghadapi masalah jika nilai yang akan ditetapkan sendiri mengandung tanda kutip tunggal. Misalnya, untuk menetapkan string dalam tanda kurung ini (tanda kutip tunggal adalah ' '), Anda perlu menggunakan tanda kutip ganda seperti ini

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Itu mencetak 12, karena "Hello world!" memiliki panjang 12 karakter, termasuk tanda baca dan spasi.

    astring = "Hello world!"
    print(astring.index("o"))

Itu mencetak 4, karena lokasi kemunculan pertama huruf "o" berada 4 karakter jauhnya dari karakter pertama. Perhatikan bagaimana sebenarnya ada dua huruf o dalam frasa tersebut - metode ini hanya mengenali yang pertama.

Tapi kenapa tidak mencetak 5? Bukankah "o" adalah karakter kelima dalam string? Untuk membuat segalanya lebih sederhana, Python (dan kebanyakan bahasa pemrograman lainnya) memulai segalanya dengan 0 daripada 1. Jadi indeks "o" adalah 4.

    astring = "Hello world!"
    print(astring.count("l"))

Bagi Anda yang menggunakan font konyol, itu adalah huruf kecil L, bukan angka satu. Ini menghitung jumlah l dalam string. Oleh karena itu, ini harus mencetak 3.

    astring = "Hello world!"
    print(astring[3:7])

Ini mencetak potongan string, dimulai dari indeks 3, dan diakhiri pada indeks 6. Tapi kenapa 6 dan bukan 7? Sekali lagi, kebanyakan bahasa pemrograman melakukan ini - ini memudahkan perhitungan di dalam tanda kurung.

Jika Anda hanya memiliki satu angka dalam tanda kurung, itu akan memberi Anda karakter tunggal pada indeks itu. Jika Anda mengabaikan angka pertama namun tetap menyertakan titik dua, itu akan memberi Anda potongan dari awal hingga angka yang Anda tinggalkan. Jika Anda mengabaikan angka kedua, itu akan memberi Anda potongan dari angka pertama hingga akhir.

Anda bahkan bisa memasukkan angka negatif di dalam tanda kurung. Ini adalah cara mudah untuk mulai dari akhir string daripada dari awal. Dengan cara ini, -3 berarti "karakter ke-3 dari akhir".

    astring = "Hello world!"
    print(astring[3:7:2])

Ini mencetak karakter dari string dari 3 hingga 7 sambil melewatkan satu karakter. Ini adalah sintaks slice yang diperpanjang. Bentuk umum adalah [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Perhatikan bahwa keduanya menghasilkan keluaran yang sama

Tidak ada fungsi seperti strrev di C untuk membalik string. Tetapi dengan tipe sintaks slice yang disebutkan di atas, Anda dapat dengan mudah membalik string seperti ini

    astring = "Hello world!"
    print(astring[::-1])

Ini

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Ini membuat string baru dengan semua huruf dikonversi ke huruf besar dan huruf kecil, masing-masing.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Ini digunakan untuk menentukan apakah string dimulai dengan sesuatu atau diakhiri dengan sesuatu, masing-masing. Yang pertama akan mencetak True, karena string dimulai dengan "Hello". Yang kedua akan mencetak False, karena string tersebut jelas tidak berakhir dengan "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Ini membagi string menjadi sejumlah string yang dikelompokkan bersama dalam daftar. Karena contoh ini membagi pada spasi, item pertama dalam daftar akan menjadi "Hello", dan item kedua akan menjadi "world!".

Exercise
--------

Cobalah untuk memperbaiki kode untuk mencetak informasi yang benar dengan mengubah string.