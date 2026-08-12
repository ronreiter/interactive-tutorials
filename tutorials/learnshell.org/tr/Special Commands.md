Tutorial
--------
Kabuk, metin işleme için birkaç güçlü komut içerir. En yaygın üçü `sed`, `awk` ve `grep` olup, genellikle `sort` ile birlikte kullanılırlar.

### grep - metin ara

`grep` bir kalıpla eşleşen satırları bulur:

    echo "apple banana" | grep banana

Çıktı:

    apple banana

### sed - akış düzenleyici

`sed` metni dönüştürür. Her `apple` ifadesini `orange` ile değiştirme:

    echo "apple pie" | sed 's/apple/orange/'

Çıktı:

    orange pie

### awk - metin işleme

`awk` satırları alanlara ayırır ve seçili sütunları yazdırır:

    echo "apple banana cherry" | awk '{print $2}'

Çıktı:

    banana

### sort - satırları sırala

Satırlar alfabetik olarak yeniden sıralanabilir:

    printf "cherry\napple\nbanana\n" | sort

Çıktı:

    apple
    banana
    cherry

Bu komutlar neredeyse her kabuk ardışık işleminin yapı taşlarıdır.

Exercise
--------
Aşağıdaki ardışık işlemi, `apple banana cherry` satırının üçüncü alanını (`$3`) yazdıracak şekilde tamamlayın; bu `cherry`dir.

Tutorial Code
-------------
    #!/bin/bash
    echo "apple banana cherry" | awk '{print }'

Expected Output
---------------
    cherry

Solution
--------
    #!/bin/bash
    echo "apple banana cherry" | awk '{print $3}'
