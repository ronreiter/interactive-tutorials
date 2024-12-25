Listele sunt foarte asemănătoare cu matricile. Acestea pot conține orice tip de variabilă și pot conține oricâte variabile dorești. Listele pot fi, de asemenea, parcurse într-un mod foarte simplu. Iată un exemplu despre cum să construiești o listă.

mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)
print(mylist[0]) # prints 1
print(mylist[1]) # prints 2
print(mylist[2]) # prints 3

# prints out 1,2,3
for x in mylist:
    print(x)

Accesarea unui index care nu există generează o excepție (o eroare).

mylist = [1,2,3]
print(mylist[10])

Exercițiu
--------

În acest exercițiu, va trebui să adaugi numere și șiruri de caractere în listele corecte folosind metoda "append" a listelor. Trebuie să adaugi numerele 1, 2 și 3 în lista "numbers" și cuvintele 'hello' și 'world' în variabila strings.

De asemenea, va trebui să completezi variabila second_name cu al doilea nume din lista names, folosind operatorul paranteze `[]`. Reține că indexul începe de la zero, așa că dacă dorești să accesezi al doilea element din listă, indexul său va fi 1.