Python'da iki tür döngü vardır: for ve while.

### "for" döngüsü

For döngüleri verilen bir dizi üzerinde yineleme yapar. İşte bir örnek:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

For döngüleri, "range" ve "xrange" fonksiyonlarını kullanarak bir dizi sayı üzerinde yineleme yapabilir. Range ve xrange arasındaki fark, range fonksiyonunun belirtilen aralıktaki sayılarla yeni bir liste döndürmesi, oysa xrange fonksiyonunun daha verimli bir iterator döndürmesidir. (Python 3, xrange gibi davranan range fonksiyonunu kullanır). Range fonksiyonunun sıfır tabanlı olduğunu unutmayın.

    # Sayıları 0,1,2,3,4 yazdırır
    for x in range(5):
        print(x)

    # 3,4,5 yazdırır
    for x in range(3, 6):
        print(x)

    # 3,5,7 yazdırır
    for x in range(3, 8, 2):
        print(x)

### "while" döngüleri

While döngüleri, belirli bir boolean koşulu sağlandığı sürece tekrarlanır. Örneğin:

    # Sayıları 0,1,2,3,4 yazdırır

    count = 0
    while count < 5:
        print(count)
        count += 1  # Bu, count = count + 1 ile aynıdır

### "break" ve "continue" ifadeleri

**break**, bir for döngüsünü veya bir while döngüsünü sonlandırmak için kullanılırken, **continue**, geçerli bloğu atlamak ve "for" veya "while" ifadesine geri dönmek için kullanılır. Birkaç örnek:

    # Sayıları 0,1,2,3,4 yazdırır

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Yalnızca tek sayıları yazdırır - 1,3,5,7,9
    for x in range(10):
        # x'in çift olup olmadığını kontrol et
        if x % 2 == 0:
            continue
        print(x)

### Döngüler için "else" koşulu kullanabilir miyiz?

C, CPP gibi dillerden farklı olarak, döngüler için **else** kullanabiliriz. "for" veya "while" ifadesinin döngü koşulu başarısız olduğunda, "else" içindeki kod bölümü çalıştırılır. For döngüsü içinde bir **break** ifadesi çalıştırılırsa "else" kısmı atlanır.
"else" kısmı, bir **continue** ifadesi olsa bile çalıştırılır.

İşte birkaç örnek:

    # Sayıları 0,1,2,3,4 yazdırır ve ardından "count değeri 5'e ulaştı" yazdırır

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count değeri %d'ye ulaştı" %(count))

    # 1,2,3,4 yazdırır
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("bu yazdırılmaz çünkü for döngüsü break nedeniyle sonlandırılır ancak koşulun başarısızlığı nedeniyle değil")
    

Exercise
--------

Burada, numbers listesinde 237 sayısı gelene kadar tüm çift sayıları listede bulundukları sırada yazdırın. 237'den sonra gelen hiçbir sayıyı yazdırmayın.