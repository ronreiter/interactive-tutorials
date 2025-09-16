Pythonは、JSONをエンコードおよびデコードするための組み込みのJSONライブラリを提供しています。

Python 2.5ではsimplejsonモジュールが使われており、Python 2.7ではjsonモジュールが使用されます。このインタープリタはPython 2.7を使用しているため、jsonを使用します。

jsonモジュールを使用するには、まずインポートする必要があります:

    import json

JSONデータには2つの基本的な形式があります。文字列またはオブジェクトデータ構造です。Pythonにおけるオブジェクトデータ構造は、リストや辞書が互いに入れ子になって構成されています。オブジェクトデータ構造では、Pythonのメソッド（リストや辞書用）を使用して、データ構造から要素を追加、一覧表示、検索、削除できます。文字列形式は主に、データを別のプログラムに渡したり、データ構造に読み込んだりするために使用されます。

JSONをデータ構造に戻すには、「loads」メソッドを使用します。このメソッドは文字列を受け取り、元のjsonオブジェクトデータ構造に戻します:

    import json 
    print(json.loads(json_string))

データ構造をJSONにエンコードするには、「dumps」メソッドを使用します。このメソッドはオブジェクトを受け取り、文字列を返します:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Pythonは、pickleと呼ばれるPython独自のデータシリアライズ方法（およびより高速な代替手段であるcPickle）をサポートしています。

全く同じ方法で利用することができます。

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Exercise--------

このエクササイズの目的は、JSON文字列にキーと値のペア "Me" : 800 を追加して印刷することです。