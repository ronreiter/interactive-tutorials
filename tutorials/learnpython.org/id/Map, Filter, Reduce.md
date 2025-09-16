Map, Filter, dan Reduce adalah paradigma dari pemrograman fungsional. Mereka memungkinkan Anda (programmer) untuk menulis kode yang lebih sederhana dan lebih pendek, tanpa harus terlalu memikirkan kerumitan seperti loop dan percabangan.

Pada dasarnya, ketiga fungsi ini memungkinkan Anda untuk menerapkan sebuah fungsi ke sejumlah iterables dalam sekali langkah. ```map``` dan ```filter``` sudah tersedia di Python (dalam modul ```__builtins__```) dan tidak memerlukan impor. Namun, ```reduce``` perlu diimpor karena berada di modul ```functools```. Mari kita pelajari cara kerja mereka lebih lanjut, dimulai dengan ```map```.

#### Map
Fungsi ```map()``` di Python memiliki sintaks berikut:

```map(func, *iterables)```

Di mana ```func``` adalah fungsi yang akan diterapkan pada setiap elemen di ```iterables``` (sebanyak apapun jumlahnya). Perhatikan tanda asterisk (```*```) pada ```iterables```? Ini berarti ada sejumlah iterables yang dapat disertakan, selama ```func``` memiliki jumlah yang tepat sesuai dengan argumen input yang dibutuhkan. Sebelum kita melanjutkan ke contoh, penting untuk memperhatikan hal-hal berikut:

1. Di Python 2, fungsi ```map()``` mengembalikan sebuah daftar. Namun, di Python 3, fungsi ini mengembalikan sebuah ```map object``` yang merupakan objek generator. Untuk mendapatkan hasilnya sebagai daftar, fungsi bawaan ```list()``` dapat dipanggil pada objek map. i.e. ```list(map(func, *iterables))```
2. Jumlah argumen untuk ```func``` harus sama dengan jumlah ```iterables``` yang tercantum.

Mari kita lihat bagaimana aturan-aturan ini berlaku dalam contoh berikut.

Misalkan saya memiliki daftar (```iterable```) nama hewan peliharaan favorit saya, semuanya dalam huruf kecil dan saya membutuhkan mereka dalam huruf besar. Secara tradisional, dalam pemrograman python biasa, saya akan melakukan hal seperti ini:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Yang kemudian akan menghasilkan ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Dengan fungsi ```map()```, ini tidak hanya lebih mudah, tetapi juga jauh lebih fleksibel. Saya cukup melakukan ini:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Yang juga akan menghasilkan hasil yang sama. Perhatikan bahwa menggunakan sintaks ```map()``` yang didefinisikan di atas, ```func``` dalam kasus ini adalah ```str.upper``` dan ```iterables``` adalah daftar ```my_pets``` -- hanya satu iterable saja. Juga perhatikan bahwa kita tidak memanggil fungsi ```str.upper``` (melakukannya seperti ini: ```str.upper()```) karena fungsi map yang melakukan hal tersebut untuk kita pada _setiap elemen dalam daftar ```my_pets```_.

Yang lebih penting untuk dicatat adalah bahwa fungsi ```str.upper``` hanya membutuhkan **satu** argumen menurut definisinya, jadi kita hanya meneruskan satu **iterable** padanya. Jadi, _jika fungsi yang Anda lewati membutuhkan dua, tiga, atau n argumen_, maka _Anda perlu meneruskan dua, tiga, atau n iterables padanya_. Saya akan menjelaskan ini dengan contoh lain.

Misalkan saya memiliki daftar luas lingkaran yang sudah saya hitung di suatu tempat, semua dalam lima tempat desimal. Dan saya perlu membulatkan setiap elemen dalam daftar ke posisi desimalnya masing-masing, artinya saya harus membulatkan elemen pertama dalam daftar ke satu tempat desimal, elemen kedua ke dua tempat desimal, elemen ketiga ke tiga tempat desimal, dan seterusnya. Dengan ```map()``` ini sangat mudah. Mari kita lihat bagaimana.

Python sudah memberi kita fungsi bawaan ```round()``` yang memerlukan dua argumen -- angka untuk dibulatkan dan jumlah tempat desimal untuk membulatkan angka tersebut. Jadi, karena fungsi ini memerlukan **dua** argumen, kita perlu meneruskan **dua** iterables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Lihat keindahan dari ```map()```? Bisakah Anda membayangkan fleksibilitas yang dihasilkan?

