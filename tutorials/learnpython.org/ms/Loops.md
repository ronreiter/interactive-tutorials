Terdapat dua jenis gelung dalam Python, for dan while.

### Gelung "for"

Gelung for mengulang melalui urutan yang diberikan. Berikut adalah satu contoh:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Gelung for boleh mengulang melalui urutan nombor menggunakan fungsi "range" dan "xrange". Perbezaan antara range dan xrange adalah fungsi range mengembalikan senarai baru dengan nombor dalam julat yang ditentukan, manakala xrange mengembalikan iterator, yang lebih cekap. (Python 3 menggunakan fungsi range, yang bertindak seperti xrange). Perhatikan bahawa fungsi range adalah berdasarkan sifar.

    # Mencetak nombor 0,1,2,3,4
    for x in range(5):
        print(x)

    # Mencetak 3,4,5
    for x in range(3, 6):
        print(x)

    # Mencetak 3,5,7
    for x in range(3, 8, 2):
        print(x)

### Gelung "while"

Gelung while mengulang selagi suatu syarat boolean tertentu dipenuhi. Contohnya:

    # Mencetak 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Ini sama dengan count = count + 1

### Pernyataan "break" dan "continue"

**break** digunakan untuk keluar daripada gelung for atau while, manakala **continue** digunakan untuk melangkau blok semasa, dan kembali kepada pernyataan "for" atau "while". Beberapa contoh:

    # Mencetak 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Mencetak hanya nombor ganjil - 1,3,5,7,9
    for x in range(10):
        # Semak jika x adalah genap
        if x % 2 == 0:
            continue
        print(x)

### Bolehkah kita menggunakan klausa "else" untuk gelung?

Tidak seperti bahasa seperti C, CPP.. kita boleh menggunakan **else** untuk gelung. Apabila syarat gelung pernyataan "for" atau "while" gagal, maka bahagian kod dalam "else" akan dijalankan. Jika pernyataan **break** dilaksanakan dalam gelung for, bahagian "else" akan dilangkau.
Perhatikan bahawa bahagian "else" dijalankan walaupun terdapat pernyataan **continue**.

Berikut adalah beberapa contoh:

    # Mencetak 0,1,2,3,4 dan kemudian mencetak "nilai count mencapai 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("nilai count mencapai %d" %(count))

    # Mencetak 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("ini tidak dicetak kerana gelung for ditamatkan kerana break tetapi bukan kerana gagal syarat")


Latihan
--------

Gelung melalui dan cetak semua nombor genap dari senarai nombor dalam urutan yang sama seperti diterima. Jangan cetak sebarang nombor yang muncul selepas 237 dalam urutan.