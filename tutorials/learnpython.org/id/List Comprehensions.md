List Comprehensions adalah alat yang sangat kuat, yang menciptakan daftar baru berdasarkan daftar lain, dalam satu baris yang mudah dibaca.

Sebagai contoh, katakanlah kita perlu membuat daftar bilangan bulat yang menentukan panjang setiap kata dalam sebuah kalimat tertentu, tetapi hanya jika kata tersebut bukan kata "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Menggunakan list comprehension, kita bisa menyederhanakan proses ini menjadi notasi berikut:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

Menggunakan list comprehension, buatlah daftar baru bernama "newlist" dari daftar "numbers", yang hanya berisi angka-angka positif dari daftar tersebut, sebagai bilangan bulat.