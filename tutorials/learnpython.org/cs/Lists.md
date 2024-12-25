Lists jsou velmi podobné polím. Mohou obsahovat jakýkoliv typ proměnných a mohou obsahovat tolik proměnných, kolik si přejete. Listy lze také velmi jednoduše procházet. Zde je příklad, jak vytvořit seznam.

mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)
print(mylist[0]) # tiskne 1
print(mylist[1]) # tiskne 2
print(mylist[2]) # tiskne 3

# tiskne 1,2,3
for x in mylist:
    print(x)

Přístup k indexu, který neexistuje, generuje výjimku (chybu).

mylist = [1,2,3]
print(mylist[10])

Exercise
--------

V tomto cvičení budete muset přidat čísla a řetězce do správných seznamů pomocí metody seznamu "append". Musíte přidat čísla 1,2 a 3 do seznamu "numbers" a slova 'hello' a 'world' do proměnné strings.

Budete také muset vyplnit proměnnou second_name druhým jménem v seznamu names, pomocí operátoru hranatých závorek `[]`. Pamatujte, že index je založen na nule, takže pokud chcete přistoupit k druhé položce v seznamu, její index bude 1.