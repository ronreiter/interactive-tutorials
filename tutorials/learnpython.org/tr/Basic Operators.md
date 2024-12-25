Bu bölüm, Python'da temel operatörlerin nasıl kullanılacağını açıklar.

### Aritmetik Operatörler       

Diğer programlama dillerinde olduğu gibi, toplama, çıkarma, çarpma ve bölme operatörleri sayılarla kullanılabilir.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Sonucun ne olacağını tahmin etmeye çalışın. Python işlem önceliğine uyar mı?

Kullanılabilir diğer bir operatör ise, bölümün kalanını döndüren modül (%) operatörüdür. bölüm % bölen = kalan.

    remainder = 11 % 3
    print(remainder)

İki çarpma sembolü kullanmak bir üslü işlemi ifade eder.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Operatörleri Stringlerle Kullanma

Python, stringleri toplama operatörü kullanarak birleştirmeyi destekler:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python ayrıca, tekrarlayan bir dizilimle bir string oluşturmak için stringleri çarpmayı da destekler:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Operatörleri Listelerle Kullanma

Listeler, toplama operatörleri ile birleştirilebilir:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Stringlerde olduğu gibi, Python çarpma operatörünü kullanarak tekrarlayan bir dizilimle yeni listeler oluşturmayı da destekler:

    print([1,2,3] * 3)

Egzersiz
--------

Bu egzersizin hedefi, `x_list` ve `y_list` adında iki liste oluşturmaktır ve bu listeler, sırasıyla `x` ve `y` değişkenlerinin 10 örneğini içermelidir.
Ayrıca, oluşturduğunuz iki listeyi birleştirerek içinde `x` ve `y` değişkenlerinin her birinin 10 kez bulunduğu `big_list` adında bir liste oluşturmanız gerekmektedir.