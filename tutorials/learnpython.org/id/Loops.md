Ada dua tipe loop di Python, yaitu for dan while.

### The "for" loop

Loop for mengiterasi pada sebuah urutan yang diberikan. Berikut adalah contohnya:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Loop for dapat mengiterasi pada serangkaian angka menggunakan fungsi "range" dan "xrange". Perbedaan antara range dan xrange adalah bahwa fungsi range mengembalikan daftar baru dengan angka dalam rentang yang ditentukan tersebut, sedangkan xrange mengembalikan sebuah iterator, yang lebih efisien. (Python 3 menggunakan fungsi range, yang bertindak seperti xrange). Perhatikan bahwa fungsi range berbasis nol.

    # Mencetak angka 0,1,2,3,4
    for x in range(5):
        print(x)

    # Mencetak 3,4,5
    for x in range(3, 6):
        print(x)

    # Mencetak 3,5,7
    for x in range(3, 8, 2):
        print(x)

### "while" loops

Loop while mengulang selama sebuah kondisi boolean tertentu terpenuhi. Contohnya:

    # Mencetak 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Ini sama dengan count = count + 1

### Pernyataan "break" dan "continue"

**break** digunakan untuk keluar dari loop for atau loop while, sedangkan **continue** digunakan untuk melewati blok saat ini, dan kembali ke pernyataan "for" atau "while". Beberapa contohnya:

    # Mencetak 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Mencetak hanya bilangan ganjil - 1,3,5,7,9
    for x in range(10):
        # Cek apakah x genap
        if x % 2 == 0:
            continue
        print(x)

### Bisakah kita menggunakan klausa "else" untuk loop?

Berbeda dengan bahasa seperti C,CPP.. kita bisa menggunakan **else** untuk loop. Ketika kondisi loop dari pernyataan "for" atau "while" gagal maka bagian kode di "else" akan dieksekusi. Jika sebuah pernyataan **break** dijalankan di dalam loop for maka bagian "else" akan dilewati.
Perhatikan bahwa bagian "else" di eksekusi bahkan jika ada pernyataan **continue**.

Berikut beberapa contohnya:

    # Mencetak 0,1,2,3,4 dan kemudian mencetak "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Mencetak 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("ini tidak dicetak karena loop for dihentikan karena break tetapi bukan karena kegagalan kondisi")


Exercise
--------

Loop melalui dan cetak semua bilangan genap dari daftar angka dalam urutan yang sama saat diterima. Jangan mencetak angka apapun yang muncul setelah 237 dalam urutan.