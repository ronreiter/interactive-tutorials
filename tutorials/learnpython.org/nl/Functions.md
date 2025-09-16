### Wat zijn functies?

Functies zijn een handige manier om uw code op te delen in nuttige blokken, waardoor we onze code kunnen ordenen, leesbaarder maken, hergebruiken en tijd besparen. Ook zijn functies essentieel voor het definiëren van interfaces zodat programmeurs hun code kunnen delen.

### Hoe schrijf je functies in Python?

Zoals we in eerdere tutorials hebben gezien, maakt Python gebruik van blokken.

Een blok is een codegedeelte dat is geschreven in het volgende formaat:

    block_head:
        1st block line
        2nd block line
        ...

Waar een blokregel meer Python code is (zelfs een ander blok), en de blokhoofd de volgende structuur heeft:
block_keyword block_name(argument1,argument2, ...)
Blokwoorden die je al kent, zijn "if", "for" en "while".

Functies in Python worden gedefinieerd met behulp van het blokwoord "def", gevolgd door de naam van de functie als de naam van het blok.
Bijvoorbeeld:

    def my_function():
        print("Hello From My Function!")


Functies kunnen ook argumenten ontvangen (variabelen die door de aanroeper aan de functie worden doorgegeven).
Bijvoorbeeld:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Functies kunnen een waarde teruggeven aan de aanroeper, met behulp van het sleutelwoord 'return'.
Bijvoorbeeld:

    def sum_two_numbers(a, b):
        return a + b

### Hoe roep je functies aan in Python?

Schrijf gewoon de naam van de functie gevolgd door (), waarbij u eventuele vereiste argumenten binnen de haakjes plaatst.
Bijvoorbeeld, laten we de functies die hierboven zijn geschreven aanroepen (in het vorige voorbeeld):

    # Definieer onze 3 functies
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    # print - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # na deze regel zal x de waarde 3 bevatten!
    x = sum_two_numbers(1,2)  


Oefening
--------

In deze oefening gebruik je een bestaande functie en voeg je je eigen toe om een volledig functioneel programma te maken.

1. Voeg een functie toe met de naam `list_benefits()` die de volgende lijst van strings retourneert: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Voeg een functie toe met de naam `build_sentence(info)` die één argument ontvangt dat een string bevat en een zin retourneert die begint met de gegeven string en eindigt met de string " is a benefit of functions!"

3. Voer uit en zie hoe alle functies samenwerken!