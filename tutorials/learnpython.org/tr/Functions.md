### Fonksiyonlar Nedir?

Fonksiyonlar, kodunuzu kullanışlı bloklara ayırmanın uygun bir yoludur ve bu sayede kodumuzu düzenli hale getirir, daha okunabilir yapar, yeniden kullanmamızı sağlar ve zaman kazandırır. Ayrıca, fonksiyonlar programcıların kodlarını paylaşabilmeleri için arayüzler tanımlamanın ana yoludur.

### Python'da nasıl fonksiyon yazılır?

Önceki eğitimlerde gördüğümüz gibi, Python bloklar kullanır.

Bir blok, şu formatta yazılan bir kod alanıdır:

    block_head:
        1st block line
        2nd block line
        ...

Burada bir blok satırı daha fazla Python kodudur (hatta başka bir blok bile olabilir) ve blok başlığı şu formattadır:
block_keyword block_name(argument1,argument2, ...)
Zaten bildiğiniz blok anahtar kelimeler "if", "for" ve "while"dır.

Python'da fonksiyonlar, "def" blok anahtar kelimesi ile tanımlanır ve ardından blok adı olarak fonksiyonun adı gelir.
Örneğin:

    def my_function():
        print("Hello From My Function!")

Fonksiyonlar ayrıca argümanlar da alabilir (çağırıcıdan fonksiyona aktarılacak değişkenler).
Örneğin:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))

Fonksiyonlar, çağırıcıya bir değer dönebilir, bunun için 'return' anahtar kelimesi kullanılır.
Örneğin:

    def sum_two_numbers(a, b):
        return a + b

### Python'da fonksiyonlar nasıl çağrılır?

Sadece fonksiyonun adını yazın ve ardından (), gerekli argümanları parantezlerin içine yerleştirin.
Örneğin, yukarıda yazılan fonksiyonları çağıralım (önceki örnekte):

    # 3 fonksiyonumuzu tanımlayın
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # basit bir selamlamayı yazdır
    my_function()

    #yazdırır - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # bu satırdan sonra x değeri 3 olacak!
    x = sum_two_numbers(1,2)  


Egzersiz
--------

Bu egzersizde mevcut bir fonksiyonu kullanacak ve kendi fonksiyonunuzu ekleyerek tam işlevsel bir program oluşturacaksınız.

1. "Daha düzenli kod", "Daha okunabilir kod", "Daha kolay kod yeniden kullanımı", "Programcıların kodları paylaşmasını ve birbirine bağlamasını sağlama" gibi stringlerden oluşan bir liste döndüren `list_benefits()` adlı bir fonksiyon ekleyin.

2. Tek bir string argümanı alan ve verilen string ile başlayan ve ardından " is a benefit of functions!" biten bir cümle döndüren `build_sentence(info)` adlı bir fonksiyon ekleyin.

3. Tüm fonksiyonların birlikte çalıştığını görün ve çalıştırın!