Fungsi ```range(1, 7)``` bertindak sebagai argumen kedua untuk fungsi ```round``` (jumlah tempat desimal yang dibutuhkan per iterasi). Jadi saat ```map``` melakukan iterasi pada ```circle_areas```, selama iterasi pertama, elemen pertama dari ```circle_areas```, ```3.56773``` diteruskan bersama elemen pertama dari ```range(1,7)```, ```1``` ke ```round```, membuatnya secara efektif menjadi ```round(3.56773, 1)```. Selama iterasi kedua, elemen kedua dari ```circle_areas```, ```5.57668``` bersama elemen kedua dari ```range(1,7)```, ```2``` diteruskan ke ```round``` membuatnya menjadi ```round(5.57668, 2)```. Ini terjadi hingga akhir daftar ```circle_areas``` tercapai.

Saya yakin Anda bertanya-tanya: "Bagaimana jika saya meneruskan iterable yang lebih pendek atau lebih panjang dari panjang iterable pertama? Yaitu, bagaimana jika saya meneruskan ```range(1, 3)``` atau ```range(1, 9999)``` sebagai iterable kedua dalam fungsi di atas". Dan jawabannya sederhana: tidak ada! Oke, itu tidak benar. "Tidak ada" terjadi dalam arti bahwa fungsi ```map()``` tidak akan menghasilkan pengecualian apapun, ia akan hanya melakukan iterasi pada elemen hingga tidak bisa menemukan argumen kedua untuk fungsi tersebut, pada titik mana ia akan berhenti dan mengembalikan hasilnya. 

Jadi, misalnya, jika Anda mengevaluasi ```result = list(map(round, circle_areas, range(1, 3)))```, Anda tidak akan mendapatkan kesalahan meskipun panjang ```circle_areas``` dan panjang dari ```range(1, 3)``` berbeda. Sebaliknya, ini yang dilakukan oleh Python: Ia mengambil elemen pertama dari ```circle_areas``` dan elemen pertama dari ```range(1,3)``` dan meneruskannya ke ```round```. ```round``` mengevaluasinya kemudian menyimpan hasilnya. Kemudian ia melanjutkan ke iterasi kedua, elemen kedua dari ```circle_areas``` dan elemen kedua dari ```range(1,3)```, ```round``` menyimpan kembali. Sekarang, pada iterasi ketiga (```circle_areas``` memiliki elemen ketiga), Python mengambil elemen ketiga dari ```circle_areas``` dan kemudian mencoba mengambil elemen ketiga dari ```range(1,3)``` tetapi karena ```range(1,3)``` tidak memiliki elemen ketiga, Python berhenti dan mengembalikan hasil, yang dalam hal ini adalah ```[3.6, 5.58]```. 

Silakan, coba.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


Hal yang sama terjadi jika ```circle_areas``` lebih pendek dari panjang dari iterable kedua. Python berhenti ketika tidak bisa menemukan elemen berikutnya di salah satu iterables.

Untuk mengkonsolidasi pengetahuan kita tentang fungsi ```map()```, kita akan menggunakannya untuk mengimplementasikan fungsi ```zip()``` kita sendiri. Fungsi ```zip()``` adalah fungsi yang mengambil sejumlah iterables dan kemudian membuat tuple yang berisi setiap elemen dari iterables tersebut. Seperti ```map()```, di Python 3, ia mengembalikan objek generator, yang dapat dengan mudah dikonversi menjadi daftar dengan memanggil fungsi bawaan ```list``` padanya. Gunakan sesi interpreter di bawah ini untuk memahami ```zip()``` sebelum kita membuatnya sendiri dengan ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Sebagai bonus, bisakah Anda menebak apa yang akan terjadi dalam sesi di atas jika ```my_strings``` dan ```my_numbers``` tidak memiliki panjang yang sama? Tidak? coba! Ubah panjang salah satunya.

Mari kita ke fungsi ```zip()``` kita sendiri!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Lihat itu! Kita mendapatkan hasil yang sama seperti ```zip```.

Apakah Anda juga memperhatikan bahwa saya bahkan tidak perlu membuat fungsi menggunakan cara standar ```def my_function()```? Itulah seberapa fleksibel ```map()```, dan Python secara umum! Saya hanya menggunakan fungsi ```lambda```. Ini bukan berarti menggunakan metode pendefinisian fungsi standar (dari ```def function_name()```) tidak diizinkan, itu tetap diizinkan. Saya hanya lebih suka menulis kode yang lebih sedikit (menjadi lebih "Pythonic").

Itu semua tentang map. Lanjut ke ```filter()```

