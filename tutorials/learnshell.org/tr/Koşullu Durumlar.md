Tutorial
--------
Çoğu programlama dilinde, programın karar vermesi için koşullu ifadeler kurabileceğimiz bir yapı bulunur. Bu yapılar, "if-else if-else" şeklinde üç parçadır.
Bu parçalardan 'if' olanı, kurucu koşullu ifadedir. If ifadesi konulmadan "else if" ve "else" yapıları kullanılamaz. "If" ve "else if" yapıları bir koşul durumunu sorgularlar. Sorguladıkları durum, eğer doğru ise kendilerine ait olan kod bloklarını çalıştırılar. Eğer sorguladıkları durum yanlış ise hemen altlarındaki kod bloğuna geçerler.

En basit şekliyle (yalnızca "if" içeren) koşullu ifade şöyle yazılabilir:

  **if [ koşulluDurum ]; then**
    # Koşullu durum doğru ise gerçekleşecek kod bloğu
  **fi**

Bir örnek vermek istersek:

    dil="BASH"
    if [ "$dil" = "BASH" ]; then
      echo "BASH kodlamak çok eğlenceli!"
    fi

Bu örneğimize bir de "else" ifadesi ekleyelim. Bu ifade ile "if"te belirttiğimiz koşul gerçekleşmez ise ne yapılması gerektiğini söyleyelim:

    dil="javaScript"
    if [ "$dil" = "BASH" ]; then
      echo "BASH kodlamak çok eğlenceli!"
    else
      echo "UPS!"
      echo "Bence en iyi kodlama dili $dil"
    fi

Her şey beyaz yada siyah olmak zorunda değildir! Beyaz ve siyah arasındaki farklı karışmalar ile gri tonları da oluşabilir. "else if"in kısaltması olan **elif** de bu işe yarar:

    isim="George"
    if [ "$isim" = "John" ]; then
      echo "John Lennon'u mu kast ettin?"
    elif [ "$isim" = "George" ]; then
      echo "HA! George Harrison'ı anlatıyorsun sen."
    else
      echo "E o zaman geriye yalnızca Paul ve Ringo kaldı."
    fi

"elif" ifadesiyle; "if"in içindeki koşul yanlış ise, "else"in içindeki kod bloğunu çalıştırmadan önce farklı bir koşul için kontrol yaparız.

Her bir koşul, ya doğru ya yanlış olmak zorundadır. (Doğru için tam sayılar, yanlış için 0 sayısı kullanılır.)
Eğer daha önceden oluşturmadığınız bir değişken adını koşul olarak kullanırsanız, direk "yanlış" dönecektir. Ayrıca yalnızca boşluk karakterini içerek dizgiler de yanlış döndürür.
Mantıksal işleyiciler, aynen matematikte kullanıldığı gibi programlama dillerinde de kullanılır. Mantıksal işleyicilerden **VE** kelimesi _&&_ ile, **VEYA** ifadesi _||_ ile, **DEĞİL** ifadesi _!_ ile sembolize edilir. Bu mantıksal ifadelerdeki ve, veya, değil durumları çift köşeli parantez ile ifade edilmelidir. \[\[]]

### Sayısal karşılaştırma

    Kabuk gösterimi    Şu ifadelerle eşdeğerdir:
    $a -lt $b                 $a < $b
    $a -gt $b                 $a > $b
    $a -le $b                 $a <= $b
    $a -ge $b                 $a >= $b
    $a -eq $b               $a eşittir $b
    $a -ne $b             $a eşit değildir $b

### Dizgi karşılaştırma

    Kabuk gösterimi    Şu ifadelerle eşdeğerdir:
    "$a" = "$b"         $a aynısıdır $b nin
    "$a" == "$b"        $a aynısıdır $b nin
    "$a" != "$b"        $a farklıdır $b den
    -z "$a"             $a boştur, değersizdir

- Çok önemli not! Koşullu ifadeler kurulurken unutulmamalıdır ki köşeli parantezler ile ifade arasında boşluk olmalıdır. Dizgi karşılaştırmasında ise işleyicilerden (örn. =, ==, !=...) önce ve sonra boşluk bırakılmalıdır.

