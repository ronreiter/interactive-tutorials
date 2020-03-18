Tutorial
--------
### FOR döngüsü
Yapısı şu şekilde görüntülenebilir:

    for arg in [liste]
    do
     # komut bloğu
    done

Her bir döngüde, arg değişkeni [liste] içinden sıradaki değeri alır ve daha sonra komut bloğunun içine girer.

    # Dizilerin içinde dolaşma örneği
    isimler=(Nazım Vera Tomris Can)
    for N in ${isimler[@]} ; do
      echo "Benim adım $N"
    done
    # Yukarıdaki kodu deneyin ve sonucu görün.
    # For döngüsünü anlamınızda yardımcı olacaktır.

    # Herhangi bir komutun sonucunda dolaşma örneği
    for f in $( ls prog.sh /etc/localtime ) ; do
      echo "Dosyanın adı: $f"
    done

###  WHILE döngüsü
Yapısı şu şekilde görüntülenebilir:

    while [ koşul ]
    do
     # komut bloğu
    done

While döngüsü, içindeki koşul doğru olduğu müddetçe döngüye devam eder.

    say=4
    while [ $say -gt 0 ]; do
      echo "Sayma değeri: $COUNT"
      COUNT=$(($say - 1))
    done

### UNTIL döngüsü
Yapısı şu şekilde görüntülenebilir:

    until [ koşul ]
    do
     # komut bloğu
    done

Until döngüsü, koşulu test eder ve koşul gerçekleşMEdiği müddetçe döngüye devam eder. Çalışma mantığı açısından While döngüsünün tam zıttıdır.

    say=1
    until [ $say -gt 5 ]; do
      echo "Sayma değeri: $COUNT"
      COUNT=$(($say + 1))
    done

### "break" ve "continue" Komutları

break ve continue komutları, döngüleri kontrol etmek için kullanılır. **continue, sonraki iterasyona atlamamızı sağlar.** Buna benzer olarak ise **break, iterasyonları durdurur ve döngüyü kırar.** Bunlar ile ilgili işte size birkaç örnek:

    # 0,1,2,3,4 yazdırır.

    COUNT=0
    while [ $COUNT -ge 0 ]; do
      echo "COUNT'un değeri: $COUNT"
      COUNT=$((COUNT+1))
      if [ $COUNT -ge 5 ] ; then
        break
      fi
    done

    # Yalnızca tek sayıları yaz: 1,3,5,7,9
    COUNT=0
    while [ $COUNT -lt 10 ]; do
      COUNT=$((COUNT+1))
      # COUNT değeri tek mi onu kontrol et
      if [ $(($COUNT % 2)) = 0 ] ; then
        continue
      fi
      echo $COUNT
    done

Exercise
--------
Bu ödevinizde, size verilen NUMBERS dizisinin içindeki sayılardan 237 sayısından öncekileri ve çift olanları satır satır yazdırın. (Unutmayın, VE sözcüğü, iki koşulun da aynı anda gerçekleşmesi gerekliliğini ifade eder.)


Tutorial Code
-------------
    #!/bin/bash
    NUMBERS=(951 402 984 651 360 69 408 319 601 485 980 507 725 547 544 615 83 165 141 501 263 617 865 575 219 390 237 412 566 826 248 866 950 626 949 687 217 815 67 104 58 512 24 892 894 767 553 81 379 843 831 445 742 717 958 609 842 451 688 753 854 685 93 857 440 380 126 721 328 753 470 743 527)

    # kodunuzu bunun altına yazın:

Expected Output
---------------
402
984
360
408
980
544
390

Solution
--------
    #!/bin/bash
    NUMBERS=(951 402 984 651 360 69 408 319 601 485 980 507 725 547 544 615 83 165 141 501 263 617 865 575 219 390 237 412 566 826 248 866 950 626 949 687 217 815 67 104 58 512 24 892 894 767 553 81 379 843 831 445 742 717 958 609 842 451 688 753 854 685 93 857 440 380 126 721 328 753 470 743 527)

    # kodunuzu bunun altına yazın:
    for gg in ${NUMBERS[@]}; do

        if [ $gg == 237 ]; then
        	break;
        elif [ $(($gg % 2)) == 0 ]; then
        	echo $gg
        fi
    done
