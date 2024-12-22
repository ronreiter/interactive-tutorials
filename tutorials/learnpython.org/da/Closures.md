En lukning er et funktionsobjekt, der husker værdier i den omsluttende rækkevidde, selvom de ikke er til stede i hukommelsen. Lad os tage det trin for trin.

For det første er en **Nestyret Funktion** en funktion defineret inden i en anden funktion. Det er meget vigtigt at bemærke, at de nestyrede funktioner kan få adgang til variablerne i den omsluttende rækkevidde. Dog, i det mindste i Python, er de kun skrivebeskyttede. Man kan dog bruge "nonlocal"-nøgleordet eksplicit med disse variabler for at ændre dem.

For eksempel:

    def transmit_to_space(message):
        "Dette er den omsluttende funktion"
        def data_transmitter():
            "Den nestyrede funktion"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

Dette fungerer godt, da 'data_transmitter'-funktionen kan få adgang til 'message'. For at demonstrere brugen af "nonlocal"-nøgleordet, overvej dette

    def print_msg(number):
        def printer():
            "Her bruger vi nonlocal-nøgleordet"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Uden nonlocal-nøgleordet ville output være "3 9", men med dets brug får vi "3 3", det vil sige værdien af "number"-variablen ændres.

Hvad med, at vi returnerer funktionsobjektet i stedet for at kalde den indlejrede funktion inden i. (Husk, at selv funktioner er objekter. (Det er Python.))

    def transmit_to_space(message):
        "Dette er den omsluttende funktion"
        def data_transmitter():
            "Den nestyrede funktion"
            print(message)
        return data_transmitter

Og vi kalder funktionen som følger:

      def transmit_to_space(message):
        "Dette er den omsluttende funktion"
        def data_transmitter():
            "Den nestyrede funktion"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

Selvom udførelsen af "transmit_to_space()" var afsluttet, blev meddelelsen snarere bevaret. Denne teknik, hvorved data er knyttet til noget kode, selv efter afslutningen af de andre oprindelige funktioner, kaldes closures i Python.

FORDEL: Lukkefunktioner kan undgå brug af globale variabler og giver en form for data skjuling. (F.eks. Når der er få metoder i en klasse, brug lukninger i stedet).

Desuden bruger dekoreringsmidler i Python omfattende brug af lukninger.

Øvelse
--------

Lav en nestyret løkke og en python-lukning for at lave funktioner til at få flere multiplikationsfunktioner ved hjælp af lukninger. Det vil sige ved hjælp af lukninger, kunne man lave funktioner til at oprette multiply_with_5() eller multiply_with_4() funktioner ved hjælp af lukninger.