- Dizgileri belirtirken, özel karakterlerden kaçınmak için çift tırnak kullanmanız önem arz eder. Zorunlu değildir.

### Mantıksal işleyicileri kullanma

    if [[ $deg_A[0] -eq 1 && ($deg_B = "bee" || $deg_T = "tee") ]] ; then
        # işlenecek kod bloğu
    fi

### "case" Yapıları
"case" yapıları da, "if" yapıları gibi çoğu programlama dilinde bulunan önemli yapılardır. "If" ile koşullu durumlar kurduğunuzda çok fazla "elif (else if)" yapısı kurmanız gerekiyor ise aslında tercih etmeniz gerekenin "case" yapıları olduğunu anlamanız gerekmektedir.

    case "$degisken" in
        "$kosul" )
            # komut
        ;;
        "$kosul2" )
            # komut2
        ;;
    esac

### Basit Bir "case" Yapısı Örneği
Bu örneğimizi yukarıdaki yapı ile kıyaslayalım. Yapımızdaki $degisken, örneğimizde kendini $mycase olarak göstermiş. Yani biz $mycase'in hangi duruma sahip olduğunu sorguluyoruz. 1), 2) gibi ifade edilen değerler aslında bizim $kosul, $kosul2 olarak ifade ettiğimiz değerlerdir. Koşulların dışına çift tırnak konmamış (çünkü değişken olarak çağırılmamışlar) ve alt satıra geçilmeden tek satırda yazılarak kodun görüntüsü düzenlenmiştir. Komutlarımız ise "echo"lar ile ifade edilmiş ve çift noktalı virgül ile diğer sorguya geçilmiştir. Kısacası anlatılan şudur:

    # mycase 1'e eşit olsun.
    # mycase şuna eşitse:
    #     1 e eşitse -> BASH'ı seçtiniz yaz.
    #     2 ye eşitse -> PERL'ü seçtiniz yaz.
    #     3 e eşitse -> PYTHON'ı seçtiniz yaz.
    #     4 e eşitse -> C++'ı seçtiniz yaz.
    # sorguyu bitir

    mycase=1
    case $mycase in
        1) echo "BASH'ı seçtiniz.";;
        2) echo "PERL'ü seçtiniz.";;
        3) echo "PYTHON'ı seçtiniz.";;
        4) echo "C++'ı seçtiniz.";;
        5) exit
    esac

Exercise
--------
İlk kısımdaki değişkenlerle öyle bir oynayın ki tüm koşullu ifadeler "doğru" döndürsün.

Tutorial Code
-------------

    #!/bin/bash
    # alttaki değişkenleri değiştirin:
    SAYI=10
    ELMALAR=12
    BASKAN="Erdoğan"
    # üstteki değişkenleri değiştirin.

    # Alttaki tüm koşullu ifadeler doğru olarak anlaşılsın.
    if [ $SAYI -gt 15 ] ; then
      echo 1
    fi
    if [ $SAYI -eq $ELMALAR ] ; then
      echo 2
    fi
    if [[ ($ELMALAR -eq 12) || ("$BASKAN" = "Atatürk") ]] ; then
      echo 3
    fi
    if [[ $(($SAYI + $ELMALAR)) -le 32 ]] ; then
      echo 4
    fi

Expected Output
---------------
    1
    2
    3
    4

Solution
--------

    #!/bin/bash
    # alltakid değişkenleri değiştirin:
    SAYI=16
    ELMALAR=16
    BASKAN="Atatürk"
    # üstteki değişkenleri değiştirin.

    # Alttaki tüm koşullu ifadeler doğru olarak anlaşılsın.
    if [ $SAYI -gt 15 ] ; then
      echo 1
    fi
    if [ $SAYI -eq $ELMALAR ] ; then
      echo 2
    fi
    if [[ ($ELMALAR -eq 12) || ("$BASKAN" = "Atatürk") ]] ; then
      echo 3
    fi
    if [[ $(($SAYI + $ELMALAR)) -le 32 ]] ; then
      echo 4
    fi
