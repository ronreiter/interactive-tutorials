Anda dapat membuat fungsi parsial di python dengan menggunakan fungsi partial dari pustaka functools.

Fungsi parsial memungkinkan seseorang untuk menurunkan fungsi dengan parameter x menjadi fungsi dengan parameter yang lebih sedikit dan nilai tetap yang telah ditentukan untuk fungsi yang lebih terbatas.

Import yang diperlukan:

    from functools import partial

Kode ini akan mengembalikan 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # membuat fungsi baru yang mengalikan dengan 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Catatan penting: nilai default akan mulai menggantikan variabel dari kiri. Angka 2 akan menggantikan x. y akan sama dengan 4 ketika dbl(4) dipanggil. Ini tidak membuat perbedaan dalam contoh ini, tetapi berpengaruh dalam contoh di bawah.

Exercise
--------
Edit fungsi yang disediakan dengan memanggil partial() dan menggantikan tiga variabel pertama dalam func(). Kemudian cetak dengan fungsi parsial baru menggunakan hanya satu variabel input sehingga outputnya sama dengan 60.