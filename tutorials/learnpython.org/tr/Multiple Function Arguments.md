Her Python fonksiyonu, eğer normal bir şekilde tanımlanmışsa, önceden belirlenmiş sayıda argüman alır, şu şekilde:

```python
def myfunction(first, second, third):
    # 3 değişkenle bir şey yap
    ...
```

Değişken sayıda argüman alan fonksiyonlar tanımlamak da mümkündür, şu sözdizimi kullanılarak:

```python
def foo(first, second, third, *therest):
    print("First: %s" % first)
    print("Second: %s" % second)
    print("Third: %s" % third)
    print("And all the rest... %s" % list(therest))
```

"therest" değişkeni, "foo" fonksiyonuna ilk 3 argümandan sonra verilen tüm argümanları alan bir değişken listesidir. Yani `foo(1, 2, 3, 4, 5)` çağrıldığında şu çıktıyı verir:

```python
def foo(first, second, third, *therest):
    print("First: %s" %(first))
    print("Second: %s" %(second))
    print("Third: %s" %(third))
    print("And all the rest... %s" %(list(therest)))

foo(1, 2, 3, 4, 5)
```

Argümanları anahtar kelime ile göndererek, argümanların sırasının önemi olmadan da fonksiyonlara argüman göndermek mümkündür, şu sözdizimi kullanılarak. Aşağıdaki kod şu çıktıyı verir: 
```
The sum is: 6
Result: 1
```

```python
def bar(first, second, third, **options):
    if options.get("action") == "sum":
        print("The sum is: %d" %(first + second + third))

    if options.get("number") == "first":
        return first

result = bar(1, 2, 3, action = "sum", number = "first")
print("Result: %d" %(result))
```

"bar" fonksiyonu 3 argüman alır. Eğer ek bir "action" argümanı alınır ve sayıları toplama talimatı verirse, toplamın çıktısı alınır. Alternatif olarak, "number" parametresinin değeri "first" ise fonksiyon ilk argümanı döndürmesi gerektiğini de bilir.

Exercise
--------

`foo` ve `bar` fonksiyonlarını değişken miktarda argüman (3 veya daha fazla) alacak şekilde doldurun. `foo` fonksiyonu, alınan ekstra argümanların miktarını döndürmelidir. `bar`, `magicnumber` anahtar kelimesi ile verilen argüman 7 değerindeyse `True`, aksi takdirde `False` döndürmelidir.