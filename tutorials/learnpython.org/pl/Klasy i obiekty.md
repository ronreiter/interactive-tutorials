Tutorial
--------

Obiety są połączeniem zmiennych i funkcji w jedną strukturalną całość. Obiekty biorą swoje zmienne i funkcje z klas. Klasy są podstawowym schematem, według których tworzone są obiekty.

Poniżej znajduje się bardzo prosty przykład klasy:

     class MojaKlasa:
          zmienna = "blah"
          def funkcja(self):
               print "To jest wiadomość wewnątrz klasy."

Nieco później wyjaśnimy, dlaczego powinieneś dołączać "self" jako parametr. Aby stworzyć obiekt będący realizacją klasy trzeba wystarczy przypisać nazwie zmiennej wartość wyrażenia `nazwa_klasy()`.


    class MojaKlasa:
        zmienna = "blah"

    mojobiekt = MojaKlasa()

Teraz zmienna "mojobiekt" przechowuje obiekt klasy `MojaKlasa`, który zawiera zmienne i funkcje, które zostały zdefiniowane w środku klasy `MojaKlasa`.

### Dostęp do zmiennych w obiektach

Aby dostać się do zmiennej wewnątrz nowo utworzonego obiektu `MojaKlasa` należy to zrobić tak:

    mojobiekt.zmienna

Tak więc na przykład możesz wypisać napis "ple":
    class MojaKlasa:
        zmienna = "blah"

    mojobiekt = MojaKlasa()
    mojobiekt.zmienna = "ple"
    print mojobiekt.zmienna

Możesz wielokrotnie tworzyć obiekty należące do tej samej klasy (mające te same zdefiniowane zmienne i funkcje). Jednakże, każdy obiekt zawiera niezależną kopię zmiennej zdefiniowane w klasie. Na przykład jeśli zdefiniujemy inny obiekt klasy `MojaKlasa` i zmienimy wspomnianą wyżej zmienną:

    class MojaKlasa:
        zmienna = "blah"

    mojobiekt = MojaKlasa()
    mojobiekt.zmienna = "ple"
    mojobiekt2 = MojaKlasa()
     mojobiekt2.zmienna = "ploteczka"

    print mojobiekt.zmienna # ple
    print mojobiekt2.zmienna # ploteczka

### Dostęp do funkcji obiektu

Aby dostać się do funkcji wewnątrz obiektu, należy użyć podobnej notacji jak w przypadku zmiennych:

    nazwa_obiektu.nazwa_funkcji()

### Ćwiczenie

Mamy klasę zdefiniowaną dla pojazdów – `Pojazd`. Stwórz dwa nowe obiekty tej klasy: `Auto1` i `Auto2`. `Auto1` powinno mieć kolor "czerwony", rodzaj "kabriolet", wartość 60000 i nazwę "Ferrari". `Auto2` powinien mieć kolor "niebieski", rodzaj "autobus", wartość 10000 i nazwę "Ikarus".

Tutorial Code
-------------

#gotowa klasa Pojazd

class Pojazd:
    nazwa = ""
    rodzaj = "auto"
    kolor = ""
    wartosc = 100.00
    def opis(self):
        napis_opisu = "%s to %s %s warty %.2f zl." % (self.nazwa, self.kolor, self.rodzaj, self.wartosc)
        return napis_opisu

# Ponizej umiesc swoj kod

# sprawdzenie kodu
print Auto1.opis()
print Auto2.opis()

Expected Output
---------------

    Ferrari to czerwony kabriolet warty 60000.00 zl.
    Ikarus to niebieski autobus warty 10000.00 zl.

Solution
--------
