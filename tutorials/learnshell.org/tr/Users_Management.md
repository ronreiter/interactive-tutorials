Tutorial
--------
GNU/Linux işletim sistemleri birden fazla kullanıcı ve grubun yönetimine izin verir, bu yüzden bu dikkate alınması gereken ilginç bir husustur.

Örneklerle başlamadan önce, bu tür işlemleri yapabilmek için süper kullanıcı iznine sahip olmak gereklidir. Bu izinleri elde etmenin yollarından biri, her bölümde ele alınan komutun önüne `sudo` kelimesini eklemektir.

Yeni bir kullanıcı oluşturmak için aşağıdaki sözdizimi dikkate alınmalıdır:

* `sudo useradd [options] kullanıcı_adı`

Seçenekler arasında şunları buluruz:

| Seçenekler | Anlam |
| ------ | ------ |
| -u uid  | Kullanıcıyı tanımlayan numara |
| -g primary_group  | Grup tanımlayıcısı |
| -G group2, group3, group4 ... | İkincil grup adlarının listesi |
| -d directory  | Bağlantı dizininin mutlak yolu |
| -s Shell  | Kabuğun mutlak yolu |
| -e date  | Yeni hesabın son kullanma tarihi |
| -p password   | Şifre |

Zaten oluşturulmuş bir kullanıcının özniteliklerini değiştirmek için:

* `sudo usermod [options] kullanıcı_adı`

Zaten oluşturulmuş bir kullanıcıyı silmek için:

* `sudo userdel [options] kullanıcı_adı`

Örnek 1: Bağlantı dizini --> /home/user1 olan user1 kullanıcısını oluşturun.

    sudo mkdir /home/user1
    sudo useradd -d /home/user1 user1

Örnek 2: Kabuk türü "bash" olan, "collaborator" grubuna ait ve id numarası 1500 olan user2 kullanıcısını oluşturun.

    sudo groupadd collaborator
    sudo useradd -s /bin/bash -g collaborator -u 1500 user2

Not: oluşturulan kullanıcı /etc/passwd dosyasında doğrulanabilir:

    cat /etc/passwd | grep ^user2

Örnek 4: Bağlantı dizinini de silerek user2 kullanıcısını silin:

    sudo userdel -r user2

Exercise
--------
Sahte bir kullanıcı veritabanı `users.txt` içinde saklanmaktadır. Aşağıdaki satırı, yalnızca `tomas` kullanıcısına ait satırı yazdıracak şekilde tamamlayın.

Tutorial Code
-------------
    #!/bin/bash
    cat <<EOF > users.txt
    root:x:0:0:root:/root:/bin/bash
    tomas:x:1001:1001:Tomas:/home/tomas:/bin/bash
    lu:x:1002:1002:Lu:/home/lu:/bin/bash
    EOF
    # kodunuzu buraya yazın
    grep "doesnotexist" users.txt

Expected Output
---------------
    tomas:x:1001:1001:Tomas:/home/tomas:/bin/bash

Solution
--------
    #!/bin/bash
    cat <<EOF > users.txt
    root:x:0:0:root:/root:/bin/bash
    tomas:x:1001:1001:Tomas:/home/tomas:/bin/bash
    lu:x:1002:1002:Lu:/home/lu:/bin/bash
    EOF
    grep tomas users.txt
