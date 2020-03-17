Tutorial
--------
Bir dizi birden çok değeri tek bir değişken adı altında tutabilir. Dizilerin adlandırılması, değişken adlandırılması ile aynıdır.
Bir dizi, değerleri arasına boşluk kullanarak ve () ifadesi arasına alınarak yazılabilir.

    benim_dizim=(elma muz "Meyve Tabağı" portakal)
    yeni_dizi[2]=kayisi

Dizi elemanları devamlı ve ardaşık olmak zorunda değildir. Bazı elemanlar, henüz herhangi bir değeri saklamıyor olabilir.

Dizideki toplam eleman sayısını $(#diziAdi[@]) ile görebilirsiniz.

    benim_dizim=(elma muz "Meyve Tabağı" portakal)
    echo  ${#benim_dizim[@]}                   # 4

Dizilerin elemanları, sıra numaraları (index) ile erişilebilmektedir. İlk sıra 0 olarak kabul edilir.

    benim_dizim=(elma muz "Meyve Tabağı" portakal)
    echo ${benim_dizim[3]}                       # portakal - fark edildiği üzere süslü parantez kullanılmalıdır.
    # yeni bir eleman ekleme
    benim_dizim[4]="havuç"                       # Yeni bir değer ataması, $ işareti ve {} süslü parantezler olmadan yapılabilir.
    echo ${#benim_dizim[@]}                      # 5
    echo ${benim_dizim[${benim_dizim[@]}-1]}     # havuç - Dizinin her zaman son elemanını verir.

Ödev
--------
In this exercise, you will need to add numbers and strings to the correct arrays. You must add the numbers 1,2, and 3 to the "numbers" array, and the words 'hello' and 'world' to the strings array.
Bu ödevde, belirli sayıları ve dizgileri doğru dizilere eklemeniz gerekmektedir. 1, 2 ve 3 sayılarını "sayilar" dizisine; "merhaba" ve "dünya" dizgilerini "dizgi" dizisine eklemelisiniz.

Ayrıca IsimlerinSayisi ve ikinci_ad değişkenlerinin değerlerini düzeltmelisiniz. IsimlerinSayisi değişkeni ISIMLER dizisindeki toplam isim sayısını $# ifadesini kullanarak saklamalıdır. ikinci_ad değişkeni ise ISIMLER dizisindeki ikinci adı [] ifadesini kullanarak saklamalıdır. Unutulmamalıdır ki, sıralar 0'dan başlar. Yani, ikinci elemana erişmek isteniyorsa 1. sırayı sorgulamalısınız.

Tutorial Code
-------------
    #!/bin/bash
    ISIMLER=( Nazım Hikmet Ran )
    # kodunuzu bu yorum satırının altına yazın:
    sayilar=()
    dizgi=()
    IsimlerinSayisi=0
    ikinci_ad='Cemal'

Expected Output
---------------
    1 2 3
    merhaba dünya
    ISIMLER listesindeki isim sayısı: 3
    ISIMLER listesindeki ikinci isim: Hikmet

Solution
--------
    #!/bin/bash
    NAMES=( Nazım Hikmet Ran )
    # kodunuzu bu yorum satırının altına yazın:
    sayilar=( 1 2 3 )
    STRINGS=( "merhaba" "dünya" )
    IsimlerinSayisi=${#ISIMLER[@]}
    ikinci_ad=${ISIMLER[1]}
    echo ${sayilar[@]}
    echo ${dizgi[@]}
    echo "ISIMLER listesindeki isim sayısı: $NumberOfNames"
    echo "ISIMLER listesindeki ikinci isim:" ${second_name}
