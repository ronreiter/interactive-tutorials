辞書は配列に似たデータ型ですが、インデックスの代わりにキーと値を使用します。辞書に格納された各値は、インデックスではなく、任意のタイプのオブジェクト（文字列、数値、リストなど）をキーとして使用することでアクセスできます。

たとえば、電話番号のデータベースは以下のように辞書を使用して格納できます。

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

または、同じ値で辞書を初期化する別の表記法は次のとおりです。

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### 辞書の反復処理

辞書はリストのように反復処理が可能です。ただし、リストとは異なり、辞書は格納されている値の順序を保持しません。キーと値のペアを反復処理するには、次の構文を使用します。

    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### 値を削除する

指定したインデックスを削除するには、次のいずれかの表記法を使用します。

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

または:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercise
--------

電話番号 938273443 で "Jake" を電話帳に追加し、Jill を電話帳から削除します。