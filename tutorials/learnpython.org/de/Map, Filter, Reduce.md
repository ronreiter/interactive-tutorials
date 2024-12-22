Map, Filter und Reduce sind Paradigmen der funktionalen Programmierung. Sie ermöglichen es dem Programmierer (Ihnen), einfacheren, kürzeren Code zu schreiben, ohne sich unbedingt um komplizierte Details wie Schleifen und Verzweigungen kümmern zu müssen.

Im Wesentlichen erlauben Ihnen diese drei Funktionen, eine Funktion auf eine Anzahl von Iterablen in einem Zug anzuwenden. ```map``` und ```filter``` sind standardmäßig in Python eingebaut (im Modul ```__builtins__```) und erfordern keinen Import. ```reduce``` muss jedoch importiert werden, da es im Modul ```functools``` liegt. Lassen Sie uns besser verstehen, wie sie alle funktionieren, beginnend mit ```map```.

#### Map
Die ```map()``` Funktion in Python hat die folgende Syntax:

```map(func, *iterables)```

Dabei ist ```func``` die Funktion, die auf jedes Element in ```iterables``` (so viele es auch sind) angewendet wird. Beachten Sie das Sternchen (```*```) bei ```iterables```? Es bedeutet, dass es so viele Iterablen wie möglich geben kann, solange ```func``` genau so viele als erforderliche Eingabeargumente hat. Bevor wir zu einem Beispiel übergehen, ist es wichtig, dass Sie Folgendes beachten:

1. In Python 2 gibt die ```map()```-Funktion eine Liste zurück. In Python 3 gibt die Funktion jedoch ein ```map object``` zurück, das ein Generatorobjekt ist. Um das Ergebnis als Liste zu erhalten, kann die eingebaute ```list()```-Funktion auf das Mapobjekt aufgerufen werden, d.h. ```list(map(func, *iterables))```
2. Die Anzahl der Argumente für ```func``` muss die Anzahl der angegebenen ```iterables``` sein. 

Lassen Sie uns sehen, wie diese Regeln mit den folgenden Beispielen umgesetzt werden.

Wenn ich eine Liste (```iterable```) meiner Lieblings-Haustiernamen habe, alle in Kleinbuchstaben, und sie in Großbuchstaben benötige. Traditionell würde ich in normalem Python so etwas tun:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Was dann ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']``` ausgeben würde.

Mit ```map()```-Funktionen ist es nicht nur einfacher, sondern auch viel flexibler. Ich mache einfach das:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Was ebenfalls das gleiche Ergebnis ausgeben würde. Beachten Sie, dass nach der oben definierten ```map()```-Syntax ```func``` in diesem Fall ```str.upper``` ist und ```iterables``` die Liste ```my_pets``` -- nur ein Iterable. Beachten Sie auch, dass wir die ```str.upper```-Funktion nicht aufgerufen haben (also: ```str.upper()```), da die Map-Funktion dies für uns auf _jedes Element in der ```my_pets```-Liste_ tut.

Was noch wichtiger zu beachten ist: Die ```str.upper```-Funktion benötigt per Definition nur **ein** Argument, und so haben wir nur **ein** Iterable an sie übergeben. Wenn die von Ihnen übergebene Funktion jedoch zwei, drei oder n Argumente benötigt, dann müssen Sie zwei, drei oder n Iterablen an sie übergeben. Lassen Sie mich dies mit einem weiteren Beispiel verdeutlichen.

Angenommen, ich habe eine Liste von Kreisflächen, die ich irgendwo berechnet habe, alle auf fünf Dezimalstellen. Und ich muss jedes Element in der Liste auf seine Position in Dezimalstellen runden, das bedeutet, dass ich das erste Element in der Liste auf eine Dezimalstelle runden muss, das zweite Element in der Liste auf zwei Dezimalstellen, das dritte Element in der Liste auf drei Dezimalstellen usw. Mit ```map()``` ist dies ein Kinderspiel. Sehen wir uns an, wie.

Python segnet uns bereits mit der eingebauten Funktion ```round()```, die zwei Argumente nimmt -- die Zahl, die gerundet werden soll, und die Anzahl der Dezimalstellen, auf die die Zahl gerundet werden soll. Da die Funktion **zwei** Argumente benötigt, müssen wir **zwei** Iterablen übergeben.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Sehen Sie die Schönheit von ```map()```? Können Sie die Flexibilität ahnen, die dies hervorruft?

