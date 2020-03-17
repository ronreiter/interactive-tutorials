Tutorial
--------
Bu öğretici, kabuk programlamaya ana yorumlayıcı olarak **Bash** ("Bourne Again Shell") kullanarak başlamaya odaklanır. Kabuk programlamayı; sh, csh, tcsh gibi diğer yorumlayıcılar ile de yapabilmenize karşın bazen bash'ten farklı olabilmektedirler.

Kabuk programlama, uçbirimde direk olarak komutları kullanarak veya komutları sırası ile bir yazı dosyasında -ki bu dosyaya betik denir- yazıp daha sonra çalıştırarak yapılabilir. Betiği çalıştırmak için, öncelikle dosyaya çalışma izni verilmelidir (chmod -x dosyaAdi).

Betiklerin ilk satırı; yorumlayıcı tarafından yorum olarak değil, kabuğun dosya yolu olarak algılanan "sha-bang" (#!) ile başlar. Bu dosya yolu, işletim sistemine, betikteki tüm komutların sha-bang'de belirtilen yorumlayıcı tarafından okunması gerektiğini söyler. Eğer sha-bang'deki dosya yolunda herhangi bir yorumlayıcı bulunmuyor ise, betiğin çalıştırılması esnasında "Command not found" (tr. Komut bulunamadı) hatası alınabilir. Betik dosyaları için dosya uzantısı olarak ".sh" kullanılır ancak bu bir gelenektir, gereklilik değil. Betiğin ilk satırı şöyle gözükmelidir:

**#!/bin/bash**

Yorum ekleme: # (kare) işaretinin arkasından gelen her yazı, yorum olarak algılanacaktır.

Aktif olan kabuğu ve onun yolunu öğrenmek için aşağıdaki kalınlaştırılmış kodu uçbirime yazın:

**ps | grep $$**

987 tty1      00:00:00 bash

Bu cevap bize gösteriyor ki, kullandığınız kabuğun tipi "bash"tir, şimdi kabuğun dosya yolunu öğrenelim:

**which bash**

/bin/bash

This response shows the full execution path of the shell interpreter. Make sure that the "sha-bang" line at the beginning of your script, matches this same execution path.
Bu cevap, kullandığınız kabuğun (örneğimizde "bash") tam dosya yolunu bize gösteriyor. Betiğinizdeki sha-bang'ın burada verilen yol ile aynı olması gerektiğine dikkat edin.

Ödev
-------------
"echo" komutunu kullanarak "Merhaba, dünya!" satırını yazdırın.

Tutorial Code
-------------
    #!/bin/bash
    # Text to the right of a '#' is treated as a comment - below is the shell command
    # <-- bu işaretin sağındaki yazılar, yorum olarak düşünülür ve işlenmez. Aşağıdakiler ise kabuk komutlarıdır.
    echo 'Görüşürüz, dünya..!'

Expected Output
---------------
    Merhaba, dünya!

Solution
--------
    #!/bin/bash
    # Text to the right of a '#' is treated as a comment - below is the shell command
    echo 'Merhaba, dünya!'
