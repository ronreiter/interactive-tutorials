# Sets dan Operasi di Dalamnya

Sets adalah daftar tanpa entri duplikat. Misalnya, Anda ingin mengumpulkan daftar kata-kata yang digunakan dalam sebuah paragraf:

    print(set("my name is Eric and Eric is my name".split()))

Ini akan mencetak daftar yang berisi "my", "name", "is", "Eric", dan akhirnya "and". Karena sisa kalimat menggunakan kata-kata yang sudah ada dalam set, mereka tidak dimasukkan dua kali.

Sets adalah alat yang kuat di Python karena dapat menghitung perbedaan dan irisan antara set lainnya. Misalnya, anggap Anda memiliki daftar peserta dalam acara A dan B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Untuk mengetahui anggota mana yang menghadiri kedua acara, Anda dapat menggunakan metode "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Untuk mengetahui anggota mana yang hanya menghadiri salah satu acara, gunakan metode "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Untuk mengetahui anggota mana yang hanya menghadiri satu acara dan bukan yang lainnya, gunakan metode "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Untuk mendapatkan daftar semua peserta, gunakan metode "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Exercise--------
Dalam latihan di bawah, gunakan daftar yang diberikan untuk mencetak set yang berisi semua peserta dari acara A yang tidak menghadiri acara B.