Voit luoda osittaisia funktioita Pythonissa käyttämällä functools-kirjaston partial-funktiota.

Osittaiset funktiot mahdollistavat funktion, jossa on x parametria, muokkaamisen funktioksi, jossa on vähemmän parametreja, ja rajatummalle funktiolle määritellään kiinteät arvot.

Tarvittava tuonti:

    from functools import partial

Tämä koodi palauttaa 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Tärkeä huomio: oletusarvot korvaavat muuttujat vasemmalta alkaen. 2 korvaa x:n.
y saa arvon 4, kun dbl(4) kutsutaan. Tämä ei tee eroa tässä esimerkissä, mutta tekee seuraavassa esimerkissä.

Harjoitus
--------
Muokkaa annettua funktiota kutsumalla partial() ja korvaamalla ensimmäiset kolme muuttujaa func()-funktiossa. Tulosta sitten uusi osittainen funktio käyttämällä vain yhtä syötettävää muuttujaa siten, että tulos on 60.