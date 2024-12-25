Interaktiivisessa ohjelmoinnissa syötteen ottaminen ja tulostuksen näyttäminen vaaditulla tavalla on tärkeää. Keskitymme siis eri tietotyyppien syötteeseen ja tulosteeseen.

###raw_input()
Tätä käytetään ottamaan syöte, kunnes saavutetaan rivin loppu. Huomaa, että välilyöntejä ei tulisi olla. Syötteen ottaminen päättyy uudella rivimerkillä, ja jos syöterivillä on välilyöntejä, se aiheuttaa virheen.

    # Tulostaa saamaansa syötteen stdin:istä
    astring=raw_input()# anna syötteeksi hello
    print raw_input()

Syötteen ottamisen jälkeen voimme muuttaa ne tarvittavaksi tietotyypiksi käyttäen funktioita, kuten int(), float(), str().

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Tätä käytetään erityisesti syöttämään kokonaislukuja. input():n etu raw_input():n yli voidaan selventää seuraavan esimerkin avulla.

    #anna syötteeksi 2*2
    a=input()
    b=raw_input() #huomaa, että int(raw_input()) aiheuttaa virheen
    print a #tulostaa 4
    print b #tulostaa 2*2

###Kuinka ottaa kaksi tai useampaa tietotyyppiä syötteeksi yhdeltä riviltä välilyönneillä erotettuna?
Käytämme tässä split()- ja map()-funktioita.

    #anna kaksi kokonaislukua ensimmäiselle riville ja useampi kuin kaksi kokonaislukua kolmannelle riville
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # tulostaa ensimmäisen rivin kaksi ensimmäistä kokonaislukua ja toisen rivin kokonaislukujen summan

###Tulosteen formatointi
Olet ehkä jo huomannut, että print-lauseke lisää automaattisesti uuden rivin. Yllä olevan koodin kaltaisen pilkun käyttö tulostaa arvot yhdelle riville välilyönnillä erotettuna.
Sys-moduuli tarjoaa erilaisia funktioita tulosteen formatointiin, mutta opettelemme täällä, kuinka käyttää perustietoa formatoinnista tulostukseen haluamallamme tavalla. Katsotaanpa muutama esimerkki oppiaksemme tulosteen formatointia.

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

Tulosteen on oltava itsestään selvä.

Exercise
--------

Kirjoita ohjelma, joka pyytää käyttäjää syöttämään nimensä, ikänsä ja maansa. Ohjelman tulisi sitten tulostaa viesti, joka sisältää tämän tiedon lauseessa. Ohjelman tulisi sisältää:

1. Nimen ottaminen syötteeksi käyttämällä `raw_input()`.
2. Iän ottaminen syötteeksi käyttämällä `input()`, ja muuntamalla se kokonaisluvuksi.
3. Maan nimen ottaminen syötteeksi käyttämällä `raw_input()`.
4. Tulosteen formatointi näyttämään lauseen, joka sisältää nimen, iän ja maan.

Ohjelman tulisi osoittaa syötteen käsittelyä ja merkkijonon formatointia Pythonissa.