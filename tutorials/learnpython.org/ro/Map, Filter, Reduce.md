Map, Filter și Reduce sunt paradigme ale programării funcționale. Ele vă permit să scrieți un cod mai simplu și mai scurt, fără a trebui neapărat să vă preocupați de detalii precum bucle și ramificări.

Practic, aceste trei funcții vă permit să aplicați o funcție pe un număr de iterabile, într-o singură lovitură. ```map``` și ```filter``` sunt integrate în Python (în modulul ```__builtins__```) și nu necesită importare. Totuși, ```reduce``` trebuie importat deoarece se află în modulul ```functools```. Să înțelegem mai bine cum funcționează toate, începând cu ```map```.

#### Map
Funcția ```map()``` din python are următoarea sintaxă:

```map(func, *iterables)```

Unde ```func``` este funcția asupra căreia fiecare element din ```iterables``` (oricât de multe ar fi) va fi aplicat. Observați asteriscul (```*```) pe ```iterables```? Asta înseamnă că pot fi atât de multe iterabile precum este posibil, în măsura în care ```func``` are exact acea cantitate necesară ca argumente de intrare. Înainte să trecem la un exemplu, este important să notați următoarele:

1. În Python 2, funcția ```map()``` returnează o listă. În Python 3, însă, funcția returnează un ```obiect map``` care este un obiect generator. Rezultatul se poate obține ca listă apelând funcția integrată ```list()``` pe obiectul map, adică ```list(map(func, *iterables))```.
2. Numărul de argumente pentru ```func``` trebuie să fie egal cu numărul de ```iterables``` listate.

Să vedem cum se aplică aceste reguli în următoarele exemple.

Să zicem că am o listă (```iterable```) de nume de animale de companie preferate, toate în litere mici și am nevoie de ele în litere mari. În mod tradițional, în python normal, aș face ceva de genul:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Ceea ce ar afișa ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

Cu funcțiile ```map()```, nu numai că este mai ușor, dar este și mult mai flexibil. Simplu fac asta:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Ceea ce ar afișa același rezultat. Notați că folosind sintaxa definită a ```map()``` de mai sus, ```func``` în acest caz este ```str.upper``` și ```iterables``` este lista ```my_pets``` -- doar un singur iterable. De asemenea, notați că nu am apelat funcția ```str.upper``` (făcând asta: ```str.upper()```), deoarece funcția map o face pentru noi pe _fiecare element din lista ```my_pets```.

Ce este mai important de notat este că funcția ```str.upper``` necesită doar **un** argument prin definiție și, prin urmare, am transmis doar **un** iterable către ea. Așadar, _dacă funcția pe care o transmiteți necesită două, trei sau n argumente_, atunci _trebuie să transmiteți două, trei sau n iterabile către ea_. Să clarificăm acest lucru cu un alt exemplu.

Să zicem că am o listă de arii de cercuri pe care le-am calculat undeva, toate cu cinci zecimale. Și am nevoie să rotunjesc fiecare element din listă la poziția lui cu zecimale, ceea ce înseamnă că trebuie să rotunjesc primul element din listă la o zecimală, al doilea element din listă la două zecimale, al treilea element din listă la trei zecimale, etc. Cu ```map()``` aceasta este o bucată de tort. Să vedem cum.

Python ne binecuvântează deja cu funcția integrată ```round()``` care ia două argumente -- numărul de rotunjit și numărul de zecimale la care numărul să fie rotunjit. Deci, deoarece funcția necesită **două** argumente, trebuie să transmitem **două** iterabile.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Vedeți frumusețea funcției ```map()```? Puteți să vă imaginați flexibilitatea pe care o evocă?

