Lister er svært lik arrays. De kan inneholde hvilken som helst type variabel, og de kan inneholde så mange variabler du ønsker. Lister kan også itereres over på en svært enkel måte. Her er et eksempel på hvordan man bygger en liste.

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

Å få tilgang til en indeks som ikke eksisterer genererer en unntak (en feil).

    mylist = [1,2,3]
    print(mylist[10])

Exercise
--------

I denne oppgaven må du legge til tall og strenger til de korrekte listene ved hjelp av metoden "append" for lister. Du må legge til tallene 1, 2 og 3 til listen "numbers", og ordene 'hello' og 'world' til variabelen strings.

Du vil også måtte fylle variabelen second_name med det andre navnet i listen names, ved å bruke bracket-operatoren `[]`. Merk at indeksen er null-basert, så hvis du ønsker å oppnå tilgang til det andre elementet i listen, er indeksen 1.