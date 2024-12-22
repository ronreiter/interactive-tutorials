A dictionary ialah sejenis data yang serupa dengan array, tetapi berfungsi dengan kunci dan nilai bukannya indeks. Setiap nilai yang disimpan dalam dictionary boleh diakses menggunakan kunci, yang boleh menjadi sebarang jenis objek (seperti string, nombor, senarai, dan lain-lain) bukannya menggunakan indeksnya untuk mengaksesnya.

Sebagai contoh, pangkalan data nombor telefon boleh disimpan menggunakan dictionary sebagaimana berikut:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Sebagai alternatif, dictionary boleh diinisialisasi dengan nilai yang sama dalam notasi berikut:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Mengulangi dictionary

Dictionary boleh diulang seperti senarai. Namun, tidak seperti senarai, dictionary tidak menyimpan susunan nilai yang disimpannya. Untuk mengulangi pasangan kunci dan nilai, gunakan sintaks berikut:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Mengeluarkan nilai

Untuk mengeluarkan indeks yang ditentukan, gunakan salah satu notasi berikut:
    
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

Tambah "Jake" ke dalam buku telefon dengan nombor telefon 938273443, dan keluarkan Jill dari buku telefon.