Generators sangat mudah untuk diimplementasikan, tetapi sedikit sulit untuk dipahami.

Generator digunakan untuk membuat iterator, tetapi dengan pendekatan yang berbeda. Generator adalah fungsi sederhana yang mengembalikan sekumpulan item yang dapat diiterasi, satu per satu, dengan cara yang khusus.

Saat iterasi atas sekumpulan item dimulai menggunakan pernyataan for, generator dijalankan. Setelah kode fungsi generator mencapai pernyataan "yield", generator menghentikan eksekusinya kembali ke loop for, mengembalikan nilai baru dari set tersebut. Fungsi generator dapat menghasilkan sebanyak mungkin nilai (mungkin tak terbatas) sesuai yang diinginkan, dengan memberikan satu setiap gilirannya.

Berikut adalah contoh sederhana dari fungsi generator yang mengembalikan 7 bilangan bulat acak:

      import random
      
      def lottery():
          # mengembalikan 6 angka antara 1 dan 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # mengembalikan angka ke-7 antara 1 dan 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("Dan angka berikutnya adalah... %d!" %(random_number))

Fungsi ini memutuskan sendiri bagaimana cara menghasilkan angka acak, dan menjalankan pernyataan yield satu per satu, berhenti di antara untuk mengembalikan eksekusi ke loop for utama.

Exercise
--------

Tulis fungsi generator yang mengembalikan deret Fibonacci. Mereka dihitung menggunakan formula berikut: Dua angka pertama dalam deret selalu sama dengan 1, dan setiap angka berikutnya yang dikembalikan adalah jumlah dari dua angka terakhir.
Petunjuk: Bisakah Anda menggunakan hanya dua variabel dalam fungsi generator? Ingatlah bahwa penugasan dapat dilakukan secara bersamaan. Kode

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

akan secara bersamaan menukar nilai a dan b.