Tutorial
--------
Kabuk değişkenleri, herhangi bir değere atandıklarında oluşurlar. Bir değişken; bir sayıyı, bir karakteri veya bir karakter dizgisini saklayabilir. Değişken isimleri küçük-büyük harf duyarlılığına sahiptir ve harfler ile alt çizgiden "_" meydana gelebilirler.

Değişkene değer atamaları "=" (eşittir) işareti ile yapılır. Unutulmamalıdır ki, değişken ataması yapılırken "="" işaretinin her iki tarafında da boşluk bulunmamalıdır.

    ELMA_BASINA_FIYAT=5
    IlkHarflerim=ABC
    karsilama='Merhaba        dünya!'

Değişkenlere referans verme

A backslash "\\" is used to escape special character meaning
Ters eğik çizgi "\\", özel karakter anlamlarından kaçınmak için kullanılır.

    ELMA_BASINA_FIYAT=5
    echo "Elmanın bugünkü fiyatı: \$HK $ELMA_BASINA_FIYAT"

Karışıklıkları yok etmek için değişken ismini ${} ifadesi ile kapsülleriz.

    IlkHarflerim=ABC
    echo "Alfabedeki ilk on harf: ${IlkHarflerim}ÇDEFGĞH"

Boşluk karakterlerini korumak için değişken ismini "" ifadesi ile kapsülleriz.

    karsilama='Merhaba        dünya!'
    echo $karsilama" boşluklarla: $karsilama"

Değişkenler, herhangi bir komutun çıktı değerine atanabilir. Bu olay yer değiştirme olarak adlandırılır. Yer değiştirme işlemi, `` (ters tırnak işareti) veya $() ifadesi ile kapsüllenerek yapılabilir.

    DOSYA_LISTELE=`ls`
    ZamanDamgaliDosya=/tmp/my-dir/file_$(/bin/date +%Y-%m-%d).txt

Betik çalıştırıldığında, $() ifadesi içindeki komutu çalıştıracak ve çıktısını yakalayacaktır.

Ödev
--------
Bu ödevin amacı; yer değiştirme metotları ile komutları kullanarak bir dizgi (string), bir tam sayı (integer) ve bir karmaşık değişken oluşturmaktır. Dizginin adı DOGUMTARIHI olmalı ve içinde "Jan 1, 2000" metnini saklamalıdır. Tam sayının adı Hediyeler olmalı ve 10 sayısını saklamalıdır. Karmaşık değişken ise DOGUMGUNU adında olmalı ve içinde değer olarak DOGUMTARIHI değişkenin sakladığı tarihin gün ismini saklamalıdır, örneğin: Saturday. Unutulmamalıdır ki, 'date' komutu, bir tarih formatını farklı bir tarih formatına çevirmek için de kullanılabilir. Örneğin, $trh1 içindeki tarih değerinin gün ismini trh1 değişkenine kaydetmek için şu komut kullanılabilir:

    date -d "$trh1" +%A

Not: Girilen tarihin de, istenilen gün isminin de İngilizce olmasının sebebi kodun çalışacağı -alttaki interaktif kodlama paneli- buna göre ayarlanmış olmasıdır. Türkiye zaman dilimine göre girilen değerler veya kodlar kabul olmayacaktır.

Tutorial Code
-------------
    #!/bin/bash
    # Bunun altındaki kısmı değiştirin:
    DOGUMTARIHI=
    Hediyeler=
    DOGUMGUNU=


    # Kodu test etme - burayı değiştirMEyin:

    if [ "$DOGUMTARIHI" == "Jan 1, 2000" ] ; then
        echo "DOGUMTARIHI doğru girilmiş: $BIRTHDATE"
    else
        echo "DOGUMTARIHI yanlış girilmiş - yeniden deneyin."
    fi
    if [ $Hediyeler == 10 ] ; then
        echo "Ben doğum günümde $Presents hediye aldım."
    else
        echo "Hediyeler yanlış girilmiş - yeniden deneyin."
    fi
    if [ "$DOGUMGUNU" == "Saturday" ] ; then
        echo "Ben İngiliz dilinde $BIRTHDAY gününde doğdum."
    else
        echo "DOGUMGUNU yanlış girilmiş - yeniden deneyin."
    fi

Expected Output
---------------
    DOGUMTARIHI doğru girilmiş: Jan 1, 2000
    Ben doğum günümde 10 hediye aldım.
    Ben İngiliz dilinde Saturday gününde doğdum.

Solution
--------
    #!/bin/bash
    # Bunun altındaki kısmı değiştirin:
    DOGUMTARIHI="Jan 1, 2000"
    Hediyeler=10
    DOGUMGUNU=`date -d "$BIRTHDATE" +%A`


    # Kodu test etme - burayı değiştirMEyin:

    if [ "$DOGUMTARIHI" == "Jan 1, 2000" ] ; then
        echo "DOGUMTARIHI doğru girilmiş: $BIRTHDATE"
    else
        echo "DOGUMTARIHI yanlış girilmiş - yeniden deneyin."
    fi
    if [ $Hediyeler == 10 ] ; then
        echo "Ben doğum günümde $Presents hediye aldım."
    else
        echo "Hediyeler yanlış girilmiş - yeniden deneyin."
    fi
    if [ "$DOGUMGUNU" == "Saturday" ] ; then
        echo "Ben İngiliz dilinde $BIRTHDAY gününde doğdum."
    else
        echo "DOGUMGUNU yanlış girilmiş - yeniden deneyin."
    fi
