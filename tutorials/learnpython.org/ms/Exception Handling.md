Apabila anda membuat pengaturcaraan, kesilapan berlaku. Ia hanyalah satu realiti kehidupan. Mungkin pengguna memberikan input yang salah. Mungkin sumber rangkaian tidak tersedia. Mungkin program kehabisan memori. Atau mungkin juga pengaturcara membuat kesilapan!

Penyelesaian Python kepada kesilapan adalah pengecualian. Anda mungkin pernah melihat pengecualian sebelum ini.

    print(a)
    
    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Oops! Terlupa untuk memberikan nilai kepada pembolehubah 'a'.

Tetapi kadang-kadang anda tidak mahu pengecualian untuk menghentikan program sepenuhnya. Anda mungkin ingin melakukan sesuatu yang istimewa apabila pengecualian berlaku. Ini dilakukan dalam blok *try/except*.

Berikut adalah contoh asas: Katakan anda mengulang melalui senarai. Anda perlu mengulang melalui 20 nombor, tetapi senarai itu dibuat daripada input pengguna, dan mungkin tidak mempunyai 20 nombor di dalamnya. Selepas anda mencapai penghujung senarai, anda hanya mahu nombor yang selebihnya ditafsirkan sebagai 0. Inilah cara anda melakukannya:

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

Nah, itu tidaklah terlalu sukar! Anda boleh melakukannya dengan sebarang pengecualian. Untuk maklumat lanjut tentang pengendalian pengecualian, lihat sahaja pada 
[Dokumen Python](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

Tangani semua pengecualian! Fikirkan kembali pelajaran sebelum ini untuk mengembalikan nama belakang pelakon.