Biasanya kita mendefinisikan fungsi menggunakan kata kunci def di dalam kode dan memanggilnya apabila kita perlu menggunakannya.

    def sum(a, b):
        return a + b

    a = 1
    b = 2
    c = sum(a, b)
    print(c)

Sekarang, daripada mendefinisikan fungsi di suatu tempat dan memanggilnya, kita boleh menggunakan fungsi lambda dalam Python, iaitu fungsi sebaris yang didefinisikan di tempat yang sama kita menggunakannya. Jadi kita tidak perlu mengisytiharkan fungsi di tempat lain dan kembali ke kod hanya untuk penggunaan sekali.

Mereka tidak memerlukan nama, jadi mereka juga dipanggil fungsi tanpa nama. Kita mendefinisikan fungsi lambda menggunakan kata kunci lambda.

    your_function_name = lambda inputs : output

Jadi contoh sum di atas menggunakan fungsi lambda adalah,

    a = 1
    b = 2
    sum = lambda x, y : x + y
    c = sum(a, b)
    print(c)

Di sini kita memberikan fungsi lambda kepada pembolehubah **sum**, dan apabila memberikan argumen iaitu a dan b, ia berfungsi seperti fungsi biasa.

Exercise
--------
Tulis program menggunakan fungsi lambda untuk memeriksa jika nombor dalam senarai yang diberikan adalah ganjil. Cetak "True" jika nombor itu ganjil atau "False" jika tidak untuk setiap elemen.