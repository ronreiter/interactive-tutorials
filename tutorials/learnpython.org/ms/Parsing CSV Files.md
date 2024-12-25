### Apakah CSV?
CSV bermaksud 'Comma Separated Values'. Format CSV adalah format import dan eksport yang paling biasa untuk pangkalan data dan lembaran kerja. Fail CSV adalah fail teks ringkas yang mengandungi senarai data. Ia kebanyakannya menggunakan aksara koma (,) untuk memisahkan data, tetapi kadangkala menggunakan aksara lain seperti titik koma atau tab.

Contoh data CSV:

...
nama lajur 1,nama lajur 2,nama lajur 3
data baris pertama 1,data baris pertama 2,data baris pertama 3
data baris kedua 1,data baris kedua 2,data baris kedua 3
...

### Modul CSV dalam Python
Walaupun Python mempunyai fungsi terbina dalam open() untuk bekerja dengan fail CSV atau mana-mana fail teks biasa, terdapat modul csv khusus yang melaksanakan kelas untuk membaca dan menulis data dalam format csv yang menjadikan kerja dengan fail CSV lebih mudah.

### Fungsi penting modul CSV

    csv.field_size_limit – mengembalikan saiz medan maksimum
    csv.get_dialect – mendapatkan dialek yang berkaitan dengan nama
    csv.list_dialects – memaparkan semua dialek yang didaftarkan
    csv.reader – membaca data dari fail csv
    csv.register_dialect - mengaitkan dialek dengan nama
    csv.writer – menulis data ke fail csv
    csv.unregister_dialect - memadamkan dialek yang dikaitkan dengan nama dalam daftar dialek
    csv.QUOTE_ALL - Mengutip semuanya, tanpa mengira jenis.
    csv.QUOTE_MINIMAL - Mengutip medan dengan aksara khas
    csv.QUOTE_NONNUMERIC - Mengutip semua medan yang bukan nilai nombor
    csv.QUOTE_NONE – Jangan mengutip apa-apa dalam output

### Bagaimana anda menggunakan modul csv?
mula-mula import modul csv dalam program python anda.

    import csv

Fungsi penulis dan pembaca membolehkan anda mengedit, mengubah suai, dan mengubah data dalam fail CSV.

Bagaimana Membaca Fail CSV :-
 
Untuk membaca data dari fail CSV, kita gunakan fungsi pembaca untuk menghasilkan objek pembaca.

Sebagai contoh:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Di sini, kita mula-mula membuka fail CSV dalam mod BACA dan menamakan objek fail sebagai csvfile. Kita menggunakan pengurus konteks untuk membuka fail supaya kita tidak perlu risau tentang menutup fail. Fungsi csv.reader mengambil objek fail sebagai masukan dan mengembalikan objek yang boleh diulang. Kita menyimpan objek berulang sebagai csvreader.

Seperti yang kita tahu, csvreader adalah objek berulang dan oleh itu kita boleh mengulanginya menggunakan gelung for:

contoh 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Kod di atas akan mencetak semua baris yang kita baca dari fail csv. Sila ambil perhatian bahawa kita membuka fail dengan mod 'r' apabila ia sudah wujud.

Apa selanjutnya?

csvreader adalah objek berulang. Oleh itu, kaedah .next() mengembalikan baris semasa dan melanjutkan iterator ke baris seterusnya.

contoh 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

Dalam contoh 1, anda akan melihat semua baris dicetak di konsol bersama dengan tajuk. Dalam contoh 2, kaedah .next() membaca tajuk dalam objek medan dan melanjutkan iterator ke baris seterusnya dan oleh itu semua baris dicetak kecuali tajuk.

Bagaimana menulis dalam Fail CSV-

Untuk menulis dalam fail csv, modul csv menyediakan fungsi csv.writer. Untuk menulis data, kita mula-mula membuka fail CSV dalam mod TULIS('w'). Objek fail dinamakan sebagai csvfile. Kita menyimpan objek csv.writer sebagai csvwriter.

Contoh:
    #mengisytiharkan tajuk
    fields = ['column1','column2', 'column3']

    #mengisytiharkan baris
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

Dalam contoh di atas, fungsi writerow() akan menulis satu baris yang merupakan objek medan manakala kaedah writerows() akan menulis keseluruhan senarai baris yang ditakrifkan di atas ke dalam fail csv.

Sekarang marilah kita melangkah lebih jauh. Membaca kandungan satu fail csv dan menulis ke dalam fail csv yang lain.

Contoh:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # menyimpan tajuk dan melanjutkan penunjuk pembaca
            csvwriter.writerow(header) #menulis tajuk ke dalam fail baru
            for row in reader:
                csvwriter.writerow(row)

Di sini, kita membuka 'newfilename.csv' dalam mod 'W' sebagai f2 dan membuka 'mycsvfile.csv' dalam mod 'r' sebagai f1. Kita menggunakan fungsi .next(), .reader(), .writer(), .writerow() dari modul csv. Dengan menggunakan .next(), kita melanjutkan penunjuk pembaca dan menggunakan csvwriter.writerow() kita menulis baris masuk satu demi satu.

### Kelas DictReader dan DictWriter dalam Python

Berikut adalah dua kelas penting dalam python untuk membaca dan menulis fail csv.

kelas csv.Dictwriter
kelas csv.DictReader

DictReader dan DictWriter adalah kelas yang tersedia dalam Python untuk membaca dan menulis ke CSV. Walaupun mereka serupa dengan fungsi pembaca dan penulis, kelas ini menggunakan objek kamus untuk membaca dan menulis ke fail csv.

DictReader:

Ia mencipta objek yang memetakan maklumat yang dibaca ke dalam kamus yang kuncinya diberikan oleh parameter fieldnames. Parameter ini adalah pilihan, tetapi apabila tidak dinyatakan dalam fail, data baris pertama menjadi kunci kamus.

Contoh csv(info.csv)

.....
firstname, lastname
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

Kelas csv.DictWriter berfungsi seperti penulis biasa tetapi memetakan kamus Python ke dalam baris CSV. Parameter fieldnames adalah turutan kunci yang mengenal pasti susunan nilai dalam kamus yang diteruskan ke kaedah writerow() ditulis ke fail CSV. Kelas ditakrifkan sebagai csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Contoh:

        import csv
        f = open('info.csv', 'w')
        dengan f:
            
            fnames = ['firstname', 'lastname']
            penulis = csv.DictWriter(f, fieldnames=fnames)    

            penulis.writeheader()
            penulis.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            penulis.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            penulis.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Exercise
--------

Dalam latihan ini, anda akan bekerja dengan data CSV. Tugas anda adalah untuk mencipta satu program Python yang membaca data dari satu fail CSV dan menulisnya ke dalam fail CSV yang lain, memastikan bahawa hanya baris di mana nilai di lajur pertama lebih besar daripada 50 disertakan dalam fail output.