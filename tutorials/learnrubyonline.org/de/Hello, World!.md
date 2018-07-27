Tutorial
--------

"puts" is das grundlegende Kommando, um etwas in Ruby auf den Bildschirm auszugeben.

    puts 'Ich werde auf den Bildschirm auszugeben'

oder,

    puts "Ich werde auf den Bildschirm auszugeben"

Alles zwischen den `'` und `"` ist eine Zeichenkette ("String"), und wird auf den Bildschirm auszugeben.

Einfache Anführungszeichen unterstützen Zeichenfolgeninterpolation nicht. Die folgt aussieht: `"Hallo Welt #{ Code }"`. Man muss Anführungszeichen benutzen.

`p` ist ein Abkürzung für `puts`, Z.B:
    p 'Hallo welt'

Wenn man puts verwendet, fügt Ruby am Ende der Zeile eine Zeilenumbruch ('\\ n') hinzu.

    puts 'Hallo, Welt!!!'
    Hallo Welt!!!
    => nil

    print 'Hallo Welt!!!'
    Hallo Welt!!!=> nil

Wenn man einfache Anführungszeichen in eine Zeichenkette einfügen möchten, müssen Sie `\` verwenden, Z.B:

    puts 'Hallo, ich schreibe ' mit Ruby'
    # Das geht nicht
    puts 'Hallo, ich schreibe \' mit Ruby'
    # Das geht



Übung
-----

Modifiziere das Programm unten, so dass es den Text "Hallo, Welt!" ausgibt.

Tutorial Code
-------------

    #Ändern dies!
    puts 'Goodbye, Welt!'

Erwartete Ausgabe
-----------------

Hallo, Welt!

Lösung
------

    #Ändern dies!
    puts 'Hallo, Welt!'
