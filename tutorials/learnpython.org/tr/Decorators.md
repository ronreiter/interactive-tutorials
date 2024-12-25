Dekoratörler, [fonksiyonlar](http://www.learnpython.org/en/Functions ""), [metotlar veya sınıflar](http://www.learnpython.org/en/Classes%20and%20Objects "") gibi çağrılabilir nesnelerde basit değişiklikler yapmanıza olanak tanır. Bu eğitim için fonksiyonlarla ilgileneceğiz. Sözdizimi

    @decorator
    def functions(arg):
        return "value"

Şuna eşdeğerdir:

    def function(arg):
        return "value"
    function = decorator(function) # bu, fonksiyonu dekoratöre geçirir ve onu fonksiyona yeniden atar

Görüldüğü gibi, bir dekoratör, bir fonksiyon alıp bir tane döndüren başka bir fonksiyondur. Örneğin, bunu yapabilirsiniz:

    def repeater(old_function):
        def new_function(*args, **kwds): # *args ve **kwds nasıl çalışır öğrenin learnpython.org/en/Multiple%20Function%20Arguments
            old_function(*args, **kwds) # eski fonksiyonu çalıştırıyoruz
            old_function(*args, **kwds) # iki kez yapıyoruz
        return new_function # new_function'u döndürmeliyiz, yoksa onu değere yeniden atamazdı

Bu, bir fonksiyonun iki kez tekrarlanmasını sağlar.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Çıktıyı değiştirebilirsiniz

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # dönüş değerini değiştir
        return new_function

giriş değiştir

    def double_Ii(old_function):
        def new_function(arg): # yalnızca eski fonksiyon bir argümana sahipse çalışır
            return old_function(arg * 2) # verilen argümanı değiştir
        return new_function

ve kontrol yapabilirsiniz.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Bu, yanlış bir şey yapmasındansa bir hata oluşturur
            old_function(arg)
        return new_function

Diyelim ki çıktıyı değişken bir miktarla çarpmak istiyorsunuz. Dekoratörü tanımlayabilir ve şu şekilde kullanabilirsiniz:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # yeni üreticiyi döndürür
    
    # Kullanım
    @multiply(3) # multiply bir üretici değildir, ancak multiply(3) öyledir
    def return_num(num):
        return num
        
    # Şimdi return_num dekoratörle süslenir ve kendisine yeniden atanır
    return_num(5) # 15 döndürmelidir

Eski fonksiyonla istediğiniz her şeyi yapabilirsiniz, hatta onu tamamen yok sayabilirsiniz! İleri düzey dekoratörler ayrıca doc stringini ve argüman sayısını da manipüle edebilir. Bazı havalı dekoratörler için, <http://wiki.python.org/moin/PythonDecoratorLibrary> adresine gidin.

Alıştırma
--------
Bir argümana sahip fonksiyonları dekore eden bir dekoratör döndüren bir dekoratör fabrikası yapın. Fabrika bir argüman, bir tür almalı ve ardından fonksiyonu, girdinin doğru türde olup olmadığını kontrol eden bir dekoratör döndürmeli. Yanlış ise, print("Bad Type") yazmalıdır (Gerçekte, bir hata oluşturmalıdır, ancak hata oluşturma bu eğitimde yer almamaktadır). Eğer kafanız karışırsa (öyle olacağımı biliyorum) eğitim koduna ve beklenen çıktıya bakın. isinstance(object, type_of_object) veya type(object) kullanmanız yardımcı olabilir.