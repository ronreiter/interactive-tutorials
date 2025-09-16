Sebuah dictionary adalah tipe data yang mirip dengan array, tetapi bekerja dengan kunci dan nilai alih-alih indeks. Setiap nilai yang disimpan dalam dictionary dapat diakses menggunakan sebuah kunci, yang dapat berupa jenis objek apa pun (sebuah string, angka, daftar, dll.) alih-alih menggunakan indeksnya untuk mengaksesnya.

Misalnya, sebuah database nomor telepon dapat disimpan menggunakan dictionary seperti ini:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Sebagai alternatif, sebuah dictionary dapat diinisialisasi dengan nilai yang sama menggunakan notasi berikut:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Melakukan iterasi melalui dictionary

Dictionary dapat diiterasi, seperti halnya sebuah list. Namun, dictionary, tidak seperti list, tidak mempertahankan urutan nilai yang disimpannya. Untuk mengiterasi pasangan kunci-nilai, gunakan sintaks berikut:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Menghapus sebuah nilai

Untuk menghapus indeks tertentu, gunakan salah satu notasi berikut:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

atau:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Exercise
--------

Tambahkan "Jake" ke dalam phonebook dengan nomor telepon 938273443, dan hapus Jill dari phonebook.