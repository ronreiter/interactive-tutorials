Luarea Inputului și afișarea Outputului în modurile cerute joacă un rol important în programarea interactivă. Așadar, să ne concentrăm pe intrarea și ieșirea diferitelor tipuri de date.

### raw_input()
Aceasta este utilizată pentru a lua input atâta timp cât se ajunge la sfârșitul liniei. Rețineți că nu ar trebui să existe spații. Luarea inputului se termină cu un caracter de linie nouă și dacă există spații în linia de intrare, rezultă o eroare.

    # Print the input received from stdin
    astring=raw_input()# introduce hello ca input
    print raw_input()

după ce luăm inputul, le putem converti în tipul de date dorit folosind funcții precum int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

### input()
Acesta este utilizat în special pentru a introduce numere întregi. Avantajul input() față de raw_input() poate fi clarificat cu exemplul următor

    # introduceți 2*2 ca input
    a=input()
    b=raw_input() # rețineți că int(raw_input()) duce la eroare
    print a # afișează 4
    print b # afișează 2*2

### cum să luăm două sau mai multe tipuri de date ca input dintr-o singură linie separate prin spații?
Aici folosim funcțiile split() și map()

    # introduceți doi întregi pe prima linie și mai mult de doi întregi pe a treia linie
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # afișează primii doi întregi de pe prima linie și suma întregilor de pe a doua linie

### Formatarea ieșirii
Probabil ați observat deja că instrucțiunea print inserează automat o linie nouă. Utilizarea virgulei, ca în codul de mai sus, afișează valorile într-o singură linie separate printr-un spațiu. Modulul sys oferă diverse funcții pentru formatarea ieșirii, dar aici învățăm cum să folosim cunoștințele de bază de formatare pentru a produce ieșirea în modul nostru dorit. Să vedem câteva exemple pentru a învăța formatarea ieșirii.

    a = 5
    b = 0.63
    c = "hello"
    print "a este : %d, b este %0.4f, c este %s" % (a, b, c)

Outputul trebuie să fie autoexplicativ.

Exercițiu
--------

Scrieți un program care să ceară utilizatorului să introducă numele, vârsta și țara. Programul ar trebui să afirme un mesaj care să includă această informație într-o propoziție. Programul ar trebui să includă:

1. Luarea unui nume ca input folosind `raw_input()`.
2. Luarea unei vârste ca input folosind `input()`, și convertirea acesteia la un număr întreg.
3. Luarea numelui unei țări ca input folosind `raw_input()`.
4. Formatarea ieșirii pentru a afișa o propoziție care include numele, vârsta și țara.

Programul ar trebui să demonstreze gestionarea inputului și formatarea șirurilor de caractere în Python.