In der Programmierung ist ein Modul ein Softwareteil, der eine bestimmte Funktionalität besitzt. Zum Beispiel kann beim Erstellen eines Ping-Pong-Spiels ein Modul für die Spiellogik verantwortlich sein, während ein anderes Modul das Spiel auf dem Bildschirm darstellt. Jedes Modul besteht aus einer separaten Datei, die unabhängig bearbeitet werden kann.

### Schreiben von Modulen

Module in Python sind einfach Python-Dateien mit einer .py-Endung. Der Name des Moduls ist derselbe wie der Dateiname. Ein Python-Modul kann eine Reihe von Funktionen, Klassen oder Variablen definieren und implementieren. Das obige Beispiel umfasst zwei Dateien:

mygame/

- mygame/game.py

- mygame/draw.py

Das Python-Skript `game.py` implementiert das Spiel. Es verwendet die Funktion `draw_game` aus der Datei `draw.py` oder mit anderen Worten, das `draw`-Modul, das die Logik zum Zeichnen des Spiels auf dem Bildschirm implementiert.

Module werden mit dem `import`-Befehl aus anderen Modulen importiert. In diesem Beispiel könnte das `game.py`-Skript folgendermaßen aussehen:

Der `draw`-Modul könnte folgendermaßen aussehen:

In diesem Beispiel importiert das `game`-Modul das `draw`-Modul, wodurch es die in diesem Modul implementierten Funktionen nutzen kann. Die `main`-Funktion verwendet die lokale Funktion `play_game`, um das Spiel zu starten, und zeichnet dann das Ergebnis des Spiels mit einer im `draw`-Modul implementierten Funktion namens `draw_game`. Um die Funktion `draw_game` aus dem `draw`-Modul zu verwenden, müssen wir angeben, in welchem Modul die Funktion implementiert ist, indem wir den Punkt-Operator verwenden. Um auf die `draw_game`-Funktion aus dem `game`-Modul zu verweisen, müssen wir das `draw`-Modul importieren und dann `draw.draw_game()` aufrufen. 

Wenn die `import draw`-Anweisung ausgeführt wird, sucht der Python-Interpreter in dem Verzeichnis, in dem das Skript ausgeführt wurde, nach einer Datei mit dem Modulnamen und der `.py`-Endung. In diesem Fall wird nach `draw.py` gesucht. Wenn es gefunden wird, wird es importiert. Wenn es nicht gefunden wird, wird weiter nach eingebauten Modulen gesucht.

Vielleicht ist Ihnen aufgefallen, dass beim Importieren eines Moduls eine `.pyc`-Datei erstellt wird. Dies ist eine kompilierte Python-Datei. Python kompiliert Dateien in Python-Bytecode, damit die Dateien nicht jedes Mal beim Laden von Modulen geparst werden müssen. Wenn eine `.pyc`-Datei existiert, wird sie anstelle der `.py`-Datei geladen. Dieser Prozess ist für den Benutzer transparent.

### Importieren von Modulobjekten in den aktuellen Namensraum

Ein Namensraum ist ein System, in dem jedes Objekt benannt wird und in Python darauf zugegriffen werden kann. Wir importieren die Funktion `draw_game` in den Namensraum des Hauptskripts, indem wir den `from`-Befehl verwenden.

Vielleicht haben Sie bemerkt, dass in diesem Beispiel der Modulname `draw_game` nicht vorangestellt ist, weil wir den Modulnamen mit dem `import`-Befehl angegeben haben.

Der Vorteil dieser Notation ist, dass man das Modul nicht immer wieder referenzieren muss. Ein Namensraum kann jedoch keine zwei Objekte mit demselben Namen haben, sodass der `import`-Befehl ein vorhandenes Objekt im Namensraum ersetzen könnte.

### Importieren aller Objekte aus einem Modul

Sie können den `import *`-Befehl verwenden, um alle Objekte in einem Modul wie folgt zu importieren:

Dies könnte etwas riskant sein, da Änderungen im Modul das Modul beeinflussen können, das es importiert, aber es ist kürzer und erfordert nicht die Spezifikation jedes Objekts, das Sie aus dem Modul importieren möchten.

