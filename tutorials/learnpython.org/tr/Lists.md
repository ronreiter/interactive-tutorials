Listeler, dizilere çok benzer. Her türlü değişkeni içerebilirler ve istediğiniz kadar değişken içerebilirler. Listeler aynı zamanda çok basit bir şekilde döngüye sokulabilir. İşte bir listenin nasıl oluşturulacağına dair bir örnek.

mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)
print(mylist[0]) # prints 1
print(mylist[1]) # prints 2
print(mylist[2]) # prints 3

# prints out 1,2,3
for x in mylist:
    print(x)

Var olmayan bir indekse erişmek bir istisna (hata) oluşturur.

mylist = [1,2,3]
print(mylist[10])

Exercise
--------

Bu alıştırmada, doğru listelere "append" liste yöntemini kullanarak sayıları ve metinleri eklemeniz gerekecek. "numbers" listesine 1, 2 ve 3 sayıları ile "strings" değişkenine 'hello' ve 'world' kelimelerini eklemelisiniz.

Ayrıca, ikinci adı names listesinde parantez operatörü `[]` kullanarak second_name değişkenine yerleştirmeniz gerekecek. Dikkat edin, indeks sıfırdan başlar, bu yüzden listedeki ikinci öğeye erişmek istiyorsanız, indeksi 1 olacaktır.