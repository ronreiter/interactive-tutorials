Python çok basit bir dil ve oldukça açık bir sözdizimine sahiptir. Programcıları, hazırlık kodları olmadan program yazmaya teşvik eder. Python'daki en basit yönerge "print" yönergesidir - sadece bir satırı (ve C dilinde olmadığı gibi bir yeni satır ekleyerek) yazdırır.

İki ana Python sürümü vardır: Python 2 ve Python 3. Python 2 ve 3 oldukça farklıdır. Bu eğitim Python 3 kullanmaktadır, çünkü daha anlamsal olarak doğrudur ve daha yeni özellikleri destekler.

Örneğin, Python 2 ve 3 arasındaki bir fark `print` ifadesidir. Python 2'de, "print" bir fonksiyon değildir ve bu nedenle parantezsiz çağrılır. Ancak Python 3'te bir fonksiyondur ve parantezlerle çağrılması gerekir.

Python 3'te bir dizeyi yazdırmak için sadece şunu yazın:

    print("This line will be printed.")

### Girintileme

Python, bloklar için kıvırcık parantezler yerine girintileme kullanır. Hem sekmeler hem de boşluklar desteklenir, fakat standart girintileme, standart Python kodunun dört boşluk kullanmasını gerektirir. Örneğin:

    x = 1
    if x == 1:
        # dört boşlukla girintilenmiş
        print("x is 1.")

Egzersiz
--------

"print" fonksiyonunu kullanarak "Hello, World!" satırını yazdırın.