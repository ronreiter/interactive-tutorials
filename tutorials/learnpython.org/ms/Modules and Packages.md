Dalam pengaturcaraan, modul adalah sekeping perisian yang mempunyai fungsi tertentu. 
Sebagai contoh, apabila membina permainan ping pong, satu modul mungkin bertanggungjawab untuk logik permainan, dan 
modul lain melukis permainan pada skrin. Setiap modul terdiri daripada fail yang berbeza, yang boleh disunting secara berasingan.

### Menulis modul

Modul dalam Python hanyalah fail Python dengan sambungan .py. Nama modul adalah sama dengan nama fail.
Modul Python boleh mempunyai satu set fungsi, kelas, atau pembolehubah yang ditakrif dan dilaksanakan. 
Contoh di atas termasuk dua fail:

mygame/

- mygame/game.py

- mygame/draw.py
    
 
Skrip Python `game.py` melaksanakan permainan. Ia menggunakan fungsi `draw_game` daripada fail `draw.py`,
atau dengan kata lain, modul `draw` yang melaksanakan logik untuk melukis permainan pada skrin.

Modul diimport dari modul lain menggunakan arahan `import`. Dalam contoh ini, skrip `game.py` mungkin
kelihatan seperti ini:

    # game.py
    # import the draw module
    import draw
    
    def play_game():
        ...
    
    def main():
        result = play_game()
        draw.draw_game(result)
        
    # ini bermakna jika skrip ini dilaksanakan, maka 
    # main() akan dilaksanakan
    if __name__ == '__main__':
        main()

Modul `draw` mungkin kelihatan seperti ini:

    # draw.py
    
    def draw_game():
        ...

    def clear_screen(screen):
        ...

Dalam contoh ini, modul `game` mengimport modul `draw`, yang membolehkan ia menggunakan fungsi yang dilaksanakan
dalam modul itu. Fungsi `main` menggunakan fungsi tempatan `play_game` untuk menjalankan permainan, dan kemudian
melukis hasil permainan menggunakan fungsi yang dilaksanakan dalam modul `draw` yang dipanggil `draw_game`. Untuk menggunakan
fungsi `draw_game` dari modul `draw`, kita perlu menentukan dalam modul mana fungsi itu
dilaksanakan, menggunakan operator titik. Untuk merujuk fungsi `draw_game` dari modul `game`,
kita perlu mengimport modul `draw` dan kemudian panggil `draw.draw_game()`.

Apabila arahan `import draw` dijalankan, jurubahasa Python mencari fail dalam direktori tempat skrip itu dilaksanakan dengan nama modul dan akhiran `.py`. Dalam kes ini, ia akan mencari `draw.py`. Jika ia dijumpai, ia akan diimport. Jika tidak dijumpai, ia akan terus mencari modul terbina dalam.

Anda mungkin perasan bahawa apabila mengimport modul, fail `.pyc` akan dibuat. Ini adalah fail Python yang telah dikompilasi. 
Python mengkompilkan fail ke dalam bytecode Python supaya ia tidak perlu mengurai fail setiap kali modul dimuatkan. Jika fail `.pyc` wujud, ia akan dimuatkan dan bukannya fail `.py`. Proses ini adalah telus kepada pengguna.

### Mengimport objek modul ke ruang nama semasa

Ruang nama adalah sistem di mana setiap objek dinamakan dan boleh diakses dalam Python. Kita mengimport fungsi `draw_game` ke dalam ruang nama skrip utama dengan menggunakan arahan `from`.

    # game.py
    # import the draw module
    from draw import draw_game
    
    def main():
        result = play_game()
        draw_game(result)


Anda mungkin perasan bahawa dalam contoh ini, nama modul tidak mendahului `draw_game`, kerana kita telah menentukan nama modul menggunakan arahan `import`.

Kelebihan notasi ini adalah bahawa anda tidak perlu merujuk modul berulang-ulang. Walau bagaimanapun, ruang nama tidak boleh mempunyai dua objek dengan nama yang sama, jadi arahan `import` mungkin menggantikan objek yang sedia ada dalam ruang nama.

### Mengimport semua objek dari modul

Anda boleh menggunakan arahan `import *` untuk mengimport semua objek di dalam modul seperti ini:

    # game.py
    # import the draw module
    from draw import *
    
    def main():
        result = play_game()
        draw_game(result)

Ini mungkin sedikit berisiko kerana perubahan dalam modul boleh menjejaskan modul yang mengimportnya, tetapi ia
lebih pendek, dan tidak memerlukan anda untuk menentukan setiap objek yang ingin anda import dari modul.

### Nama import khusus

Modul boleh dimuatkan di bawah mana-mana nama yang anda mahu. Ini berguna apabila mengimport modul secara bersyarat
untuk menggunakan nama yang sama dalam kod selebihnya. 

