Python on täysin olio-ohjelmointikieli, eikä se ole "staattisesti tyypitetty". Sinun ei tarvitse ilmoittaa muuttujia ennen niiden käyttöä tai määritellä niiden tyyppiä. Jokainen muuttuja Pythonissa on olio.

Tässä opetusohjelmassa käydään läpi muutamia perusmuuttujatyyppejä.

### Numerot
Python tukee kahta numerotyyppiä - kokonaislukuja (kokonaislukuja) ja liukulukupisteitä (desimaaleja). (Se tukee myös kompleksilukuja, joita ei käsitellä tässä opetusohjelmassa).

Kokonaisluvun määrittelyyn käytä seuraavaa syntaksia:

    myint = 7
    print(myint)

Liukulukupisteen määrittelyyn voit käyttää jotakin seuraavista merkinnöistä:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Merkkijonot

Merkkijonot määritellään joko yksittäisellä lainausmerkillä tai kaksoislainausmerkillä.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

Ero näiden kahden välillä on, että kaksoislainausmerkkien käyttö tekee helpoksi sisällyttää heittomerkkejä (kun taas nämä päättäisivät merkkijonon käytettäessä yksittäisiä lainausmerkkejä)

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
Merkkijonojen määrittelyyn on lisävariaatioita, jotka helpottavat esimerkiksi rivinvaihtojen, kenoviivojen ja Unicode-merkkien sisällyttämistä. Nämä ovat tämän opetusohjelman ulkopuolella, mutta ne käsitellään [Python-dokumentaatiossa](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial").

Yksinkertaisia operaattoreita voidaan suorittaa numeroille ja merkkijonoille:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

Määrityksiä voidaan tehdä useammalle kuin yhdelle muuttujalle "samanaikaisesti" samalla rivillä näin

    a, b = 3, 4
    print(a, b)

Operaattoreiden sekoittaminen lukujen ja merkkijonojen välillä ei ole tuettua:

    # Tämä ei toimi!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Harjoitus
--------

Tämän harjoituksen tavoitteena on luoda merkkijono, kokonaisluku ja liukuluku. Merkkijonon tulee olla nimeltään `mystring` ja sen tulee sisältää sana "hello". Liukulukupisteen tulee olla nimeltään `myfloat` ja sen tulee sisältää numero 10.0, ja kokonaisluvun tulee olla nimeltään `myint` ja sen tulee sisältää numero 20.