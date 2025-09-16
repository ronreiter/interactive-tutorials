Map, Filter ve Reduce, fonksiyonel programlamanın paradigmalarıdır. Programcının (sizin) döngüler ve dallanmalar gibi karmaşıklıklarla uğraşmak zorunda kalmadan daha basit ve kısa kod yazmasına olanak tanır.

Özünde, bu üç fonksiyon, bir işlevi bir dizi yineleme üzerinde tek seferde uygulamanıza olanak tanır. ```map``` ve ```filter```, Python'da yerleşik olarak bulunur (```__builtins__``` modülünde) ve herhangi bir ithalata gerek duymazlar. Ancak ```reduce```, ```functools``` modülünde yer aldığından ithal edilmesi gerekir. Hepsinin nasıl çalıştığını anlamaya başlayalım; öncelikle ```map``` ile.

#### Map
Python'daki ```map()``` fonksiyonunun sözdizimi:

```map(func, *iterables)```

Burada ```func```, her bir ```iterables``` (kaç tane oldukları önemli değil) elemanına uygulanacak olan fonksiyondur. ```iterables```'ın başındaki yıldız işaretine (```*```) dikkat ettiniz mi? Bu, mümkün olan kadar çok sayıda iterable olabileceği anlamına gelir, yeter ki ```func```, gerekli girdi argümanları olarak o sayıya sahip olsun. Bir örneğe geçmeden önce aşağıdaki noktalara dikkat etmeniz önemlidir:

1. Python 2'de, ```map()``` fonksiyonu bir liste döndürür. Ancak Python 3'te, fonksiyon bir ```map object``` yani bir jeneratör objesi döndürür. Sonucu bir liste olarak almak için, yerleşik ```list()``` fonksiyonu map nesnesine çağrılabilir. Örneğin, ```list(map(func, *iterables))```.
2. ```func```'a verilen argüman sayısı, listelenen ```iterables``` sayısı ile eşleşmelidir.

Bu kuralların nasıl çalıştığını aşağıdaki örneklerle görelim.

Diyelim ki, tümü küçük harfle yazılmış en sevdiğim evcil hayvan isimlerimden oluşan bir listem (```iterable```) var ve onları büyük harfle yazmam gerekiyor. Geleneksel olarak, normal Python kullanımıyla, şöyle yapardım:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Bu, ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']``` çıktısını verir.

```map()``` fonksiyonlarıyla bu işlem hem daha kolay hem de çok daha esnektir. Sadece şu şekilde yaparım:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Bu da aynı sonucu verir. Yukarıda tanımlanan ```map()``` sözdizimini kullanarak, burada ```func```, ```str.upper```, ve ```iterables```, sadece bir iterable olan ```my_pets``` listesidir. Ayrıca, ```str.upper``` fonksiyonunu (```str.upper()``` şeklinde) çağırmadığımıza dikkat edin; çünkü map fonksiyonu, _```my_pets``` listesindeki her bir eleman için_ bunu gerçekleştirir.

Daha dikkat edilmesi gereken şey, ```str.upper``` fonksiyonunun tanımı gereği yalnızca **bir** argüman gerektirmesi ve bu nedenle ona sadece **bir** iterable geçmemizdir. Yani, _geçirdiğiniz fonksiyonun iki, üç veya n argüman gerektirdiğini varsayarsanız_, o zaman _ona iki, üç veya n iterables geçirmeniz gerekir_. Bunu başka bir örnekle açıklayayım.

Bir yerlerde hesapladığım beş ondalık basamaklı bir dizi daire alanım olduğunu varsayalım. Ve listedeki her bir elemanı, kendi pozisyonu kadar ondalık basamağa yuvarlamam gerekiyor. Yani listedeki ilk elemanı bir ondalık basamağa, listedeki ikinci elemanı iki ondalık basamağa, listedeki üçüncü elemanı üç ondalık basamağa vb. yuvarlamam gerekiyor. ```map()``` ile bu çok kolay. Nasıl olduğuna bakalım.

Python, zaten iki argüman alan yerleşik ```round()``` fonksiyonu ile bu konuda şanslıyız -- yuvarlanacak sayı ve yuvarlanacak ondalık basamak sayısı. Yani, fonksiyon **iki** argüman gerektirdiğinden, **iki** iterable geçirmemiz gerekiyor.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

```map()```'in güzelliğini görüyor musunuz? Bu esnekliğin verdiği heyecanı düşünebiliyor musunuz?

