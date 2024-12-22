Această secțiune explică cum să folosești operatorii de bază în Python.

### Arithmetic Operators       

La fel ca în orice alt limbaj de programare, operatorii de adunare, scădere, înmulțire și împărțire pot fi folosiți cu numere.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Încercați să preziceți care va fi răspunsul. Urmează Python ordinea operațiilor?

Un alt operator disponibil este operatorul modulo (%) care returnează restul întreg al împărțirii. dividend % divizor = rest.

    remainder = 11 % 3
    print(remainder)

Folosirea a două simboluri de înmulțire creează o relație de putere.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python suportă concatenarea string-urilor utilizând operatorul de adunare:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python suportă, de asemenea, înmulțirea string-urilor pentru a forma un șir cu o secvență care se repetă:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

Listele pot fi unite cu operatorii de adunare:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

La fel ca în string-uri, Python suportă formarea de noi liste cu o secvență care se repetă folosind operatorul de înmulțire:

    print([1,2,3] * 3)

Exercițiu
--------

Scopul acestui exercițiu este de a crea două liste denumite `x_list` și `y_list`, care conțin 10 instanțe ale variabilelor `x` și `y`, respectiv. De asemenea, trebuie să creați o listă numită `big_list`, care conține variabilele `x` și `y`, de 10 ori fiecare, prin concatenarea celor două liste pe care le-ați creat.