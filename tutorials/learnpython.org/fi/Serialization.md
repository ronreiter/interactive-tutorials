Python tarjoaa sisäänrakennettuja JSON-kirjastoja JSON:n koodaamiseen ja dekoodaamiseen.

Python 2.5:ssä käytetään simplejson-moduulia, kun taas Python 2.7:ssä käytetään json-moduulia. Koska tämä tulkki käyttää Python 2.7:ää, käytämme json-moduulia.

Jotta json-moduulia voisi käyttää, se täytyy ensin tuoda:

    import json

JSON-datalle on kaksi perusmuotoa. Joko merkkijonona tai objektien tietorakenteena. Objektien tietorakenne Pythonissa koostuu toistensa sisälle sijoitetuista listoista ja sanakirjoista. Tietorakenne mahdollistaa python-menetelmien (listoille ja sanakirjoille) käytön elementtien lisäämiseksi, listaamiseksi, etsimiseksi ja poistamiseksi tietorakenteesta. Merkkijonomuotoa käytetään pääasiassa datan siirtämiseen toiseen ohjelmaan tai lataamiseen tietorakenteeseen.

JSON:n lataamiseksi takaisin tietorakenteeksi käytä "loads"-menetelmää. Tämä menetelmä ottaa merkkijonon ja muuttaa sen takaisin json-objektin tietorakenteeksi:

    import json 
    print(json.loads(json_string))

Tietorakenteen koodaamiseksi JSON-muotoon käytä "dumps"-menetelmää. Tämä menetelmä ottaa objektin ja palauttaa merkkijonon:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python tukee Pythonin omaa tiedon sarjallistamismenetelmää nimeltä pickle (sekä nopeampaa vaihtoehtoa nimeltä cPickle).

Voit käyttää sitä täsmälleen samalla tavalla.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Harjoituksen tarkoituksena on tulostaa JSON-merkkijono, johon on lisätty avain-arvopari "Me" : 800.