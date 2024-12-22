Listy są bardzo podobne do tablic. Mogą zawierać dowolny typ zmiennych i mogą zawierać tyle zmiennych, ile tylko zechcesz. Listy można również iterować w bardzo prosty sposób. Oto przykład, jak stworzyć listę.

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

Dostęp do indeksu, który nie istnieje, generuje wyjątek (błąd).

mylist = [1,2,3]  
print(mylist[10])

Ćwiczenie
--------

W tym ćwiczeniu musisz dodać liczby i ciągi do odpowiednich list, używając metody listy "append". Musisz dodać liczby 1,2 i 3 do listy "numbers", a słowa 'hello' i 'world' do zmiennej strings.

Musisz również uzupełnić zmienną second_name drugim imieniem z listy names, używając operatora nawiasów `[]`. Zauważ, że indeks jest numerowany od zera, więc jeśli chcesz uzyskać dostęp do drugiego elementu na liście, jego indeks to 1.