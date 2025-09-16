Această secțiune explică cum să folosești operatorii de bază în Python.

### Operatori Aritmetici       

La fel ca în orice alt limbaj de programare, operatorii de adunare, scădere, înmulțire și împărțire pot fi utilizați cu numere.

    number = 1 + 2 * 3 / 4.0
    print(number)

Încercați să preziceți ce va fi răspunsul. Urmărește Python ordinea operațiilor?

Un alt operator disponibil este operatorul modulo (%) care returnează restul întreg al împărțirii. dividend % divizor = rest.

    remainder = 11 % 3
    print(remainder)

Folosirea a două simboluri de înmulțire creează o relație de putere.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Utilizarea Operatorilor cu Șiruri

Python suportă concatenarea șirurilor folosind operatorul de adunare:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python suportă, de asemenea, multiplicarea șirurilor pentru a forma un șir cu o secvență repetitivă:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Utilizarea Operatorilor cu Liste

Listele pot fi unite cu operatorul de adunare:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

La fel ca la șiruri, Python suportă formarea de noi liste cu o secvență repetitivă folosind operatorul de înmulțire:

    print([1,2,3] * 3)

Exercițiu
--------

Scopul acestui exercițiu este să creați două liste numite `x_list` și `y_list`,
care conțin 10 instanțe ale variabilelor `x` și `y`, respectiv.
De asemenea, trebuie să creați o listă numită `big_list`, care să conțină
variabilele `x` și `y`, de 10 ori fiecare, prin concatenarea celor două liste pe care le-ați creat.