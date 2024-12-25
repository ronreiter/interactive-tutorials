Python menyediakan pustaka JSON bawaan untuk melakukan encoding dan decoding JSON.

Pada Python 2.5, modul simplejson digunakan, sedangkan pada Python 2.7, modul json digunakan. Karena interpreter ini menggunakan Python 2.7, kita akan menggunakan json.

Untuk menggunakan modul json, modul tersebut harus diimpor terlebih dahulu:

    import json

Ada dua format dasar untuk data JSON. Baik dalam bentuk string ataupun struktur data objek. Struktur data objek, dalam Python, terdiri dari daftar (list) dan kamus (dictionary) yang bersarang satu sama lain. Struktur data objek memungkinkan kita menggunakan metode Python (untuk daftar dan kamus) untuk menambah, mendaftar, mencari, dan menghapus elemen dari struktur data tersebut. Format String digunakan terutama untuk mengirimkan data ke program lain atau memuat ke dalam suatu struktur data.

Untuk memuat kembali JSON ke dalam struktur data, gunakan metode "loads". Metode ini mengambil string dan mengubahnya kembali menjadi struktur data objek json:

    import json
    print(json.loads(json_string))

Untuk melakukan encoding struktur data ke JSON, gunakan metode "dumps". Metode ini mengambil sebuah objek dan mengembalikan sebuah String:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python mendukung metode serialisasi data khusus Python yang disebut pickle (dan alternatif yang lebih cepat disebut cPickle).

Anda dapat menggunakannya dengan cara yang sama persis.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Tujuan latihan ini adalah untuk mencetak string JSON dengan pasangan kunci-nilai "Me" : 800 ditambahkan ke dalamnya.