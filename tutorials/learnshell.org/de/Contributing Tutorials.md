Tutorials beitragen
----------------------

Um Tutorials beizutragen, forke einfach das folgende Repository:

[[https://github.com/ronreiter/interactive-tutorials]]

Dann kannst du Tutorials hinzufügen oder bearbeiten und mir dann eine Pull Request schicken.

Um ein Tutorial zu schreiben, erstelle einfach eine Markdown Seite im relevanten Verzeichnis unter `tutorials` und verlinke sie auf der Willkommen Seite in der relevanten Sektion. Nachdem du sie erstellt hast, geh bitte auf Nummer sicher, dass sie korrekt verlinkt ist, indem du einen Flask Web Server laufen lässt.

Um einen Link zu deinem Tutorial zu erstellen, nimm den Link deiner Seite und linke zu ihr (meistens von der `welcome.md` Seite) mit doppelten eckigen Klammern.

Jedes Tutorial besteht aus einer kurzen Erklärung des Themas und einer kleinen Übung, die den Benutzer testet. Sobald der Benutzer den Code bearbeitet hat, sollte er korrekt ausführen und die von dir vorgegebene, erwartete Ausgabe liefern.

Jedes Tutorial sollte die folgende Struktur aufweisen:

### Dateiname.md

    Tutorial
    --------
    Hier kannst du einen Text hinschreiben, der das Thema kurz erklärt.

    Übung
    -----
    Hier musst du den Sinn der Übung beschreiben. Die Übung sollte durch Anwendung der neu erlernten 
    Fähigkeiten erfolgen.

    Tutorial Code
    -------------
    Schreibe einen Code Block, der im Interpreter Fenster erscheint. Zu Beispiel könntest du eine leere
    Funktion vorgeben, die der Nutzer vervollständigen muss, um die Übung abzuschließen.

    Erwartete Ausgabe
    -----------------
    Schreib einen Code Block, der genau die Ausgabe beschreibt, die der korrekt vervollständigte Code 
    liefert.

    Lösung
    ------
    Gib die den Lösungscode für das Problem an.