```range(1, 7)``` fonksiyonu, ```round``` fonksiyonuna ikinci argüman olarak görev yapar (her iterasyon başına istenen ondalık basamak sayısı). Bu nedenle, ```map``` ```circle_areas``` üzerinden iterasyon yaparken, ilk iterasyonda, ```circle_areas```'ın ilk elemanı, ```3.56773```, ```range(1,7)```'nin ilk elemanı, ```1```, ile birlikte ```round```'a geçirilir ve bu, aslında ```round(3.56773, 1)``` olur. İkinci iterasyonda, ```circle_areas```'ın ikinci elemanı, ```5.57668```, ```range(1,7)```'nin ikinci elemanı, ```2```, ile birlikte ```round```'a geçirilir ve bu, aslında ```round(5.57668, 2)``` olur. Bu işlem, ```circle_areas``` listesinin sonuna kadar devam eder.

Merak ediyorsunuzdur, "Ya birinci iterable'dan daha kısa veya daha uzun bir iterable geçirirsem? Örneğin, yukarıdaki fonksiyona ikinci iterable olarak ```range(1, 3)``` veya ```range(1, 9999)``` geçirirsem ne olur?" ve cevap basit: bir şey olmaz! Tamam, bu doğru değil. Bir şey "olmaz" çünkü ```map()``` fonksiyonu herhangi bir istisna yükseltmez, sadece bir ikinci argüman bulamayacağı ana kadar elemanlar üzerinde iterasyon yapar ve ardından sadece durur ve sonucu döndürür.

Örneğin, ```result = list(map(round, circle_areas, range(1, 3)))```'ü değerlendirirseniz, ```circle_areas``` ve ```range(1, 3)```'ın uzunluğu farklı olmasına rağmen herhangi bir hata almazsınız. Bunun yerine Python şu işlemi yapar: ```circle_areas```'ın ilk elemanını ve ```range(1,3)```'ün ilk elemanını alır ve ```round```'a geçirir. ```round``` bunu değerlendirir ve sonucu kaydeder. Ardından ikinci iterasyona geçer, ```circle_areas```'ın ikinci elemanı ve ```range(1,3)```'ün ikinci elemanını, ```round``` tekrar kaydeder. Şimdi üçüncü iterasyonda (```circle_areas```'ın üçüncü bir elemanı vardır), Python ```circle_areas```'ın üçüncü elemanını alır ve ```range(1,3)```'ün üçüncü elemanını almaya çalışır ancak ```range(1,3)``` üçüncü bir elemana sahip olmadığından, Python basitçe durur ve sonucu döndürür; bu durumda bu sadece ```[3.6, 5.58]``` olur.

Devam edin ve deneyin.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


Aynı durum, ```circle_areas```'ın ikinci iterable'ın uzunluğundan daha kısa olması durumunda da geçerlidir. Python, iterable'lardan birinde bir sonraki elemanı bulamadığında durur. 

```map()``` fonksiyonuna dair bilgimizi pekiştirmek için, kendi özel ```zip()``` fonksiyonumuzu uygulayacağız. ```zip()``` fonksiyonu, bir dizi iterable alır ve ardından iterable'lardaki her bir elementi içeren bir demet oluşturur. ```map()``` gibi, Python 3'te, bir jeneratör objesi döndürür ve bu, yerleşik ```list``` fonksiyonu çağrılarak kolayca bir listeye dönüştürülebilir. ```map()``` kullanarak kendi zip() fonksiyonumuzu oluşturacağız. Her iki fonksiyonu da anlamak için önce aşağıdaki yorumlamayı inceleyin.

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Bir bonus olarak, eğer ```my_strings``` ve ```my_numbers``` aynı uzunlukta değilse ne olacağı konusunda tahmin yapabilir misiniz? Hayır mı? Deneyin! Bunlardan birinin uzunluğunu değiştirin.

Kendi özel ```zip()``` fonksiyonumuza geçelim!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Şuna bir bakın! ```zip``` ile aynı sonuca ulaştık. 

Ayrıca, ```def my_function()``` standart yöntemiyle bir fonksiyon oluşturmam gerekmediğini de fark ettiniz mi? Bu, ```map()``` ve genel olarak Python ne kadar esnek olduğunu gösterir! Sadece bir ```lambda``` fonksiyonu kullandım. Bu, standart fonksiyon tanımlama yönteminin (```def function_name()```) kullanılmasının yasak olduğu anlamına gelmez, hala kullanılabilir. Sadece daha az kod yazmayı (daha "Pythonik" olmayı) tercih ettim.

```filter()```'a geçelim.

