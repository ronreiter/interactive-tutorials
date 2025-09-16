### CSV Nedir?
CSV, 'Virgülle Ayrılmış Değerler' anlamına gelir. CSV formatı, veritabanları ve hesap tabloları için en yaygın ithalat ve ihracat formatıdır. Bir CSV dosyası, bir veri listesi içeren basit bir metin dosyasıdır. Genellikle verileri ayırmak için virgül (,) karakterini kullanırlar, ancak bazen noktalı virgül veya sekme gibi diğer karakterleri kullanabilirler.

Örnek CSV verisi:

...
sütun 1 adı,sütun 2 adı,sütun 3 adı
birinci satır veri 1,birinci satır veri 2,birinci satır veri 3
ikinci satır veri 1,ikinci satır veri 2,ikinci satır veri 3
...

### Python'da CSV modülü
Python'un CSV dosyaları veya diğer düz metin dosyaları ile çalışmak için yerleşik open() fonksiyonu olmasına rağmen, CSV formatında veri okumak ve yazmak için sınıflar uygulayan özel bir csv modülü vardır ve bu da CSV dosyalarıyla çalışmayı çok daha kolay hale getirir.

### CSV modülünün önemli işlevleri

csv.field_size_limit – maksimum alan boyutunu döndürür
csv.get_dialect – isimle ilişkilendirilmiş diyaloğu alır
csv.list_dialects – tüm kayıtlı diyalogları gösterir
csv.reader – bir csv dosyasından veri okur
csv.register_dialect - diyalogu isimle ilişkilendirir
csv.writer – bir csv dosyasına veri yazar
csv.unregister_dialect - isimle ilişkilendirilmiş diyaloğu diyaloğu kayıt defterinden siler
csv.QUOTE_ALL - Türüne bakılmaksızın her şeyi tırnak içine alır.
csv.QUOTE_MINIMAL - Özel karakterlere sahip alanları tırnak içine alır
csv.QUOTE_NONNUMERIC - Sayısal olmayan tüm alanları tırnak içine alır
csv.QUOTE_NONE – Çıktıda hiçbir şeyi tırnak içine almaz

### csv modülü nasıl kullanılır?
Öncelikle python programınıza csv modülünü ekleyin.

    import csv

Yazıcı ve okuyucu işlevleri, bir CSV dosyasındaki verileri düzenlemenize, değiştirmenize ve dönüştürmenize olanak tanır.

Bir CSV Dosyası Nasıl Okunur:

CSV dosyalarından veri okumak için bir okuyucu nesnesi oluşturmak amacıyla reader fonksiyonunu kullanırız.

Örneğin:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Burada, önce CSV dosyasını OKU modunda açıyoruz ve dosya nesnesini csvfile olarak adlandırıyoruz. Dosyayı açmak için bağlam yöneticisini kullanıyoruz, böylece dosyayı kapatma konusunu düşünmemize gerek kalmıyor. csv.reader fonksiyonu dosya nesnesini girdi olarak alır ve bir yineleyici nesne döndürür. Yineleyici nesneyi csvreader olarak saklıyoruz.

Bildirdiğimiz gibi, csvreader bir yineleyici nesnedir ve bu nedenle for döngüsü kullanarak yineleme yapabiliriz:

örnek 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Yukarıdaki kod, csv dosyasından okuduğumuz tüm satırları yazdıracaktır. Dosyayı zaten var olduğunda 'r' modu ile açtığımızı unutmayın.

Sonraki?

csvreader bir yineleyici nesnedir. Bu nedenle, .next() metodu mevcut satırı döndürür ve yineleyiciyi bir sonraki satıra ilerletir.

örnek 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

Örnek 1'de, başlıkla birlikte konsolda yazdırılan tüm satırları görürsünüz. Örnek 2'de, .next() metodu fields nesnesinde başlığı okur ve tüm satırlar başlık hariç yazdırılacağı için yineleyiciyi bir sonraki satıra ilerletir.

Bir CSV Dosyasına Nasıl Yazılır:

Bir csv dosyasına yazmak için csv modülü csv.writer fonksiyonunu sağlar. Veri yazmak için, ilk olarak CSV dosyasını YAZMA modunda('w') açmamız gerekir. Dosya nesnesi csvfile olarak adlandırılır. csv.writer nesnesini csvwriter olarak kaydederiz.

Örnek:
   # başlığı belirt
    fields = ['column1','column2', 'column3']

   # satırları belirt
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

Yukarıdaki örnekte, writerow() fonksiyonu fields nesnesi olan tek bir satırı yazacaktır, writerows() metodu ise yukarıda tanımlanan satırların tamamını csv dosyasına yazacaktır.

Şimdi bir adım daha ileri gidelim. Bir csv dosyasının içeriğini okuyun ve başka bir csv dosyasına yazın.

Örnek:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # başlıkları sakla ve okuyucu işaretçisini ilerlet
            csvwriter.writerow(header) # yeni dosyaya başlıkları yazar
            for row in reader:
                csvwriter.writerow(row)

Burada, 'newfilename.csv' dosyasını 'W' modunda f2 olarak ve 'mycsvfile.csv' dosyasını 'r' modunda f1 olarak açıyoruz. Csv modülünün .next(), .reader(), .writer(), .writerow() fonksiyonlarını kullanıyoruz. .next() ile okuyucu işaretçisini ilerletiyoruz ve csvwriter.writerow() kullanarak gelen satırı birer birer yazıyoruz.

### Python'da DictReader ve DictWriter sınıfları

Python'da csv dosyalarını okumak ve yazmak için iki önemli sınıf aşağıda verilmiştir.

csv.Dictwriter sınıfı
csv.DictReader sınıfı

DictReader ve DictWriter, Python'da CSV'ye okuma ve yazma işlemleri için mevcut olan sınıflardır. Okuyucu ve yazar işlevlerine benzer olsalar da, bu sınıflar csv dosyalarına okumak ve yazmak için sözlük nesnelerini kullanır.

DictReader:

Okunan bilgiyi, anahtarların fieldnames parametresiyle belirtilmiş olduğu bir sözlük içine eşleyen bir nesne oluşturur. Bu parametre isteğe bağlıdır, ancak dosyada belirtilmediğinde, ilk satır verisi sözlüğün anahtarları olur.

Örnek csv(info.csv)

.....
ad, soyad
foo, bar
foo1, bar1
.....

Örnek:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

csv.DictWriter sınıfı, bir sözlük yazar gibi çalışır ama Python sözlüklerini CSV satırlarına dönüştürür. Fieldnames parametresi, writerow() metoduna iletilen sözlüğün değerlerinin yazılma sırasını belirleyen anahtarların bir dizisidir. Sınıf csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds) olarak tanımlıdır.

Örnek:

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

Bu egzersizde, CSV verileri ile çalışacaksınız. Göreviniz, bir CSV dosyasından veri okuyan ve bunu başka bir CSV dosyasına yazan bir Python programı oluşturmak, ve yalnızca ilk sütundaki değerin 50'den büyük olduğu satırların çıkış dosyasında yer almasını sağlamaktır.