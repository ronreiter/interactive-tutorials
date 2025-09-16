Bir Closure, bellekte mevcut olmasa bile çevreleyen kapsamlar içindeki değerleri hatırlayan bir fonksiyon nesnesidir. Adım adım inceleyelim.

Öncelikle, **İç İçe Fonksiyon**, başka bir fonksiyon içinde tanımlanmış bir fonksiyondur. İç içe fonksiyonların çevreleyen kapsamın değişkenlerine erişebileceğini unutmamak çok önemlidir. Ancak, en azından Python'da, bunlar yalnızca okunabilir. Bununla birlikte, bu değişkenleri değiştirmek için açıkça "nonlocal" anahtar kelimesini kullanabilirsiniz.

Örneğin:

    def transmit_to_space(message):
        "Bu çevreleyen fonksiyon"
        def data_transmitter():
            "İç içe fonksiyon"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test mesajı"))

Bu, 'data_transmitter' fonksiyonu 'message' değişkenine erişebildiği için iyi çalışır. "nonlocal" anahtar kelimesinin kullanımını göstermek için, şu örneği göz önünde bulundurun:

    def print_msg(number):
        def printer():
            "Burada nonlocal anahtar kelimesini kullanıyoruz"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

nonlocal anahtar kelimesi olmadan, çıktı "3 9" olacaktır, ancak kullanılmasıyla "3 3" elde ederiz, yani "number" değişkeninin değeri değiştirilir.

Şimdi, iç içe fonksiyonu çağırmak yerine fonksiyon nesnesini döndürmeyi deneyelim. (Unutmayın ki, fonksiyonlar da nesnelerdir. (Bu Python.))

    def transmit_to_space(message):
        "Bu çevreleyen fonksiyon"
        def data_transmitter():
            "İç içe fonksiyon"
            print(message)
        return data_transmitter

Ve fonksiyonu şöyle çağırırız:

    def transmit_to_space(message):
        "Bu çevreleyen fonksiyon"
        def data_transmitter():
            "İç içe fonksiyon"
            print(message)
        return data_transmitter

  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

"transmit_to_space()" fonksiyonunun yürütülmesi tamamlandığında bile, mesaj korundu. Orijinal bu diğer fonksiyonların sonlanmasından sonra bile verilerin bazı koda bağlı olduğu bu tekniğe Python'da closure denir.

AVANTAJ: Closure'lar global değişken kullanımını önleyebilir ve bir tür veri gizleme sağlar. (Örneğin, bir sınıfta birkaç yöntem olduğunda closure'lar kullanın).

Ayrıca, Python'daki Decorator'lar closure'ları yoğun bir şekilde kullanır.

Alıştırma
--------

İç içe bir döngü ve closure kullanarak, closure'lar kullanılarak multiple_with_5() veya multiple_with_4() fonksiyonları oluşturmak için fonksiyonlar oluşturacak bir Python closure'u yapın.