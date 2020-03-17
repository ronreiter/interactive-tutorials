Tutorial
--------
Kabuk, betik yazmak için çok kullanışlı olan bazı dizgi işlemlerine izin verir.

### Dizgi Uzunluğu

    #       1234567890123456
    DIZGI="bu bir dizgidir"
    echo ${#DIZGI}            # 16

### Sıra sayısı (index)

Find the numerical position in $STRING of any single character in $SUBSTRING that matches. Note that the 'expr' command is used in this case.
$ALTDIZGI'deki herhangi bir karakterin $DIZGI'deki sırasını bulmak için kullanılır. Unutulmamalıdır ki expr komutu ile beraber kullanılmıştır.

    DIZGI="bu bir dizgidir"
    ALTDIZGI="bal"
    expr index "$DIZGI" "$ALTDIZGI"     # 1 - ALTDIZGI'deki b karakteri DIZGI'de birinci sıradadır.

### Altdizgi Ayrıştırması

$BAS değişkenindeki sıra numarasından başlayarak $UZUNLUK kadar dizgiyi dolaşmaya ve bu aralıktaki karakterler ile yeni dizgi oluşturmaya denir. Dizgilerde de diziler gibi ilk elemanın sırası sıfırdır.

    DIZGI="bu bir dizgidir"
    BAS=1
    UZUNLUK=3
    echo ${DIZGI:$BAS:$UZUNLUK}   # u b

Eğer #UZUNLUK belirtilmez ise $BAS ile başlar ve dizginin sonuna kadar ilerler.

    DIZGI="bu bir dizgidir"
    echo ${DIZGI:1}           # u bir dizgidir
    echo ${DIZGI:12}          # ir

### Basit bir veri ayrıştırma örneği:

    # Bir veri kümesinden ismi ayrıştırma kodu
    veriKumesi="soyad=Sunal,ad=Kemal,ulke=TR"
    virgul1=`expr index "$veriKumesi" ','`  # position of first comma
    virgul1Sonrasi=${veriKumesi:$virgul1}
    virgul2=`expr index "$virgul1Sonrasi" ','`
    uzunluk=`expr $virgul2 - 6 - 1`
    ad=${veriKumesi:6:$uzunluk}             # Kemal
    echo $ad

### Altdizgi yer değiştirimi

    dizgi="to be or not to be"

Değiştirilecek ifadelerden yalnız ilkini değiştirme

    dizgi="to be or not to be"
    echo ${dizgi[@]/be/eat}        # to eat or not to be

Değiştirilecek ifadelerin hepsini değiştirme

    dizgi="to be or not to be"
    echo ${dizgi[@]//be/eat}        # to eat or not to eat

Değiştirilecek ifadelerin hepsinin silinmesi (veya boşluk ile değiştirilmesi)

    dizgi="to be or not to be"
    echo ${dizgi[@]// not/}        # to be or to be

Değiştirilecek ifade yalnızca $dizgi'nin başında ise değiştirme

    dizgi="to be or not to be"
    echo ${dizgi[@]/#to be/eat now}    # eat now or not to be

Değiştirilecek ifade yalnızca $dizgi'nin sonunda ise değiştirme

    dizgi="to be or not to be"
    echo ${dizgi[@]/%be/eat}        # to be or not to eat

Değiştirilecek ifadeyi kabuktaki herhangi bir komutun çıktısı ile değiştirme

    dizgi="to be or not to be"
    echo ${dizgi[@]/%be/be on $(date +%Y-%m-%d)}    # to be or not to be on 2012-06-14

Ödev
--------
Bu ödevinizde, Warren Buffet'in bilindik söylemini değiştirmelisiniz. İlk olarak benDerim adlı bir değişken yaratın ve ona asıl söylemi atayın. Daha sonra, dizgi işlemlerini kullanarak aşağıdaki dört değişikliği sırası ile atamaya çalışın:
- İlk değişiklik: ilk "snow" kelimesini "foot" ile değiştirin.
- İkinci değişiklik: ikinci "snow" kelimesini silin.
- Üçüncü değişiklik: "finding" kelimesini "getting" ile değiştirin.
- Dördüncü değişiklik: "wet" kelimesinden sonra gelen tüm karakterleri silin.

Tutorial Code
-------------
#!/bin/bash

BUFFETT="Life is like a snowball. The important thing is finding wet snow and a really long hill."

  # kodunuzu bunun altına yazın
  benDerim=
  benDerim=










# Test kodu - burayı değiştirMEyin.
echo "Warren Buffett der ki:"
echo $BUFFETT
echo "ve ben derim:"
echo $ISAY

Expected Output
---------------
Warren Buffett der ki:
Life is like a snowball. The important thing is finding wet snow and a really long hill.
ve ben derim:
Life is like a football. The important thing is getting wet

Solution
--------
#!/bin/bash

BUFFETT="Life is like a snowball. The important thing is finding wet snow and a really long hill."

    # kodunuzu bunun altına yazın
    benDerim=$BUFFETT
    ilkDegisiklik=${benDerim[@]/snow/foot}
    ikinciDegisiklik=${ilkDegisiklik[@]//snow/}
    ucuncuDegisiklik=${ikinciDegisiklik[@]/finding/getting}
    sira=`expr index "$ucuncuDegisiklik" 'w'`
    benDerim=${ucuncuDegisiklik::$sira+2}

# Test kodu - burayı değiştirMEyin
echo "Warren Buffett der ki:"
echo $BUFFETT
echo "ve ben derim:"
echo "$ISAY"
