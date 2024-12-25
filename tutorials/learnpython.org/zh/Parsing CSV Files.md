### 什么是 CSV？

CSV 代表“逗号分隔值”。CSV 格式是数据库和电子表格最常用的导入和导出格式。CSV 文件是一个简单的文本文件，包含数据列表。它们主要使用逗号 (,) 字符来分隔数据，但有时使用其他字符，例如分号或制表符。

示例 CSV 数据：

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### Python 中的 CSV 模块

虽然 Python 具有内置的 open() 函数来处理 CSV 文件或任何其他纯文本文件，但有一个专门的 csv 模块实现用于读取和写入 csv 格式数据的类，使得处理 CSV 文件更加容易。

### CSV 模块的重要功能

    csv.field_size_limit – 返回最大字段大小
    csv.get_dialect – 获取与名称关联的方言
    csv.list_dialects – 显示所有注册的方言
    csv.reader – 从 csv 文件读取数据
    csv.register_dialect - 将方言与名称关联
    csv.writer – 将数据写入 csv 文件
    csv.unregister_dialect - 删除与名称关联的方言注册表
    csv.QUOTE_ALL - 引用所有内容，无论类型如何
    csv.QUOTE_MINIMAL - 引用具有特殊字符的字段
    csv.QUOTE_NONNUMERIC - 引用所有非数字字段
    csv.QUOTE_NONE – 不在输出中引用任何内容

### 如何使用 csv 模块？

首先在你的 Python 程序中导入 csv 模块。

    import csv
    
writer 和 reader 函数允许你编辑、修改和转换 CSV 文件中的数据。

如何读取 CSV 文件:-

要从 CSV 文件中读取数据，我们使用 reader 函数生成一个读取器对象。

例如：

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

在这里，我们首先以 READ 模式打开 CSV 文件，并将文件对象命名为 csvfile。我们使用上下文管理器来打开文件，这样我们就不必担心关闭文件。csv.reader 函数将文件对象作为输入并返回一个可迭代对象。我们将可迭代对象保存为 csvreader。

如我们所知，csvreader 是一个可迭代对象，因此我们可以使用 for 循环进行迭代：

示例 1：

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

以上代码将打印我们从 csv 文件读取的所有行。请注意，当文件已经存在时，我们以 'r' 模式打开文件。

下一步是什么？

cvreader 是一个可迭代对象。因此，.next() 方法返回当前行并将迭代器推进到下一行。

示例 2：

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

在示例 1 中，您会看到所有行连同标题一起打印在控制台上。在示例 2 中，.next() 方法将标题读取到 fields 对象中，并将迭代器推进到下一行，因此除了标题之外的所有行都被打印出来。

如何在 CSV 文件中写入数据-

要在 CSV 文件中写入数据，csv 模块提供了 csv.writer 函数。要写入数据，我们首先以 WRITE 模式 ('w') 打开 CSV 文件。文件对象命名为 csvfile。我们将 csv.writer 对象保存为 csvwriter。

示例：

    #声明标题
    fields = ['column1','column2', 'column3']

    #声明行
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

在上面的示例中，writerow() 函数将写入一个单行（即字段对象），而 writerows() 方法将写入到 csv 文件的整个行列表。

现在让我们更进一步。从一个 csv 文件读取内容并写入到另一个 csv 文件。

示例：

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # 存储标题并推进读取指针
            csvwriter.writerow(header) # 将标题写入新文件
            for row in reader:
                csvwriter.writerow(row)

在这里，我们将 'newfilename.csv' 以 'W' 模式打开为 f2，将 'mycsvfile.csv' 以 'r' 模式打开为 f1。我们使用了 csv 模块的 .next(), .reader(), .writer(), .writerow() 函数。使用 .next()，我们推进了读指针，使用 csvwriter.writerow() 写入每个传入的行。

### Python 中的 DictReader 和 DictWriter 类

以下是 Python 中用于读取和写入 CSV 文件的两个重要类。

csv.Dictwriter 类
csv.DictReader 类

DictReader 和 DictWriter 是 Python 中可用于读取和写入 CSV 的类。尽管它们与读取器和写入器函数相似，但这些类使用字典对象来读取和写入 csv 文件。

DictReader:

它创建一个对象，将读取的信息映射到一个字典中，字典的键由字段名参数提供。此参数是可选的，但如果未在文件中指定，则第一行数据成为字典的键。

示例 csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

示例：

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

csv.DictWriter 类像常规写入器一样运行，但将 Python 字典映射到 CSV 行。字段名参数是一组键，标识传递给 writerow() 方法的字典中值写入 CSV 文件的顺序。该类定义为 csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

示例：

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


练习
--------

在这个练习中，您将处理 CSV 数据。您的任务是创建一个 Python 程序，该程序从 CSV 文件读取数据并将其写入另一个 CSV 文件，确保只有第一列中的值大于 50 的行被包含在输出文件中。