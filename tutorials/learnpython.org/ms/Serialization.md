Python menyediakan perpustakaan JSON terbina dalam untuk mengekod dan menyahkod JSON.

Dalam Python 2.5, modul simplejson digunakan, manakala dalam Python 2.7, modul json digunakan. Oleh kerana penterjemah ini menggunakan Python 2.7, kita akan menggunakan modul json.

Untuk menggunakan modul json, ia perlu diimport terlebih dahulu:

    import json

Terdapat dua format asas untuk data JSON. Sama ada dalam bentuk rentetan atau struktur data objek. Struktur data objek, dalam Python, terdiri daripada senarai dan kamus yang terbenam di dalam satu sama lain. Struktur data objek membolehkan seseorang menggunakan kaedah Python (untuk senarai dan kamus) untuk menambah, menyenaraikan, mencari, dan mengeluarkan elemen dari struktur data. Format String terutama digunakan untuk menghantar data ke dalam program lain atau dimuatkan ke dalam struktur data.

Untuk memuatkan JSON kembali ke dalam struktur data, gunakan kaedah "loads". Kaedah ini mengambil rentetan dan mengubahnya kembali menjadi struktur data objek json:

    import json 
    print(json.loads(json_string))

Untuk mengekod struktur data ke JSON, gunakan kaedah "dumps". Kaedah ini mengambil objek dan mengembalikan Rentetan:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python menyokong kaedah penyeralan data proprietary Python yang dipanggil pickle (dan alternatif yang lebih pantas dipanggil cPickle).

Anda boleh menggunakannya dengan cara yang sama.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Matlamat latihan ini adalah untuk mencetak rentetan JSON dengan pasangan kunci-nilai "Me" : 800 ditambah kepadanya.