Funcția ```range(1, 7)``` acționează ca al doilea argument pentru funcția ```round``` (numărul de zecimale necesare pe iterație). Așadar, pe măsură ce ```map``` iterează prin ```circle_areas```, în timpul primei iterații, primul element al ```circle_areas```, ```3.56773``` este transmis împreună cu primul element al ```range(1,7)```, ```1``` la ```round```, făcându-l să devină efectiv ```round(3.56773, 1)```. În timpul celei de-a doua iterații, al doilea element al ```circle_areas```, ```5.57668``` împreună cu al doilea element al ```range(1,7)```, ```2``` este transmis la ```round```, făcându-l să se traducă în ```round(5.57668, 2)```. Acest lucru se întâmplă până la finalul listei ```circle_areas```.

Sunt sigur că vă întrebați: "Ce se întâmplă dacă transmit un iterable mai mic sau mai mare decât lungimea primului iterable? Adică, ce se întâmplă dacă transmit ```range(1, 3)``` sau ```range(1, 9999)``` ca al doilea iterable în funcția de mai sus". Și răspunsul este simplu: nimic! De fapt, asta nu e adevărat. "Nimic" se întâmplă în sensul că funcția ```map()``` nu va ridica nicio excepție, ci pur și simplu va itera peste elemente până nu mai poate găsi un al doilea argument pentru funcție, moment în care pur și simplu se oprește și returnează rezultatul.

Deci, de exemplu, dacă evaluați ```result = list(map(round, circle_areas, range(1, 3)))```, nu veți obține nicio eroare chiar dacă lungimea ```circle_areas``` și lungimea ```range(1, 3)``` diferă. În schimb, iată ce face Python: Ia primul element al ```circle_areas``` și primul element al ```range(1,3)``` și îl transmite la ```round```. ```round``` îl evaluează și apoi salvează rezultatul. Apoi trece la cea de-a doua iterație, al doilea element al ```circle_areas``` și al doilea element al ```range(1,3)```, ```round``` îl salvează din nou. Acum, în cea de-a treia iterație (```circle_areas``` are un al treilea element), Python ia al treilea element al ```circle_areas``` și încearcă să ia al treilea element al ```range(1,3)```, dar cum ```range(1,3)``` nu are un al treilea element, Python pur și simplu se oprește și returnează rezultatul, care în acest caz ar fi pur și simplu ```[3.6, 5.58]```.

Mergeți înainte, încercați.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


Același lucru se întâmplă dacă ```circle_areas``` este mai mic decât lungimea celui de-al doilea iterable. Python pur și simplu se oprește când nu mai poate găsi următorul element într-unul dintre iterabile.

Pentru a consolida cunoștințele noastre despre funcția ```map()```, o vom folosi pentru a implementa propria noastră funcție ```zip()```. Funcția ```zip()``` este o funcție care ia un număr de iterabile și apoi creează un tuplu conținând fiecare dintre elementele din iterabile. Ca și ```map()```, în Python 3, returnează un obiect generator, care poate fi ușor convertit într-o listă prin apelarea funcției integrate ```list``` pe el. Folosiți sesiunea de mai jos a interpretului pentru a vă familiariza cu ```zip()``` înainte de a crea al nostru cu ```map()```.

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Ca un bonus, puteți ghici ce s-ar întâmpla în sesiunea de mai sus dacă ```my_strings``` și ```my_numbers``` nu sunt de aceeași lungime? Nu? Încercați! Schimbați lungimea uneia dintre ele.

Trecem la propria noastră funcție ```zip()``` personalizată!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Priviți doar asta! Avem același rezultat ca și ```zip```.

Ați observat că nici măcar nu a fost nevoie să creez o funcție folosind metoda standard ```def my_function()```? Asta este cât de flexibilă este funcția ```map()```, și Python în general! Am folosit pur și simplu o funcție ```lambda```. Acest lucru nu înseamnă că folosirea metodei standard de definiție a funcției (cu ```def function_name()```) nu este permisă, încă este. Pur și simplu am preferat să scriu mai puțin cod (fiind "Pythonic").

Asta este tot despre map. Trecem la ```filter()```

