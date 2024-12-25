Python'da functools kütüphanesinden partial fonksiyonunu kullanarak kısmi fonksiyonlar oluşturabilirsiniz.

Kısmi fonksiyonlar, x parametreli bir fonksiyonu, daha az parametresi olan ve kısıtlı fonksiyon için sabit değerler belirlenmiş bir fonksiyona türetmenizi sağlar.

Gerekli İçe Aktarım:

    from functools import partial

Bu kod 8 değerini döndürecek.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # 2 ile çarpan yeni bir fonksiyon oluştur
    dbl = partial(multiply, 2)
    print(dbl(4))

Önemli bir not: Varsayılan değerler, değişkenleri soldan itibaren değiştirmeye başlayacaktır. 2, x'in yerini alacaktır.
y, dbl(4) çağrıldığında 4'e eşit olacaktır. Bu örnekte fark etmeyebilir ama aşağıdaki örnekte fark eder.

Alıştırma
--------
partial() çağrısı yaparak ve func() içindeki ilk üç değişkeni değiştirerek sağlanan fonksiyonu düzenleyin. Ardından, çıktının 60 eşit olması için yalnızca bir giriş değişkeni kullanarak yeni kısmi fonksiyon ile yazdırın.