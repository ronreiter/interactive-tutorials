آموزش
--------

### CSV چیست؟
CSV مخفف 'Comma Separated Values' است. فرمت CSV رایج‌ترین فرمت واردات و صادرات برای پایگاه‌داده‌ها و صفحات گسترده است. فایل CSV یک فایل متنی ساده است که لیستی از داده‌ها را در خود دارد. معمولاً از کاما (,) برای جداکردن داده‌ها استفاده می‌کنند، اما گاهی از کاراکترهای دیگر مثل سمی‌کالن یا تب هم استفاده می‌شود.

نمونهٔ دادهٔ CSV:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### ماژول csv در پایتون
گرچه پایتون تابع داخلی open() را برای کار با فایل‌های CSV یا هر فایل متنی دیگر دارد، یک ماژول اختصاصی csv وجود دارد که کلاس‌هایی برای خواندن و نوشتن داده در قالب CSV پیاده‌سازی می‌کند و کار با CSV را بسیار آسان‌تر می‌سازد.

### توابع مهم ماژول csv

    csv.field_size_limit – بازگشت حداکثر اندازهٔ فیلد
    csv.get_dialect – دریافت dialect مرتبط با نام
    csv.list_dialects – لیست تمام dialectهای ثبت‌شده
    csv.reader – خواندن داده از فایل csv
    csv.register_dialect - ثبت dialect با نام
    csv.writer – نوشتن داده به فایل csv
    csv.unregister_dialect - حذف dialect مرتبط با نام از ثبت
    csv.QUOTE_ALL - همه چیز را quote کن
    csv.QUOTE_MINIMAL - فیلدهای خاص را quote کن
    csv.QUOTE_NONNUMERIC - همه فیلدهایی که عدد نیستند را quote کن
    csv.QUOTE_NONE – هیچ چیز را quote نکن

### چگونه از ماژول csv استفاده کنیم؟
اول ماژول csv را وارد کنید:

    import csv

توابع writer و reader به شما اجازه می‌دهند تا داده‌ها را ویرایش، تغییر و تبدیل کنید.

نحوه خواندن فایل CSV :

برای خواندن داده از فایل CSV از reader استفاده کنید تا یک خواننده (reader) تولید کند.

مثال:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

ابتدا فایل CSV را در حالت خواندن باز می‌کنیم و آن را csvfile می‌نامیم. از context manager استفاده می‌کنیم تا نگران بستن فایل نباشیم. csv.reader یک شیء قابل تکرار برمی‌گرداند که آن را csvreader نامیده‌ایم.

از آنجا که csvreader یک iterable است، می‌توان با حلقه for آن را پیمایش کرد:

مثال 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

در مثال بالا همه ردیف‌ها چاپ می‌شوند. توجه کنید هنگام باز کردن فایل از حالت 'r' استفاده می‌کنیم.

چه چیزی بعدی؟

csvreader یک شیء iterable است؛ بنابراین متد .next() ردیف جاری را برمی‌گرداند و اشاره‌گر را به ردیف بعدی می‌برد.

مثال 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

در مثال 2، .next() هدر را در fields می‌خواند و اشاره‌گر را جلو می‌برد، بنابراین بقیهٔ ردیف‌ها چاپ می‌شوند بدون هدر.

نحوه نوشتن در فایل CSV -

برای نوشتن از csv.writer استفاده کنید. فایل را در حالت نوشتن ('w') باز کنید و csv.writer را بسازید.

مثال:
    #declare header
    fields = ['column1','column2', 'column3']

    #declare rows
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

در مثال بالا writerow یک ردیف و writerows چند ردیف را می‌نویسد.

برای خواندن یک فایل و نوشتن در فایل دیگر:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # store the headers and advance reader pointer
            csvwriter.writerow(header) #writes the header into new file
            for row in reader:
                csvwriter.writerow(row)

در اینجا با استفاده از next() هدر را خوانده و سپس ردیف‌ها را یکی‌یکی در فایل جدید می‌نویسیم.

### کلاس‌های DictReader و DictWriter در پایتون

دو کلاس مهم برای خواندن و نوشتن CSV وجود دارند: csv.DictReader و csv.DictWriter.

DictReader:

این کلاس شیئی ایجاد می‌کند که ردیف‌ها را به دیکشنری نگاشت می‌کند که کلیدهای آن توسط پارامتر fieldnames تعیین می‌شوند. اگر fieldnames ارائه نشود، ردیف اول فایل به‌عنوان کلیدها استفاده می‌شود.

مثال csv (info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

مثال:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

csv.DictWriter همانند writer عمل می‌کند اما دیکشنری‌ها را به ردیف‌های CSV نگاشت می‌کند. پارامتر fieldnames ترتیب نوشتن مقادیر را مشخص می‌کند.

مثال:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


تمرین
--------

در این تمرین با داده‌های CSV کار خواهید کرد. هدف شما ایجاد برنامه‌ای است که یک فایل CSV را بخواند و فقط ردیف‌هایی که مقدار ستون اول آن‌ها بزرگ‌تر از 50 است را در فایل خروجی بنویسد.

Tutorial Code
-------------

    import csv
    
    # Open the input CSV file
    with open('inputfile.csv', mode='r') as infile:
        reader = csv.reader(infile)
        # Open the output CSV file
        with open('outputfile.csv', mode='w') as outfile:
            writer = csv.writer(outfile)
            # Write header
            header = next(reader)
            writer.writerow(header)
            # Write rows where the value in the first column is greater than 50
            for row in reader:
                if int(row[0]) > 50:  # Assuming the first column contains numeric values
                    writer.writerow(row)

خروجی مورد انتظار
---------------

    به دلیل محدودیت‌های این محیط، این راه‌حل در اینجا قابل آزمون نیست چون نیاز به دسترسی به فایل‌های خارجی دارد. اما انتظار می‌رود فایلی به نام `outputfile.csv` ایجاد شود که شامل همان ردیف‌های فایل ورودی است، با این تفاوت که فقط ردیف‌هایی که مقدار ستون اول آن‌ها بزرگ‌تر از 50 است در آن قرار دارند.

راه‌حل
--------

    import csv
    
    # Open the input CSV file
    with open('inputfile.csv', mode='r') as infile:
        reader = csv.reader(infile)
        # Open the output CSV file
        with open('outputfile.csv', mode='w') as outfile:
            writer = csv.writer(outfile)
            # Write header
            header = next(reader)
            writer.writerow(header)
            # Write rows where the value in the first column is greater than 50
            for row in reader:
                if int(row[0]) > 50:  # Assuming the first column contains numeric values
                    writer.writerow(row)