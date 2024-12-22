# Regular Expressions

Regular Expressions (kadang-kadang disingkat kepada regexp, regex, atau re) adalah alat untuk memadankan corak dalam teks. Dalam Python, kita mempunyai modul re. Aplikasi untuk ungkapan biasa ini sangat meluas, tetapi mereka agak kompleks, jadi apabila bercadang menggunakan regex untuk sesuatu tugasan, fikirkan tentang alternatif, dan gunakan regex sebagai pilihan terakhir.

Contoh regex adalah `r"^(From|To|Cc).*?python-list@python.org"` Sekarang untuk penjelasan:
tanda kare (^) akan memadankan teks pada permulaan baris. Kumpulan berikut, bahagian dengan `(From|To|Cc)` bermaksud bahawa baris tersebut mesti bermula dengan salah satu daripada perkataan yang dipisahkan oleh paip `|`. Itu dipanggil operator OR, dan regex akan sepadan jika baris bermula dengan mana-mana perkataan dalam kumpulan itu. `.*?` bermaksud untuk memadankan sebarang bilangan aksara secara tidak tamak, kecuali aksara baris baharu `\n`. Bahagian tidak tamak bermaksud untuk memadankan seberapa sedikit ulangan yang mungkin. Aksara `.` bermaksud sebarang aksara bukan baris baharu, `*` bermaksud mengulang 0 atau lebih kali, dan aksara `?` menjadikannya tidak tamak.

Jadi, baris berikut akan dipadankan oleh regex tersebut:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Rujukan lengkap untuk sintaks re tersedia di [python
docs](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax).

Sebagai contoh regex pemadanan email yang "sepatutnya" (seperti yang dalam
latihan), lihat [ini](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)

Exercise--------