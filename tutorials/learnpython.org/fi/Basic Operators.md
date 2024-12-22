Tämä osio selittää, kuinka käyttää perusoperaattoreita Pythonissa.

### Arithmetic Operators       

Kuten muissakin ohjelmointikielissä, yhteenlasku-, vähennyslasku-, kertolasku- ja jakolaskuoperaattoreita voidaan käyttää numeroiden kanssa.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Koeta ennustaa, mikä vastaus on. Seuraako Python laskujärjestyssääntöjä?

Toinen käytettävissä oleva operaattori on modulo (%) -operaattori, joka palauttaa jaon jakojäännöksen. osamäärä % jakaja = jakojäännös.

    remainder = 11 % 3
    print(remainder)

Kahden kertolaskusymbolin käyttäminen muodostaa potenssisuhteen.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python tukee merkkijonojen yhdistämistä yhteenlaskuoperaattorilla:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python tukee myös merkkijonojen kertomista, jolloin muodostuu toistuva sekvenssi:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

Listoja voidaan yhdistää yhteenlaskuoperaattorilla:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Kuten merkkijonoissa, Python tukee uusien listojen muodostamista toistuvalla sekvenssillä kertolaskuoperaattorin avulla:

    print([1,2,3] * 3)

Exercise
--------

Tämän harjoituksen tavoitteena on luoda kaksi listaa nimeltä `x_list` ja `y_list`, 
jotka sisältävät 10 esiintymää muuttujista `x` ja `y`, vastaavasti. 
Sinun on myös luotava lista nimeltä `big_list`, joka sisältää 
muuttujat `x` ja `y` 10 kertaa kumpikin, yhdistämällä luomasi kaksi listaa.