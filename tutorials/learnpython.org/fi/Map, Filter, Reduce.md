Functional programming -tyylit kuten Map, Filter ja Reduce tarjoavat mahdollisuuden kirjoittaa yksinkertaisempaa ja lyhyempää koodia ilman tarvetta huolehtia silmukoista tai haaroittumisista.

Nämä kolme funktiota mahdollistavat funktion soveltamisen useisiin iteroitaviin kerralla. ```map``` ja ```filter``` ovat Pythonin sisäänrakennettuja (```__builtins__```-moduulissa) ja ne eivät vaadi tuontia. ```reduce``` sen sijaan tulee tuoda, koska se sijaitsee ```functools```-moduulissa. Katsotaanpa tarkemmin kuinka ne toimivat, aloittaen ```map```-funktiosta.

#### Map
Pythonin ```map()```-funktiolla on seuraava syntaksi:

```map(func, *iterables)```

Missä ```func``` on funktio, johon kukin elementti ```iterables```-listassa (kuinka monta niitä onkin) sovelletaan. Huomaatko asteriskin (```*```) ```iterables```-luettelossa? Tämä tarkoittaa, että iteroitavia voi olla kuinka monta tahansa, kunhan ```func```-funktio tarvitsee täsmälleen saman määrän argumentteja. Ennen kuin siirrymme esimerkkiin, on tärkeää huomata seuraavat asiat:

1. Python 2:ssa ```map()```-funktio palauttaa listan. Pyhton 3:ssa funktio kuitenkin palauttaa ```map-objektin```, joka on generator-objekti. Tuloksen voi saada listana kutsumalla sisäänrakennettua ```list()```-funktiota map-objektilla, eli ```list(map(func, *iterables))```.
2. ```func```-funktion argumenttien lukumäärän tulee vastata ```iterables```-luettelossa olevien iteroitavien määrää.

Katsotaanpa, miten nämä säännöt ilmenevät seuraavissa esimerkeissä.

Oletetaan, että minulla on lista (```iterable```) lempilemmikkieni nimistä kaikki pienillä kirjaimilla ja tarvitsen ne isoilla kirjaimilla. Perinteisesti tekisin näin:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Tämä tulostaisi ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

```map()```-funktion kanssa se ei ole vain helpompaa, vaan myös paljon joustavampaa. Teen vain näin:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Tämä toisi esiin saman tuloksen. Huomaa, että käyttäessäni yllä määriteltyä ```map()```-syntaksia, ```func``` tässä tapauksessa on ```str.upper``` ja ```iterables``` on ```my_pets```-lista -- vain yksi iteroitava. Huomaa myös, ettemme kutsuneet ```str.upper```-funktiota (tehdessämme näin: ```str.upper()```), sillä map-funktio tekee sen jokaiselle elementille ```my_pets```-listassa.

On tärkeää huomata, että ```str.upper```-funktio vaatii määritelmänsä mukaan vain **yhden** argumentin, joten annoimme sille vain **yhden** iteroitavan. Joten, _jos funktiosi vaatii kaksi, kolme tai n argumenttia_, sinun täytyy antaa sille kaksi, kolme tai n iteroitavaa. Selvennän tätä toisella esimerkillä.

Oletetaan, että minulla on lista ympyrän pinta-aloja, jotka olen laskenut jossain, kaikki viiden desimaalin tarkkuudella. Ja minun täytyy pyöristää jokainen elementti listassa sen sijaintia vastaavaan desimaalin tarkkuuteen, mikä tarkoittaa, että minun täytyy pyöristää ensimmäinen elementti listassa yhteen desimaaliin, toinen elementti kahteen desimaaliin, kolmas kolmeen jne. ```map()```-toiminnon avulla tämä on helppoa. Katsotaanpa miten.

Python tarjoaa meille valmiina sisäänrakennetun ```round()```-funktion, joka ottaa kaksi argumenttia -- numeron, joka pyöristetään, ja desimaalien lukumäärän, johon numero pyöristetään. Koska funktio vaatii **kaksi** argumenttia, meidän täytyy antaa **kaksi** iteroitavaa.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Näetkö ```map()```-funktion kauneuden? Voitko kuvitella, kuinka joustavuutta tämä herättää?

