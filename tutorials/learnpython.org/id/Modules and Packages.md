Dalam pemrograman, modul adalah bagian dari perangkat lunak yang memiliki fungsi tertentu. Misalnya, ketika membangun game ping pong, satu modul mungkin bertanggung jawab atas logika permainan, dan modul lainnya menggambar permainan di layar. Setiap modul terdiri dari file yang berbeda, yang dapat diedit secara terpisah.

### Menulis modul

Modul dalam Python hanyalah file Python dengan ekstensi .py. Nama modul sama dengan nama file.
Sebuah modul Python dapat memiliki kumpulan fungsi, kelas, atau variabel yang didefinisikan dan diimplementasikan.
Contoh di atas mencakup dua file:

mygame/

- mygame/game.py

- mygame/draw.py

Script Python `game.py` mengimplementasikan permainan. Script ini menggunakan fungsi `draw_game` dari file `draw.py`,
atau dengan kata lain, modul `draw` yang mengimplementasikan logika untuk menggambar permainan di layar.

Modul diimpor dari modul lain menggunakan perintah `import`. Dalam contoh ini, script `game.py` mungkin
terlihat seperti ini:

    # game.py
    # import modul draw
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # ini berarti jika skrip ini dieksekusi, maka 
    # main() akan dieksekusi
    if __name__ == '__main__':
        main()

Modul `draw` mungkin terlihat seperti ini:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

Dalam contoh ini, modul `game` mengimpor modul `draw`, yang memungkinkannya untuk menggunakan fungsi yang diimplementasikan
dalam modul tersebut. Fungsi `main` menggunakan fungsi lokal `play_game` untuk menjalankan permainan, dan kemudian 
menggambar hasil permainan menggunakan fungsi yang diimplementasikan dalam modul `draw` bernama `draw_game`. Untuk menggunakan
fungsi `draw_game` dari modul `draw`, kita perlu menentukan di modul mana fungsi tersebut diimplementasikan, menggunakan operator titik. Untuk merujuk fungsi `draw_game` dari modul `game`,
kita perlu mengimpor modul `draw` dan kemudian memanggil `draw.draw_game()`. 

Ketika direktif `import draw` dijalankan, interpreter Python mencari file dalam direktori tempat skrip dieksekusi dengan nama modul dan akhiran `.py`. Dalam kasus ini, interpreter akan mencari `draw.py`. Jika ditemukan, modul akan diimpor. Jika tidak ditemukan, pencarian berlanjut untuk modul bawaan.

Anda mungkin memperhatikan bahwa saat mengimpor modul, file `.pyc` dibuat. Ini adalah file Python yang telah dikompilasi.
Python mengompilasi file ke dalam bytecode Python agar tidak perlu mengurai file setiap kali modul dimuat. Jika file `.pyc` ada, file tersebut akan dimuat sebagai pengganti file `.py`. Proses ini transparan bagi pengguna.

### Mengimpor objek modul ke dalam namespace saat ini

Namespace adalah sistem di mana setiap objek diberi nama dan dapat diakses di Python. Kita mengimpor fungsi `draw_game` ke dalam namespace skrip utama menggunakan perintah `from`.

    # game.py
    # impor modul draw
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)

Anda mungkin memperhatikan dalam contoh ini bahwa nama modul tidak mendahului `draw_game`, karena kita telah menentukan nama modul menggunakan perintah `import`.

Keuntungan dari notasi ini adalah Anda tidak perlu merujuk modul berulang kali. Namun, satu namespace tidak dapat memiliki dua objek dengan nama yang sama, sehingga perintah `import` dapat menggantikan objek yang ada di dalam namespace.

### Mengimpor semua objek dari suatu modul

Anda dapat menggunakan perintah `import *` untuk mengimpor semua objek dalam modul seperti ini:

    # game.py
    # impor modul draw
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

Ini mungkin agak berisiko karena perubahan dalam modul dapat mempengaruhi modul yang mengimpornya, tetapi ini lebih singkat, dan tidak mengharuskan Anda menentukan setiap objek yang ingin diimpor dari modul.

### Nama impor kustom

Modul dapat dimuat dengan nama apa pun yang Anda inginkan. Ini berguna saat mengimpor modul secara kondisional untuk menggunakan nama yang sama dalam kode lainnya.

Misalnya, jika Anda memiliki dua modul `draw` dengan nama yang sedikit berbeda, Anda dapat melakukan hal berikut:

    # game.py
    # impor modul draw
    if visual_mode:
        # dalam mode visual, kita menggambar menggunakan grafik
        import draw_visual as draw
    else:
        # dalam mode tekstual, kita mencetak teks
        import draw_textual as draw
    
    def main():
        result = play_game()
        # ini bisa berupa visual atau tekstual tergantung pada visual_mode
        draw.draw_game(result)

### Inisialisasi modul

Pertama kali sebuah modul dimuat ke dalam skrip Python yang berjalan, modul tersebut diinisialisasi dengan mengeksekusi kode di dalam modul sekali. Jika modul lain dalam kode Anda mengimpor modul yang sama lagi, modul tersebut tidak akan dimuat ulang, sehingga variabel lokal di dalam modul bertindak sebagai "singleton,” yang berarti mereka diinisialisasi sekali saja.

