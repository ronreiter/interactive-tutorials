Kümeler, yinelemeyen girişler içeren listelerdir. Bir paragrafta kullanılan kelimelerin bir listesini toplamak istediğinizi varsayalım:

    print(set("my name is Eric and Eric is my name".split()))

Bu, "my", "name", "is", "Eric" ve son olarak "and" içeren bir listeyi yazdıracaktır. Cümlenin geri kalanı zaten sette bulunan kelimeleri kullandığından, kelimeler iki kez eklenmez.

Kümeler, diğer kümeler arasında fark ve kesişim hesaplayabilme yeteneğine sahip oldukları için Python'da güçlü bir araçtır. Örneğin, A ve B etkinliklerindeki katılımcıların bir listesine sahipseniz:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Her iki etkinliğe de katılan üyeleri öğrenmek için, "intersection" metodunu kullanabilirsiniz:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Yalnızca bir etkinliğe katılan üyeleri öğrenmek için, "symmetric_difference" metodunu kullanın:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Sadece bir etkinliğe katılan ve diğerine katılmayan üyeleri öğrenmek için, "difference" metodunu kullanın:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Tüm katılımcıların bir listesini almak için, "union" metodunu kullanın:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Aşağıdaki alıştırmada, verilen listeleri kullanarak etkinlik A'dan etkinlik B'ye katılmayan tüm katılımcıları içeren bir küme yazdırın.