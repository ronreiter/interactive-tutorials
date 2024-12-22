Python adalah bahasa yang sangat sederhana, dan memiliki sintaks yang sangat langsung. Bahasa ini mendorong pemrogram untuk menulis program tanpa kode tambahan yang berlebihan. Instruksi paling sederhana dalam Python adalah instruksi "print" - yang langsung mencetak satu baris (dan juga menyertakan baris baru, tidak seperti dalam C).

Ada dua versi utama Python, yakni Python 2 dan Python 3. Python 2 dan 3 cukup berbeda. Tutorial ini menggunakan Python 3, karena lebih semantik dan mendukung fitur-fitur baru.

Sebagai contoh, salah satu perbedaan antara Python 2 dan 3 adalah pernyataan `print`. Dalam Python 2, pernyataan "print" bukanlah sebuah fungsi, sehingga dipanggil tanpa tanda kurung. Namun, dalam Python 3, ini adalah fungsi, dan harus dipanggil dengan tanda kurung.

Untuk mencetak sebuah string dalam Python 3, cukup tulis:

    print("This line will be printed.")

### Indentation

Python menggunakan indentasi untuk blok, bukan kurung kurawal. Baik tab maupun spasi didukung, tetapi standar indentasi mewajibkan kode Python standar menggunakan empat spasi. Sebagai contoh:

    x = 1
    if x == 1:
        # diindentasi dengan empat spasi
        print("x is 1.")

Exercise
--------

Gunakan fungsi "print" untuk mencetak baris "Hello, World!".