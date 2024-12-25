Un Closure este un obiect funcțional care reține valorile din domeniile închise chiar dacă nu sunt prezente în memorie. Să parcurgem acest concept pas cu pas.

În primul rând, o **Funcție Încapsulată** este o funcție definită în interiorul altei funcții. Este foarte important de menționat că funcțiile încapsulate pot accesa variabilele din domeniul lor exterior. Totuși, cel puțin în Python, ele sunt doar de citire. Cu toate acestea, se poate folosi explicit cuvântul cheie "nonlocal" cu aceste variabile pentru a le modifica.

De exemplu:

    def transmit_to_space(message):
        "Aceasta este funcția exterioră"
        def data_transmitter():
            "Funcția încapsulată"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Mesaj de test"))

Aceasta funcționează bine deoarece funcția 'data_transmitter' poate accesa 'message'. Pentru a demonstra utilizarea cuvântului cheie "nonlocal", luați în considerare acest exemplu

    def print_msg(number):
        def printer():
            "Aici folosim cuvântul cheie nonlocal"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Fără cuvântul cheie "nonlocal", rezultatul ar fi fost "3 9", totuși, cu utilizarea sa, obținem "3 3", adică valoarea variabilei "number" este modificată.

Acum, cum ar fi să returnăm obiectul funcției mai degrabă decât să apelăm funcția încapsulată în interior? (Amintiți-vă că și funcțiile sunt obiecte. (Este Python.))

    def transmit_to_space(message):
        "Aceasta este funcția exterioră"
        def data_transmitter():
            "Funcția încapsulată"
            print(message)
        return data_transmitter

Și apelăm funcția în felul următor:


      def transmit_to_space(message):
        "Aceasta este funcția exterioră"
        def data_transmitter():
            "Funcția încapsulată"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Arde soarele!")
  	  fun2()

Chiar dacă execuția funcției "transmit_to_space()" a fost încheiată, mesajul a fost păstrat. Această tehnică prin care datele sunt atașate la un cod chiar și după terminarea acelor alte funcții originale se numește closures în Python.

AVANTAJ: Closures pot evita folosirea variabilelor globale și oferă o formă de ascundere a datelor. (Exemplu: Când există câteva metode într-o clasă, folosiți closures în schimb).

De asemenea, Decoratorii în Python fac uz extins de closures.

Exercițiu
--------

Creați un ciclu încapsulat și un closure în Python pentru a crea funcții care obțin funcții de multiplicare multiple folosind closures. Adică, folosind closures, se pot crea funcții pentru a crea funcțiile multiply_with_5() sau multiply_with_4() folosind closures.