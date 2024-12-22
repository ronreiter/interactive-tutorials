Map, Filter, dan Reduce adalah paradigma pengaturcaraan berfungsi. Mereka membolehkan pengatur cara (anda) menulis kod yang lebih mudah dan ringkas, tanpa perlu risau tentang kerumitan seperti gelung dan percabangan.

Pada dasarnya, ketiga-tiga fungsi ini membolehkan anda menerapkan fungsi ke atas beberapa iterable sekaligus. ```map``` dan ```filter``` datang terbina dalam Python (dalam modul ```__builtins__```) dan tidak memerlukan import. Walau bagaimanapun, ```reduce``` perlu diimport kerana ia berada dalam modul ```functools```. Mari kita fahami bagaimana ketiganya berfungsi, bermula dengan ```map```.

#### Map
Fungsi ```map()``` dalam Python mempunyai sintaks berikut:

```map(func, *iterables)```

Di mana ```func``` adalah fungsi di mana setiap elemen dalam ```iterables``` (sebanyak mana mereka) akan diterapkan. Perhatikan asterisk (```*```) pada ```iterables```? Ini bermaksud boleh ada sebanyak mana iterables yang mungkin, selagi ```func``` mempunyai jumlah sebagai input argumen yang diperlukan. Sebelum kita bergerak ke contoh, penting anda perhatikan perkara berikut:

1. Dalam Python 2, fungsi ```map()``` mengembalikan senarai. Dalam Python 3, bagaimanapun, ia mengembalikan objek ```map``` yang merupakan objek penjana. Untuk mendapatkan hasil sebagai senarai, fungsi terbina dalam ```list()``` boleh dipanggil pada objek map. iaitu ```list(map(func, *iterables))```
2. Jumlah argumen kepada ```func``` mesti sama dengan jumlah ```iterables``` yang disenaraikan. 

Mari kita lihat bagaimana peraturan ini dimainkan dengan contoh-contoh berikut.

Katakan saya mempunyai senarai (```iterable```) nama haiwan kesayangan kegemaran saya, semua dalam huruf kecil dan saya perlukan mereka dalam huruf besar. Secara tradisional, dalam pengaturcaraan Python biasa, saya akan melakukan sesuatu seperti ini:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Yang kemudian akan menghasilkan ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Dengan fungsi ```map()```, ia bukan sahaja lebih mudah, tetapi juga lebih fleksibel. Saya hanya perlu melakukan ini:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Ini juga akan menghasilkan hasil yang sama. Perhatikan bahawa dengan menggunakan sintaks yang diberikan ```map()``` di atas, ```func``` dalam kes ini adalah ```str.upper``` dan ```iterables``` adalah senarai ```my_pets``` -- hanya satu iterable. Juga, perhatikan kita tidak memanggil fungsi ```str.upper``` (melakukan ini: ```str.upper()```), kerana fungsi map melakukannya untuk kita pada _setiap elemen dalam senarai ```my_pets```_.

Yang lebih penting untuk diingat adalah bahawa fungsi ```str.upper``` memerlukan hanya **satu** argumen secara definisi dan jadi kita mengedarkan hanya **satu** iterable kepada ia. Jadi, _jika fungsi yang anda kirimkan memerlukan dua, atau tiga, atau n argumen_, maka _anda perlu deretkan dua, tiga atau n iterables untuknya_. Biar saya jelaskan ini dengan contoh lain.

Katakan saya mempunyai senarai luas lingkaran yang saya hitung di suatu tempat, semuanya dalam lima tempat perpuluhan. Dan saya perlu membundarkan setiap elemen dalam senarai tersebut ke posisi tempat perpuluhan masing-masing, yang bermaksud bahwa saya harus membundarkan elemen pertama dalam senarai tersebut ke satu tempat perpuluhan, elemen kedua dalam senarai tersebut ke dua tempat perpuluhan, elemen ketiga dalam senarai tersebut ke tiga tempat perpuluhan, dan seterusnya. Dengan ```map()``` ini adalah perkara yang mudah. Mari lihat bagaimana.

Python sudah memberkati kita dengan fungsi terbina dalam ```round()``` yang menerima dua argumen -- nombor untuk dibundarkan dan jumlah tempat perpuluhan untuk dibundarkan nombor tersebut. Jadi, kerana fungsi memerlukan **dua** argumen, kita perlu mempasskan **dua** iterables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Lihat keindahan ```map()```? Boleh anda bayangkan fleksibiliti yang dibangkitkan?

