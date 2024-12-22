Python tamamen nesne tabanlıdır ve "statik olarak türlendirilmemiştir". Değişkenleri kullanmadan önce tanımlamanız veya türlerini belirtmeniz gerekmez. Python'da her değişken bir nesnedir.

Bu eğitim, birkaç temel değişken türünü ele alacaktır.

### Numbers
Python iki tür sayıyı destekler - tam sayılar (bütün sayılar) ve kayan noktalı sayılar (ondalık sayılar). (Ayrıca karmaşık sayıları da destekler, ancak bu eğitimde açıklanmayacaktır).

Bir tam sayı tanımlamak için aşağıdaki sözdizimini kullanın:

    myint = 7
    print(myint)

Bir kayan nokta sayısı tanımlamak için aşağıdaki notasyonlardan birini kullanabilirsiniz:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Dizeler, tek tırnak ya da çift tırnak ile tanımlanır.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

İkisi arasındaki fark, çift tırnak kullanmanın, dizelere apostrof eklemeyi kolaylaştırmasıdır (tek tırnak kullanırken bu apostroflar dizenin bitmesine neden olur).

    mystring = "Don't worry about apostrophes"
    print(mystring)

Dizelere taşıma dönüşleri, ters eğik çizgiler ve Unicode karakterleri gibi şeyleri eklemeyi kolaylaştıran ek tanımlama varyasyonları vardır. Bunlar bu eğitimin kapsamı dışındadır, ancak [Python belgelerinde](http://docs.python.org/tutorial/introduction.html#strings "Python Strings Eğitiminde") ele alınmıştır.

Basit operatörler sayılar ve dizeler üzerinde çalıştırılabilir:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Aynı satırda "eş zamanlı" olarak birden fazla değişken ataması şu şekilde yapılabilir:

    a, b = 3, 4
    print(a, b)

Sayılar ve dizeler arasında operatör karışımı desteklenmez:

    # Bu çalışmayacaktır!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Egzersiz
--------

Bu egzersizin hedefi bir dize, bir tam sayı ve bir kayan nokta sayısı oluşturmaktır. Dize `mystring` olarak adlandırılmalı ve "hello" kelimesini içermelidir. Kayan nokta sayısı `myfloat` olarak adlandırılmalı ve 10.0 sayısını içermelidir, ve tam sayı `myint` olarak adlandırılmalı ve 20 sayısını içermelidir.