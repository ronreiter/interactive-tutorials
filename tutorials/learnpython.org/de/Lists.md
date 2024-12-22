Lists sind Arrays sehr ähnlich. Sie können jede Art von Variablen enthalten und beliebig viele Variablen aufnehmen. Listen können auch auf sehr einfache Weise durchlaufen werden. Hier ist ein Beispiel, wie man eine Liste erstellt.

mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)
print(mylist[0]) # gibt 1 aus
print(mylist[1]) # gibt 2 aus
print(mylist[2]) # gibt 3 aus

# gibt 1,2,3 aus
for x in mylist:
    print(x)

Der Zugriff auf einen Index, der nicht existiert, erzeugt eine Ausnahme (einen Fehler).

mylist = [1,2,3]
print(mylist[10])

Übung
--------

In dieser Übung müssen Sie Zahlen und Zeichenfolgen mit der "append"-Listenmethode in die richtigen Listen einfügen. Sie müssen die Zahlen 1, 2 und 3 zur Liste "numbers" hinzufügen und die Wörter 'hello' und 'world' zur Zeichenfolgenvariablen.

Sie müssen auch die Variable second_name mit dem zweiten Namen in der Liste names füllen, indem Sie den Klammeroperator `[]` verwenden. Beachten Sie, dass der Index nullbasiert ist, sodass, wenn Sie auf das zweite Element in der Liste zugreifen möchten, der Index 1 lautet.