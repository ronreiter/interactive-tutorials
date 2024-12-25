Lister er meget lig arrays. De kan indeholde enhver type variabel, og de kan indeholde så mange variabler, som du ønsker. Lister kan også itereres på en meget enkel måde. Her er et eksempel på, hvordan man opbygger en liste.

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

At tilgå en indeks der ikke eksisterer genererer en undtagelse (en fejl).

mylist = [1,2,3]
print(mylist[10])

Øvelse
--------

I denne øvelse skal du tilføje tal og strenge til de korrekte lister ved hjælp af "append"-liste-metoden. Du skal tilføje tallene 1, 2 og 3 til "numbers"-listen og ordene 'hello' og 'world' til strengvariablen.

Du skal også udfylde variablen second_name med det andet navn i navnelisten ved hjælp af brackets-operatoren `[]`. Bemærk, at indekset er nul-baseret, så hvis du vil tilgå det andet element i listen, er dets indeks 1.