Sets adalah senarai tanpa entri berulang. Katakan anda ingin mengumpul senarai perkataan yang digunakan dalam satu perenggan:

    print(set("my name is Eric and Eric is my name".split()))

Ini akan mencetak senarai yang mengandungi "my", "name", "is", "Eric", dan akhirnya "and". Oleh kerana baki ayat menggunakan perkataan yang sudah ada dalam set, ianya tidak akan disertakan dua kali.

Set adalah alat yang berkuasa di dalam Python kerana ia mempunyai keupayaan untuk mengira perbezaan dan persilangan antara set-set lain. Sebagai contoh, katakan anda mempunyai senarai peserta dalam acara A dan B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Untuk mengetahui ahli mana yang menghadiri kedua-dua acara ini, anda boleh menggunakan kaedah "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Untuk mengetahui ahli mana yang menghadiri hanya satu daripada acara ini, gunakan kaedah "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Untuk mengetahui ahli mana yang menghadiri hanya satu acara dan bukan yang lain, gunakan kaedah "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Untuk menerima senarai semua peserta, gunakan kaedah "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Dalam latihan di bawah, gunakan senarai yang diberikan untuk mencetak set yang mengandungi semua peserta dari acara A yang tidak menghadiri acara B.