Bir sözlük, dizilere benzer bir veri türüdür, ancak indeksler yerine anahtarlar ve değerlerle çalışır. Bir sözlükte saklanan her bir değer, bir dizindeki adresi kullanmak yerine herhangi bir türdeki bir nesneyi (bir dize, bir sayı, bir liste vb.) anahtar olarak kullanarak erişilebilir.

Örneğin, bir telefon numaraları veritabanı aşağıdaki gibi bir sözlük kullanılarak saklanabilir:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternatif olarak, bir sözlük aynı değerlerle aşağıdaki notasyonla başlatılabilir:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Sözlüklerde yineleme

Listeler gibi sözlükler de üzerinde yineleme yapılabilir. Ancak, bir liste gibi bir sözlük, içinde saklanan değerlerin sırasını korumaz. Anahtar-değer çiftleri üzerinde yineleme yapmak için aşağıdaki sözdizimini kullanın:

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Bir değeri kaldırma

Belirli bir indeksi kaldırmak için aşağıdaki notasyonlardan birini kullanın:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

veya:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Alıştırma
--------

939273443 numaralı telefonla "Jake"i telefon rehberine ekleyin ve Jill'i telefon rehberinden çıkarın.