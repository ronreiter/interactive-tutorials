# Normally we define a function using the def keyword somewhere in the code and call it whenever we need to use it.

Biasanya kita mendefinisikan fungsi menggunakan kata kunci def di suatu tempat dalam kode dan memanggilnya kapan pun kita perlu menggunakannya.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

# Now instead of defining the function somewhere and calling it, we can use python's lambda functions, which are inline functions defined at the same place we use it. So we don't need to declare a function somewhere and revisit the code just for a single time use.

Sekarang, alih-alih mendefinisikan fungsi di suatu tempat dan memanggilnya, kita dapat menggunakan fungsi lambda Python, yang merupakan fungsi inline yang didefinisikan di tempat yang sama kita menggunakannya. Jadi kita tidak perlu mendeklarasikan fungsi di suatu tempat dan meninjau kembali kodenya hanya untuk satu kali penggunaan.

# They don't need to have a name, so they also called anonymous functions. We define a lambda function using the keyword lambda.

Mereka tidak perlu memiliki nama, jadi mereka juga disebut fungsi anonim. Kita mendefinisikan fungsi lambda menggunakan kata kunci lambda.

    your_function_name = lambda inputs : output

# So the above sum example using lambda function would be,

Jadi contoh penjumlahan di atas menggunakan fungsi lambda akan menjadi,

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Di sini kita menetapkan fungsi lambda ke variabel **sum**, dan setelah memberikan argumen yaitu a dan b, fungsi ini bekerja seperti fungsi normal.

Exercise
--------
Tulis program menggunakan fungsi lambda untuk memeriksa apakah sebuah angka dalam daftar yang diberikan adalah ganjil. Cetak "True" jika angka tersebut ganjil atau "False" jika tidak untuk setiap elemen.