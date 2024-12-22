Bu bölüm, Python'da temel operatörlerin nasıl kullanılacağını açıklar.

### Arithmetic Operators       

Diğer programlama dillerinde olduğu gibi, toplama, çıkarma, çarpma ve bölme operatörleri sayılarla kullanılabilir.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Sonucun ne olacağını tahmin etmeye çalışın. Python işlem önceliğine uyar mı?

Kullanılabilen bir diğer operatör ise, tam sayılı bölme işleminin kalanını döndüren modülüs (%) operatörüdür. dividend % divisor = remainder.

    remainder = 11 % 3
    print(remainder)

İki çarpma sembolü kullanmak, bir üs ilişkisinin kurulmasını sağlar.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python, artı operatörünü kullanarak dizeleri birleştirmeyi destekler:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python ayrıca, bir dizeyi tekrar eden bir dizge oluşturacak şekilde çarpmayı da destekler:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

Listeler, artı operatörüyle birleştirilebilir:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Dizelerde olduğu gibi, Python çarpma operatörünü kullanarak tekrar eden bir dizge ile yeni listeler oluşturmayı da destekler:

    print([1,2,3] * 3)

Exercise
--------

Bu alıştırmanın amacı, `x_list` ve `y_list` adında iki liste oluşturmaktır. Bu listeler, sırasıyla 10 tane `x` ve `y` değişkeni içermelidir. Ayrıca, oluşturduğunuz iki listeyi birleştirerek, her biri 10 kez `x` ve `y` değişkenlerini içeren `big_list` adında bir liste oluşturmanız gerekmektedir.