Programlama yaparken hatalar meydana gelir. Bu, hayatın bir gerçeğidir. Belki kullanıcı yanlış bir giriş yapmıştır. Belki bir ağ kaynağı mevcut değildir. Belki programın belleği tükenmiştir. Ya da belki programcı bir hata yapmıştır!

Python'ın hatalara çözümü istisnalardır. Daha önce bir istisna görmüş olabilirsiniz.

    print(a)
    
    #hata
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Oops! 'a' değişkenine bir değer atamayı unuttuk.

Ancak bazen istisnaların programı tamamen durdurmasını istemezsiniz. Bir istisna yükseltildiğinde özel bir şey yapmayı isteyebilirsiniz. Bu, bir *try/except* bloğu içinde yapılır.

İşte basit bir örnek: Diyelim ki bir liste üzerinde yineleme yapıyorsunuz. 20 sayı üzerinde yineleme yapmanız gerekiyor, ancak liste kullanıcı girişiyle oluşturulmuş ve içinde 20 sayı olmayabilir. Listenin sonuna geldiğinizde, geri kalan sayıları 0 olarak yorumlamak istersiniz. Bunu şöyle yapabilirsiniz:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Bir listenin var olmayan bir dizinine erişildiğinde yükseltilir
                do_stuff_with_number(0)
    
    catch_this()

Gördünüz mü, o kadar da zor değildi! Bunu herhangi bir istisna ile yapabilirsiniz. İstisnalarla başa çıkmak hakkında daha fazla detay için, [Python Belgeleri](http://docs.python.org/tutorial/errors.html#handling-exceptions) 'ne bakabilirsiniz.

Exercise
--------

Tüm istisnaları yönetin! Önceki dersleri hatırlayın ve oyuncunun soyadını döndürün.