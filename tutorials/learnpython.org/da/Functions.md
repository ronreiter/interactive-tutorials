### Hvad er Funktioner?

Funktioner er en praktisk måde at opdele din kode i nyttige blokke, hvilket gør det muligt for os at strukturere vores kode, gøre den mere læselig, genbruge den og spare tid. Funktioner er også en vigtig måde at definere grænseflader på, så programmører kan dele deres kode.

### Hvordan skriver du funktioner i Python?

Som vi har set i tidligere vejledninger, gør Python brug af blokke.

En blok er et kodeområde skrevet i formatet:

    block_head:
        1st block line
        2nd block line
        ...

Hvor en bloklinje er mere Python-kode (selv en anden blok), og blokhovedet er af følgende format:
block_keyword block_name(argument1,argument2, ...)
Bloknøgleord du allerede kender, er "if", "for", og "while".

Funktioner i python defineres ved hjælp af bloknøgleordet "def", efterfulgt af funktionens navn som bloknavn.
For eksempel:

    def my_function():
        print("Hello From My Function!")


Funktioner kan også modtage argumenter (variabler overført fra kaldet til funktionen).
For eksempel:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Funktioner kan returnere en værdi til opkalderen ved hjælp af nøgleordet 'return'.
For eksempel:

    def sum_two_numbers(a, b):
        return a + b

### Hvordan kalder du funktioner i Python?

Skriv blot funktionens navn efterfulgt af (), hvor eventuelle nødvendige argumenter placeres inden i parenteserne.
For eksempel, lad os kalde funktionerne skrevet ovenfor (i det forrige eksempel):

    # Definer vores 3 funktioner
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(et simpelt hej)
    my_function()

    #print - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # efter denne linje vil x indeholde værdien 3!
    x = sum_two_numbers(1,2)


Øvelse
--------

I denne øvelse vil du bruge en eksisterende funktion og samtidig tilføje dine egne for at skabe et fuldt fungerende program.

1. Tilføj en funktion ved navn `list_benefits()` der returnerer følgende liste af strenge: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Tilføj en funktion ved navn `build_sentence(info)` som modtager et enkelt argument indeholdende en streng og returnerer en sætning der starter med den givne streng og slutter med strengen " is a benefit of functions!"

3. Kør og se alle funktionerne arbejde sammen!