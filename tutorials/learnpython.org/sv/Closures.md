En slutning är ett funktionsobjekt som minns värden i omgivande scope även om de inte finns i minnet. Låt oss gå igenom detta steg för steg.

För det första är en **Inbäddad Funktion** en funktion som är definierad inne i en annan funktion. Det är mycket viktigt att notera att de inbäddade funktionerna kan komma åt variablerna i det omgivande scopet. Men, åtminstone i Python, är de endast skrivskyddade. Dock kan man använda "nonlocal"-nyckelordet explicit för att ändra dessa variabler.

Till exempel:

    def transmit_to_space(message):
        "Detta är den omgivande funktionen"
        def data_transmitter():
            "Den inbäddade funktionen"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Testmeddelande"))

Detta fungerar bra eftersom 'data_transmitter'-funktionen kan nå 'message'. För att visa användningen av "nonlocal"-nyckelordet, överväg detta

    def print_msg(number):
        def printer():
            "Här använder vi nonlocal-keyword"
            nonlocal number
            number = 3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Utan nonlocal-nyckelordet skulle utmatningen vara "3 9", men med dess användning får vi "3 3", det vill säga värdet av "number"-variabeln ändras.

Nu, hur är det om vi returnerar funktionsobjektet snarare än att kalla på den inbäddade funktionen inom. (Kom ihåg att även funktioner är objekt. (Det är Python.))

    def transmit_to_space(message):
        "Detta är den omgivande funktionen"
        def data_transmitter():
            "Den inbäddade funktionen"
            print(message)
        return data_transmitter

Och vi kallar funktionen enligt följande:


    def transmit_to_space(message):
        "Detta är den omgivande funktionen"
        def data_transmitter():
            "Den inbäddade funktionen"
            print(message)
        return data_transmitter
        
      fun2 = transmit_to_space("Bränn solen!")
      fun2()

Även om körningen av "transmit_to_space()" avslutades, bevarades meddelandet. Denna teknik genom vilken datan är bunden till viss kod även efter slutet av de ursprungliga funktionerna kallas slutningar i Python.

FÖRDEL : Slutningar kan undvika användningen av globala variabler och ger någon form av dataförtäckning. (Till exempel, när det finns få metoder i en klass, använd slutningar istället).

Även Dekoratorer i Python använder slutningar flitigt.

Övning
--------

Skapa en inbäddad slinga och en python-slutning för att göra funktioner för att få flera multiplikationsfunktioner med hjälp av slutningar. Det vill säga med slutningar kan man skapa funktioner för att skapa multiply_with_5() eller multiply_with_4() funktioner med hjälp av slutningar.