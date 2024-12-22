Anda boleh mencipta fungsi separa dalam python dengan menggunakan fungsi separa dari pustaka functools.

Fungsi separa membolehkan seseorang untuk memperoleh fungsi dengan x parameter kepada fungsi dengan parameter yang lebih sedikit dan nilai tetap ditetapkan untuk fungsi yang lebih terhad.

Import yang diperlukan:

    from functools import partial

Kod ini akan mengembalikan 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Nota penting: nilai lalai akan mula menggantikan pembolehubah dari kiri. 2 akan menggantikan x.
y akan sama dengan 4 apabila dbl(4) dipanggil. Ia tidak membuat perbezaan dalam contoh ini, tetapi ia berbeza dalam contoh di bawah.

Latihan
--------
Edit fungsi yang disediakan dengan memanggil partial() dan menggantikan tiga pembolehubah pertama dalam func(). Kemudian cetak dengan fungsi separa baharu menggunakan hanya satu pembolehubah input supaya outputnya sama dengan 60.