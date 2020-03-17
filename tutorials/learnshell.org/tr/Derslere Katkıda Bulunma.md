Derslere Katkıda Bulunma
----------------------
Derslere katkıda bulunmak için sadece aşağıdaki repository'i fork edebilirsiniz:

[[https://github.com/ronreiter/interactive-tutorials]]

Daha sonra dersler ekleyebilir veya düzenleyebilir, ardından da bana pull request gönderebilirsiniz.

Bir ders hazırlamak için, tutorials klasörü altına bir Markdown sayfası oluşturun ve daha sonra hoş geldiniz sayfasına bağlantı verin. Bağlantıyı ekledikten sonra, Flask web sunucusunda doğru çalışıp çalışmadığını denetleyin.

Oluşturduğunuz derse bağlantı vermek için, çift köşeli parantez içinde sayfanızın adını yazın ve gerekli belgeye (genellikle Hoş geldiniz.md sayfasıdır) ekleyin.

Her ders, konuya dair kısa bir açıklamaya ve kullanıcı tarafından gerçekleştirlecek küçük bir ödeve sahip olmalıdır. Kullanıcılar ödevlerini tamamlamaları için "Expected Output" panelinde yazdığınız çıktıyı vermelidirler.

Her ders şu kemik yapıya sahip olmalıdır:

### Dosya adı.md

    Tutorial
    --------
    Dersinizde öğretme bölümü burada gerçekleşir. Kullanıcılar bu bölümde bilgiyi alırlar.

    Exercise
    --------
    Burada kullanıcılara yaptıkları ödevin ne olduğu ve amacı anlatılır. Anlatılan ders ile yapılabilecek bir ödev olması gerekir.

    Tutorial Code
    -------------
    Burada, interaktif yorumlayıcı penceresinde çıkan kodu yazmalısınız. Örneğin siz bir
    boş fonksiyon yazmalısınız ki, kullanıcı bu fonksiyonun içini doldurup ödevini tamamlasın.

    Expected Output
    ---------------
    Kullanıcının ödevi başarılı ile tamamlaması sonucunda alması gereken çıktıyı buraya yazmalısınız.

    Solution
    --------
    Verilen ödevin çözümü bu bölümde yer almalıdır.