#### Filter
În timp ce ```map()``` trece fiecare element în iterable printr-o funcție și returnează rezultatul tuturor elementelor care au trecut prin funcție, ```filter()```, în primul rând, necesită ca funcția să returneze valori booleene (adevărat sau fals) și apoi trece fiecare element în iterable prin funcție, "filtrând" acelea care sunt false. Are următoarea sintaxă:

```filter(func, iterable)```

Următoarele puncte trebuie notate în legătură cu ```filter()```:

1. Spre deosebire de ```map()```, este necesar un singur iterable.
2. Argumentul ```func``` este necesar să returneze un tip boolean. Dacă nu o face, ```filter``` returnează pur și simplu ```iterable``` transmis. De asemenea, pentru că este nevoie de un singur iterable, este implicit faptul că ```func``` trebuie să ia doar un argument.
3. ```filter``` trece fiecare element în iterable prin ```func``` și returnează doar pe cele care evaluează la adevărat. Este chiar acolo în nume - un "filtru".

Să vedem câteva exemple

Următorul este o listă (```iterable```) cu scorurile a 10 studenți la un examen de Chimie. Să filtrăm pe cei care au trecut cu scoruri mai mari de 75... folosind ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Următorul exemplu va fi un detector de palindromuri. Un "palindrom" este un cuvânt, o frază sau o secvență care se citește la fel înapoi ca și înainte. Să filtrăm cuvintele care sunt palindromuri dintr-un tuplu (```iterable```) de presupuse palindromuri.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Care ar trebui să afișeze ```['madam', 'anutforajaroftuna']```.

Destul de grozav, nu-i așa? În cele din urmă, ```reduce()```

#### Reduce
```reduce``` aplică o funcție **cu două argumente** în mod cumulativ la elementele unui iterable, opțional începând cu un argument inițial. Are următoarea sintaxă:

```reduce(func, iterable[, initial])```

Unde ```func``` este funcția pe care fiecare element din ```iterable``` o aplică în mod cumulativ, iar ```initial``` este valoarea opțională care se plasează înaintea elementelor din iterable în calcul și servește ca valoare implicită când iterable este gol. Următoarele aspecte ar trebui notate despre ```reduce()```:
1. ```func``` necesită două argumente, prima dintre acestea fiind primul element din ```iterable``` (dacă ```initial``` nu este furnizat) și al doilea element din ```iterable```. Dacă ```initial``` este furnizat, atunci acesta devine primul argument pentru ```func``` iar primul element din ```iterable``` devine al doilea element.
2. ```reduce``` "reduce" (știu, iertați-mă) ```iterable``` la o singură valoare.

Ca de obicei, să vedem câteva exemple.

Să creăm propria noastră versiune a funcției integrate ```sum()``` din Python. Funcția ```sum()``` returnează suma tuturor articolelor din iterable transmis către ea.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)

Rezultatul, așa cum v-ați aștepta, este ```68```.

Deci, ce s-a întâmplat?

Ca de obicei, totul este despre iterații: ```reduce``` ia primul și al doilea element din ```numbers``` și le transmite la ```custom_sum``` respectiv. ```custom_sum``` calculează suma lor și o returnează la ```reduce```. ```reduce``` ia apoi acel rezultat și îl aplică ca primul element la ```custom_sum``` și ia următorul element (al treilea) din ```numbers``` ca al doilea element pentru ```custom_sum```. Face asta în mod continuu (cumulativ) până când ```numbers``` este epuizat.

Să vedem ce se întâmplă când folosesc valoarea opțională ```initial```.

    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)

Rezultatul, așa cum v-ați aștepta, este ```78``` pentru că ```reduce```, inițial, folosește ```10``` ca prim argument pentru ```custom_sum```.

Aceasta este tot despre Map, Reduce și Filter în Python. Încercați exercițiile de mai jos pentru a vă verifica înțelegerea fiecărei funcții.

Exercițiu
--------
În acest exercițiu, veți folosi fiecare dintre ```map```, ```filter``` și ```reduce``` pentru a repara un cod defect.