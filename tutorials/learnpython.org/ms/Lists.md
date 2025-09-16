Senarai sangat mirip dengan tatasusunan. Mereka boleh mengandungi sebarang jenis pembolehubah, dan mereka boleh mengandungi sebanyak mana pembolehubah yang anda mahu. Senarai juga boleh diiterasi dengan cara yang sangat mudah. Berikut adalah contoh bagaimana untuk membina senarai.

    mylist = []
    mylist.append(1)
    mylist.append(2)
    mylist.append(3)
    print(mylist[0]) # prints 1
    print(mylist[1]) # prints 2
    print(mylist[2]) # prints 3

    # prints out 1,2,3
    for x in mylist:
        print(x)

Mengakses indeks yang tidak wujud akan menjana ralat (kesilapan).

    mylist = [1,2,3]
    print(mylist[10])

Exercise
--------

Dalam latihan ini, anda perlu menambah nombor dan string kepada senarai yang betul menggunakan kaedah senarai "append". Anda mesti menambah nombor 1,2, dan 3 kepada senarai "numbers", dan perkataan 'hello' dan 'world' kepada pembolehubah strings.

Anda juga perlu mengisi pembolehubah second_name dengan nama kedua dalam senarai names, menggunakan operator brackets `[]`. Perhatikan bahawa indeks bermula dari sifar, jadi jika anda ingin mengakses item kedua dalam senarai, indeksnya adalah 1.