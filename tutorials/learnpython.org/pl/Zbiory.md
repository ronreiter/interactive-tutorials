Tutorial
--------

Zbiór (ang. _set_) to tablica, w których nie ma dwóch lub więcej identycznych elementów. Powiedzmy, że chcesz dostać zbiór wszystkich słów użytych w danym zdaniu:

    print set("jego imie to Eryk i Eryk jest jego imieniem".split())

W oknie interpretera pojawi się tablica zawierająca "jego", "imie", "to", "Eryk", "i" "jest",  i na końcu "imieniem". Wszystkie słowa, które były użyte w zdaniu dwa lub więcej razy, pojawiają się w zbiorze tylko raz.

Python umożliwia wykonywanie podstawowych działań na zbiorach. Jako przykład rozważmy dwa zbiory, w których zapisano imion A i B

    A = set(["Jake", "John", "Eric"])
    B = set(["John", "Jill"])

Aby dowiedzieć się, które osoby brały udział w obu wydarzeniach, użyj metody `intersection` (część wspólna):

    print A.intersection(B) # set(['John'])
    print B.intersection(A) # set(['John'])

Aby ustalić, którzy brali udział tylko w jednym z wydarzeń, użyj metody `symmetric_difference` (różnica symetryczna):

    print A.symmetric_difference(B) # set(['Jill', 'Jake', 'Eric'])
    print B.symmetric_difference(A) # set(['Jill', 'Jake', 'Eric'])

Wyodrębnieniu osób, które brały udział w A i nie brały w B, służy różnica zbiorów `difference`:

    print A.difference(B) # set(['Jake', 'Eric']
    print B.difference(A) # set(['Jill'])
    

Z kolei `union` (suma zbiorów) da nam listę wszyskich osób:

    print A.union(B) # set(['Jill', 'Jake', 'John', 'Eric'])
    
### Ćwiczenie

W ćwiczeniu poniżej utwórz zbiory A, B, C z odpowiednich tablic i wypisz następujące zbiory imion:

1. Imiona, które są w przynajmniej w jednym ze zbiorów A, B i C (czyli zwykła suma);

2. Imiona, które są jednocześnie w zbiorach A, B i C;

3. Imiona, które są albo w zbiorze A, albo w sumie zbiorów B i C.


Tutorial Code
-------------
tablica_a = ['Anna', 'Monika', 'Joanna', 'Ewa', 'Karolina', 'Kacper', 'Dawid', 'Mateusz', 'Ewa', 'Bartosz']
tablica_b = ['Kuba', 'Paulina', 'Marzena', 'Zuza', 'Tomek', 'Ewa', 'Bartek', 'Olek', 'Jacek', 'Magda', 'Paulina']
tablica_c = ['Anastazja', 'Ewa', 'Monika', 'Anna', 'Karolina', 'Ola', 'Ula', 'Maciek', 'Paulina']

Expected Output
---------------
set(['Zuza', 'Ewa', 'Maciek', 'Jacek', 'Mateusz', 'Magda', 'Ula', 'Olek', 'Anna', 'Ola', 'Paulina', 'Tomek', 'Karolina', 'Marzena', 'Anastazja', 'Joanna', 'Bartosz', 'Monika', 'Bartek', 'Dawid', 'Kacper', 'Kuba'])
set(['Ewa'])
set(['Zuza', 'Dawid', 'Maciek', 'Jacek', 'Mateusz', 'Magda', 'Ula', 'Olek', 'Ola', 'Paulina', 'Tomek', 'Marzena', 'Anastazja', 'Joanna', 'Bartosz', 'Bartek', 'Kacper', 'Kuba'])

Solution
--------