Die Funktion ```range(1, 7)``` fungiert als zweites Argument für die Funktion ```round``` (die Anzahl der erforderlichen Dezimalstellen pro Iteration). Während ```map``` durch ```circle_areas``` iteriert, wird während der ersten Iteration das erste Element von ```circle_areas```, ```3.56773```, zusammen mit dem ersten Element von ```range(1,7)```, ```1``` an ```round``` übergeben, wodurch es effektiv zu ```round(3.56773, 1)``` wird. Während der zweiten Iteration wird das zweite Element von ```circle_areas```, ```5.57668```, zusammen mit dem zweiten Element von ```range(1,7)```, ```2``` an ```round``` übergeben, wodurch es zu ```round(5.57668, 2)``` übersetzt wird. Dies geschieht, bis das Ende der ```circle_areas```-Liste erreicht ist.

Ich bin sicher, Sie fragen sich: "Was passiert, wenn ich ein Iterable übergebe, das kürzer oder länger als das erste Iterable ist? Das heißt, was passiert, wenn ich ```range(1, 3)``` oder ```range(1, 9999)``` als zweites Iterable in der obigen Funktion übergebe". Und die Antwort ist einfach: nichts! Okay, das stimmt nicht. "Nichts" passiert in dem Sinne, dass die ```map()```-Funktion keine Ausnahme auslöst, sie iteriert einfach über die Elemente, bis sie kein zweites Argument für die Funktion mehr findet, und dann hört sie einfach auf und gibt das Ergebnis zurück.

Wenn Sie zum Beispiel ```result = list(map(round, circle_areas, range(1, 3)))``` auswerten, erhalten Sie keinen Fehler, selbst wenn sich die Länge von ```circle_areas``` und die Länge von ```range(1, 3)``` unterscheiden. Stattdessen macht Python Folgendes: Es nimmt das erste Element von ```circle_areas``` und das erste Element von ```range(1,3)``` und gibt es an ```round``` weiter. ```round``` wertet es aus und speichert das Ergebnis. Dann geht es weiter zur zweiten Iteration, dem zweiten Element von ```circle_areas``` und dem zweiten Element von ```range(1,3)```, und ```round``` speichert es erneut. Nun, in der dritten Iteration (```circle_areas``` hat ein drittes Element), nimmt Python das dritte Element von ```circle_areas``` und versucht dann, das dritte Element von ```range(1,3)``` zu nehmen, aber da ```range(1,3)``` kein drittes Element hat, hört Python einfach auf und gibt das Ergebnis zurück, das in diesem Fall einfach ```[3.6, 5.58]``` wäre.

Versuchen Sie es, probieren Sie es aus.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


Das Gleiche passiert, wenn ```circle_areas``` kürzer als das zweite Iterable ist. Python stoppt einfach, wenn es das nächste Element in einem der Iterablen nicht finden kann. 

Um unser Wissen über die ```map()```-Funktion zu festigen, werden wir sie verwenden, um unsere eigene benutzerdefinierte ```zip()```-Funktion zu implementieren. Die ```zip()```-Funktion ist eine Funktion, die eine Anzahl von Iterablen nimmt und dann ein Tupel erstellt, das jeweils die Elemente in den Iterablen enthält. Wie ```map()``` gibt sie in Python 3 ein Generatorobjekt zurück, das durch Aufrufen der eingebauten ```list```-Funktion darauf leicht in eine Liste konvertiert werden kann. Verwenden Sie die folgende Interpretersitzung, um ein Gefühl für ```zip()``` zu bekommen, bevor wir unsere eigene mit ```map()``` erstellen.

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Bonusfrage: Können Sie erraten, was passieren würde, wenn ```my_strings``` und ```my_numbers``` nicht die gleiche Länge hätten? Nein? Probieren Sie es aus! Ändern Sie die Länge eines von ihnen.

Jetzt zu unserer eigenen benutzerdefinierten ```zip()```-Funktion!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Schauen Sie sich das an! Wir haben das gleiche Ergebnis wie ```zip```.

Haben Sie auch bemerkt, dass ich nicht einmal eine Funktion mit der Standardmethode ```def my_function()``` erstellen musste? Das ist, wie flexibel ```map()```, und Python im Allgemeinen, ist! Ich habe einfach eine ```lambda```-Funktion verwendet. Das soll nicht heißen, dass das Verwenden der Standardfunktiondefinierungsmethode (von ```def function_name()```) nicht erlaubt ist, das ist es immer noch. Ich wollte einfach weniger Code schreiben (also "Pythonic" sein).

Das war alles über ```map```. Weiter zu ```filter()```

