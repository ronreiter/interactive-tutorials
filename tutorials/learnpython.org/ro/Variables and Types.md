Python este complet orientat obiectual și nu este "de tipare statică". Nu trebuie să declarați variabile înainte de a le folosi sau să le declarați tipul. Fiecare variabilă în Python este un obiect.

Acest tutorial va parcurge câteva tipuri de bază de variabile.

### Numbers
Python suportă două tipuri de numere - întregi (numere întregi) și numere cu virgulă mobilă (zecimale). (De asemenea, suportă numere complexe, care nu vor fi explicate în acest tutorial).

Pentru a defini un număr întreg, utilizați următoarea sintaxă:

    myint = 7
    print(myint)

Pentru a defini un număr cu virgulă mobilă, puteți folosi una dintre următoarele notații:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

Șirurile sunt definite fie cu ghilimele simple, fie cu ghilimele duble.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Diferența între cele două este că folosirea ghilimelelor duble face ca includerea apostrofurilor să fie ușoară (în timp ce acestea ar termina șirul dacă folosiți ghilimele simple).

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
Există variații suplimentare în definirea șirurilor, care fac ca includerea lucrurilor cum ar fi returnările de car, barele inversate și caracterele Unicode să fie mai ușoară. Acestea sunt dincolo de aria acestui tutorial, dar sunt acoperite în [Python documentation](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Operatorii simpli pot fi executați pe numere și șiruri:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Atribuiri pot fi făcute la mai mult de o variabilă "simultan" pe aceeași linie astfel

    a, b = 3, 4
    print(a, b)

Amestecul operatorilor între numere și șiruri nu este suportat:

    # Aceasta nu va funcționa!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercițiu
--------

Scopul acestui exercițiu este să creați un șir, un număr întreg și un număr cu virgulă mobilă. Șirul ar trebui să fie numit `mystring` și ar trebui să conțină cuvântul "hello". Numărul cu virgulă mobilă ar trebui să fie numit `myfloat` și ar trebui să conțină numărul 10.0, iar numărul întreg ar trebui să fie numit `myint` și să conțină numărul 20.