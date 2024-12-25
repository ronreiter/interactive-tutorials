This section explains how to use basic operators in Python.

### Aritmeettiset operaattorit

Kuten muissa ohjelmointikielissä, yhteen-, vähennys-, kerto- ja jakolaskuoperaattoreita voidaan käyttää numeroiden kanssa.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Yritä ennustaa, mikä vastaus on. Seuraako Python laskujärjestystä?

Toinen käytettävissä oleva operaattori on jakojäännösoperaattori (%), joka palauttaa jaon kokonaisjäännöksen. dividendti % jakaja = jäännös.

    remainder = 11 % 3
    print(remainder)

Kahden kertolaskusymbolin käyttäminen muodostaa potenssikuvion.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Operaattoreiden käyttö merkkijonoissa

Python tukee merkkijonojen yhdistämistä yhteenlaskuoperaattorilla:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python tukee myös merkkijonojen kertomista muodostaen toistuvan merkkijonojonon:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Operaattoreiden käyttö listoissa

Listoja voidaan yhdistää yhteenlaskuoperaattorilla:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Kuten merkkijonoissa, Python tukee uusien lista-olioiden muodostamista toistuvalla kuviolla kertolaskuoperaattorilla:

    print([1,2,3] * 3)

Harjoitus
--------

Tämän harjoituksen tavoitteena on luoda kaksi listaa nimeltä `x_list` ja `y_list`, jotka sisältävät 10 esiintymää muuttujista `x` ja `y` vastaavasti. Sinun tulee myös luoda lista nimeltä `big_list`, joka sisältää muuttujat `x` ja `y` 10 kertaa kukin, yhdistämällä luomasi kaksi listaa.