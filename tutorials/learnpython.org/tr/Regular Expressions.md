# Regular Expressions (sometimes shortened to regexp, regex, or re) are a
    Regular ifadeler (bazen regexp, regex veya re olarak kısaltılır), metin içindeki desenleri eşleştirmek için bir araçtır. Python'da, re modülümüz vardır. 
    Düzenli ifadelerin uygulamaları geniş çapta yaygındır, ancak oldukça karmaşıktırlar, bu yüzden belli bir görev için bir regex kullanmayı düşünürken alternatifleri düşünün ve regexlere son çare olarak başvurun.

    An example regex is `r"^(From|To|Cc).*?python-list@python.org"` Now for an
    Örnek bir regex `r"^(From|To|Cc).*?python-list@python.org"` şeklindedir. Şimdi bir açıklama:
    Kare işareti `^` metnin bir satırın başında eşleştiği anlamına gelir. 
    Takip eden grup, `(From|To|Cc)` ile olan kısım, satırın boru `|` ile ayrılan kelimelerden biriyle başlaması gerektiği anlamına gelir. 
    Bu, VEYA operatörü olarak adlandırılır ve grup içindeki kelimelerden herhangi biriyle başlarsa regex eşleşecektir. 
    `.*?`, satır sonu karakteri `\n` hariç herhangi bir sayıda karakterle eşleşmek anlamına gelir. 
    Aç gözlü olmayan kısım, mümkün olan en az tekrarı eşleştirmek anlamına gelir. 
    `.` karakteri, satır sonu olmayan herhangi bir karakter anlamına gelir, `*` 0 veya daha fazla kez tekrarlamak anlamına gelir ve `?` karakteri aç gözlü olmamasını sağlar.

    So, the following lines would be matched by that regex:
    Dolayısıyla, aşağıdaki satırlar bu regex tarafından eşleştirilecektir:
    `From: python-list@python.org`
    `To: !asp]<,.      python-list@python.org`

    A complete reference for the re syntax is available at the [python
    Düzenli ifade sözdizimi için tam bir referans [python dokümanlarında](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax") bulunmaktadır.

    As an example of a "proper" email-matching regex (like the one in the
    Doğru bir e-posta eşleştirme regexinin örneği olarak (alıştırmadaki gibi), [buraya](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html) bakın.