Tutorial
--------
GNU/Linux-Betriebssysteme erlauben die Verwaltung mehrerer Benutzer und Gruppen, was ein interessanter Aspekt ist, den man berücksichtigen sollte.

Bevor wir mit den Beispielen beginnen, ist es notwendig, Superuser-Berechtigungen zu haben, um solche Aktionen ausführen zu können. Eine Möglichkeit, diese Berechtigungen zu erhalten, ist, das Wort `sudo` vor den Befehl zu stellen, der in jedem Abschnitt behandelt wird.

Um einen neuen Benutzer anzulegen, muss die folgende Syntax berücksichtigt werden:

* `sudo useradd [options] benutzername`

Unter den Optionen finden wir die folgenden:

| Optionen | Bedeutung |
| ------ | ------ |
| -u uid  | Nummer, die den Benutzer identifiziert |
| -g primary_group  | Gruppenkennung |
| -G group2, group3, group4 ... | Liste der sekundären Gruppennamen |
| -d directory  | Absoluter Pfad zum Verbindungsverzeichnis |
| -s Shell  | Absoluter Pfad zur Shell |
| -e date  | Ablaufdatum des neuen Kontos |
| -p password   | Passwort |

Um die Attribute eines bereits angelegten Benutzers zu ändern:

* `sudo usermod [options] benutzername`

Um einen bereits angelegten Benutzer zu löschen:

* `sudo userdel [options] benutzername`

Beispiel 1: Benutzer user1 mit Verbindungsverzeichnis --> /home/user1 anlegen.

    sudo mkdir /home/user1
    sudo useradd -d /home/user1 user1

Beispiel 2: Benutzer user2 anlegen, der "bash" als Shell-Typ hat, zur Gruppe "collaborator" gehört und die ID-Nummer 1500 hat.

    sudo groupadd collaborator
    sudo useradd -s /bin/bash -g collaborator -u 1500 user2

Hinweis: Der angelegte Benutzer kann in der Datei /etc/passwd überprüft werden:

    cat /etc/passwd | grep ^user2

Beispiel 4: Benutzer user2 löschen, wobei auch das zugehörige Verbindungsverzeichnis gelöscht werden muss:

    sudo userdel -r user2

Exercise
--------
Eine Beispiel-Benutzerdatenbank ist in `users.txt` gespeichert. Vervollständige die Zeile unten so, dass sie nur die Zeile des Benutzers `tomas` ausgibt.

Tutorial Code
-------------
    #!/bin/bash
    cat <<EOF > users.txt
    root:x:0:0:root:/root:/bin/bash
    tomas:x:1001:1001:Tomas:/home/tomas:/bin/bash
    lu:x:1002:1002:Lu:/home/lu:/bin/bash
    EOF
    # schreibe deinen Code hier
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