Funktio ```range(1, 7)``` toimii toisena argumenttina funktiolle ```round``` (vaadittujen desimaalien lukumäärä per iteraatio). Joten kun ```map``` iteroi ```circle_areas```-listan läpi, ensimmäisessä iteraatiossa otetaan ```circle_areas```-listan ensimmäinen elementti, ```3.56773```, ja se sekä ensimmäinen elementti funktiosta ```range(1,7)```, ```1```, siirretään funktiolle ```round```, jolloin se muuttuu käytännössä muotoon ```round(3.56773, 1)```. Toisessa iteraatiossa ```circle_areas```-listan toinen elementti, ```5.57668```, sekä toinen elementti funktiosta ```range(1,7)```, ```2```, siirretään funktiolle ```round```, jolloin se muuttuu muotoon ```round(5.57668, 2)```. Näin jatketaan, kunnes ```circle_areas```-lista loppuu.

Oletan, että mietit: "Mitä tapahtuu, jos annan iteroitavan, jonka pituus on pienempi tai suurempi kuin ensimmäisen iteroitavan? Eli mitä tapahtuu, jos annan ```range(1, 3)``` tai ```range(1, 9999)``` toiseksi iteroitavaksi yllämainitussa funktiossa". Ja vastaus on yksinkertainen: ei mitään! No, ei aivan. "Ei mitään" tapahtuu siinä mielessä, että ```map()```-funktio ei nosta mitään poikkeusta, se yksinkertaisesti iteroi elementit, kunnes se ei voi löytää toista argumenttia funktiolle, jolloin se vain pysähtyy ja palauttaa tuloksen.

Joten esimerkiksi, jos arvioit ```result = list(map(round, circle_areas, range(1, 3)))```, et saa mitään virhettä edes siinä tapauksessa, että ```circle_areas``` ja ```range(1, 3)``` eroavat pituudeltaan. Sen sijaan Python tekee näin: Se ottaa ensimmäisen elementin ```circle_areas```-listasta ja ensimmäisen elementin ```range(1,3)```-luettelosta ja siirtää sen funktiolle ```round```. ```round``` arvioi sen ja tallentaa tuloksen. Sitten se siirtyy toiseen iteraatioon, toiseen elementtiin ```circle_areas```-listassa ja toiseen elementtiin ```range(1,3)```-luettelossa, ```round``` tallentaa sen. Nyt, kolmannessa iteraatiossa (```circle_areas``` sisältää kolmannen elementin), Python ottaa kolmannen elementin ```circle_areas```-listasta ja sitten yrittää ottaa kolmannen elementin ```range(1,3)```-luettelosta, mutta koska ```range(1,3)``` ei sisällä kolmatta elementtiä, Python yksinkertaisesti pysähtyy ja palauttaa tuloksen, mikä tässä tapauksessa olisi ```[3.6, 5.58]```. 

Kokeilepa itse.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


Sama tapahtuu, jos ```circle_areas``` on pienempi kuin toisen iteroitavan pituus. Python yksinkertaisesti pysähtyy, kun se ei löydä seuraavaa elementtiä jostain iteroitavasta. 

Koska olemme oppineet ```map()```-funktion perusteet, käytämme sitä toteuttaaksemme oman ```zip()```-funktion. ```zip()```-funktio ottaa joukon iteroitavia ja luo sitten tuplen, joka sisältää iteroitavien kunkin elementit. Kuten ```map()```, Python 3:ssa se palauttaa generator-objektin, joka voidaan helposti muuntaa listaksi kutsumalla sisäänrakennettua ```list```-funktiota. Käytä alla olevaa tulkintaistuntoa saadaksesi käsityksen ```zip()```-toiminnosta, ennen kuin luomme oman version ```map()```-funktiolla

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Bonuksena, voitko arvata mitä tapahtuisi yllä mainitussa istunnossa, jos ```my_strings``` ja ```my_numbers``` eivät olisi saman pituisia? Etkö? kokeile! Muuta jomman kumman pituutta.

Siirtykäämme omaan ```zip()```-funktioomme!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Katsopas sitä! Saimme saman tuloksen kuin ```zip```. 

Huomasitteko myös, etten edes tarvinnut luoda funktiota käyttäen ```def my_function()```-standarditapaa? Tämä on se, kuinka joustava ```map()```, ja Python ylipäänsä, on! Käytin yksinkertaisesti ```lambda```-funktiota. Tämä ei tarkoita, etteikö standardi funktiomäärittelymenetelmä (```def function_name()```) olisi sallittua, se on edelleen. Halusin vain kirjoittaa vähemmän koodia (olla "pythonmainen").

Tämä oli kaikki mapista. Seuraavaksi siirrymme ```filter()```-funktioon.

#### Filter
Kun ```map()``` siirtää kunkin elementin iteroitavassa funktion läpi ja palauttaa kaikkien funktion läpi kulkeneiden elementtien tuloksen, ```filter()``` vaatii ensin funktion palauttamaan boolean-arvoja (true tai false) ja sitten siirtää kunkin elementin iteroitavassa funktion läpi, "suodattaen" ne pois, jotka ovat epätosia. Sillä on seuraava syntaksi:

