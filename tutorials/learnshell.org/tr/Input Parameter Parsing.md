Tutorial
--------
Bir betiğe parametrelerle çağrıldığında, bunları genellikle doğrulamak veya adlandırılmış değişkenlere ayırmak istersiniz. Kabuk, bunu yapmanın birkaç yaygın yolunu sunar.

### Konumsal parametreleri kullanma

En basit yol `$1`, `$2`, ... değerlerini doğrudan okumaktır:

    #!/bin/bash
    echo "İlk argüman: $1"
    echo "İkinci argüman: $2"

### Varsayılan bir değer kullanma

Argüman eksik olduğunda `${var:-default}` ile varsayılan bir değer sağlayabilirsiniz:

    #!/bin/bash
    echo "Kullanıcı: ${1:-misafir}"
    echo "Ana dizin: ${2:-/home/misafir}"

### Tüm argümanlar üzerinde döngü

Her argüman üzerinde dönmek için `$@` kullanın:

    #!/bin/bash
    for arg in "$@"
    do
        echo "Alınan: $arg"
    done

### Argüman sayısı

`$#` argüman sayısını verir:

    #!/bin/bash
    echo "Argüman sayısı: $#"

Exercise
--------
Betiği, kendisine iletilen ikinci argümanı yazdıracak şekilde tamamlayın. Betiği `apple` ve `banana` olmak üzere iki argümanla çağırın.

Tutorial Code
-------------
    #!/bin/bash
    # kodunuzu buraya yazın
    echo "İkinci argüman: "

Expected Output
---------------
    İkinci argüman: banana

Solution
--------
    #!/bin/bash
    echo "İkinci argüman: $2"
