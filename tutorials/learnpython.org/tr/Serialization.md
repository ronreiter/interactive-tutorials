Python, JSON kodlamak ve kodunu çözmek için yerleşik JSON kütüphaneleri sağlar.

Python 2.5'te `simplejson` modülü kullanılırken, Python 2.7'de `json` modülü kullanılır. Bu yorumlayıcı Python 2.7 kullandığından, biz de `json` kullanacağız.

`json` modülünü kullanabilmek için önce içe aktarılması gerekir:

    import json

JSON verileri için iki temel format vardır. Ya bir dizede ya da nesne veri yapısında. Nesne veri yapısı, Python'da, iç içe geçmiş listeler ve sözlüklerden oluşur. Nesne veri yapısı, veri yapısından eleman eklemek, listelemek, aramak ve kaldırmak için Python yöntemlerini (listeler ve sözlükler için) kullanmanıza olanak tanır. Dize formatı, verileri başka bir programa geçirmek veya bir veri yapısına yüklemek için kullanılır.

JSON'u bir veri yapısına geri yüklemek için "loads" yöntemini kullanın. Bu yöntem bir dize alır ve onu tekrar JSON nesne veri yapısına dönüştürür:

    import json 
    print(json.loads(json_string))

Bir veri yapısını JSON'a kodlamak için "dumps" yöntemini kullanın. Bu yöntem bir nesne alır ve bir Dize döndürür:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python, pickle (ve daha hızlı bir alternatif olan cPickle) adlı bir Python özel veri serileştirme yöntemini destekler.

Aynı şekilde kullanabilirsiniz.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Alıştırmanın amacı, "Me" : 800 anahtar-değer çifti eklenmiş JSON dizesini yazdırmaktır.