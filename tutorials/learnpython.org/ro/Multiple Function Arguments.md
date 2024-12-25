Every function în Python primește un număr predefinit de argumente, dacă este declarată în mod normal, astfel:

Este posibil să declarăm funcții care primesc un număr variabil de argumente, folosind următoarea sintaxă:

Variabila "therest" este o listă de variabile, care primește toate argumentele care au fost date funcției "foo" după primele 3 argumente. Astfel, apelând `foo(1, 2, 3, 4, 5)` va afișa:

De asemenea, este posibil să trimiți argumente funcțiilor prin cuvinte cheie, astfel încât ordinea argumentelor să nu conteze, folosind următoarea sintaxă. Codul următor va genera următoarea ieșire: 
```Suma este: 6
    Rezultatul: 1```

Funcția "bar" primește 3 argumente. Dacă este primit un argument suplimentar "action", și acesta instruiește să se adune numerele, atunci suma este afișată. Alternativ, funcția știe că trebuie să returneze primul argument, dacă valoarea parametrului "number", transmis funcției, este egală cu "first".

Exercise
--------

Completează funcțiile `foo` și `bar` astfel încât să poată primi un număr variabil de argumente (3 sau mai multe). Funcția `foo` trebuie să returneze numărul de argumente suplimentare primite. Funcția `bar` trebuie să returneze `True` dacă argumentul cu cuvântul cheie `magicnumber` are valoarea 7, și `False` în caz contrar.