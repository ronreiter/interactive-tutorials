Generatoren sind sehr einfach zu implementieren, aber etwas schwierig zu verstehen.

Generatoren werden verwendet, um Iteratoren zu erstellen, jedoch mit einem anderen Ansatz. Generatoren sind einfache Funktionen, die auf spezielle Weise ein iterierbares Set von Elementen einen nach dem anderen zurückgeben.

Wenn eine Iteration über ein Set von Elementen mit dem For-Befehl beginnt, wird der Generator ausgeführt. Sobald der Code der Generatorfunktion eine "yield"-Anweisung erreicht, gibt der Generator seine Ausführung zurück an die For-Schleife und liefert einen neuen Wert aus dem Set zurück. Die Generatorfunktion kann so viele Werte generieren (möglicherweise unendlich viele), wie sie möchte, und gibt jeden nacheinander zurück.

Hier ist ein einfaches Beispiel für eine Generatorfunktion, die 7 zufällige Ganzzahlen zurückgibt:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Diese Funktion entscheidet selbst, wie sie die Zufallszahlen generiert, und führt die yield-Anweisungen nacheinander aus, wobei sie dazwischen pausiert, um die Ausführung an die Hauptschleife zurückzugeben.

Übung
--------

Schreiben Sie eine Generatorfunktion, die die Fibonacci-Reihe zurückgibt. Sie wird mit der folgenden Formel berechnet: Die ersten beiden Zahlen der Reihe sind immer gleich 1, und jede der darauf folgenden Zahlen ist die Summe der letzten beiden Zahlen. Tipp: Können Sie in der Generatorfunktion nur zwei Variablen verwenden? Denken Sie daran, dass Zuweisungen gleichzeitig durchgeführt werden können. Der Code

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

wird gleichzeitig die Werte von a und b tauschen.