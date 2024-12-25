Nesneler, değişkenlerin ve fonksiyonların tek bir varlıkta kapsüllenmesidir. Nesneler, değişkenleri ve fonksiyonlarını sınıflardan alır. Sınıflar, nesnelerinizi oluşturmak için bir şablon gibidir.

Çok basit bir sınıf şöyle görünebilir:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

"self" parametresini neden eklemeniz gerektiğini birazdan açıklayacağız. Öncelikle, yukarıdaki sınıfı (şablonu) bir nesneye atamak için şu adımları izlersiniz:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Artık "myobjectx" değişkeni, "MyClass" adlı sınıfın bir nesnesini tutar ve bu nesne, sınıfta tanımlanan değişkenleri ve fonksiyonları içerir.

### Nesne Değişkenlerine Erişim

Yeni oluşturduğunuz "myobjectx" nesnesinin içindeki değişkene erişmek için şu adımları izlersiniz:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Örneğin, aşağıdaki kod "blah" yazısını çıktılar:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Aynı sınıfa (aynı değişkenler ve fonksiyonlar tanımlanmış olan) sahip birden fazla farklı nesne oluşturabilirsiniz. Ancak, her nesne sınıfta tanımlanan değişkenlerin bağımsız kopyalarını içerir. Örneğin, başka bir nesne tanımlayıp yukarıdaki değişkendeki dizeyi değiştirirsek:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Her iki değeri de yazdır
    print(myobjectx.variable)
    print(myobjecty.variable)


### Nesne Fonksiyonlarına Erişim

Bir nesnenin içindeki bir fonksiyona erişmek için bir değişkene erişim yaparken kullanılan notasyona benzer şekilde yaparsınız:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Yukarıdaki kod, "This is a message inside the class." mesajını yazdırır.

### __init__()

`__init__()` fonksiyonu, sınıf başlatıldığında çağrılan özel bir fonksiyondur. Sınıf içinde değer atamak için kullanılır.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) # '7' yazdırır
    
Alıştırma
--------

Araçlar için tanımlanmış bir sınıfımız var. car1 ve car2 adında iki yeni araç oluşturun.
car1'i, ismi Fer olan, kırmızı bir üstü açılır araba olarak $60,000.00 değerinde ayarlayın,
ve car2'yi, ismi Jump olan, mavi bir van olarak $10,000.00 değerinde ayarlayın.