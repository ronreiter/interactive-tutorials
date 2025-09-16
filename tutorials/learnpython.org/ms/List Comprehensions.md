List Comprehensions adalah alat yang sangat berkuasa, yang mencipta senarai baru berdasarkan senarai lain, dalam satu baris yang boleh dibaca.

Sebagai contoh, katakan kita perlu mencipta senarai integer yang menentukan panjang setiap perkataan dalam satu ayat tertentu, tetapi hanya jika perkataan tersebut bukan "the".

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = []
    for word in words:
          if word != "the":
              word_lengths.append(len(word))
    print(words)
    print(word_lengths)

Dengan menggunakan list comprehension, kita boleh mempermudahkan proses ini kepada notasi ini:

    sentence = "the quick brown fox jumps over the lazy dog"
    words = sentence.split()
    word_lengths = [len(word) for word in words if word != "the"]
    print(words)
    print(word_lengths)

Exercise
--------

Menggunakan list comprehension, cipta senarai baru yang dipanggil "newlist" daripada senarai "numbers", yang hanya mengandungi nombor positif dari senarai tersebut, sebagai integer.