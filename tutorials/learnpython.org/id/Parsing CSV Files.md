### What is CSV?
CSV adalah singkatan dari 'Comma Separated Values'. Format CSV adalah format impor dan ekspor yang paling umum untuk basis data dan spreadsheet. File CSV adalah file teks sederhana yang berisi daftar data. Mereka kebanyakan menggunakan karakter koma (,) untuk membatasi data, tetapi terkadang menggunakan karakter lain seperti titik koma atau tab.

Contoh data CSV:

...
nama kolom 1, nama kolom 2, nama kolom 3
data baris pertama 1, data baris pertama 2, data baris pertama 3
data baris kedua 1, data baris kedua 2, data baris kedua 3
...

### CSV module in Python
Meskipun Python memiliki fungsi built-in open() untuk bekerja dengan file CSV atau file teks biasa lainnya, ada modul csv khusus yang mengimplementasikan kelas untuk membaca dan menulis data dalam format csv yang membuat bekerja dengan file CSV menjadi lebih mudah.

### CSV module important functions

    csv.field_size_limit – mengembalikan ukuran field maksimum
    csv.get_dialect – mendapatkan dialek yang terkait dengan nama
    csv.list_dialects – menampilkan semua dialek yang terdaftar
    csv.reader – membaca data dari file csv
    csv.register_dialect - mengasosiasikan dialek dengan nama
    csv.writer – menulis data ke file csv
    csv.unregister_dialect - menghapus dialek yang terkait dengan nama dari register dialek
    csv.QUOTE_ALL - Mengutip semua, terlepas dari tipe.
    csv.QUOTE_MINIMAL - Mengutip field dengan karakter khusus
    csv.QUOTE_NONNUMERIC - Mengutip semua field yang bukan nilai angka
    csv.QUOTE_NONE – Tidak mengutip apa pun dalam output

### How do you use csv module?
pertama impor modul csv dalam program python Anda.

    import csv

Fungsi writer dan reader memungkinkan Anda untuk mengedit, memodifikasi, dan mentransformasi data dalam file CSV.

Cara Membaca File CSV :-

Untuk membaca data dari file CSV kita menggunakan fungsi reader untuk menghasilkan objek reader.

Contoh:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Di sini, kita pertama-tama membuka file CSV dalam mode BACA dan menamai objek file sebagai csvfile. Kita menggunakan manajer konteks untuk membuka file sehingga kita tidak perlu khawatir tentang menutup file. Fungsi csv.reader mengambil objek file sebagai input dan mengembalikan objek iterable. Kita menyimpan objek iterable sebagai csvreader.

Seperti yang kita ketahui, csvreader adalah objek iterable dan oleh karena itu kita bisa melakukan iterasi menggunakan for loop:

contoh 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Kode di atas akan mencetak semua baris yang kita baca dari file csv. Harap dicatat bahwa kita membuka file dengan mode 'r' ketika file tersebut sudah ada.

Langkah selanjutnya?

cvreader adalah objek iterable. Oleh karena itu, metode .next() mengembalikan baris saat ini dan memajukan iterator ke baris berikutnya.

contoh 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

Pada contoh 1, Anda akan melihat semua baris dicetak di konsol bersama dengan header. Pada contoh 2, metode .next() membaca header pada objek fields dan memajukan iterator ke baris berikutnya, sehingga semua baris dicetak kecuali header.

Cara menulis dalam File CSV-

Untuk menulis dalam file csv, modul csv menyediakan fungsi csv.writer. Untuk menulis data, kita pertama-tama membuka file CSV dalam mode TULIS ('w'). Objek file dinamai csvfile. Kita menyimpan objek csv.writer sebagai csvwriter.

Contoh:
    #deklarasi header
    fields = ['kolom1','kolom2', 'kolom3']

    #deklarasi baris
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "tidak", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

Pada contoh di atas, fungsi writerow() akan menulis satu baris yang merupakan objek fields sedangkan metode writerows() akan menulis seluruh daftar baris yang ditentukan di atas ke dalam file csv.

Sekarang mari kita melangkah lebih jauh. Baca isi satu file csv dan tulis ke file csv lainnya.

Contoh:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # menyimpan header dan memajukan pointer reader
            csvwriter.writerow(header) #menulis header ke dalam file baru
            for row in reader:
                csvwriter.writerow(row)

Di sini, kita sedang membuka 'newfilename.csv' dalam mode 'W' sebagai f2 dan membuka 'mycsvfile.csv' dalam mode 'r' sebagai f1. Kita menggunakan fungsi .next(), .reader(), .writer(), dan .writerow() dari modul csv. Menggunakan .next(), kita memajukan pointer pembaca dan menggunakan csvwriter.writerow() kita menulis baris yang masuk satu per satu.

### DictReader and DictWriter classes in Python

Berikut adalah dua kelas penting dalam python untuk membaca dan menulis file csv.

csv.Dictwriter class
csv.DictReader class

DictReader dan DictWriter adalah kelas yang tersedia di Python untuk membaca dan menulis ke CSV. Meskipun mirip dengan fungsi reader dan writer, kelas ini menggunakan objek dictionary untuk membaca dan menulis ke file csv.

DictReader:

Ini menciptakan objek yang memetakan informasi yang dibaca ke dalam dictionary dengan kunci yang diberikan oleh parameter fieldnames. Parameter ini bersifat opsional, tetapi jika tidak ditentukan dalam file, data baris pertama menjadi kunci dari dictionary tersebut.

Contoh csv (info.csv)

.....
nama depan, nama belakang
foo, bar
foo1, bar1
.....

Contoh:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

Kelas csv.DictWriter berfungsi seperti writer biasa tetapi memetakan dictionary Python ke dalam baris CSV. Parameter fieldnames adalah urutan kunci yang mengidentifikasi urutan di mana nilai dalam dictionary yang diteruskan ke metode writerow() ditulis ke file CSV. Kelas ini didefinisikan sebagai csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Contoh:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Exercise
--------

Dalam latihan ini, Anda akan bekerja dengan data CSV. Tugas Anda adalah membuat program Python yang membaca data dari file CSV dan menulisnya ke file CSV lain, memastikan bahwa hanya baris di mana nilai dalam kolom pertama lebih besar dari 50 yang dimasukkan ke dalam file output.