Mengambil input dan menunjukkan output dengan cara yang diperlukan memainkan peranan penting dalam pengekodan interaktif. Jadi mari kita fokus pada input dan output pelbagai jenis data.

###raw_input()
ini digunakan untuk mengambil input selagi ia mencapai akhir baris. Perhatikan bahawa tidak sepatutnya ada ruang. Mengambil input tamat dengan aksara baris baru dan jika terdapat ruang dalam baris input ia akan menyebabkan ralat

    # Cetak input yang diterima dari stdin
    astring=raw_input()# berikan hello sebagai input
    print raw_input()

selepas mengambil input kita boleh menukarnya kepada jenis data yang diperlukan menggunakan fungsi seperti int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
ini digunakan terutamanya untuk memasukkan integer. Kelebihan input() berbanding raw_input() boleh dijelaskan dengan contoh berikut

    #berikan 2*2 sebagai input
    a=input()
    b=raw_input() #perhatikan bahawa int(raw_input()) menyebabkan ralat
    print a #cetak 4
    print b #cetak 2*2

###bagaimana untuk mengambil dua atau lebih jenis data sebagai input dari satu baris yang dipisahkan oleh ruang?
Di sini kita menggunakan fungsi split() dan map()

    #beri dua integer dalam baris pertama dan lebih daripada dua integer dalam baris ketiga
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # cetak dua integer pertama dari baris pertama dan jumlah integer dari baris kedua

###Memformat pengeluaran
Anda mungkin telah melihat bahawa pernyataan print secara automatik memasukkan baris baru. Penggunaan koma seperti dalam kod di atas mencetak nilai dalam satu baris yang dipisahkan oleh ruang.
Modul sys menyediakan pelbagai fungsi untuk memformat output tetapi di sini kita belajar cara menggunakan pengetahuan asas memformat untuk output dengan cara yang kita perlukan. Mari kita lihat beberapa contoh untuk belajar memformat output

    a = 5
    b = 0.63
    c = "hello"
    print "a ialah : %d, b ialah %0.4f, c ialah %s" % (a,b,c)

Output mesti menjelaskan diri sendiri.

Latihan
--------

Tulis program yang meminta pengguna untuk memasukkan nama, umur, dan negara mereka. Program ini kemudian harus mencetak mesej yang merangkumi maklumat ini dalam satu ayat. Program ini harus merangkumi:

1. Mengambil nama sebagai input menggunakan `raw_input()`.
2. Mengambil usia sebagai input menggunakan `input()`, dan menukarnya kepada integer.
3. Mengambil nama negara sebagai input menggunakan `raw_input()`.
4. Memformat output untuk memaparkan ayat yang merangkumi nama, umur, dan negara.

Program ini harus menunjukkan pengendalian input dan pemformatan rentetan dalam Python.