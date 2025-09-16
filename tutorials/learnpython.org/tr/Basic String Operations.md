Strings, metin parçalarıdır. Tırnak işaretleri arasındaki herhangi bir şey olarak tanımlanabilirler:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Gördüğünüz gibi, öğrendiğiniz ilk şey basit bir cümleyi yazdırmak oldu. Bu cümle, Python tarafından bir string olarak saklandı. Ancak, stringleri hemen yazdırmak yerine, onlara yapabileceğiniz çeşitli şeyleri keşfedeceğiz.
Bir string atamak için tek tırnakları da kullanabilirsiniz. Ancak, atanacak değer tek tırnaklar içeriyorsa sorun yaşarsınız. Örneğin, bu parantezdeki stringi (tek tırnaklar ' ' içindedir) atamak için sadece çift tırnak kullanmanız gerekir, bu şekilde:

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Bu, 12 karakter uzunluğunda olduğu için 12'yi yazdırır, çünkü "Hello world!" noktalama işaretleri ve boşluklar dahil 12 karakter uzunluğundadır.

    astring = "Hello world!"
    print(astring.index("o"))

Bu, 4'ü yazdırır çünkü "o" harfinin ilk geçtiği yer, ilk karakterden 4 karakter uzakta. Bakın, aslında cümlede iki tane "o" var - bu yöntem sadece ilkini tanır.

Ama neden 5'i yazdırmadı? "o" stringin beşinci karakteri değil mi? İşleri basitleştirmek için, Python (ve diğer birçok programlama dili) 1 yerine 0'dan başlar. Yani "o" indeksinin değeri 4'tür.

    astring = "Hello world!"
    print(astring.count("l"))

Silly fontlar kullananlar için, bu bir küçük L'dir, sayı olan bir bir değil. Bu, string içindeki "l" harflerinin sayısını sayar. Bu nedenle, 3 yazdırması gerekir.

    astring = "Hello world!"
    print(astring[3:7])

Bu, stringin bir dilimini yazdırır, 3. indeksten başlayarak 6. indekste biter. Peki neden 6 ve 7 değil? Yine, çoğu programlama dili bunu yapar - bu, bu parantezlerin içerisindeki matematik işlemlerini kolaylaştırır.

Parantezlerde yalnızca bir sayı varsa, bu indeksdeki tek karakteri verir. İlk sayıyı atlayıp sadece iki nokta üst üste bırakırsa, başlangıçtan sizin bıraktığınız sayıya bir dilim verir. İkinci sayıyı atlayıp ilk sayıyı bırakırsanız, bir dilimi ilk sayıdan sona kadar verir.

Parantezlerin içine negatif sayılar bile koyabilirsiniz. Bu, stringin sonundan başlayarak başından başlamak yerine kolay bir yoldur. Bu nedenle, -3 "sondan 3. karakter" anlamına gelir.

    astring = "Hello world!"
    print(astring[3:7:2])

Bu, 3'ten 7'ye kadar olan karakterleri birer atlayarak yazdırır. Bu, genişletilmiş dilimleme sözdizimidir. Genel formu [başla:durdur:adım].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Her ikisinin de aynı çıktıyı ürettiğine dikkat edin.

C dilinde bir stringi tersine çevirmek için strrev gibi bir fonksiyon yoktur. Ancak, yukarıda bahsedilen türde dilimleme sözdizimiyle, bir stringi kolayca bu şekilde tersine çevirebilirsiniz.

    astring = "Hello world!"
    print(astring[::-1])

Bu

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Bu, tüm harfleri sırasıyla büyük ve küçük harflere dönüştürerek yeni bir string oluşturur.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Bu, sırasıyla bir stringin bir şeyle başlayıp başlamadığını veya bir şeyle bitip bitmediğini belirlemek için kullanılır. İlki True yazdıracak, çünkü string "Hello" ile başlar. İkincisi False yazdıracak, çünkü string kesinlikle "asdfasdfasdf" ile bitmiyor.

    astring = "Hello world!"
    afewwords = astring.split(" ")

Bu, stringi bir liste içinde toplanmış bir grup stringe ayırır. Bu örnek bir boşlukta bölündüğü için, listedeki ilk öge "Hello" ve ikinci öge "world!" olacaktır.

Alıştırma
--------

Kodu düzelterek doğru bilgiyi yazdırmasını deneyin, stringi değiştirin.