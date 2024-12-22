Python, yeni biçimlendirilmiş dizeler oluşturmak için C tarzı dize biçimlendirmesini kullanır. "%" operatörü, "tuple" (sabit boyutlu bir liste) içinde tutulan bir değişken setini, normal metinle birlikte "%s" ve "%d" gibi "argüman belirleyicileri" içeren bir format dizesiyle biçimlendirmek için kullanılır.

Diyelim ki içinde kullanıcı adınız olan "name" adlı bir değişkeniniz var ve o kullanıcıya bir selamlama yazdırmak istiyorsunuz.

    # Bu, "Hello, John!" çıktısını verir
    name = "John"
    print("Hello, %s!" % name)

İki veya daha fazla argüman belirleyicisi kullanmak için bir demet (parantez) kullanın:

    # Bu, "John is 23 years old." çıktısını verir
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Bir dize olmayan herhangi bir nesne de %s operatörü kullanılarak biçimlendirilebilir. Bu nesnenin "repr" yönteminden dönen dize, bir dize olarak biçimlendirilir. Örneğin:

    # Bu, "A list: [1, 2, 3]" çıktısını verir
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Bilmeniz gereken bazı temel argüman belirleyicileri şunlardır:


`%s - Dize (veya sayılar gibi bir dizge temsiline sahip herhangi bir nesne)`

`%d - Tamsayılar`

`%f - Ondalık sayılar`

`%.<hane sayısı>f - Noktadan sağa sabit miktarda hane ile ondalık sayılar.`

`%x/%X - Onaltılık gösterimdeki tamsayılar (küçük/büyük harf)`


Alıştırma
--------

Aşağıdaki söz dizimini kullanarak veriyi yazdıran bir format dizesi yazmanız gerekecek:
    `Hello John Doe. Your current balance is $53.44.`