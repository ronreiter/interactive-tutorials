Regular Expressions (terkadang disingkat menjadi regexp, regex, atau re) adalah alat untuk mencocokkan pola dalam teks. Dalam Python, kita memiliki modul re. Aplikasi untuk ekspresi reguler tersebar luas, tetapi mereka cukup kompleks, jadi ketika mempertimbangkan untuk menggunakan regex untuk tugas tertentu, pikirkan tentang alternatif lain dan datang ke regex sebagai upaya terakhir.

Contoh regex adalah `r"^(From|To|Cc).*?python-list@python.org"`. Sekarang untuk penjelasannya:
tanda caret `^` mencocokkan teks di awal baris. Kelompok berikutnya, bagian dengan `(From|To|Cc)` berarti bahwa baris harus dimulai dengan salah satu kata yang dipisahkan oleh pipa `|`. Itu disebut operator OR, dan regex akan cocok jika baris dimulai dengan salah satu kata dalam kelompok tersebut. `.*?` berarti mencocokkan secara tidak serakah dengan jumlah karakter apa pun, kecuali karakter newline `\n`. Bagian tidak serakah berarti mencocokkan sedikit pengulangan mungkin. Karakter `.` berarti karakter apa pun yang bukan newline, `*` berarti mengulangi 0 atau lebih kali, dan karakter `?` membuatnya tidak serakah.

Jadi, baris berikut akan dicocokkan oleh regex tersebut:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Referensi lengkap untuk sintaks re tersedia di [dokumentasi python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Sebagai contoh regex untuk mencocokkan email yang "tepat" (seperti yang ada dalam latihan), lihat [ini](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)