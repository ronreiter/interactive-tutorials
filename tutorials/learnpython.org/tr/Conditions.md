Python, koşulları değerlendirmek için boolean mantığı kullanır. Boolean değerleri True ve False, bir ifade karşılaştırıldığında veya değerlendirildiğinde döndürülür. Örneğin:

x = 2
print(x == 2) # True çıktısını verir
print(x == 3) # False çıktısını verir
print(x < 3) # True çıktısını verir

Değişken atamasının tek eşittir operatörü "=" kullanılarak, iki değişken arasındaki karşılaştırmanın ise çift eşittir operatörü "==" kullanılarak yapıldığını belirtmek önemlidir. "Eşit değil" operatörü "!=" olarak işaretlenir.

### Mantıksal operatörler

"Mantıksal ve" ve "veya" operatörleri, karmaşık boolean ifadeleri oluşturmayı sağlar, örneğin:

name = "John"
age = 23
if name == "John" and age == 23:
    print("Adınız John ve ayrıca 23 yaşındasınız.")

if name == "John" or name == "Rick":
    print("Adınız ya John ya da Rick.")

### "in" operatörü

"in" operatörü, belirtilen bir nesnenin bir liste gibi bir yinelenebilir nesne konteynırında mevcut olup olmadığını kontrol etmek için kullanılabilir:

name = "John"
if name in ["John", "Rick"]:
    print("Adınız ya John ya da Rick.")

Python, blokları tanımlamak için parantez yerine girintiyi kullanır. Standart Python girintisi 4 boşluktur, ancak tutarlı olduğu sürece sekmeler ve diğer boşluk boyutları da çalışır. Dikkat edilmesi gereken şey, kod bloklarının bir sonlandırmaya ihtiyaç duymadığıdır.

Kod bloklarını kullanarak Python'un "if" ifadesinin kullanıldığı bir örnek:

statement = False
another_statement = True
if statement is True:
    # bir şey yap
    pass
elif another_statement is True: # else if
    # başka bir şey yap
    pass
else:
    # başka bir şey daha yap
    pass

Örneğin:

x = 2
if x == 2:
    print("x ikiye eşittir!")
else:
    print("x ikiye eşit değildir.")

Bir ifade aşağıdakilerden biri doğruysa true olarak değerlendirilir:
1. "True" boolean değeri verilmişse veya aritmetik bir karşılaştırma gibi bir ifade kullanılarak hesaplanmışsa.
2. "Boş" olarak değerlendirilmeyen bir nesne verilmişse.

Boş olarak değerlendirilen bazı nesneler örnekleri:
1. Boş bir string: ""
2. Boş bir liste: []
3. Sayı sıfır: 0
4. False boolean değişkeni: False

### 'is' operatörü

Çift eşittir operatörü "=="nın aksine, "is" operatörü değişkenlerin değerlerini değil, doğrudan kendilerini eşleştirir. Örneğin:

x = [1,2,3]
y = [1,2,3]
print(x == y) # True çıktısını verir
print(x is y) # False çıktısını verir

### "not" operatörü

"not" ifadesinin önüne konulur ve boolean ifadesini ters çevirir:

print(not False) # True çıktısını verir
print((not False) == (False)) # False çıktısını verir

Egzersiz
--------

Her if ifadesinin True olarak değerlendirilmesi için ilk bölümdeki değişkenleri değiştirin.