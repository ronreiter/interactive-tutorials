Tutorial
--------

Listy składane (ang. _list comprehension_) są potężnym narzędzie, które tworzy nową tablicę na podstawie innej tablicy. I to wszystko w jednej, czytelnej instrukcji. 

Przykładowo powiedzmy, że potrzebujemy stworzyć nową tablicę liczb całkowitych, które określają długość każdego słowa w pewnym napisie, ale pod warunkiem, że nie jest to słowo "nad".

    napis = 'Odwazny rudy lis przeskoczyl nad spiacym wilczurem'
    slowa = napis.split() # tworzymy tablice ze slowami zawartymi w napisie
    dlugosc_slow = []
    for slowo in slowa:
        if slowo != 'nad':
            dlugosc_slow.append(len(slowo))

    print dlugosc_slow

Za pomocą listy składanej możemy uprościć cały zapis:

    napis = 'Odwazny rudy lis przeskoczyl nad spiacym wilczurem'
    slowa = napis.split()
    dlugosc_slow = [len(slowo) for slowo in slowa if slowo != 'nad']

    print dlugosc_slow

Jeśli chcemy, to możemy pominąć część z `if`, dzięki czemu operacja będzie przeprowadzona dla wszystkich obiektów.

    napis = 'Odwazny rudy lis przeskoczyl nad spiacym wilczurem'
    slowa = napis.split()
    dlugosc_slow = [len(slowo) for slowo in slowa]

    print dlugosc_slow

### Ćwiczenie

Z pomocą listy składanej stwórz nową tablicę `nowa` na podstawie tablicy `liczby`. `nowa` ma się składać z całkowitych części nieujemnych liczb tablicy `liczby`. Wskazówka: liczbę rzeczywistą możemy zaokrąglić do całkowitej za pomocą `int()`, np.: `int(4.3)` da nam `4`.

Tutorial Code
-------------
liczby = [34.6, -203.4, 44.9, 68.3, -12.2, 44.6, 12.7]

nowa = []

print nowa

Expected Output
---------------
[34, 44, 68, 44, 12]

Solution
--------
