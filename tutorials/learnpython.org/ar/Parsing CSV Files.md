### What is CSV?

CSV تعني 'قيم مفصولة بفاصلة'. يعتبر تنسيق CSV هو الأكثر شيوعًا للاستيراد والتصدير في قواعد البيانات وجداول البيانات. ملف CSV هو ملف نصي بسيط يحتوي على قائمة بيانات. يستخدم غالبًا الحرف الفاصلة (,) للفصل بين البيانات، ولكن في بعض الأحيان يستخدم أحرف أخرى مثل الفواصل المنقوطة أو علامات التبويب.

مثال على بيانات CSV:

...
column 1 name,column 2 name, column 3 name  
first row data 1,first row data 2,first row data 3  
second row data 1,second row data 2,second row data 3  
...

### CSV module in Python

بينما تحتوي لغة بايثون على دالة open() المدمجة للعمل مع ملفات CSV أو أي ملف نصي عادي آخر، هناك وحدة مخصصة لدعم csv والتي تنفذ الفئات لقراءة وكتابة البيانات بتنسيق csv مما يجعل العمل مع ملفات CSV أكثر سهولة.

### CSV module important functions

    csv.field_size_limit – تعيد الحد الأقصى لحجم الحقل
    csv.get_dialect – الحصول على اللهجة المرتبطة بالاسم
    csv.list_dialects – عرض جميع اللهجات المسجلة
    csv.reader – قراءة البيانات من ملف csv
    csv.register_dialect - ربط اللهجة بالاسم
    csv.writer – كتابة البيانات إلى ملف csv
    csv.unregister_dialect - حذف اللهجة المرتبطة بالاسم في سجل اللهجات
    csv.QUOTE_ALL - اقتباس كل شيء، بغض النظر عن النوع.
    csv.QUOTE_MINIMAL - اقتباس الحقول التي تحتوي على أحرف خاصة
    csv.QUOTE_NONNUMERIC - اقتباس جميع الحقول التي ليست أرقامًا
    csv.QUOTE_NONE – لا تقتبس أي شيء في المخرجات

### How do you use csv module?

أولاً قم باستيراد وحدة csv في برنامج بايثون الخاص بك.

    import csv

تتيح لك وظائف الكتابة والقراءة تعديل وتحرير وتحويل البيانات في ملف CSV.

كيفية قراءة ملف CSV:-

لقراءة البيانات من ملفات CSV نستخدم وظيفة reader لإنشاء كائن قارئ.

على سبيل المثال:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

هنا، نقوم أولاً بفتح ملف CSV في وضع القراءة ونسمي كائن الملف csvfile. نستخدم مدير السياق لفتح الملف بحيث لا نحتاج إلى القلق بشأن إغلاق الملف. تقوم دالة csv.reader بأخذ كائن الملف كمدخل وتعيد كائنًا قابلاً للتكرار. نقوم بحفظ الكائن القابل للتكرار كـ csvreader.

كما نعلم، csvreader هو كائن قابل للتكرار، وبالتالي يمكننا التكرار باستخدام حلقة for:

المثال 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

الكود أعلاه سيقوم بطباعة جميع الصفوف التي قرأناها من ملف csv. يرجى ملاحظة أننا نفتح الملف بوضع 'r' عندما يكون موجودًا بالفعل.

ما هو القادم؟

csvreader هو كائن قابل للتكرار. وبالتالي، تعيد دالة .next() الصف الحالي وتقدم المؤشر إلى الصف التالي.

المثال 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

في المثال 1، سترى جميع الصفوف مطبوعة على وحدة التحكم مع العنوان. في المثال 2، تقوم دالة .next() بقراءة العنوان في كائن fields وتقدم المؤشر إلى الصف التالي وبالتالي يتم طباعة جميع الصفوف باستثناء العنوان.

كيفية الكتابة في ملف CSV-

للكتابة في ملف csv، توفر وحدة csv دالة csv.writer. لكتابة البيانات، نقوم أولاً بفتح ملف CSV في وضع الكتابة ('w'). يسمى كائن الملف csvfile. نقوم بحفظ كائن csv.writer كـ csvwriter.

المثال:

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

في المثال أعلاه، سيقوم دالة writerow() بكتابة صف واحد وهو كائن fields بينما ستقوم دالة writerows() بكتابة القائمة الكاملة للصفوف المحددة أعلاه في ملف csv.

الآن لنذهب خطوة إلى الأمام. قم بقراءة محتوى ملف csv واحد واكتب في ملف csv آخر.

المثال:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # store the headers and advance reader pointer
            csvwriter.writerow(header) #writes the header into new file
            for row in reader:
                csvwriter.writerow(row)

هنا، نقوم بفتح 'newfilename.csv' في وضع 'W' كـ f2 وفتح 'mycsvfile.csv' في وضع 'r' كـ f1. نحن نستخدم دوال .next(), .reader(), .writer(), .writerow() من وحدة csv. باستخدام .next()، نقدم مؤشر القارئ وباستخدام csvwriter.writerow() نكتب الصف الوارد واحداً في كل مرة.

### DictReader and DictWriter classes in Python

فيما يلي فئتان مهمتان في بايثون لقراءة وكتابة ملفات csv.

فئة csv.Dictwriter  
فئة csv.DictReader  

تعمل فئات DictReader و DictWriter في بايثون على قراءة وكتابة إلى CSV. على الرغم من أنها مشابهة لدوال القارئ والكاتب، إلا أن هذه الفئات تستخدم كائنات القاموس لقراءة وكتابة ملفات csv.

DictReader:

يقوم بإنشاء كائن يقوم بتعيين المعلومات المقروءة إلى قاموس تكون مفاتيحه معطاة بواسطة المعامل fieldnames. هذا المعامل اختياري، ولكن عند عدم تحديده في الملف، تصبح بيانات الصف الأول هي مفاتيح القامبوس.

مثال على csv(info.csv)

.....
firstname, lastname  
foo, bar  
foo1, bar1  
.....

المثال:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

تعمل فئة csv.DictWriter مثل الكاتب العادي ولكنها تعين قواميس بايثون إلى صفوف CSV. المعامل fieldnames هو تسلسل للمفاتيح التي تحدد الترتيب الذي تكتب فيه القيم في القاموس الذي يتم تمريره إلى دالة writerow() إلى ملف CSV.

المثال:

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

في هذا التمرين، ستعمل مع بيانات CSV. مهمتك هي إنشاء برنامج بايثون يقرأ البيانات من ملف CSV ويكتبها إلى ملف CSV آخر، مع التأكد من أن الصفوف التي يكون فيها القيمة في العمود الأول أكبر من 50 فقط يتم تضمينها في ملف الإخراج.