Anda kemudian dapat menggunakan ini untuk menginisialisasi objek.
Misalnya:

    # draw.py
    
    def draw_game():
        # saat membersihkan layar kita dapat menggunakan objek layar utama yang diinisialisasi dalam modul ini
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # inisialisasi main_screen sebagai singleton
    main_screen = Screen()

### Memperluas jalur pemuatan modul

Ada beberapa cara untuk memberi tahu interpreter Python di mana mencari modul, selain dari direktori lokal default dan modul bawaan. Anda dapat menggunakan variabel lingkungan `PYTHONPATH` untuk menentukan direktori tambahan untuk mencari modul seperti ini:

    PYTHONPATH=/foo python game.py

Ini mengeksekusi `game.py`, dan memungkinkan skrip untuk memuat modul dari direktori `foo`, serta direktori lokal.

Anda juga dapat menggunakan fungsi `sys.path.append`. Eksekusi fungsi ini *sebelum* menjalankan perintah `import`:

    sys.path.append("/foo")

Sekarang direktori `foo` telah ditambahkan ke daftar jalur tempat modul dicari.

### Menjelajahi modul bawaan

Lihat daftar lengkap modul bawaan dalam pustaka standar Python [di sini](https://docs.python.org/3/library/).

Dua fungsi yang sangat penting berguna saat menjelajahi modul di Python - fungsi `dir` dan `help`.

Untuk mengimpor modul `urllib`, yang memungkinkan kita membuat data dari URL, kita mengimpor modul tersebut:

    # impor pustaka
    import urllib

    # gunakan
    urllib.urlopen(...)
    
Kita dapat mencari fungsi mana yang diimplementasikan dalam setiap modul dengan menggunakan fungsi `dir`:

    >>> import urllib
    >>> dir(urllib)
    ['ContentTooShortError', 'FancyURLopener', 'MAXFTPCACHE', 'URLopener', '__all__', '__builtins__', 
    '__doc__', '__file__', '__name__', '__package__', '__version__', '_ftperrors', '_get_proxies', 
    '_get_proxy_settings', '_have_ssl', '_hexdig', '_hextochr', '_hostprog', '_is_unicode', '_localhost', 
    '_noheaders', '_nportprog', '_passwdprog', '_portprog', '_queryprog', '_safe_map', '_safe_quoters', 
    '_tagprog', '_thishost', '_typeprog', '_urlopener', '_userprog', '_valueprog', 'addbase', 'addclosehook', 
    'addinfo', 'addinfourl', 'always_safe', 'basejoin', 'c', 'ftpcache', 'ftperrors', 'ftpwrapper', 'getproxies', 
    'getproxies_environment', 'getproxies_macosx_sysconf', 'i', 'localhost', 'main', 'noheaders', 'os', 
    'pathname2url', 'proxy_bypass', 'proxy_bypass_environment', 'proxy_bypass_macosx_sysconf', 'quote', 
    'quote_plus', 'reporthook', 'socket', 'splitattr', 'splithost', 'splitnport', 'splitpasswd', 'splitport', 
    'splitquery', 'splittag', 'splittype', 'splituser', 'splitvalue', 'ssl', 'string', 'sys', 'test', 'test1', 
    'thishost', 'time', 'toBytes', 'unquote', 'unquote_plus', 'unwrap', 'url2pathname', 'urlcleanup', 'urlencode', 
    'urlopen', 'urlretrieve']

Ketika kita menemukan fungsi dalam modul yang ingin kita gunakan, kita bisa membaca lebih lanjut mengenai fungsi tersebut dengan fungsi `help`, menggunakan interpreter Python:

    help(urllib.urlopen)

### Menulis paket

Paket adalah namespace yang berisi beberapa paket dan modul. Mereka hanya direktori, tetapi dengan persyaratan tertentu.

Setiap paket dalam Python adalah direktori yang **HARUS** berisi file khusus bernama `__init__.py`. File ini, yang bisa kosong, menunjukkan bahwa direktori tempatnya berada adalah paket Python. Dengan cara ini, paket dapat diimpor dengan cara yang sama seperti modul.

Jika kita membuat direktori bernama `foo`, yang menandai nama paket, kita kemudian dapat membuat modul di dalam paket tersebut yang disebut `bar`. Kemudian kita tambahkan file `__init__.py` di dalam direktori `foo`.

Untuk menggunakan modul `bar`, kita dapat mengimpornya dengan dua cara:

    import foo.bar

atau:

    from foo import bar

Dalam contoh pertama di atas, kita harus menggunakan prefix `foo` setiap kali kita mengakses modul `bar`. Dalam contoh kedua, kita tidak perlu, karena kita telah mengimpor modul tersebut ke dalam namespace modul kita.

File `__init__.py` juga dapat memutuskan modul mana dalam paket yang diekspor sebagai API, sambil menjaga modul lainnya tetap internal, dengan menimpa variabel `__all__` seperti ini:

    __init__.py:

    __all__ = ["bar"]

Exercise
--------

Dalam latihan ini, cetak daftar yang sudah disortir secara alfabet dari semua fungsi dalam modul `re` yang mengandung kata `find`.