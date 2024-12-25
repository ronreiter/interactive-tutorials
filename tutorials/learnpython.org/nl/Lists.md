Lijsten lijken erg op arrays. Ze kunnen elke soort variabele bevatten en zoveel variabelen als je wenst. Lijsten kunnen ook op een zeer eenvoudige manier worden geïterateerd. Hier is een voorbeeld van hoe je een lijst kunt opbouwen.

```python
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
```

Toegang tot een index die niet bestaat genereert een uitzondering (een fout).

```python
mylist = [1,2,3]
print(mylist[10])
```

Exercise
--------

In deze oefening moet je getallen en strings toevoegen aan de juiste lijsten met behulp van de "append"-lijstmethode. Je moet de getallen 1, 2 en 3 toevoegen aan de "numbers" lijst, en de woorden 'hello' en 'world' aan de strings-variabele.

Je moet ook de variabele `second_name` vullen met de tweede naam in de `names` lijst, met behulp van de haakjesoperator `[]`. Merk op dat de index nul-gebaseerd is, dus als je toegang wilt tot het tweede item in de lijst, is de index 1.