### Benutzerdefinierter Importname

Module können unter jedem gewünschten Namen geladen werden. Dies ist nützlich, wenn ein Modul bedingt importiert wird, um im restlichen Code denselben Namen zu verwenden.

Zum Beispiel, wenn Sie zwei `draw`-Module mit leicht unterschiedlichen Namen haben, können Sie folgendes tun:

### Modulinitialisierung

Das erste Mal, wenn ein Modul in ein laufendes Python-Skript geladen wird, wird es durch einmaliges Ausführen des Codes im Modul initialisiert. Wenn kein anderes Modul in Ihrem Code dasselbe Modul erneut importiert, wird es nicht ein weiteres Mal geladen, sodass lokale Variablen innerhalb des Moduls als "Singleton" fungieren, was bedeutet, dass sie nur einmal initialisiert werden.

Sie können dies dann verwenden, um Objekte zu initialisieren. Zum Beispiel:

### Verlängern des Modul-Ladepfads

Es gibt einige Möglichkeiten, dem Python-Interpreter zu sagen, wo er nach Modulen suchen soll, abgesehen von dem lokalen Verzeichnis und den eingebauten Modulen. Sie können die Umgebungsvariable `PYTHONPATH` verwenden, um zusätzliche Verzeichnisse anzugeben, in denen nach Modulen gesucht werden soll:

Dies führt `game.py` aus und ermöglicht dem Skript, Module aus dem `foo`-Verzeichnis sowie dem lokalen Verzeichnis zu laden.

Sie können auch die Funktion `sys.path.append` verwenden. Führen Sie sie *vor* dem Ausführen des `import`-Befehls aus:

Jetzt wurde das `foo`-Verzeichnis zur Liste der Pfade hinzugefügt, in denen nach Modulen gesucht wird.

### Erforschen von eingebauten Modulen

Die vollständige Liste der eingebauten Module in der Python-Standardbibliothek finden Sie [hier](https://docs.python.org/3/library/).

Zwei sehr wichtige Funktionen sind bei der Erforschung von Modulen in Python hilfreich - die `dir`- und `help`-Funktionen.

Um das Modul `urllib` zu importieren, das es uns ermöglicht, Daten von URLs zu lesen, importieren wir das Modul:

Wir können nachschauen, welche Funktionen in jedem Modul implementiert sind, indem wir die `dir`-Funktion verwenden:

Wenn wir die Funktion im Modul finden, die wir verwenden möchten, können wir im Python-Interpreter mit der `help`-Funktion mehr darüber lesen:

### Schreiben von Paketen

Pakete sind Namensräume, die mehrere Pakete und Module enthalten. Sie sind einfach Verzeichnisse, aber mit bestimmten Anforderungen.

Jedes Paket in Python ist ein Verzeichnis, das eine spezielle Datei namens `__init__.py` enthalten **MUSS**. Diese Datei, die leer sein kann, zeigt an, dass das Verzeichnis, in dem es sich befindet, ein Python-Paket ist. So kann es auf die gleiche Weise wie ein Modul importiert werden.

Wenn wir ein Verzeichnis namens `foo` erstellen, das den Paketnamen angibt, können wir dann ein Modul in diesem Paket namens `bar` erstellen. Dann fügen wir die Datei `__init__.py` in das `foo`-Verzeichnis ein.

Um das Modul `bar` zu verwenden, können wir es auf zwei Arten importieren:

Im ersten obigen Beispiel müssen wir das Präfix `foo` verwenden, wenn wir auf das Modul `bar` zugreifen. Im zweiten Beispiel müssen wir das nicht, da wir das Modul in den Namensraum unseres Moduls importiert haben.

Die Datei `__init__.py` kann auch entscheiden, welche Module das Paket als API exportiert, während andere Module intern bleiben, indem die Variable `__all__` wie folgt überschrieben wird:

    __init__.py:

    __all__ = ["bar"]

Übung
--------

In dieser Übung geben Sie eine alphabetisch sortierte Liste aller Funktionen im `re`-Modul aus, die das Wort `find` enthalten.