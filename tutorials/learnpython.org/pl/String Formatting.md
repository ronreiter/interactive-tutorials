Python używa formatowania łańcuchów stylu C do tworzenia nowych, sformatowanych łańcuchów. Operator "%" jest używany do formatowania zestawu zmiennych zamkniętych w "krotce" (liście o stałej wielkości), wraz z łańcuchem formatu, który zawiera normalny tekst wraz ze "specyfikatorami argumentów", specjalnymi symbolami jak "%s" i "%d".

Załóżmy, że masz zmienną o nazwie "name" z Twoją nazwą użytkownika i chciałbyś następnie wydrukować powitanie dla tego użytkownika.

    # To wypisuje "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Aby użyć dwóch lub więcej specyfikatorów argumentów, użyj krotki (nawiasów):

    # To wypisuje "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Każdy obiekt, który nie jest łańcuchem, może być również sformatowany za pomocą operatora %s. Łańcuch, który zwraca metoda "repr" tego obiektu, jest sformatowany jako łańcuch. Na przykład:

    # To wypisuje: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Oto kilka podstawowych specyfikatorów argumentów, które powinieneś znać:

`%s - String (lub dowolny obiekt z reprezentacją łańcuchową, taki jak liczby)`

`%d - Liczby całkowite`

`%f - Liczby zmiennoprzecinkowe`

`%.<liczba cyfr>f - Liczby zmiennoprzecinkowe z ustaloną liczbą cyfr po prawej stronie kropki`

`%x/%X - Liczby całkowite w reprezentacji szesnastkowej (małe/wielkie litery)`

Ćwiczenie
--------

Będziesz musiał napisać formatowany łańcuch, który wypisuje dane, używając następującej składni:
   `Hello John Doe. Your current balance is $53.44.`