Setiap fungsi dalam Python menerima sejumlah argumen yang telah ditentukan, jika dideklarasikan secara normal, seperti ini:

    def myfunction(first, second, third):
        # lakukan sesuatu dengan 3 variabel
        ...

Adalah mungkin untuk mendeklarasikan fungsi yang menerima sejumlah argumen variabel, menggunakan sintaks berikut:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

Variabel "therest" adalah daftar variabel, yang menerima semua argumen yang diberikan kepada fungsi "foo" setelah 3 argumen pertama. Jadi memanggil `foo(1, 2, 3, 4, 5)` akan mencetak:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

Juga memungkinkan untuk mengirim argumen fungsi dengan kata kunci, sehingga urutan argumen tidak penting, menggunakan sintaks berikut. Kode berikut menghasilkan output berikut: 
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))



Fungsi "bar" menerima 3 argumen. Jika argumen tambahan "action" diterima, dan itu menginstruksikan untuk menjumlahkan angka, maka jumlah tersebut dicetak. Sebagai alternatif, fungsi ini juga mengetahui bahwa ia harus mengembalikan argumen pertama, jika nilai parameter "number", yang diteruskan ke fungsi, sama dengan "first".

Exercise
--------

Lengkapi fungsi `foo` dan `bar` sehingga mereka dapat menerima sejumlah argumen variabel (3 atau lebih)
Fungsi `foo` harus mengembalikan jumlah argumen tambahan yang diterima.
Fungsi `bar` harus mengembalikan `True` jika argumen dengan kata kunci `magicnumber` bernilai 7, dan `False` jika tidak.