#### Filter
```map()```, bir fonksiyon aracılığıyla iterable'ın her bir elemanını geçirir ve fonksiyondan geçmiş tüm elemanların sonucunu döndürürken, ```filter()```, önce fonksiyonun boolean değerler (true veya false) döndürmesini gerektirir ve ardından iterable'ın her bir elemanını fonksiyon aracılığıyla geçirir, false olanları "elenir". Şu sözdizime sahiptir:

```filter(func, iterable)```

Aşağıdaki noktalar ```filter()``` hakkında belirtilmelidir:

1. ```map()```'in aksine, yalnızca bir iterable gereklidir.
2. ```func``` argümanı bir boolean türü döndürmelidir. Eğer döndürmezse, ```filter``` yalnızca kendisine geçirilen ```iterable```'i döndürür. Ayrıca, yalnızca bir iterable gerektiğinden, ```func```'ın yalnızca bir argüman alması gerektiği de açıktır.
3. ```filter```, ```func``` aracılığıyla iterable'daki her bir elemanı geçirir ve sadece true olarak değerlendirilenleri döndürür. Yani, adına aldanarak, bir "filtre" görevi görür.

Birkaç örneğe bakalım.

Aşağıdakiler, bir Kimya sınavında 10 öğrencinin aldığı puanların bir listesidir (```iterable```). 75'in üzerinde puan alan öğrencileri filtreleyelim... ```filter``` kullanarak.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Bir sonraki örnek, bir palindrom dedektörü olacak. Bir "palindrom", geriye doğru da okunabilen bir kelime, ifade veya dizi demektir. Palindrom olduklarından şüphelenilen kelimelerden oluşan bir tuple (```iterable```) içinden palindrom olanları filtreleyelim.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Bu, ```['madam', 'anutforajaroftuna']``` çıktısı verecektir. 

Oldukça şık, değil mi? Son olarak, ```reduce()```'a bakalım.

#### Reduce
```reduce```, bir **iki argümanlı** fonksiyonu, isteğe bağlı başlangıç argümanıyla birlikte bir iterable'ın elemanlarına kümülatif olarak uygular. Şu sözdizime sahiptir:

```reduce(func, iterable[, initial])```

Burada ```func```, ```iterable``` içindeki her bir elemanın kümülatif bir şekilde uygulandığı fonksiyondur ve ```initial```, hesaplamada elemanın ```iterable```'ın önüne konulduğu ve iterable boş olduğunda bir varsayılan olarak görev yapan isteğe bağlı değerdir. Aşağıdaki noktalar ```reduce()``` hakkında belirtilmelidir:
1. ```func``` iki argüman gerektirir; bunlardan ilki, (eğer ```initial``` sağlanmamışsa) ```iterable```'ın ilk elemanı ve ikincisi, ```iterable```'ın ikinci elemanıdır. Eğer ```initial``` sağlanmışsa, o ilk argüman olur ve ```iterable```'ın ilk elemanı ikinci argüman olur.
2. ```reduce```, ```iterable```'ı tek bir değere "indirir".

Her zamanki gibi birkaç örneğe göz atalım.

Python'un yerleşik ```sum()``` fonksiyonunun kendi versiyonumuzu yaratalım. ```sum()``` fonksiyonu, kendisine geçirilen iterable'daki tüm elemanların toplamını döndürür.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Sonuç, beklediğiniz gibi ```68```'dir.

Ne oldu?

Her zamanki gibi, her şey iterasyonlarla ilgili: ```reduce```, ```numbers``` içindeki ilk ve ikinci elemanları alır ve bunları sırayla ```custom_sum```'a geçirir. ```custom_sum``` bunların toplamını hesaplar ve ```reduce```'a döndürür. ```reduce```, bu sonucu alır ve ```custom_sum```'a birinci eleman olarak ve ```numbers``` içindeki bir sonraki (üçüncü) elemanı ikinci eleman olarak geçirir. Bu işlemi (kümülatif olarak) ```numbers```'ın sonuna kadar sürdürür.

İsteğe bağlı ```initial``` değerini kullanınca ne olacağına bakalım.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Sonuç, beklediğiniz gibi ```78``` olacaktır çünkü ```reduce``` başlangıçta ```10```'u ```custom_sum```'a ilk argüman olarak kullanır.

Python'un Map, Reduce ve Filter fonksiyonları hakkında her şey bu kadar. Her bir fonksiyonun anlaşılmasını sağlamak için aşağıdaki alıştırmaları deneyin.

Alıştırma
--------
Bu alıştırmada, bozuk kodu düzeltmek için ```map```, ```filter``` ve ```reduce```'yi kullanacaksınız.