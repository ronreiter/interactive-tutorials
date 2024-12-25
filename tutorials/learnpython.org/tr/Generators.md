Jeneratörler uygulaması çok kolay, ancak anlaması biraz zordur.

Jeneratörler, yineleyiciler oluşturmak için kullanılır, ancak farklı bir yaklaşımla. Jeneratörler, öğelerden oluşan bir yineleme kümesi döndüren basit fonksiyonlardır, bir seferde bir tane, özel bir şekilde.

Bir öğe kümesi üzerinde for ifadesi kullanılarak bir yineleme başladığında, jeneratör çalıştırılır. Jeneratörün fonksiyon kodu bir "yield" ifadesine ulaştığında, jeneratör yürütmeyi for döngüsüne geri verir ve kümeden yeni bir değer döndürür. Jeneratör fonksiyonu, istediği kadar değer (muhtemelen sonsuz) üretebilir ve her birini sırasıyla yield eder.

İşte 7 rastgele tamsayı döndüren basit bir jeneratör fonksiyonu örneği:

      import random
      
      def lottery():
          # 1 ile 40 arasında 6 sayı döndürür
          for i in range(6):
              yield random.randint(1, 40)
      
          # 1 ile 15 arasında 7. bir sayı döndürür
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("Ve bir sonraki sayı... %d!" %(random_number))

Bu fonksiyon, rastgele sayıları nasıl üreteceğine kendi başına karar verir ve her seferinde bir yield ifadesini gerçekleştirir, arada ana for döngüsüne yürütmeyi geri döndürmek için duraklar.

Alıştırma
--------

Bir jeneratör fonksiyonu yazın ve Fibonacci serisini döndürsün. Bunlar, aşağıdaki formül kullanılarak hesaplanır: Serinin ilk iki sayısı her zaman 1'e eşittir ve her bir ardışık döndürülen sayı, son iki sayının toplamıdır. İpucu: Jeneratör fonksiyonda yalnızca iki değişken kullanabilir misiniz? Atamaların aynı anda yapılabileceğini unutmayın. Kod

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

a ve b'nin değerlerini eş zamanlı olarak değiştirecektir.