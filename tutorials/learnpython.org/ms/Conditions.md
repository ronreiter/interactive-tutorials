Python menggunakan logik boolean untuk menilai syarat. Nilai boolean True dan False dikembalikan apabila suatu ekspresi dibandingkan atau dinilai. Sebagai contoh:

    x = 2
    print(x == 2) # mencetak True
    print(x == 3) # mencetak False
    print(x < 3) # mencetak True

Perhatikan bahawa penugasan pembolehubah dilakukan menggunakan satu operator sama "=" manakala perbandingan antara dua pembolehubah dilakukan menggunakan operator sama berganda "==". Operator "tidak sama" ditandakan sebagai "!=".

### Operator boolean

Operator boolean "and" dan "or" membolehkan pembangunan ekspresi boolean yang kompleks, sebagai contoh:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Your name is John, and you are also 23 years old.")

    if name == "John" or name == "Rick":
        print("Your name is either John or Rick.")

### Operator "in"

Operator "in" boleh digunakan untuk memeriksa jika suatu objek yang ditentukan wujud dalam bekas objek iterable, seperti senarai:

    name = "John"
    if name in ["John", "Rick"]:
        print("Your name is either John or Rick.")

Python menggunakan indentasi untuk mentakrifkan blok kod, bukannya kurungan. Indentasi Python standard adalah 4 ruang, walaupun tab dan saiz ruang lain akan berfungsi, asalkan konsisten. Perhatikan bahawa blok kod tidak memerlukan sebarang penamatan.

Ini adalah contoh penggunaan penyataan "if" dalam Python menggunakan blok kod:

    statement = False
    another_statement = True
    if statement is True:
        # melakukan sesuatu
        pass
    elif another_statement is True: # else if
        # melakukan perkara lain
        pass
    else:
        # melakukan perkara lain lagi
        pass

Sebagai contoh:

    x = 2
    if x == 2:
        print("x equals two!")
    else:
        print("x does not equal to two.")

Satu pernyataan dinilai sebagai benar jika salah satu daripada yang berikut adalah betul:
1. Pembolehubah boolean "True" diberikan, atau dikira menggunakan ekspresi, seperti perbandingan aritmetik.
2. Sebuah objek yang tidak dianggap "kosong" dilewati.

Berikut adalah beberapa contoh objek yang dianggap kosong:
1. String kosong: ""
2. Senarai kosong: []
3. Nombor sifar: 0
4. Pembolehubah boolean palsu: False

### Operator 'is'

Tidak seperti operator sama berganda "==", operator "is" tidak menyamai nilai pembolehubah tetapi contoh mereka sendiri. Sebagai contoh:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # Mencetak True
    print(x is y) # Mencetak False

### Operator "not"

Menggunakan "not" sebelum ekspresi boolean membalikkannya:

    print(not False) # Mencetak True
    print((not False) == (False)) # Mencetak False

Exercise
--------

Ubah pembolehubah dalam bahagian pertama, supaya setiap penyataan if diselesaikan sebagai True.