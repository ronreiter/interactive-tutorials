Een Closure is een functie-object dat waarden in omliggende scopes onthoudt, zelfs als ze niet in het geheugen aanwezig zijn. Laten we het stap voor stap bekijken.

Allereerst is een **Geneste Functie** een functie die binnen een andere functie is gedefinieerd. Het is heel belangrijk om op te merken dat de geneste functies toegang hebben tot de variabelen van de omliggende scope. In Python zijn deze echter alleen readonly. Men kan echter expliciet het "nonlocal" keyword gebruiken met deze variabelen om ze te wijzigen.

Bijvoorbeeld:

    def transmit_to_space(message):
        "Dit is de omliggende functie"
        def data_transmitter():
            "De geneste functie"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Testbericht"))

Dit werkt goed omdat de 'data_transmitter' functie toegang heeft tot het 'message'. Om het gebruik van het "nonlocal" keyword te demonstreren, overweeg dit

    def print_msg(number):
        def printer():
            "Hier gebruiken we het nonlocal keyword"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Zonder het nonlocal keyword zou de output "3 9" zijn, echter, met het gebruik ervan krijgen we "3 3", dat wil zeggen dat de waarde van de "number" variabele wordt gewijzigd.

Hoe zit het nu als we het functie-object retourneren in plaats van de geneste functie aan te roepen. (Vergeet niet dat zelfs functies objecten zijn. (Het is Python.))

    def transmit_to_space(message):
        "Dit is de omliggende functie"
        def data_transmitter():
            "De geneste functie"
            print(message)
        return data_transmitter

En we roepen de functie als volgt aan:


      def transmit_to_space(message):
        "Dit is de omliggende functie"
        def data_transmitter():
            "De geneste functie"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Verbrand de Zon!")
  	  fun2()

Hoewel de uitvoering van "transmit_to_space()" voltooid was, werd het bericht toch bewaard. Deze techniek waarbij de data aan wat code is gekoppeld, zelfs na het einde van die andere oorspronkelijke functies, wordt in Python closures genoemd.

VOORDEEL: Closures kunnen het gebruik van globale variabelen vermijden en bieden een vorm van data-verberging. (Bijv. Wanneer er een paar methoden in een klasse zijn, gebruik dan closures).

Bovendien maken Decorators in Python uitgebreid gebruik van closures.

Exercise
--------

Maak een geneste lus en een Python-closure om functies te maken om meerdere vermenigvuldigingsfuncties te verkrijgen met behulp van closures. Dat wil zeggen dat men met closures functies kan maken om multiply_with_5() of multiply_with_4() functies te creëren met closures.