Lists sangat mirip dengan array. Mereka dapat berisi jenis variabel apa pun, dan dapat berisi sebanyak mungkin variabel yang Anda inginkan. Lists juga dapat diiterasi dengan cara yang sangat sederhana. Berikut adalah contoh cara membangun sebuah list.

```python
mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)
print(mylist[0]) # mencetak 1
print(mylist[1]) # mencetak 2
print(mylist[2]) # mencetak 3

# mencetak 1,2,3
for x in mylist:
    print(x)
```

Mengakses indeks yang tidak ada akan menghasilkan pengecualian (error).

```python
mylist = [1,2,3]
print(mylist[10])
```

Exercise
--------

Dalam latihan ini, Anda perlu menambahkan angka dan string ke list yang sesuai menggunakan metode "append" untuk list. Anda harus menambahkan angka 1, 2, dan 3 ke list "numbers", dan kata-kata 'hello' dan 'world' ke variabel strings.

Anda juga harus mengisi variabel second_name dengan nama kedua dalam list names, menggunakan operator kurung siku `[]`. Perhatikan bahwa indeks dimulai dari nol, jadi jika Anda ingin mengakses item kedua dalam list, indeksnya adalah 1.