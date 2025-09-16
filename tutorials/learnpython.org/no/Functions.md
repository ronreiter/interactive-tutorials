### What are Functions?

Funksjoner er en praktisk måte å dele opp koden din i nyttige blokker, slik at vi kan organisere koden vår, gjøre den mer lesbar, bruke den om igjen og spare tid. Funksjoner er også en nøkkelmetode for å definere grensesnitt slik at programmerere kan dele koden sin.

### How do you write functions in Python?

Som vi har sett i tidligere veiledninger, bruker Python blokker.

En blokk er et område av kode skrevet i formatet:

    block_head:
        1st block line
        2nd block line
        ...

Hvor en blokklinje er mer Python-kode (til og med en annen blokk), og blokkoverskriften har følgende format:
block_keyword block_name(argument1,argument2, ...)
Blokkord du allerede kjenner er "if", "for", og "while".

Funksjoner i Python er definert ved å bruke blokknøkkelen "def", etterfulgt av funksjonens navn som blokkens navn.
For eksempel:

    def my_function():
        print("Hello From My Function!")


Funksjoner kan også motta argumenter (variabler sendt fra den som kaller funksjonen).
For eksempel:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Funksjoner kan returnere en verdi til den som kaller, ved å bruke nøkkelordet 'return'.
For eksempel:

    def sum_two_numbers(a, b):
        return a + b

### How do you call functions in Python?

Bare skriv funksjonens navn etterfulgt av (), og plasser eventuelle nødvendige argumenter innenfor klammerne.
For eksempel, la oss kalle funksjonene skrevet ovenfor (i det forrige eksempelet):

    # Definer våre 3 funksjoner
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(en enkel hilsen)
    my_function()

    # skriver ut - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # etter denne linjen vil x holde verdien 3!
    x = sum_two_numbers(1,2)  


Exercise
--------

I denne øvelsen skal du bruke en eksisterende funksjon, og samtidig legge til din egen for å lage et fullt fungerende program.

1. Legg til en funksjon kalt `list_benefits()` som returnerer følgende liste med strenger: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Legg til en funksjon kalt `build_sentence(info)` som mottar et enkelt argument som inneholder en streng og returnerer en setning som starter med den gitte strengen og slutter med strengen " is a benefit of functions!"

3. Kjør og se alle funksjonene fungere sammen!