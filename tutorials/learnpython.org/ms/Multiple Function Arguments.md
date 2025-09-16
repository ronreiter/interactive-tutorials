Setiap fungsi dalam Python menerima bilangan argumen yang telah ditetapkan, jika diisytiharkan secara normal, seperti ini:

Adalah mungkin untuk mengisytiharkan fungsi yang menerima bilangan argumen yang berubah-ubah, menggunakan sintaks berikut:

Pembolehubah "therest" adalah senarai pembolehubah, yang menerima semua argumen yang diberikan kepada fungsi "foo" selepas 3 argumen pertama. Jadi memanggil `foo(1, 2, 3, 4, 5)` akan mencetak:

Adalah juga mungkin untuk menghantar argumen fungsi dengan kata kunci, supaya urutan argumen tidak penting, menggunakan sintaks berikut. Kod berikut menghasilkan output berikut:

Fungsi "bar" menerima 3 argumen. Jika argumen "action" tambahan diterima, dan ia mengarahkan untuk menjumlahkan nombor-nombor tersebut, maka jumlahnya akan dicetak. Sebagai alternatif, fungsi ini juga tahu ia mesti mengembalikan argumen pertama, jika nilai parameter "number", yang dihantar ke fungsi, adalah sama dengan "first".

Exercise
--------

Lengkapkan fungsi `foo` dan `bar` supaya mereka boleh menerima sejumlah argumen yang berubah-ubah (3 atau lebih). Fungsi `foo` mesti mengembalikan jumlah argumen tambahan yang diterima. Fungsi `bar` mesti mengembalikan `True` jika argumen dengan kata kunci `magicnumber` bernilai 7, dan `False` jika tidak.