Sebagai contoh, jika anda mempunyai dua modul `draw` dengan nama yang sedikit berbeza, anda boleh melakukan yang berikut:
 

    # game.py
    # import the draw module
    if visual_mode:
        # dalam mod visual, kami melukis menggunakan grafik
        import draw_visual as draw
    else:
        # dalam mod teks, kami mencetak teks
        import draw_textual as draw
    
    def main():
        result = play_game()
        # ini boleh jadi visual atau teks bergantung pada visual_mode
        draw.draw_game(result)


### Inisialisasi modul

Buat pertama kalinya modul dimuatkan ke dalam skrip Python yang sedang berjalan, modul itu diinisialisasi dengan melaksanakan kod dalam modul itu sekali. Jika modul lain dalam kod anda mengimport modul yang sama lagi, ia tidak akan dimuatkan semula, jadi pembolehubah tempatan di dalam modul bertindak sebagai "singleton", yang bermaksud ia diinisialisasi sekali sahaja.

Anda boleh kemudian menggunakannya untuk menginisialisasi objek. 
Sebagai contoh:

    # draw.py
    
    def draw_game():
        # semasa membersihkan skrin, kita boleh gunakan objek skrin utama yang diinisialisasi dalam modul ini
        clear_screen(main_screen)
        ...

    def clear_screen(screen):
        ...
        
    class Screen():
        ...

    # aksialkan main_screen sebagai singleton
    main_screen = Screen()


### Memperluas laluan muat modul

Terdapat beberapa cara untuk memberitahu jurubahasa Python di mana hendak mencari modul, selain daripada
direktori tempatan dan modul terbina dalam. Anda boleh menggunakan pembolehubah persekitaran `PYTHONPATH` untuk menentukan direktori tambahan untuk mencari modul seperti ini:

    PYTHONPATH=/foo python game.py

Ini melaksanakan `game.py`, dan membolehkan skrip itu memuat modul dari direktori `foo`, serta
direktori tempatan.

Anda juga boleh menggunakan fungsi `sys.path.append`. Laksanakannya *sebelum* menjalankan arahan `import`:

    sys.path.append("/foo")

Sekarang direktori `foo` telah ditambah ke senarai laluan di mana modul dicari.

### Meneroka modul terbina dalam

Lihat senarai penuh modul terbina dalam dalam perpustakaan standard Python [di sini](https://docs.python.org/3/library/).

Dua fungsi yang sangat penting boleh digunakan apabila meneroka modul dalam Python - fungsi `dir` dan `help`.

Untuk mengimport modul `urllib`, yang membolehkan kita mencipta membaca data dari URL, kita `import` modul:

    # import the library
    import urllib

    # use it
    urllib.urlopen(...)
    
Kita boleh melihat fungsi apa yang dilaksanakan dalam setiap modul dengan menggunakan fungsi `dir`:

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

Apabila kita mendapati fungsi dalam modul yang ingin kita gunakan, kita boleh membaca lebih lanjut mengenainya dengan fungsi `help`, menggunakan jurubahasa Python:

    help(urllib.urlopen)

### Menulis pakej

Pakej adalah ruang nama yang mengandungi pelbagai pakej dan modul. Mereka hanya direktori, tetapi dengan keperluan tertentu.

Setiap pakej dalam Python adalah direktori yang **MESTI** mengandungi fail khas yang dipanggil `__init__.py`. Fail ini, yang boleh kosong, menunjukkan bahawa direktori yang di dalamnya adalah pakej Python. Dengan cara itu ia dapat diimport dengan cara yang sama seperti modul.

Jika kita mencipta direktori dipanggil `foo`, yang menandakan nama pakej, kita kemudiannya boleh mencipta modul di dalam itu
pakej dipanggil `bar`. Kemudian kita tambahkan fail `__init__.py` dalam direktori `foo`.

Untuk menggunakan modul `bar`, kita boleh mengimportnya dengan dua cara:

    import foo.bar

atau:

    from foo import bar

Dalam contoh pertama di atas, kita perlu menggunakan awalan `foo` apabila kita mengakses modul `bar`. Dalam contoh kedua, kita tidak perlu kerana kita telah mengimport modul ke dalam ruang nama modul kita.

Fail `__init__.py` juga boleh memutuskan modul apa yang pakej itu eksport sebagai API, sambil menyimpan modul lain secara dalaman, dengan menimpa pembolehubah `__all__` seperti berikut:

    __init__.py:

    __all__ = ["bar"]

Exercise
--------

Dalam latihan ini, cetak senarai fungsi dalam modul `re` yang mengandungi perkataan `find` secara teratur abjad.