Programlamada, bir modül belirli bir işlevselliğe sahip bir yazılım parçasıdır. Örneğin, bir masa tenisi oyunu yaparken, bir modül oyun mantığını yönetirken diğer bir modül oyunu ekranda çizer. Her modül, ayrı ayrı düzenlenebilecek farklı bir dosyadan oluşur.

### Modüller yazma

Python'da modüller, .py uzantılı Python dosyalarıdır. Modülün adı, dosya adı ile aynıdır. Bir Python modülü, tanımlanmış ve uygulanmış bir dizi işlev, sınıf veya değişken içerebilir. Yukarıdaki örnek iki dosya içerir:

mygame/

- mygame/game.py

- mygame/draw.py

Python betiği `game.py`, oyunu uygular. `draw.py` dosyasından `draw_game` fonksiyonunu kullanır; başka bir deyişle, oyunu ekranda çizmek için mantığı uygulayan `draw` modülü.

Modüller diğer modüllerden `import` komutu kullanılarak içe aktarılır. Bu örnekte, `game.py` betiği şöyle görünebilir:

`game.py` modülü `draw` modülünü içe aktarır ve bu sayede bu modülde uygulanmış işlevleri kullanabilir. `main` fonksiyonu, oyunu çalıştırmak için yerel fonksiyon `play_game` fonksiyonunu kullanır ve ardından `draw` modülünde `draw_game` adlı bir işlev kullanarak oyunun sonucunu çizer. `draw` modülünden `draw_game` işlevini kullanabilmek için, işlevin hangi modülde uygulandığını belirtmek üzere nokta operatörünü kullanmamız gerekir. `game` modülünden `draw_game` fonksiyonunu referans almak için, `draw` modülünü içe aktarmamız ve ardından `draw.draw_game()` çağırmamız gerekir.

`import draw` direktifi çalıştırıldığında, Python yorumlayıcısı, modül adı ve `.py` eki olan bir dosyayı, betiğin çalıştırıldığı dizinde arar. Bu durumda `draw.py` dosyasını arayacaktır. Bulunursa, içe aktarılacaktır. Bulunamazsa, gömülü modülleri aramaya devam edecektir.

Modül içe aktarılırken bir `.pyc` dosyası oluşturulduğunu fark etmiş olabilirsiniz. Bu, derlenmiş bir Python dosyasıdır. Python, dosyaları Python bayt koduna derlerlikle dosyalar her yüklendiğinde dosyaları analiz etmesi gerekmez. `.pyc` dosyası varsa, `.py` dosyasının yerine yüklenir. Bu işlem kullanıcıya şeffaftır.

### Modül nesnelerini mevcut isim alanına aktarma

Bir isim alanı, her nesnenin adlandırıldığı ve Python'da erişilebileceği bir sistemdir. `from` komutunu kullanarak `draw_game` fonksiyonunu ana betiğin isim alanına aktarırız.

Bu örnekte, modülün adı `draw_game` fonksiyonu öncelik etmiyor, çünkü modül adını `import` komutuyla belirtmiştik.

Bu notasyonun avantajı, modülü tekrar tekrar referans almanız gerekmediğidir. Ancak, bir isim alanı aynı ada sahip iki nesneye sahip olamaz; bu yüzden `import` komutu, isim alanında mevcut olan bir nesnenin yerini alabilir.

### Tüm modül nesnelerini aktarma

Bir modüldeki tüm nesneleri içe aktarmak için `import *` komutunu kullanabilirsiniz:

Bu biraz riskli olabilir çünkü modüldeki değişiklikler içe aktarıldığı modülü etkileyebilir, ancak daha kısadır ve modülden hangi nesneleri içe aktarmak istediğinizi belirtmenizi gerektirmez.

### Özel içe aktarma adı

Modüller istediğiniz herhangi bir ad altında yüklenebilir. Bu, koşullu bir modül içe aktarıldığında kodun geri kalanında aynı adı kullanabilmek için faydalıdır.

Örneğin, isimleri biraz farklı olan iki `draw` modülüne sahipseniz, aşağıdaki gibi yapabilirsiniz:

### Modül başlatma

Bir modül ilk kez çalışan bir Python betiğine yüklendiğinde, modüldeki kodu bir kez çalıştırarak başlatılır. Kodunuzdaki başka bir modül aynı modülü tekrar içe aktarsa bile, tekrar yüklenmeyecektir; bu yüzden modüldeki yerel değişkenler "tekil" olarak davranır, yani yalnızca bir kez başlatılırlar.

Bu durumu, nesneleri başlatmak için kullanabilirsiniz. Örneğin:

Yerel ekran elemanını bu modül içinde başlatabilirsiniz.

### Modül yükleme yolunu genişletme

Python yorumlayıcısına, varsayılan yerel dizin ve yerleşik modüllerin dışında, modülleri nerede arayacaklarını söylemenin birkaç yolu vardır. Ek dizinleri modüllerin aranacağı yerlere belirtmek için `PYTHONPATH` çevre değişkenini kullanabilirsiniz:

Bu, `game.py` dosyasını çalıştırır ve betiğin `foo` dizininden ve yerel dizinden modülleri yüklemesini sağlar.

`sys.path.append` fonksiyonunu da kullanabilirsiniz. Bunu `import` komutunu çalıştırmadan *önce* çalıştırın:

Artık `foo` dizini modüllerin arandığı yolların listesine eklendi.

### Yerleşik modülleri keşfetme

Python standart kütüphanesindeki yerleşik modüllerin tam listesine [buradan](https://docs.python.org/3/library/) göz atabilirsiniz.

Python'da modülleri keşfederken çok kullanışlı iki işlev vardır - `dir` ve `help` işlevleri.

URLs'den veri okumamıza olanak tanıyan `urllib` modülünü içe aktarmak için modülü `import` ederiz:

Her modülde hangi işlevlerin uygulandığını `dir` fonksiyonunu kullanarak arayabiliriz:

Modülde kullanmak istediğimiz işlevi bulduğumuzda, Python yorumlayıcısını kullanarak `help` fonksiyonu ile hakkında daha fazla bilgi okuyabiliriz:

### Paket yazma

Paketler, birden fazla paket ve modül içeren isim alanlarıdır. Sadece dizinlerdir, ancak belirli gereksinimleri vardır.

Python'daki her paket, `__init__.py` adlı özel bir dosya içermesi gereken bir dizindir. Bu dosya, boş olabilir, dizinin bir Python paketi olduğunu belirtir. Bu şekilde, bir modül ile aynı şekilde içe aktarılabilir.

`foo` adlı bir dizin oluşturursak, bu paket adını belirtir, ardından bu paket içinde `bar` adlı bir modül oluşturabiliriz. `foo` dizinine `__init__.py` dosyasını ekleyin.

`bar` modülünü kullanmak için, iki şekilde içe aktarabiliriz:

İlk örnekte, `bar` modülüne her eriştiğimizde `foo` ön ekini kullanmak zorundayız. İkinci örnekte, buna gerek yoktur, çünkü modülü modülümüzün isim alanına içe aktardık.

`__init__.py` dosyası, diğer modülleri iç modüller olarak tutarken paketin API'si olarak hangi modülleri dışa aktardığını `__all__` değişkenini geçersiz kılarak da belirleyebilir:

    __init__.py:

    __all__ = ["bar"]

Egzersiz
--------

Bu egzersizde, `re` modülünde 'find' kelimesini içeren tüm işlevlerin alfabetik olarak sıralanmış bir listesini yazdırın.