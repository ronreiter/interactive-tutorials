When programming, errors happen. It's just a fact of life. Mungkin pengguna memberikan input yang buruk. Mungkin sumber daya jaringan tidak tersedia. Mungkin program kehabisan memori. Atau mungkin programmer bahkan melakukan kesalahan!

Solusi Python terhadap kesalahan adalah pengecualian. Anda mungkin sudah pernah melihat pengecualian sebelumnya.

    print(a)
    
    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Ups! Lupa untuk menetapkan nilai ke variabel 'a'.

Tetapi terkadang Anda tidak ingin pengecualian sepenuhnya menghentikan program. Anda mungkin ingin melakukan sesuatu yang spesial ketika pengecualian terjadi. Ini dilakukan dalam blok *try/except*.

Ini adalah contoh sederhana: Misalkan Anda sedang mengiterasi atas sebuah daftar. Anda perlu mengiterasi atas 20 angka, tetapi daftar ini dibuat dari input pengguna dan mungkin tidak memiliki 20 angka di dalamnya. Setelah Anda mencapai akhir daftar, Anda hanya ingin sisa angka diinterpretasikan sebagai 0. Berikut adalah cara untuk melakukannya:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Raised when accessing a non-existing index of a list
                do_stuff_with_number(0)
    
    catch_this()

Nah, itu tidak terlalu sulit! Anda bisa melakukan itu dengan pengecualian apapun. Untuk detail lebih lanjut tentang menangani pengecualian, lihat saja [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

Tangani semua pengecualian! Ingat kembali pelajaran sebelumnya untuk mengembalikan nama belakang aktor.