#### Filter
Während ```map()``` jedes Element im Iterable durch eine Funktion leitet und das Ergebnis aller Elemente zurückgibt, die durch die Funktion geleitet wurden, erfordert ```filter()``` zuerst, dass die Funktion boolesche Werte (true oder false) zurückgibt und leitet dann jedes Element im Iterable durch die Funktion und "filtert" diejenigen heraus, die false sind. Es hat die folgende Syntax:

```filter(func, iterable)```

Die folgenden Punkte sind in Bezug auf ```filter()``` zu beachten:

1. Im Gegensatz zu ```map()``` ist nur ein Iterable erforderlich.
2. Das Argument ```func``` muss einen booleschen Typ zurückgeben. Wenn dies nicht der Fall ist, gibt ```filter``` einfach das übergebene ```iterable``` zurück. Da nur ein Iterable erforderlich ist, ist impliziert, dass ```func``` nur ein Argument nehmen darf.
3. ```filter``` leitet jedes Element im Iterable durch ```func``` und gibt **nur** diejenigen zurück, die true auswerten. Ich meine, es steht direkt im Namen -- ein "Filter".

Sehen wir uns einige Beispiele an.

Das folgende ist eine Liste (```iterable```) der Punktzahlen von 10 Studenten in einer Chemieprüfung. Lassen Sie uns mit ```filter``` die herausfiltern, die bestanden haben, mit Punktzahlen über 75.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Das nächste Beispiel wird ein Palindrome-Detektor sein. Ein "Palindrom" ist ein Wort, Satz oder eine Folge, die rückwärts gelesen dasselbe ergibt wie vorwärts. Lassen Sie uns Wörter herausfiltern, die Palindrome sind, aus einem Tuple (```iterable```) von vermuteten Palindromen.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Was ```['madam', 'anutforajaroftuna']``` ausgeben sollte.

Ziemlich cool, oder? Schließlich ```reduce()```

#### Reduce
```reduce``` wendet eine Funktion **mit zwei Argumenten** kumulativ auf die Elemente eines Iterables an, optional beginnend mit einem Anfangsargument. Es hat die folgende Syntax:

```reduce(func, iterable[, initial])```

Dabei ist ```func``` die Funktion, auf die jedes Element im ```iterable``` kumulativ angewendet wird, und ```initial``` ist der optionale Wert, der vor den Elementen des Iterables in der Berechnung platziert wird und als Standard dient, wenn das Iterable leer ist. Folgendes sollte in Bezug auf ```reduce()``` beachtet werden:
1. ```func``` erfordert zwei Argumente, wobei das erste das erste Element im ```iterable``` ist (wenn ```initial``` nicht angegeben ist) und das zweite Element im ```iterable```. Wenn ```initial``` angegeben ist, wird es zum ersten Argument von ```func``` und das erste Element im ```iterable``` wird zum zweiten Element.
2. ```reduce``` "reduziert" (ich weiß, vergeben Sie mir) ```iterable``` auf einen einzigen Wert. 

Wie üblich, lassen Sie uns einige Beispiele sehen.

Lassen Sie uns unsere eigene Version von Pythons eingebauter ```sum()```-Funktion erstellen. Die ```sum()```-Funktion gibt die Summe aller Elemente in dem übergebenen Iterable zurück.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


Das Ergebnis, wie Sie es erwarten werden, ist ```68```.

Was ist passiert?

Wie immer geht es um Iterationen: ```reduce``` nimmt die ersten beiden Elemente in ```numbers``` und übergibt sie respektive an ```custom_sum```. ```custom_sum``` berechnet deren Summe und gibt sie an ```reduce``` zurück. ```reduce``` nimmt dieses Ergebnis und wendet es als erstes Element an ```custom_sum``` an und nimmt das nächste Element (dritte) in ```numbers``` als zweites Element zu ```custom_sum```. Es macht dies kontinuierlich (kumulativ), bis ```numbers``` erschöpft ist. 

Sehen wir uns an, was passiert, wenn ich den optionalen ```initial```-Wert verwende.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Das Ergebnis, wie Sie erwarten werden, ist ```78```, da ```reduce``` zunächst ```10``` als erstes Argument an ```custom_sum``` verwendet.

Das war alles über Pythons Map, Reduce, und Filter. Versuchen Sie die unten stehenden Übungen, um Ihr Verständnis für jede Funktion zu festigen.

Übung
--------
In dieser Übung werden Sie jeweils ```map```, ```filter```, und ```reduce``` verwenden, um fehlerhaften Code zu beheben.