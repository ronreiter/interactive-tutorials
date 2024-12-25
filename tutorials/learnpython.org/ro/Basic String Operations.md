Strings sunt bucăți de text. Ele pot fi definite ca orice este între ghilimele:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Așa cum poți vedea, primul lucru pe care l-ai învățat a fost să tipărești o propoziție simplă. Această propoziție a fost stocată de Python ca un șir de caractere. Totuși, în loc să tipărim imediat șiruri de caractere, vom explora diversele lucruri pe care le poți face cu ele. Poți folosi și ghilimele simple pentru a atribui un șir de caractere. Totuși, te vei confrunta cu probleme dacă valoarea de atribuit conține ea însăși ghilimele simple. De exemplu, pentru a atribui șirul în aceste paranteze (ghilimelele simple sunt ' '), trebuie să folosești doar ghilimele duble, astfel:

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Asta va afișa 12, deoarece "Hello world!" are 12 caractere, incluzând punctuația și spațiile.

    astring = "Hello world!"
    print(astring.index("o"))

Aceasta va afișa 4, deoarece locația primei apariții a literei "o" este la 4 caractere distanță de primul caracter. Observă cum există de fapt două "o" în frază - această metodă recunoaște doar prima.

Dar de ce nu a afișat 5? Nu este "o" al cincilea caracter în șir? Pentru a simplifica lucrurile, Python (și cele mai multe alte limbaje de programare) încep indexarea de la 0 în loc de 1. Astfel, indexul lui "o" este 4.

    astring = "Hello world!"
    print(astring.count("l"))

Pentru cei care folosesc fonturi amuzante, acesta este un L mic, nu un număr unu. Aceasta numără câte litere "l" sunt în șir. Prin urmare, ar trebui să afișeze 3.

    astring = "Hello world!"
    print(astring[3:7])

Aceasta afișează o secțiune a șirului, începând de la indexul 3 și terminând la indexul 6. Dar de ce 6 și nu 7? Din nou, majoritatea limbajelor de programare fac asta - face mai ușor calculul în interiorul acelor paranteze.

Dacă ai doar un număr în paranteze, îți va oferi singurul caracter de la acel index. Dacă omiți primul număr dar păstrezi colonul, îți va oferi o secțiune de la început până la numărul pe care l-ai lăsat. Dacă omiți al doilea număr, îți va oferi o secțiune de la numărul primit până la sfârșit.

Poți chiar pune numere negative în interiorul parantezelor. Ele sunt o cale ușoară de a începe de la sfârșitul șirului în loc de început. Astfel, -3 înseamnă "al treilea caracter de la sfârșit".

    astring = "Hello world!"
    print(astring[3:7:2])

Aceasta afișează caracterele șirului de la 3 la 7 sărind câte un caracter. Aceasta este o sintaxă extinsă pentru secțiuni. Forma generală este [start:stop:step].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Observă că ambele produc același rezultat.

Nu există o funcție ca strrev în C pentru a inversa un șir. Dar cu tipul de sintaxă pentru secțiuni menționat mai sus poți inversa un șir astfel:

    astring = "Hello world!"
    print(astring[::-1])

Aceste

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Acestea fac un șir nou cu toate literele convertite la majuscule și, respectiv, la minuscule.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Aceasta este folosită pentru a determina dacă șirul începe cu ceva sau se termină cu ceva, respectiv. Prima va afișa True, deoarece șirul începe cu "Hello". A doua va afișa False, deoarece sigur șirul nu se termină cu "asdfasdfasdf".

    astring = "Hello world!"
    afewwords = astring.split(" ")

Aceasta împarte șirul într-un grup de șiruri adunate într-o listă. Din moment ce acest exemplu împarte la un spațiu, primul element din listă va fi "Hello", iar al doilea va fi "world!".

Exercițiu
--------

Încearcă să corectezi codul pentru a afișa informația corectă prin schimbarea șirului.