Tutorial
--------
Diğer programlama dillerinde de olduğu gibi Kabul da fonksiyon yapılarına sahiptir. Fonksiyonlar, belli ve sıralı birçok komutun tek paket haline toplanmasına ve gerekli görüldüğü zaman çağırılmasına yararlar. Bu fonksiyonlara gerektiği zamanlarda parametre de verilebilirdir. Tekrara kaçmamak ve aynı şeyleri defalarca kez yazmamak için kullanımı önemlidir.

    fonksiyon_adı {
      # komut bloğu
    }

Fonksiyonlar basitçe adlarını kullanarak çağırılabilirler. Herhangi bir fonksiyon çağırılması, aynen bir komutun verilmesi gibi düşünülebilir. Parametreler ise fonksiyonlar çağırılırken gönderilebilir ancak fonksiyon tanımlaması yapılırken diğer birçok dildeki gibi belirtilmesine gerek yoktur. Gönderilen parametreleri $1, $2, $3 (...) ile kod bloğunun içinde kullanabilirsiniz.

    function fonksiyonB {
      echo "Fonskiyon B çağırıldı."
    }
    function yazar {
      echo "$1"
    }
    function toplayici {
      echo "$(($1 + $2))"
    }

    # Fonksiyon çağırma örneği
    # Yazar fonksiyonuna paramtere gönderme:
    yazar "Hop, naber!"          # yazar fonksiyonuna parametre gönderildi.
    fonksiyonB                   # fonksiyonB çağırıldı.
    # toplayici fonksiyonuna iki parametre gönderme:
    toplayici 12 56              # çıktı olarak 68 alınır.

Exercise
--------
Bu ödevde "Türkçe'den Matematiğe" hesap çeviricisi yapmanız gerekmektedir. Fonksiyonunuzun ismi "TR_MAT" olmalıdır. Aşağıdaki mantık ile işlemelidir:

    Girdi/Parametreler        Çıktı
        5 artı 6            5 + 6 = 11
        10 eksi 3           10 - 3 = 7
        3 çarpı 5           3 * 5 = 15

Tutorial Code
-------------
    #!/bin/bash
    # fonksiyonunuzu buraya giriniz:

    # kodu test etme
    TR_MAT 3 artı 5
    TR_MAT 5 eksi 1
    TR_MAT 4 çarpı 6

Expected Output
---------------
    3 + 5 = 8
    5 - 1 = 4
    4 * 6 = 24

Solution
--------
    #!/bin/bash
    # fonksiyonunuzu buraya giriniz

    function ENGLISH_CALC {
      a=$1
      b=$3
      isaret=$2
      if [ $isaret == "artı" ]; then
        echo "$a + $b = $(($a+$b))"
      elif [ $isaret == "eksi" ]; then
        echo "$a - $b = $(($a-$b))"
      elif [ $isaret == "çarpı" ]; then
        echo "$a * $b = $(($a*$b))"
      fi
    }

    # kodu test etme
    TR_MAT 3 plus 5
    TR_MAT 5 minus 1
    TR_MAT 4 times 6
