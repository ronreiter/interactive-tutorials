Generaattorit on erittäin helppo toteuttaa, mutta hieman vaikeampi ymmärtää.

Generaattoreita käytetään iteraattoreiden luomiseen, mutta eri lähestymistavalla. Generaattorit ovat yksinkertaisia funktioita, jotka palauttavat iteratiivisen joukon kohteita, yksi kerrallaan, erityisellä tavalla.

Kun joukkojen iteraatio alkaa käyttämällä `for`-lausetta, generaattori käynnistetään. Kun generaattorifunktion koodi saavuttaa "yield"-lausuman, generaattori palauttaa suorituskykynsä `for`-silmukalle, palauttaen uuden arvon joukosta. Generaattorifunktio voi tuottaa niin monta arvoa (mahdollisesti äärettömästi) kuin haluaa, antamalla kullekin vuorollaan.

Tässä on yksinkertainen esimerkki generaattorifunktiosta, joka palauttaa 7 satunnaista kokonaislukua:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Tämä funktio päättää itse, miten luoda satunnaislukuja, ja suorittaa `yield`-lausekkeet yksi kerrallaan, pysähtyen väliin antaakseen suorituskyvyn takaisin pääsilmukkaan.

Harjoitus
--------

Kirjoita generaattorifunktio, joka palauttaa Fibonaccin sarjan. Ne lasketaan seuraavalla kaavalla: sarjan kaksi ensimmäistä lukua ovat aina 1, ja kukin seuraava palautettu luku on kahden edellisen lukujen summa.
Vihje: Voitko käyttää vain kahta muuttujaa generaattorifunktiossa? Muista, että sijoitukset voidaan tehdä samanaikaisesti. Koodi

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

vaihtaa samanaikaisesti a:n ja b:n arvot.