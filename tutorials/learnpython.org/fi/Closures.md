A Closure on funktio-objekti, joka muistaa arvoja ympäröivissä alueissa, vaikka ne eivät olisikaan muistissa. Käydään tämä läpi askel askeleelta.

Ensinnäkin, **Sisäkkäinen Funktio** on funktio, joka määritellään toisen funktion sisällä. On erittäin tärkeää huomata, että sisäkkäiset funktiot voivat käyttää ympäröivän alueen muuttujia. Ainakin Pythonissa ne ovat kuitenkin vain luku-tilassa. Kuitenkin voi käyttää "nonlocal"-avainsanaa muokatakseen näitä muuttujia.

Esimerkiksi:

    def transmit_to_space(message):
        "Tämä on ympäröivä funktio"
        def data_transmitter():
            "Sisäkkäinen funktio"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Testiviesti"))

Tämä toimii hyvin, koska 'data_transmitter'-funktio voi käyttää 'message'-muuttujaa. Havainnollistaaksemme "nonlocal"-avainsanan käyttöä, harkitse seuraavaa

    def print_msg(number):
        def printer():
            "Tässä käytämme nonlocal-avainsanaa"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Ilman nonlocal-avainsanaa tulostus olisi "3 9", mutta sen käytön kanssa saamme "3 3", eli "number"-muuttujan arvo muuttuu.

Entäpä jos palautamme funktion objektina sen sijaan, että kutsuisimme sisäkkäisen funktion sisällä. (Muista, että myös funktiot ovat objekteja. (Se on Python.))

    def transmit_to_space(message):
        "Tämä on ympäröivä funktio"
        def data_transmitter():
            "Sisäkkäinen funktio"
            print(message)
        return data_transmitter

Ja kutsumme funktion seuraavasti:


      def transmit_to_space(message):
        "Tämä on ympäröivä funktio"
        def data_transmitter():
            "Sisäkkäinen funktio"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Burn the Sun!")
  	  fun2()

Vaikka "transmit_to_space()" suoritus päättyi, viesti säilyi. Tätä tekniikkaa, jossa tiedot kiinnittyvät koodiin jopa alkuperäisten funktioiden päättymisen jälkeen, kutsutaan closureksi Pythonissa.

ETU: Closuret voivat välttää globaalien muuttujien käytön ja tarjoavat eräänlaista datan piilotusta. (Esim. Kun luokassa on muutamia metodeja, käytä closureja sen sijaan).

Lisäksi Pythonin Decorators käyttää laajasti closureja.

Exercise
--------

Tee sisäkkäinen silmukka ja Python closure luodaksesi funktioita, jotka saavat useita kertolaskufunktioita käyttämällä closuureja. Toisin sanoen closuureja käyttäen voisi tehdä funktioita create multiply_with_5() tai multiply_with_4() käyttämällä closuureja.