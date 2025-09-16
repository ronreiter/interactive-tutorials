A Closure ialah objek fungsi yang mengingati nilai dalam lingkungan skop walaupun ia tidak ada dalam memori. Mari kita lihat langkah demi langkah.

Pertama sekali, **Fungsi Bersarang** ialah fungsi yang ditakrifkan di dalam fungsi lain. Sangat penting untuk diperhatikan bahawa fungsi bersarang boleh mengakses pembolehubah dalam skop yang merangkum. Walau bagaimanapun, sekurang-kurangnya dalam Python, ia hanya boleh dibaca sahaja. Namun, seseorang boleh menggunakan kata kunci "nonlocal" secara eksplisit dengan pembolehubah ini untuk mengubahnya.

Contohnya:

    def transmit_to_space(message):
        "Ini fungsi yang merangkum"
        def data_transmitter():
            "Fungsi bersarang"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Mesej ujian"))

Ini berfungsi dengan baik kerana fungsi 'data_transmitter' boleh mengakses 'message'. Untuk menunjukkan penggunaan kata kunci "nonlocal", pertimbangkan ini:

    def print_msg(number):
        def printer():
            "Di sini kita menggunakan kata kunci nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Tanpa kata kunci nonlocal, output akan menjadi "3 9", tetapi dengan penggunaannya, kita mendapat "3 3", iaitu nilai pembolehubah "number" diubah.

Sekarang, bagaimana kalau kita kembalikan objek fungsi daripada memanggil fungsi bersarang di dalamnya. (Ingat bahawa walaupun fungsi adalah objek. (Ini Python.))

    def transmit_to_space(message):
        "Ini fungsi yang merangkum"
        def data_transmitter():
            "Fungsi bersarang"
            print(message)
        return data_transmitter

Dan kita panggil fungsinya seperti berikut:

      def transmit_to_space(message):
        "Ini fungsi yang merangkum"
        def data_transmitter():
            "Fungsi bersarang"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Bakar Matahari!")
  	  fun2()

Walaupun pelaksanaan "transmit_to_space()" telah selesai, mesej itu tetap dipelihara. Teknik ini di mana data dilampirkan kepada beberapa kod walaupun selepas akhir fungsi asal tersebut dipanggil sebagai closures dalam Python.

KELEBIHAN: Closures boleh mengelakkan penggunaan pembolehubah global dan menyediakan beberapa bentuk penyembunyian data. (Contohnya, apabila terdapat beberapa kaedah dalam kelas, gunakan closures sebaliknya).

Juga, Penghias dalam Python menggunakan closures secara meluas.

Exercise
--------

Bina loop bersarang dan satu closure python untuk membuat fungsi untuk mendapatkan fungsi pendaraban berganda menggunakan closures. Maksudnya dengan menggunakan closures, seseorang boleh membuat fungsi untuk mencipta fungsi multiply_with_5() atau multiply_with_4() menggunakan closures.