Strings ovat tekstin osia. Ne voidaan määritellä kaikeksi lainausmerkkien välissä olevaksi:

    astring = "Hello world!"
    astring2 = 'Hello world!'

Kuten näet, ensimmäinen asia, jonka opit, oli yksinkertaisen lauseen tulostaminen. Python tallensi tämän lauseen merkkijonona. Sen sijaan, että tulostaisimme heti merkkijonot, tutkimme erilaisia asioita, joita niille voi tehdä.
Voit myös käyttää yksittäisiä lainausmerkkejä määrittääksesi merkkijonon. Kuitenkin kohtaat ongelmia, jos itse määritettävä arvo sisältää yksittäisiä lainausmerkkejä. Esimerkiksi, määrittääksesi merkkijonon näissä suluissa (yksittäiset lainausmerkit ovat ' '), sinun on käytettävä kaksinkertaisia lainausmerkkejä näin

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

Se tulostaa 12, koska "Hello world!" on 12 merkkiä pitkä, mukaan lukien välimerkit ja välilyönnit.

    astring = "Hello world!"
    print(astring.index("o"))

Se tulostaa 4, koska kirjaimen "o" ensimmäinen esiintymä on 4 merkkiä ensimmäisestä merkistä. Huomaa, että lauseessa on itse asiassa kaksi o-kirjainta - tämä menetelmä tunnistaa vain ensimmäisen.

Mutta miksi se ei tulostanut 5? Eikö "o" ole lauseen viides merkki? Yksinkertaistaaksemme asioita, Python (ja useimmat muut ohjelmointikielet) aloittavat laskemisen 0:sta eikä 1:stä. Joten "o":n indeksi on 4.

    astring = "Hello world!"
    print(astring.count("l"))

Niille, jotka käyttävät hölmöjä fontteja, kyseessä on pieni l-kirjain, ei numero yksi. Tämä laskee, kuinka monta l-kirjainta merkkijonossa on. Siksi sen pitäisi tulostaa 3.

    astring = "Hello world!"
    print(astring[3:7])

Tämä tulostaa osan merkkijonosta, alkaen indeksistä 3 ja päättyen indeksiin 6. Mutta miksi 6 eikä 7? Jälleen, useimmat ohjelmointikielet tekevät näin - se helpottaa matematiikan tekemistä näiden hakasulkeiden sisällä.

Jos hakasulkeissa on vain yksi numero, saat yksittäisen merkin kyseisessä indeksissä. Jos jätät pois ensimmäisen numeron mutta pidät kaksoispisteen, saat viipaleen alusta numeroon, jonka jätit. Jos jätät pois toisen numeron, saat viipaleen ensimmäisestä numerosta loppuun.

Voit jopa käyttää negatiivisia lukuja hakasulkeissa. Ne ovat helppo tapa aloittaa merkkijonon lopusta sen alun sijasta. Näin -3 tarkoittaa "kolmas merkki lopusta".

    astring = "Hello world!"
    print(astring[3:7:2])

Tämä tulostaa merkkijonon merkkejä indeksistä 3 indeksiin 7, jättäen väliin yhden merkin. Tämä on laajennettu viipalointisyntaksi. Yleinen muoto on [alku:loppu:askel].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

Huomaa, että molemmat tuottavat saman tulosteen.

C-kielessä ei ole mitään strrev-funktion kaltaista merkkijonon kääntämiseksi. Kuitenkin yllä mainitun tyyppisellä viipalointisyntaksilla voit helposti kääntää merkkijonon näin

    astring = "Hello world!"
    print(astring[::-1])

Tämä

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

Nämä tekevät uuden merkkijonon, jossa kaikki kirjaimet muunnetaan vastaavasti isoiksi ja pieniksi.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

Näitä käytetään määrittämään, alkaako merkkijono jollakin tai päättyykö se johonkin. Ensimmäinen tulostaa True, sillä merkkijono alkaa sanalla "Hello". Toinen tulostaa False, sillä merkkijono ei todellakaan pääty "asdfasdfasdf":iin.

    astring = "Hello world!"
    afewwords = astring.split(" ")

Tämä jakaa merkkijonon joukkoon merkkijonoja, jotka on ryhmitelty listaan. Koska tämä esimerkki jakautuu välilyönnin kohdalta, listan ensimmäinen osa on "Hello" ja toinen on "world!".

Exercise
--------

Yritä korjata koodi tulostamaan oikea tieto muuttamalla merkkijonoa.