```filter(func, iterable)```

Seuraavat asiat on huomioitava, kun käytät ```filter()```-funktiota:

1. Toisin kuin ```map()```, tarvitaan vain yksi iteroitava.
2. ```func```-argumentin tulee palauttaa boolean-tyyppi. Jos se ei tee niin, ```filter``` palauttaa yksinkertaisesti sille annetun ```iterable```-luettelon. Lisäksi, koska vain yksi iteroitava on tarpeen, on epäsuorasti oletettu, että ```func``` voi ottaa vain yhden argumentin.
3. ```filter``` siirtää kunkin elementin iteroitavassa funktion läpi ja palauttaa **vain** ne, jotka arvioituvat todeksi. Se on nimensä mukaisesti -- "suodatin".

Katsotaanpa joitain esimerkkejä.

Seuraava on lista (```iterable```) kymmenen oppilaan pisteistä kemian kokeessa. Suodatetaan ne, jotka saivat tuloksen yli 75... käyttäen ```filter```-funktiota.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    yli_75 = list(filter(is_A_student, scores))

    print(yli_75)

Seuraava esimerkki on palindromi-ilmaisin. "Palindromi" on sana, lause tai jakso, joka lukee samoin takaperin kuin etuperin. Suodatetaan sanat, jotka ovat palindromisia, epäillyistä palindromisista tuplan (```iterable```) joukosta.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromit = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromit)

Tämän pitäisi tulostaa ```['madam', 'anutforajaroftuna']```. 

Aika siistiä, eikö? Lopuksi, ```reduce()```

#### Reduce
```reduce``` soveltaa funktion **kahdella argumentilla** iteroitavan elementteihin kumulatiivisesti, alkaen valinnaisesti alkioargumentilla. Sillä on seuraava syntaksi:

```reduce(func, iterable[, initial])```

Missä ```func``` on funktio, johon kukin elementti ```iterable```:stä sovelletaan kumulatiivisesti, ja ```initial``` on valinnainen arvo, joka sijoitetaan ennen iteroitavia elementtejä laskennassa ja toimii oletusarvona, kun iteroitava on tyhjä. Seuraavat seikat on huomioitava, kun käytetään ```reduce()```-funktiota:
1. ```func``` vaatii kahta argumenttia, joista ensimmäinen on iteroitavan ensimmäinen elementti (jos ```initial``` ei ole annettu) ja toinen iteroitavan elementti. Jos ```initial``` on annettu, sen tulee olla ensimmäinen argumentti funktiolle ja iteroitavan ensimmäinen elementti on toinen argumentti funktiolle.
2. ```reduce``` "vähentää" (tiedän, anteeksi) ```iterable```-luettelon yhdeksi arvoksi.

Kuten tavallista, katsotaanpa joitain esimerkkejä.

Tehdään oma versio Pythonin sisäänrakennetusta ```sum()```-funktiosta. ```sum()``` palauttaa kaikkien sille annetun iteroitavan elementtien summan.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


Tulos on kuten odotatkin, ```68```.

Joten, mitä tapahtui?

Kuten aina, kyse on iteroinnista: ```reduce``` ottaa ensimmäisen ja toisen elementin ```numbers```-luettelossa ja siirtää ne funktiolle ```custom_sum```. ```custom_sum``` laskee niiden summan ja palauttaa sen funktiolle ```reduce```. ```reduce``` ottaa tuloksen ja soveltaa sen ensimmäisenä elementtinä funktiolle ```custom_sum``` ja ottaa seuraavan elementin (kolmannen) ```numbers```:stä toisena elementtinä ```custom_sum```. Näin tapahtuu jatkuvasti (kumulatiivisesti), kunnes ```numbers``` on käyty läpi. 

Katsotaanpa, mitä tapahtuu, kun käytän valinnaista ```initial```-arvoa.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


Tuloksena on, kuten odotatkin, ```78```, koska ```reduce``` käyttää aluksi ```10``` ensimmäisenä argumenttina funktiolle ```custom_sum```.


Tämä oli kaikki Pythonin kartoista (Map), suodattimista (Filter) ja vähennyksistä (Reduce). Kokeile alla olevia harjoituksia varmistaaksesi ymmärtäväsi kunkin funktion.

Harjoitus
--------
Tässä harjoituksessa käytät kutakin kohtaa (```map```, ```filter```, ja ```reduce```) korjaamaan rikkinäistä koodia.