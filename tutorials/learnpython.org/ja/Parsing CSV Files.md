### What is CSV?
CSVは「Comma Separated Values」（カンマ区切り値）の略です。CSV形式は、データベースやスプレッドシートの最も一般的なインポートおよびエクスポート形式です。CSVファイルは、データのリストが含まれる単純なテキストファイルです。通常はカンマ(,)文字でデータを区切りますが、場合によってはセミコロンやタブなどの他の文字を使用することもあります。

### CSV module in Python
PythonにはCSVファイルや他のプレーンテキストファイルを操作するための組み込みのopen()関数がありますが、CSV形式でのデータの読み書きを容易にする専用のcsvモジュールも実装されています。

### CSV module important functions

csvモジュールには、以下のような重要な関数が含まれています：

- csv.field_size_limit – 最大フィールドサイズを返します
- csv.get_dialect – 名前に関連付けられている方言を取得します
- csv.list_dialects – 登録されているすべての方言を表示します
- csv.reader – CSVファイルからデータを読み取ります
- csv.register_dialect - 方言を名前に関連付けます
- csv.writer – CSVファイルにデータを書き込みます
- csv.unregister_dialect - 方言レジストリに関連付けられている方言を削除します
- csv.QUOTE_ALL - タイプに関係なくすべてを引用します
- csv.QUOTE_MINIMAL - 特殊文字を含むフィールドを引用します
- csv.QUOTE_NONNUMERIC - 数値でないすべてのフィールドを引用します
- csv.QUOTE_NONE – 出力で何も引用しません

### How do you use csv module?
まず、Pythonプログラムにcsvモジュールをインポートします。

    import csv

writerとreader関数を使用すると、CSVファイルのデータを編集、変更、変換することができます。

How to Read a CSV File :-

CSVファイルからデータを読み取るには、reader関数を使用してリーダーオブジェクトを生成します。

例:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

ここではまず、CSVファイルをREADモードで開き、ファイルオブジェクトをcsvfileと命名しています。ファイルを開くためにコンテキストマネージャーを使用するため、ファイルを閉じることを心配する必要はありません。csv.reader関数はファイルオブジェクトを入力として受け取り、反復可能なオブジェクトを返します。この反復可能なオブジェクトをcsvreaderとして保存します。

csvreaderは反復可能なオブジェクトであるため、forループを使って繰り返すことができます：

例1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

上記のコードは、csvファイルから読み取ったすべての行を出力します。ファイルが既に存在する場合は、'r'モードで開くことに注意してください。

What's next?

cvreaderは反復可能なオブジェクトです。したがって、.next()メソッドは現在の行を返し、イテレータを次の行に進めます。

例2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

例1では、ヘッダーと一緒にすべての行がコンソールに表示されます。例2では、.next()メソッドがfieldsオブジェクト内のヘッダーを読み取ってイテレータを次の行に進めるため、ヘッダーを除くすべての行が出力されます。

How to write in a CSV File-

CSVファイルに書き込むために、csvモジュールはcsv.writer関数を提供します。データを書き込むためには、まずCSVファイルをWRITEモード('w')で開きます。ファイルオブジェクトはcsvfileと命名されます。csv.writerオブジェクトをcsvwriterとして保存します。

例:
    # ヘッダーを宣言
    fields = ['column1','column2', 'column3']

    # 行を宣言
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

上記の例では、writerow()関数はfieldsオブジェクトという単一の行を書き込みますが、writerows()メソッドは上で定義された行のリスト全体をcsvファイルに書き込みます。

次に進みましょう。一つのCSVファイルの内容を読み取り、別のCSVファイルに書き込む方法を見てみます。

例:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # ヘッダーを保存しリーダーポインタを進める
            csvwriter.writerow(header) # ヘッダーを新しいファイルに書き込む
            for row in reader:
                csvwriter.writerow(row)

ここでは、'newfilename.csv'を'W'モードでf2として開き、'mycsvfile.csv'を'r'モードでf1として開いています。csvモジュールの.next(), .reader(), .writer(), .writerow()関数を使用しています。.next()を使用してリーダーポインタを進め、csvwriter.writerow()を使用して受信した行を一度に一つずつ書き込んでいます。

### DictReader and DictWriter classes in Python

以下は、CSVファイルを読み書きするためのPythonの2つの重要なクラスです。

csv.Dictwriterクラス
csv.DictReaderクラス

DictReaderとDictWriterは、CSVの読み書き用にPythonで使用可能なクラスです。これらはリーダーとライター関数に似ていますが、これらのクラスは辞書オブジェクトを使用してCSVファイルを読み書きします。

DictReader:

これは読み取った情報をフィールド名パラメータで指定されたキーを持つ辞書にマップするオブジェクトを作成します。このパラメータはオプションですが、ファイルに指定されていない場合、最初の行データが辞書のキーになります。

例csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

例:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

csv.DictWriterクラスは通常のライターのように動作しますが、Pythonの辞書をCSV行にマップします。フィールズ名パラメータは、writerow()メソッドに渡された辞書内の値をCSVファイルに書き込む際の順序を識別するキーのシーケンスです。このクラスは次のように定義されます：csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

例:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Exercise
--------

この演習では、CSVデータを操作します。あなたの課題は、CSVファイルからデータを読み込み、最初の列の値が50を超える行のみを出力ファイルに含めるように、別のCSVファイルに書き込むPythonプログラムを作成することです。