Fungsi ```range(1, 7)``` berfungsi sebagai argumen kedua kepada fungsi ```round``` (jumlah tempat perpuluhan yang diperlukan per iterasi). Jadi, semasa ```map``` mengulangi ```circle_areas```, semasa iterasi pertama, elemen pertama dari ```circle_areas```, ```3.56773``` digeser bersama elemen pertama dari ```range(1, 7)```, ```1``` ke ```round```, menjadikannya berkesan menjadi ```round(3.56773, 1)```. Semasa iterasi kedua, elemen kedua dari ```circle_areas```, ```5.57668``` bersama elemen kedua dari ```range(1, 7)```, ```2``` digeser ke ```round``` menjadikannya menjadi ```round(5.57668, 2)```. Ini berlaku sehingga akhir senarai ```circle_areas``` tercapai.

Saya pasti anda bertanya: "Bagaimana jika saya mengesankan iterable yang lebih pendek atau lebih panjang daripada panjang iterable pertama? Maksudnya, bagaimana jika saya mengesankan ```range(1, 3)``` atau ```range(1, 9999)``` sebagai iterable kedua dalam fungsi di atas". Dan jawapannya mudah: tiada apa-apa! Baiklah, itu tidak benar. "Tiada apa-apa" berlaku dalam pengertian bahawa fungsi ```map()``` tidak akan menaikkan sebarang pengecualian, ia hanya akan mengulangi elemen-elemen sehingga ia tidak dapat menemukan argumen kedua untuk fungsi, di mana pada titik itu, ia hanya berhenti dan mengembalikan hasil.

Jadi, sebagai contoh, jika anda menilai ```result = list(map(round, circle_areas, range(1, 3)))```, anda tidak akan mendapat sebarang kesalahan walaupun panjang ```circle_areas``` dan panjang ```range(1, 3)``` berbeza. Sebaliknya, inilah yang Python lakukan: Ia mengambil elemen pertama dari ```circle_areas``` dan elemen pertama dari ```range(1,3)``` dan menggeserkannya kepada ```round```. ```round``` menilainya lalu menyimpan hasil tersebut. Kemudian ia bergerak ke iterasi kedua, elemen kedua dari ```circle_areas``` dan elemen kedua dari ```range(1,3)```, ```round``` menyimpannya lagi. Sekarang, dalam iterasi ketiga (```circle_areas``` mempunyai elemen ketiga), Python mengambil elemen ketiga dari ```circle_areas``` dan kemudian cuba mengambil elemen ketiga dari ```range(1,3)``` tetapi kerana ```range(1,3)``` tidak mempunyai elemen ketiga, Python hanya berhenti dan mengembalikan hasil, yang dalam kes ini adalah ```[3.6, 5.58]```. 

Pergilah, cuba.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

Perkara yang sama berlaku jika ```circle_areas``` lebih pendek dari panjang iterable kedua. Python hanya berhenti apabila ia tidak dapat menemukan elemen seterusnya dalam satu dari iterables. 

Untuk mengukuhkan pengetahuan kita tentang fungsi ```map()```, kita akan menggunakannya untuk melaksanakan fungsi ```zip()``` kita sendiri. Fungsi ```zip()``` adalah fungsi yang menerima sejumlah iterables dan kemudian membuat tuple yang mengandungi setiap elemen dalam iterables tersebut. Seperti ```map()```, dalam Python 3, ia mengembalikan objek penjana, yang dapat dikonversi dengan mudah ke senarai dengan memanggil fungsi ```list``` terbina dalam padanya. Gunakan sesi juru bicara di bawah untuk mendapatkan pegangan tentang ```zip()``` sebelum kita menciptanya dengan ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Sebagai bonus, bolehkah anda meneka apa yang akan terjadi pada sesi di atas jika ```my_strings``` dan ```my_numbers``` tidak berada dalam panjang yang sama? Tidak? cuba! Ubah panjang salah satu dari mereka.

Ke zip custom kita sendiri!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Cuba lihat itu! Kita mempunyai hasil yang sama seperti ```zip```. 

Adakah anda juga perhatikan bahawa saya bahkan tidak perlu mencipta fungsi menggunakan cara standard ```def my_function()```? Itu betapa fleksibelnya ```map()```, dan Python, dalam amnya! Saya hanya menggunakan fungsi ```lambda```. Ini bukan untuk mengatakan bahawa menggunakan kaedah definisi fungsi standard (dari ```def function_name()```) tidak dibenarkan, ia masih lagi diterima. Saya hanya lebih suka menulis kod yang kurang (lebih "Pythonic").

Itu semua tentang map. Sekarang ke ```filter()```

