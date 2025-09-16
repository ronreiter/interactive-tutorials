Python menggunakan pemformatan string gaya C untuk mencipta string baru yang berformat. Operator "%" digunakan untuk memformatkan sekumpulan variabel yang tercantum dalam "tuple" (daftar dengan ukuran tetap), bersama dengan string format, yang mengandungi teks biasa bersama dengan "spesifikator argumen", simbol khas seperti "%s" dan "%d".

Katakan anda mempunyai variabel yang dipanggil "name" dengan nama pengguna anda di dalamnya, dan anda ingin mencetak( memaparkan ucapan kepada pengguna tersebut.)

    # Ini mencetak "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Untuk menggunakan dua atau lebih spesifikator argumen, gunakan tuple (kurungan):

    # Ini mencetak "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Sebarang objek yang bukan string juga boleh diformatkan menggunakan operator %s. String yang kembali dari metode "repr" objek tersebut diformatkan sebagai string. Contoh:

    # Ini mencetak: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Berikut adalah beberapa spesifikator argumen asas yang harus anda ketahui:


`%s - String (atau sebarang objek dengan representasi string, seperti nombor)`

`%d - Integer`

`%f - Nombor titik apungan`

`%.<bilangan digit>f - Nombor titik apungan dengan jumlah digit tetap di sebelah kanan titik.`

`%x/%X - Integer dalam representasi heksadesimal (huruf kecil/huruf besar)`


Latihan
--------

Anda perlu menulis format string yang mencetak data menggunakan sintaks berikut:
    `Hello John Doe. Your current balance is $53.44.`