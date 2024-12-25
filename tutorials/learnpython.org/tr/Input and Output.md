Girdi Alma ve Çıktıyı İstenilen Şekilde Gösterme, etkileşimli kodlamada önemli bir rol oynar. Bu yüzden, çeşitli veri türlerinin girişi ve çıkışına odaklanalım.

###raw_input()
Bu, giriş almak için satır sonuna ulaşana kadar kullanılır. Giriş almanın yeni bir satır karakteriyle sona erdiğini ve giriş satırında herhangi bir boşluk olması durumunda hatayla sonuçlandığını unutmayın.

    # stdin'den gelen girdi yazdırılır
    astring=raw_input()# giriş olarak hello ver
    print raw_input()

Girişi aldıktan sonra, int(), float(), str() gibi fonksiyonları kullanarak bunları istediğimiz veri türüne dönüştürebiliriz.

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Bu özellikle tamsayıları girmek için kullanılır. input()'un raw_input()'a göre avantajı aşağıdaki örnekle açıklanabilir.

    # giriş olarak 2*2 ver
    a=input()
    b=raw_input() # int(raw_input())'ın hatayla sonuçlandığını unutmayın
    print a # 4 yazdırır
    print b # 2*2 yazdırır

###Boşluklarla ayrılan tek bir satırdan iki veya daha fazla veri türünü nasıl alırız?
Burada split() ve map() fonksiyonlarını kullanırız.

    # İlk satıra iki tamsayı ve üçüncü satırda ikiden fazla tamsayı ver
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # ilk satırdan iki tamsayıyı ve ikinci satırdaki tamsayıların toplamını yazdırır

###Çıktı biçimlendirme
Print ifadesinin otomatik olarak yeni bir satır eklediğini muhtemelen fark etmişsinizdir. Yukarıdaki kodda olduğu gibi virgül kullanımı, değerleri tek bir satırda boşlukla ayrılmış bir şekilde yazdırır. sys modülü çıktı biçimlendirme için çeşitli fonksiyonlar sağlasa da burada istediğimiz şekilde çıktı almak için temel biçimlendirme bilgisini nasıl kullanacağımızı öğreneceğiz. Çıktı biçimlendirmeyi öğrenmek için birkaç örneğe bakalım.

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

Çıktı kendiliğinden açıklayıcı olmalıdır.

Alıştırma
--------

Kullanıcıdan adını, yaşını ve ülkesini girmesini isteyen bir program yazın. Program daha sonra bir cümlede bu bilgileri içeren bir mesaj yazdırmalıdır. Program şunları içermelidir:

1. İsim almak için `raw_input()` kullanarak giriş alma.
2. `input()` kullanarak yaş alma ve bunu bir tamsayıya çevirme.
3. Ülke adını almak için `raw_input()` kullanarak giriş alma.
4. İsim, yaş ve ülkeyi içeren bir cümle gösterecek şekilde çıktıyı biçimlendirme.

Program, Python'da giriş işlemi ve string biçimlendirmeyi göstermelidir.