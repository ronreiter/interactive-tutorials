Tutorial
--------
Düzenli ifadeler metinlerdeki kalıpları tanımlamanızı sağlar. Kabukta, özellikle `grep`, `sed` ve `awk` ile birlikte her yerde kullanılırlar.

### grep ile eşleştirme

`grep` bir kalıpla eşleşen satırları arar:

    echo "apple banana cherry" | grep apple

Kalıpla eşleşen tüm satırı yazdırır çünkü satır `apple` içerir:

    apple banana cherry

### Çapalar

`^` bir kalıbı satırın başına, `$` sonuna çapalar:

    echo "apple" | grep "^a"   # 'a' ile başlayan satırlar
    echo "apple" | grep "e$"   # 'e' ile biten satırlar

### Karakter sınıfları

Köşeli parantezler kümedeki herhangi bir karakterle eşleşir. Aralıklar tire ile yazılır, örn. herhangi bir rakam için `[0-9]` ve herhangi bir küçük harf için `[a-z]`.

### Nicelikler

`*` "sıfır veya daha fazla", `+` "bir veya daha fazla" ve `?` "sıfır veya bir" anlamına gelir:

    echo "color" | grep -E "colou?r"   # color veya colour ile eşleşir
    echo "colour" | grep -E "colou?r"

Exercise
--------
Aşağıdaki `grep` ifadesini yalnızca `a` harfiyle başlayan satırı eşleştirecek şekilde tamamlayın.

Tutorial Code
-------------
    #!/bin/bash
    printf "apple\nbanana\napricot\n" > fruits.txt
    # düzenli ifadenizi buraya yazın
    grep "fruit" fruits.txt

Expected Output
---------------
    apple
    apricot

Solution
--------
    #!/bin/bash
    printf "apple\nbanana\napricot\n" > fruits.txt
    grep "^a" fruits.txt
