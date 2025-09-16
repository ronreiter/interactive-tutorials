Mengambil Input dan menampilkan Output dengan cara yang diinginkan memainkan peran penting dalam pemrograman interaktif. Jadi mari kita fokus pada input dan output dari berbagai tipe data.

###raw_input()
Ini digunakan untuk mengambil input selama mencapai akhir baris. Perlu diperhatikan bahwa tidak boleh ada spasi. Mengambil input berakhir dengan karakter newline dan jika ada spasi dalam baris input, hal itu akan mengakibatkan kesalahan.

    # Mencetak input yang diterima dari stdin
    astring = raw_input() # berikan hello sebagai input
    print raw_input()

Setelah mengambil input, kita bisa mengonversinya ke tipe data yang kita inginkan menggunakan fungsi seperti int(), float(), str().

    num = int(raw_input())
    print num
    decimalnum = raw_input()
    decimalnum = float(raw_input()
    print decimalnum

###input()
Ini terutama digunakan untuk memasukkan bilangan bulat. Keuntungan input() dibandingkan raw_input() dapat dijelaskan dengan contoh berikut:

    #berikan 2*2 sebagai input
    a = input()
    b = raw_input() #perhatikan bahwa int(raw_input()) mengakibatkan kesalahan
    print a #mencetak 4
    print b #mencetak 2*2

###bagaimana cara mengambil dua atau lebih tipe data sebagai input dari satu baris yang dipisahkan oleh spasi?
Di sini kita menggunakan fungsi split() dan map().

    #berikan dua bilangan bulat di baris pertama dan lebih dari dua bilangan bulat di baris ketiga
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # mencetak dua bilangan bulat pertama dari baris pertama dan jumlah dari bilangan bulat dari baris kedua

###Pemformatan Output
Anda mungkin sudah memperhatikan bahwa pernyataan cetak otomatis menyisipkan baris baru. Penggunaan koma seperti dalam kode di atas mencetak nilai dalam satu baris yang dipisahkan oleh spasi. Modul sys menyediakan berbagai fungsi untuk pemformatan output, tetapi di sini kita belajar bagaimana menggunakan pengetahuan dasar tentang pemformatan untuk menghasilkan keluaran dengan cara yang kita inginkan. Mari kita lihat beberapa contoh untuk mempelajari pemformatan output.

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f, c is %s" % (a, b, c)

Output harus mudah dipahami.

Exercise
--------

Tulislah program yang meminta pengguna untuk memasukkan nama, usia, dan negara mereka. Program kemudian harus mencetak pesan yang menyertakan informasi ini dalam sebuah kalimat. Program ini harus mencakup:

1. Mengambil nama sebagai input menggunakan `raw_input()`.
2. Mengambil usia sebagai input menggunakan `input()`, dan mengonversinya ke bilangan bulat.
3. Mengambil nama negara sebagai input menggunakan `raw_input()`.
4. Memformat output untuk menampilkan kalimat yang menyertakan nama, usia, dan negara.

Program harus mendemonstrasikan penanganan input dan pemformatan string dalam Python.