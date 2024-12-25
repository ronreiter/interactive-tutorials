Ohjelmoinnissa moduuli on ohjelmiston osa, joka tarjoaa tietyn toiminnallisuuden. 
Esimerkiksi, kun rakennetaan pingispeliä, yksi moduuli voi olla vastuussa pelilogiikasta ja 
toinen moduuli piirtää pelin näytölle. Jokainen moduuli koostuu eri tiedostosta, jota voidaan muokata erikseen.

### Modulien kirjoittaminen

Pythonissa moduulit ovat vain Python-tiedostoja, joilla on .py-pääte. Moduulin nimi on sama kuin tiedoston nimi.
Python-moduuli voi sisältää joukon funktioita, luokkia tai muuttujia, jotka on määritelty ja toteutettu.
Yllä oleva esimerkki sisältää kaksi tiedostoa:

mygame/

- mygame/game.py

- mygame/draw.py

Python-skripti `game.py` toteuttaa pelin. Se käyttää funktiota `draw_game` tiedostosta `draw.py`,
eli toisin sanoen `draw`-moduulia, joka toteuttaa logiikan pelin piirtämiseksi näytölle.

Moduulit tuodaan muista moduuleista käyttämällä `import`-käskyä. Tässä esimerkissä `game.py`-skripti voi
näyttää tältä:

`draw`-moduuli voi näyttää tältä:

Tässä esimerkissä `game`-moduuli tuo `draw`-moduulin, mikä mahdollistaa siinä toteutettujen funktioiden käytön.
`main`-funktio käyttää paikallista funktiota `play_game` pelin suorittamiseen, ja sitten 
piirtää pelin tuloksen käyttäen `draw`-moduulissa toteutettua funktiota nimeltään `draw_game`. 
Käyttääksemme `draw`-moduulin `draw_game`-funktiota, meidän on ilmoitettava, missä moduulissa funktio on
toteutettu, käyttäen pistetopimoista. Viitataksemme `draw_game`-funktioon `game`-moduulista,
meidän on tuotava `draw`-moduuli ja sitten kutsuttava `draw.draw_game()`.

Kun `import draw`-direktiivi suoritetaan, Python-tulkki etsii tiedostoa hakemistosta, jossa skripti suoritettiin moduulin nimellä ja `.py`-päättellä. Tässä tapauksessa se etsii `draw.py`-tiedostoa. Jos se löytyy, se tuodaan. Jos sitä ei löydy, se jatkaa sisäänrakennettujen moduulien etsimistä.

Olet ehkä huomannut, että kun moduuli tuodaan, luodaan `.pyc`-tiedosto. Tämä on käännetty Python-tiedosto. 
Python kääntää tiedostot Pythonin tavukoodiksi, jotta niitä ei tarvitse jäsentää joka kerta, kun moduulit ladataan. Jos `.pyc`-tiedosto on olemassa, se ladataan `.py`-tiedoston sijasta. Tämä prosessi on käyttäjälle läpinäkyvä.

### Modulien objektien tuominen nykyiseen nimiavaruuteen

Nimiavaruus on järjestelmä, jossa jokaiselle objektille on annettu nimi, ja ne voivat olla käytettävissä Pythonissa. Voimme tuoda funktion `draw_game` pääskriptin nimiavaruuteen käyttämällä `from`-komentoa.

Olet ehkä huomannut, että tässä esimerkissä moduulin nimeä ei edellä `draw_game`, koska olemme määrittäneet moduulin nimen `import`-komennon avulla.

Tämän merkintätavan etuna on se, että sinun ei tarvitse yleisesti viitata moduuliin yhä uudelleen. Huomaa kuitenkin, että yksi nimiavaruus ei voi sisältää kahta objektia samalla nimellä, joten `import`-komento voi korvata olemassa olevan objektin nimiavaruudessa.

### Kaikkien objektien tuominen moduulista

Voit käyttää `import *` -komentoa tuodaksesi kaikki moduulin objektit seuraavasti:

