Python folosește formatarea de șiruri în stil C pentru a crea noi șiruri formatate. Operatorul "%" este utilizat pentru a formata un set de variabile încapsulate într-un "tuple" (o listă de dimensiune fixă), împreună cu un șir de formatare, care conține text normal împreună cu "specificatori de argumente", simboluri speciale precum "%s" și "%d".

Să presupunem că aveți o variabilă numită "name" cu numele dumneavoastră de utilizator în ea, și atunci doriți să afișați un mesaj de bun venit pentru acel utilizator.

    # Acest cod afișează "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Pentru a folosi doi sau mai mulți specificatori de argumente, folosiți un tuple (paranteze):

    # Acest cod afișează "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Orice obiect care nu este un șir poate fi formatat folosind și operatorul %s. Șirul care se întoarce din metoda "repr" a acelui obiect este formatat ca șirul. De exemplu:

    # Acest cod afișează: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Iată câțiva specificatori de argumente de bază pe care ar trebui să îi cunoașteți:


`%s - String (sau orice obiect cu o reprezentare ca șir, cum ar fi numerele)`

`%d - Întregi`

`%f - Numere cu punct flotant`

`%.<număr de cifre>f - Numere cu punct flotant cu un număr fix de cifre după punct.`

`%x/%X - Întregi în reprezentare hexazecimală (litere mici/mari)`


Exercițiu
--------

Va trebui să scrieți un șir de formatare care afișează datele folosind următoarea sintaxă:
    `Hello John Doe. Your current balance is $53.44.`