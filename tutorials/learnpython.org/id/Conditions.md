Python menggunakan logika boolean untuk mengevaluasi kondisi. Nilai boolean True dan False dikembalikan ketika sebuah ekspresi dibandingkan atau dievaluasi. Sebagai contoh:

x = 2
print(x == 2) # mencetak True
print(x == 3) # mencetak False
print(x < 3) # mencetak True

Perhatikan bahwa penugasan variabel dilakukan menggunakan operator sama dengan tunggal "=", sedangkan perbandingan antara dua variabel dilakukan menggunakan operator sama dengan ganda "==". Operator "tidak sama dengan" ditandai sebagai "!=".

### Operator boolean

Operator boolean "and" dan "or" memungkinkan pembuatan ekspresi boolean yang kompleks, misalnya:

name = "John"
age = 23
if name == "John" and age == 23:
    print("Nama Anda adalah John, dan Anda juga berumur 23 tahun.")

if name == "John" or name == "Rick":
    print("Nama Anda adalah John atau Rick.")

### Operator "in"

Operator "in" dapat digunakan untuk memeriksa apakah objek tertentu ada dalam wadah objek iterable, seperti daftar:

name = "John"
if name in ["John", "Rick"]:
    print("Nama Anda adalah John atau Rick.")

Python menggunakan indentasi untuk mendefinisikan blok kode, bukan kurung kurawal. Indentasi standar Python adalah 4 spasi, meskipun tab dan ukuran spasi lainnya akan berfungsi, selama konsisten. Perhatikan bahwa blok kode tidak memerlukan terminasi apa pun.

Berikut adalah contoh penggunaan pernyataan "if" Python menggunakan blok kode:

statement = False
another_statement = True
if statement is True:
    # lakukan sesuatu
    pass
elif another_statement is True: # else if
    # lakukan sesuatu yang lain
    pass
else:
    # lakukan sesuatu yang berbeda
    pass

Sebagai contoh:

x = 2
if x == 2:
    print("x sama dengan dua!")
else:
    print("x tidak sama dengan dua.")

Sebuah pernyataan dievaluasi sebagai benar jika salah satu dari berikut ini benar:
1. Variabel boolean "True" diberikan, atau dihitung menggunakan sebuah ekspresi, seperti perbandingan aritmatika.
2. Sebuah objek yang tidak dianggap "kosong" diberikan.

Berikut adalah beberapa contoh untuk objek yang dianggap kosong:
1. Sebuah string kosong: ""
2. Sebuah daftar kosong: []
3. Angka nol: 0
4. Variabel boolean false: False

### Operator 'is'

Berbeda dengan operator sama dengan ganda "==", operator "is" tidak mencocokkan nilai variabel, tetapi instansinya itu sendiri. Sebagai contoh:

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

Ubah variabel dalam bagian pertama, sehingga setiap pernyataan if menjadi True.