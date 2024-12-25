En lukning er et funksjonsobjekt som husker verdier i omgivende omfang selv om de ikke er i minnet. La oss gå gjennom det trinn for trinn.

For det første er en **nestet funksjon** en funksjon definert inne i en annen funksjon. Det er veldig viktig å merke seg at nestede funksjoner kan få tilgang til variablene i det omgivende omfanget. Imidlertid, i det minste i Python, er de bare lesbare. Man kan imidlertid bruke "nonlocal" nøkkelordet eksplisitt med disse variablene for å endre dem.

For eksempel:

    def transmit_to_space(message):
        "Dette er den omsluttende funksjonen"
        def data_transmitter():
            "Den nestede funksjonen"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test melding"))

Dette fungerer bra ettersom funksjonen 'data_transmitter' kan få tilgang til 'message'. For å demonstrere bruken av "nonlocal" nøkkelordet, vurder dette:

    def print_msg(number):
        def printer():
            "Her bruker vi nonlocal nøkkelordet"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Uten nonlocal nøkkelordet ville utdataene vært "3 9", men med bruken får vi "3 3", det vil si at verdien av "number" variabelen blir endret.

Hva om vi returnerer funksjonsobjektet i stedet for å kalle den nestede funksjonen innenfor? (Husk at også funksjoner er objekter. (Det er Python.))

    def transmit_to_space(message):
        "Dette er den omsluttende funksjonen"
        def data_transmitter():
            "Den nestede funksjonen"
            print(message)
        return data_transmitter

Og vi kaller funksjonen som følger:


      def transmit_to_space(message):
        "Dette er den omsluttende funksjonen"
        def data_transmitter():
            "Den nestede funksjonen"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Brenn solen!")
  	  fun2()

Selv om utførelsen av "transmit_to_space()" var fullført, ble meldingen heller bevart. Denne teknikken der dataene er knyttet til noen kode selv etter slutten av de andre opprinnelige funksjonene kalles lukkninger i Python.

FORDEL: Lukkinger kan unngå bruk av globale variabler og gir en form for data skjuling. (For eksempel når det er få metoder i en klasse, bruk lukkinger i stedet).

Også dekoratører i Python gjør omfattende bruk av lukkinger.

Exercise
--------

Lag en nestet løkke og en Python-lukning for å lage funksjoner for å få flere multiplikasjon funksjoner ved å bruke lukkinger. Det vil si ved å bruke lukkinger, kan man lage funksjoner for å lage multiply_with_5() eller multiply_with_4() funksjoner ved å bruke lukkinger.