Tämä voi olla hieman riskialtista, sillä moduulin muutokset voivat vaikuttaa moduuliin, joka tuo sen, mutta se on lyhyempi ja sinun ei tarvitse erikseen mainita jokaista objektia, jonka haluat tuoda moduulista.

### Räätälöity tuontinimi

Moduulit voidaan ladata millä tahansa haluamallasi nimellä. Tämä on hyödyllistä, kun tuot moduulia ehdollisesti käyttääksesi samaa nimeä muun koodin kanssa. 

Esimerkiksi, jos sinulla on kaksi `draw`-moduulia hieman eri nimillä, voit tehdä seuraavasti:

### Modulien alustus

Kun moduuli ladataan ensimmäistä kertaa käynnissä olevaan Python-skriptiin, se alustetaan suorittamalla moduulin koodi kerran. Jos toinen moduuli koodissasi tuo saman moduulin uudelleen, sitä ei ladata uudelleen, joten moduulin paikalliset muuttujat toimivat ikään kuin "singletonina", eli ne alustetaan vain kerran.

Voit sitten käyttää tätä objektien alustamiseen. 
Esimerkiksi:

### Modulien latauspolun laajentaminen

On olemassa useita tapoja kertoa Python-tulkkille, mistä etsiä moduuleja, oletushakemiston ja sisäänrakennettujen moduulien lisäksi. Voit käyttää ympäristömuuttujaa `PYTHONPATH` määrittämään lisähakemistoja moduulien etsimiseen seuraavasti:

Tämä suorittaa `game.py` ja mahdollistaa skriptin ladata moduuleja `foo`-hakemistosta sekä paikallisesta hakemistosta.

Voit myös käyttää `sys.path.append` -funktiota. Suorita se *ennen* `import`-komentoa:

Nyt `foo`-hakemisto on lisätty polkulistalle, josta moduuleja etsitään.

### Sisäänrakennettujen modulien tutkiminen

Tutustu kokonaisuudessaan Pythonin standardikirjaston sisäänrakennettuihin moduuleihin täällä [täällä](https://docs.python.org/3/library/).

Kaksi erittäin tärkeää funktiota on hyödyllisiä, kun tutkit Pythonin moduuleja - `dir` ja `help` -funktiot.

Tuodaksemme `urllib`-moduulin, joka mahdollistaa tietojen lukemisen URL-osoitteista, meidän on `import`oitava moduuli:

Voimme etsiä, mitkä funktiot ovat toteutettuina kussakin moduulissa `dir`-funktiolla:

Kun löydämme moduulista käyttämämme funktion, voimme lukea siitä lisää `help`-funktiolla Python-tulkissa:

### Pakettien kirjoittaminen

Paketit ovat nimiavaruuksia, jotka sisältävät useita paketteja ja moduuleja. Ne ovat vain hakemistoja, mutta niillä on tietyt vaatimukset.

Jokainen Pythonin paketti on hakemisto, joka **TÄYTYY** sisältää erikoistiedosto `__init__.py`. Tämä tiedosto, joka voi olla tyhjä, osoittaa, että hakemisto on Python-paketti. Sen voi siis tuoda samalla tavalla kuin moduulin.

Jos luomme hakemiston nimeltä `foo`, joka on paketin nimi, voimme sitten luoda moduulin paketin sisälle nimeltä `bar`. Lisää sitten `__init__.py`-tiedosto `foo`-hakemistoon.

Käyttääksemme `bar`-moduulia voimme tuoda sen kahdella tavalla:

Ensimmäisessä yllä olevassa esimerkissä meidän on käytettävä `foo`-etuliitettä aina, kun käytämme `bar`-moduulia. Toisessa esimerkissä meidän ei tarvitse, koska olemme tuoneet moduulin omaan modulimme nimiavaruuteen.

`__init__.py`-tiedosto voi myös määrittää, mitkä moduulit paketti vie API:na, pitäen muut moduulit sisäisinä, ylikirjoittamalla `__all__`-muuttujan seuraavasti:

Exercise
--------

Tässä harjoituksessa, tulosta aakkosjärjestyksessä lajiteltu lista kaikista `re`-moduulin funktioista, jotka sisältävät sanan `find`.