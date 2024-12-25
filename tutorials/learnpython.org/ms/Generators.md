Generators sangat mudah untuk dilaksanakan, tetapi agak sukar untuk difahami.

Generator digunakan untuk mencipta iterator, tetapi dengan pendekatan yang berbeza. Generator adalah fungsi yang mudah yang mengembalikan satu set item yang boleh diiterasi, satu demi satu, dengan cara yang istimewa.

Apabila suatu pengulangan atas satu set item dimulakan menggunakan pernyataan for, generator akan dijalankan. Setelah kod fungsi generator mencapai pernyataan "yield", generator akan mengembalikan pelaksanaannya ke gelung for, mengembalikan nilai baru dari set tersebut. Fungsi generator boleh menghasilkan sebanyak mana nilai yang diinginkan (mungkin tak hingga), menghasilkan setiap satu pada masanya.

Berikut adalah contoh mudah tentang fungsi generator yang mengembalikan 7 nombor bulat rawak:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Fungsi ini menentukan cara untuk menggenerasi nombor rawak sendiri, dan melaksanakan pernyataan yield satu demi satu, berhenti sementara untuk mengembalikan pelaksanaan ke gelung for utama.

Exercise
--------

Tulis satu fungsi generator yang mengembalikan siri Fibonacci. Ia dikira menggunakan formula berikut: Dua nombor pertama dalam siri ini sentiasa sama dengan 1, dan setiap nombor yang dikembalikan seterusnya adalah jumlah dari dua nombor terakhir.
Petua: Bolehkah anda menggunakan hanya dua pembolehubah dalam fungsi generator? Ingat bahawa penugasan boleh dilakukan serentak. Kod

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

akan menukar nilai a dan b serentak.