#### Filter
Sementara ```map()``` mengedarkan setiap elemen dalam iterable melalui sebuah fungsi dan mengembalikan hasil semua elemen yang telah melalui fungsi, ```filter()```, pertama sekali, memerlukan fungsi untuk mengembalikan nilai boolean (benar atau palsu), dan kemudian melewati setiap elemen dalam iterable melalui fungsi, "menapis" elemen yang palsu. Ia mempunyai sintaks berikut:

```filter(func, iterable)```

Perkara-perkara berikut harus diperhatikan mengenai ```filter()```:

1. Tidak seperti ```map()```, hanya satu iterable yang diperlukan.
2. Argumen ```func``` diperlukan untuk mengembalikan jenis boolean. Jika tidak, ```filter``` hanya akan mengembalikan ```iterable``` yang diberikan kepadanya. Juga, kerana hanya satu iterable yang diperlukan, ia adalah sesuatu yang tidak dinyatakan bahawa ```func``` hanya boleh mengambil satu argumen.
3. ```filter``` mengedarkan setiap elemen dalam iterable melalui ```func``` dan mengembalikan **hanya** yang dievaluasi sebagai benar. Maksud saya, ia ada di nama -- "filter".

Mari lihat beberapa contoh

Berikut adalah senarai (```iterable```) markah 10 pelajar dalam peperiksaan Kimia. Mari kita tapis mereka yang lulus dengan markah lebih dari 75...menggunakan ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Contoh seterusnya ialah pengesan palindrom. "Palindrom" adalah perkataan, frasa, atau turutan yang terbaca sama secara terbalik seperti ke depan. Mari kita tapis perkataan yang merupakan palindrom dari tuple (```iterable```) palindrom yang disyaki.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Yang sepatutnya mengeluarkan ```['madam', 'anutforajaroftuna']```. 

Cukup cantik kan? Akhirnya, ```reduce()```

#### Reduce
```reduce``` menggunakan fungsi **dua argumen** secara kumulatif kepada elemen-elemen dari iterable, secara opsional bermula dengan argumen awal. Ia mempunyai sintaks berikut:

```reduce(func, iterable[, initial])```

Di mana ```func``` adalah fungsi atas mana setiap elemen dalam ```iterable``` diterapkan kumulatif kepada, dan ```initial``` adalah nilai opsional yang ditempatkan sebelum elemen-elemen iterable dalam pengiraan, dan berfungsi sebagai nilai lalai ketika iterable kosong. Hal-hal berikut harus diperhatikan mengenai ```reduce()```:
1. ```func``` memerlukan dua argumen, yang pertama di mana ialah elemen pertama dalam ```iterable``` (jika ```initial``` tidak dibekalkan) dan elemen kedua dalam ```iterable```. Jika ```initial``` dibekalkan, maka ia menjadi argumen pertama kepada ```func``` dan elemen pertama dalam ```iterable``` menjadi elemen kedua.
2. ```reduce``` "mereduce" (Saya tahu, maafkan saya) ```iterable``` menjadi satu nilai.

Seperti biasa, mari kita lihat beberapa contoh.

Mari kita cipta versi kita sendiri dari fungsi terbina dalam Python ```sum()```. Fungsi ```sum()``` mengembalikan jumlah semua item dalam iterable yang diberikan kepadanya.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


Hasilnya, seperti yang anda jangka adalah ```68```.

Jadi, apa yang berlaku?

Seperti biasa, ia semua berkaitan iterasi: ```reduce``` mengambil elemen pertama dan kedua dalam ```numbers``` dan mengukurkan mereka kepada ```custom_sum``` masing-masing. ```custom_sum``` mengira jumlah mereka dan mengembalikannya kepada ```reduce```. ```reduce``` kemudian mengambil hasil itu dan menggunakan ia sebagai elemen pertama kepada ```custom_sum``` dan mengambil elemen seterusnya (ketiga) dalam ```numbers``` sebagai elemen kedua kepada ```custom_sum```. Ia melakukan ini secara berterusan (secara kumulatif) sehingga ```numbers``` habis.

Mari kita lihat apa yang berlaku apabila saya menggunakan nilai opsional ```initial```.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


Hasilnya, seperti yang anda jangka, ialah ```78``` kerana ```reduce```, pada mulanya, menggunakan ```10``` sebagai argumen pertama kepada ```custom_sum```.


Itu saja tentang Map, Reduce, dan Filter dalam Python. Cuba latihan di bawah untuk membantu memastikan pemahaman anda tentang setiap fungsi.

Latihan
--------
Dalam latihan ini, anda akan menggunakan masing-masing ```map```, ```filter```, dan ```reduce``` untuk membaiki kod yang rosak.