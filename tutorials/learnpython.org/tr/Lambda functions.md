Normalde bir işlevi, kodun bir yerinde `def` anahtar kelimesini kullanarak tanımlarız ve ne zaman bu işlevi kullanmamız gerekirse çağırırız.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Artık işlevi bir yerde tanımlayıp çağırmak yerine, Python'un lambda işlevlerini kullanarak, çağırdığımız yerde tanımlanan satır içi işlevleri kullanabiliriz. Yani yalnızca bir kez kullanmak için bir işlev tanımlayıp koda yeniden bakmamız gerekmez.

İsimleri olması gerekmez, bu yüzden anonim işlevler olarak da adlandırılırlar. Lambda işlevini tanımlamak için `lambda` anahtar kelimesini kullanırız.

    your_function_name = lambda inputs : output

Yukarıdaki toplama örneği lambda işlevi kullanılarak şu şekilde olur:

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Burada **sum** değişkenine lambda işlevini atıyoruz ve **a** ve **b** argümanlarını verdiğimizde, normal bir işlev gibi çalışıyor.



Alıştırma
--------
Verilen listedeki bir sayının tek olup olmadığını kontrol etmek için lambda işlevleri kullanarak bir program yazın. Sayı tek ise "True", değilse "False" basın her bir eleman için.