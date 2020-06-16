Tutorial
--------
Betik çalıştırılırken, betik adının yanına argümanlar yazılabilir. Yazılan bu argümanların arasında boşluk karakteri ayraç olarak konur. Argümanlar, programın çalışmasında işlevi olan girdilerdir.

Betiklerin içinde, $1 değişkeni komut satırından verilmiş ilk argümanı işaret eder ve $2 değişkeni de ikinci argümanı. Bu böyle devam eder.
$0 değişkeni ise çalıştırılan/çağırılan betiği işaret eder. Aşağıdaki örnekte betik, 6 argüman ile çalıştırılmıştır:

**./bin/benim_alisverisim.sh elma 5 muz 8 "Meyve Tabağı" 15**

**echo $3                          --> çıktı: muz**

**BUYUK=$5**

**echo "Bir tane $BIG, $6 ₺'ye satılıyor.'"      --> çıktı: Bir tane Meyve Tabağı, 15 ₺'ye satılıyor.'**

$# değişkeni ise, betiğin çalışması için gönderilen argüman sayısını saklar.

**echo $#               --> çıktı: 6**

$@ değişkeni, tüm argümanların boşlukla ayrılmış halini dizgi olarak saklar.

Exercise
-------------
Bu bölümde ödev bulunmamaktadır. Öğrenim serüveninize devam edebilirsiniz.

Tutorial Code
-------------
    #!/bin/bash
    # Bu bölümde ödev bulunmamaktadır.
    # Öğrenim serüveninize devam edebilirsiniz.

Solution
--------
    #!/bin/bash
    # Bu bölümde ödev bulunmamaktadır.
    # Öğrenim serüveninize devam edebilirsiniz.

Expected Output
---------------
    #!/bin/bash
    # Bu bölümde ödev bulunmamaktadır.
    # Öğrenim serüveninize devam edebilirsiniz.
