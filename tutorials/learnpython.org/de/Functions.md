### Was sind Funktionen?

Funktionen sind eine bequeme Möglichkeit, Ihren Code in nützliche Blöcke zu unterteilen, sodass wir unseren Code ordnen, lesbarer machen, wiederverwenden und Zeit sparen können. Außerdem sind Funktionen ein wichtiger Weg, um Schnittstellen zu definieren, sodass Programmierer ihren Code teilen können.

### Wie schreibt man Funktionen in Python?

Wie wir bereits in vorherigen Tutorials gesehen haben, verwendet Python Blöcke.

Ein Block ist ein Codebereich, der im folgenden Format geschrieben ist:

    block_head:
        1st block line
        2nd block line
        ...

Dabei ist eine Blockzeile weiterer Python-Code (sogar ein weiterer Block), und der Blockkopf hat folgendes Format:
block_keyword block_name(argument1,argument2, ...)
Block-Schlüsselwörter, die Sie bereits kennen, sind "if", "for" und "while".

Funktionen in Python werden mithilfe des Block-Schlüsselworts "def" definiert, gefolgt vom Funktionsnamen als Blockname.
Zum Beispiel:

    def my_function():
        print("Hello From My Function!")


Funktionen können auch Argumente erhalten (Variablen, die vom Aufrufer an die Funktion übergeben werden).
Zum Beispiel:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Funktionen können einen Wert an den Aufrufer zurückgeben, indem das Schlüsselwort 'return' verwendet wird.
Zum Beispiel:

    def sum_two_numbers(a, b):
        return a + b

### Wie ruft man Funktionen in Python auf?

Schreiben Sie einfach den Funktionsnamen gefolgt von (), wobei erforderliche Argumente in die Klammern gesetzt werden.
Zum Beispiel, lassen Sie uns die oben geschriebenen Funktionen aufrufen:

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


Übung
--------

In dieser Übung verwenden Sie eine bestehende Funktion und fügen Ihre eigene hinzu, um ein voll funktionsfähiges Programm zu erstellen.

1. Fügen Sie eine Funktion namens `list_benefits()` hinzu, die die folgende Liste von Zeichenketten zurückgibt: "Mehr organisierter Code", "Lesbarerer Code", "Einfachere Wiederverwendung von Code", "Programmierern ermöglichen, Code zu teilen und zu verbinden"

2. Fügen Sie eine Funktion namens `build_sentence(info)` hinzu, die ein einzelnes Argument mit einer Zeichenkette empfängt und einen Satz zurückgibt, der mit der gegebenen Zeichenkette beginnt und mit dem Satz " ist ein Vorteil von Funktionen!" endet.

3. Führen Sie alle Funktionen aus und sehen Sie, wie sie zusammenarbeiten!