#### Filter
Sementara ```map()``` meneruskan setiap elemen dalam iterable melalui sebuah fungsi dan mengembalikan hasil dari semua elemen yang telah melewati fungsi, ```filter()```, pertama-tama memerlukan fungsi untuk mengembalikan nilai boolean (benar atau salah) dan kemudian meneruskan setiap elemen dalam iterable melalui fungsi, "memfilter" elemen yang bernilai salah. Ini memiliki sintaks berikut:

```filter(func, iterable)```

Poin-poin berikut harus dicatat mengenai ```filter()```:

1. Berbeda dengan ```map()```, hanya satu iterable yang diperlukan.
2. Argumen ```func``` harus mengembalikan tipe boolean. Jika tidak, ```filter``` hanya mengembalikan ```iterable``` yang diteruskan padanya. Juga, karena hanya satu iterable yang diperlukan, implicit bahwa ```func``` hanya boleh mengambil satu argumen.
3. ```filter``` meneruskan setiap elemen dalam iterable melalui ```func``` dan mengembalikan **hanya** yang bernilai benar. Maksud saya, itu terpampang jelas dalam namanya -- sebuah "filter".

Mari kita lihat beberapa contoh

Berikut adalah daftar (```iterable```) dari nilai ujian Kimia 10 siswa. Mari kita filter mereka yang lulus dengan nilai lebih dari 75...menggunakan ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Contoh berikutnya adalah detector palindrom. Palindrom adalah sebuah kata, frasa, atau urutan yang dapat dibaca sama maju dan mundur. Mari kita filter kata-kata yang merupakan palindrom dari sebuah tuple (```iterable```) dari dugaan palindrom.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Yang seharusnya menghasilkan ```['madam', 'anutforajaroftuna']```.

Cukup rapi, bukan? Terakhir, ```reduce()```

#### Reduce
```reduce``` menerapkan suatu fungsi **dari dua argumen** secara kumulatif pada elemen-elemen dari sebuah iterable, opsional dimulai dengan argumen awal. Ini memiliki sintaks berikut:

```reduce(func, iterable[, initial])```

Di mana ```func``` adalah fungsi yang setiap elemen dalam ```iterable``` akan diterapkan secara kumulatif, dan ```initial``` adalah nilai opsional yang ditempatkan sebelum elemen-elemen iterable dalam perhitungan, dan berfungsi sebagai default ketika iterable kosong. Hal-hal berikut harus dicatat tentang ```reduce()```:
1. ```func``` membutuhkan dua argumen, yang pertama adalah elemen pertama dalam ```iterable``` (jika ```initial``` tidak disertakan) dan elemen kedua dalam ```iterable```. Jika ```initial``` disertakan, maka itu akan menjadi argumen pertama untuk ```func``` dan elemen pertama dalam ```iterable``` menjadi elemen kedua.
2. ```reduce``` "mengurangi" (saya tahu, maafkan saya) ```iterable``` menjadi satu nilai saja.

Seperti biasa, mari kita lihat beberapa contoh.

Mari kita buat versi kita sendiri dari fungsi bawaan Python ```sum()```. Fungsi ```sum()``` mengembalikan jumlah dari semua item dalam iterable yang diteruskan kepadanya.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


Hasilnya, seperti yang Anda harapkan adalah ```68```.

Jadi, apa yang terjadi?

Seperti biasa, semuanya tentang iterasi: ```reduce``` mengambil elemen pertama dan kedua dalam ```numbers``` dan meneruskannya ke ```custom_sum``` masing-masing. ```custom_sum``` menghitung jumlahnya dan mengembalikannya ke ```reduce```. ```reduce``` kemudian mengambil hasil tersebut dan menerapkannya sebagai elemen pertama untuk ```custom_sum``` dan mengambil elemen berikutnya (ketiga) dalam ```numbers``` sebagai elemen kedua untuk ```custom_sum```. Ini terus dilakukan (kumulatif) hingga ```numbers``` habis.

Mari kita lihat apa yang terjadi ketika saya menggunakan nilai opsional ```initial```.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


Hasilnya, seperti yang Anda harapkan, adalah ```78``` karena ```reduce```, awalnya, menggunakan ```10``` sebagai argumen pertama untuk ```custom_sum```.


Itulah semua tentang Map, Reduce, dan Filter Python. Cobalah latihan di bawah ini untuk membantu memastikan pemahaman Anda tentang masing-masing fungsi.

Exercise
--------
Dalam latihan ini, Anda akan menggunakan masing-masing dari ```map```, ```filter```, dan ```reduce``` untuk memperbaiki kode yang rusak.