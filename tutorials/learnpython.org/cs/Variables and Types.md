Python je zcela objektově orientovaný a není "staticky typovaný". Nemusíte deklarovat proměnné před jejich použitím nebo deklarovat jejich typ. Každá proměnná v Pythonu je objekt.

Tento tutoriál pojednává o několika základních typech proměnných.

### Čísla
Python podporuje dva typy čísel - celá čísla (celé čísla) a desetinná čísla (čísla s plovoucí desetinnou čárkou). (Podporuje také komplexní čísla, která v tomto tutoriálu nebudou vysvětlena).

Pro definici celého čísla použijte následující syntaxi:

Pro definici čísla s plovoucí desetinnou čárkou můžete použít jednu z následujících notací:

### Řetězce

Řetězce jsou definovány buď pomocí jednoduchých uvozovek nebo dvojitých uvozovek.

Rozdíl mezi těmito dvěma je, že použití dvojitých uvozovek usnadňuje zahrnutí apostrofů (zatímco by tyto ukončily řetězec při použití jednoduchých uvozovek)

Existují další varianty definování řetězců, které usnadňují zahrnutí věcí, jako jsou návratky, zpětná lomítka a znaky Unicode. Tyto jsou mimo rozsah tohoto tutoriálu, ale jsou pokryty v [dokumentaci Pythonu](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Na číslech a řetězcích lze provádět jednoduché operátory:

Přiřazení mohou být provedena na více než jedné proměnné "simultánně" na stejném řádku jako toto

Míchání operátorů mezi čísly a řetězci není podporováno:

Exercise
--------

Cílem tohoto cvičení je vytvořit řetězec, celé číslo a desetinné číslo. Řetězec by měl být pojmenován `mystring` a měl by obsahovat slovo "hello". Desetinné číslo by mělo být pojmenováno `myfloat` a mělo by obsahovat číslo 10.0 a celé číslo by mělo být pojmenováno `myint` a mělo by obsahovat číslo 20.