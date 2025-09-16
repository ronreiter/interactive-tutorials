Există două tipuri de bucle în Python, for și while.

### Bucle "for"

Buclele for iterează peste o secvență dată. Iată un exemplu:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Buclele for pot itera peste o secvență de numere utilizând funcțiile "range" și "xrange". Diferența dintre range și xrange este că funcția range returnează o nouă listă cu numerele din acel interval specificat, în timp ce xrange returnează un iterator, care este mai eficient. (Python 3 folosește funcția range, care se comportă ca xrange). Rețineți că funcția range începe de la zero.

    # Afișează numerele 0,1,2,3,4
    for x in range(5):
        print(x)

    # Afișează 3,4,5
    for x in range(3, 6):
        print(x)

    # Afișează 3,5,7
    for x in range(3, 8, 2):
        print(x)

### Bucle "while"

Buclele while se repetă atâta timp cât o anumită condiție booleană este îndeplinită. De exemplu:

    # Afișează 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Același lucru ca și count = count + 1

### Instrucțiunile "break" și "continue"

**break** este folosit pentru a ieși dintr-o buclă for sau while, în timp ce **continue** este folosit pentru a sări peste blocul curent și a reveni la instrucțiunea "for" sau "while". Câteva exemple:

    # Afișează 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Afișează doar numerele impare - 1,3,5,7,9
    for x in range(10):
        # Verifică dacă x este par
        if x % 2 == 0:
            continue
        print(x)

### Putem folosi clauza "else" la bucle?

Spre deosebire de limbaje precum C, CPP.. putem folosi **else** la bucle. Când condiția buclei "for" sau "while" nu mai este îndeplinită, atunci partea de cod din "else" este executată. Dacă o instrucțiune **break** este executată în interiorul buclei for, atunci partea "else" este sărită. Rețineți că partea "else" este executată chiar dacă există o instrucțiune **continue**.

Iată câteva exemple:

    # Afișează 0,1,2,3,4 și apoi afișează "valoarea count a ajuns la 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("valoarea count a ajuns la %d" %(count))

    # Afișează 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("acesta nu este afișat deoarece bucla for este terminată din cauza break și nu din lipsa de îndeplinire a condiției")


Exercițiu
--------

Iterează și afișează toate numerele pare din lista numbers în aceeași ordine în care sunt primite. Nu afișa niciun număr care vine după 237 în secvență.