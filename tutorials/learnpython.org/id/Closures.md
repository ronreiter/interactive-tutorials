Sebuah Closure adalah objek fungsi yang mengingat nilai-nilai dalam lingkup yang melingkupinya meskipun nilai-nilai tersebut tidak ada dalam memori. Mari kita mempelajarinya selangkah demi selangkah.

Pertama, sebuah **Fungsi Bersarang** adalah fungsi yang didefinisikan di dalam fungsi lain. Penting untuk dicatat bahwa fungsi bersarang dapat mengakses variabel-variabel di lingkup yang melingkupinya. Namun, setidaknya dalam Python, mereka hanya dapat dibaca saja. Namun, seseorang dapat menggunakan kata kunci "nonlocal" secara eksplisit dengan variabel-variabel ini untuk memodifikasinya.

Sebagai contoh:

    def transmit_to_space(message):
        "Ini adalah fungsi yang melingkupi"
        def data_transmitter():
            "Fungsi bersarang"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

Ini bekerja dengan baik karena fungsi 'data_transmitter' dapat mengakses 'message'. Untuk mendemonstrasikan penggunaan kata kunci "nonlocal", pertimbangkan ini

    def print_msg(number):
        def printer():
            "Di sini kita menggunakan kata kunci nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Tanpa kata kunci nonlocal, keluaran akan menjadi "3 9", namun, dengan penggunaannya, kita mendapatkan "3 3", artinya nilai variabel "number" dimodifikasi.

Sekarang, bagaimana jika kita mengembalikan objek fungsi alih-alih memanggil fungsi bersarang di dalamnya. (Ingatlah bahwa bahkan fungsi adalah objek. (Ini adalah Python.))

    def transmit_to_space(message):
        "Ini adalah fungsi yang melingkupi"
        def data_transmitter():
            "Fungsi bersarang"
            print(message)
        return data_transmitter

Dan kita memanggil fungsi sebagai berikut:

      def transmit_to_space(message):
        "Ini adalah fungsi yang melingkupi"
        def data_transmitter():
            "Fungsi bersarang"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

Meskipun eksekusi "transmit_to_space()" selesai, pesan tetap terjaga. Teknik di mana data melekat pada beberapa kode bahkan setelah fungsi asli lainnya berakhir disebut closure dalam Python.

KEUNTUNGAN : Closures dapat menghindari penggunaan variabel global dan memberikan beberapa bentuk penyembunyian data. (Contohnya, ketika ada beberapa metode dalam sebuah kelas, gunakan closure sebagai gantinya).

Juga, Decorator dalam Python banyak menggunakan closure.

Exercise
--------

Buatlah loop bersarang dan sebuah closure Python untuk membuat fungsi-fungsi untuk mendapatkan beberapa fungsi perkalian menggunakan closure. Artinya menggunakan closure, seseorang dapat membuat fungsi-fungsi untuk menciptakan fungsi multiply_with_5() atau multiply_with_4() menggunakan closure.