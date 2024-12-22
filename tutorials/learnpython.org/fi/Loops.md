Pythonissa on kaksi tyyppiä silmukoita, for ja while.

### The "for" loop

For-silmukat iteroivat annetun sekvenssin yli. Tässä on esimerkki:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

For-silmukat voivat iteroida numerosekvenssin yli käyttämällä "range"- ja "xrange"-funktioita. Erona range- ja xrange-funktioiden välillä on se, että range palauttaa uuden listan, jossa on määrätyn alueen numerot, kun taas xrange palauttaa iteraattorin, joka on tehokkaampi. (Python 3 käyttää range-funktiota, joka toimii kuten xrange). Huomaa, että range-funktio on nollapohjainen.

    # Tulostaa numerot 0,1,2,3,4
    for x in range(5):
        print(x)

    # Tulostaa 3,4,5
    for x in range(3, 6):
        print(x)

    # Tulostaa 3,5,7
    for x in range(3, 8, 2):
        print(x)

### "while" loops

While-silmukat toistavat niin kauan kuin tietty ehto on voimassa. Esimerkiksi:

    # Tulostaa 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Tämä on sama kuin count = count + 1

### "break" ja "continue" lauseet

**break**:iä käytetään poistumaan for- tai while-silmukasta, kun taas **continue**:a käytetään ohittamaan nykyinen lohko ja palaamaan "for"- tai "while"-lausekkeeseen. Muutama esimerkki:

    # Tulostaa 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Tulostaa vain parittomat numerot - 1,3,5,7,9
    for x in range(10):
        # Tarkista, onko x parillinen
        if x % 2 == 0:
            continue
        print(x)

### Voimmeko käyttää "else" ehtolausetta silmukoille?

Toisin kuin kielissä kuten C, CPP.. voimme käyttää **else** silmukoille. Kun "for"- tai "while"-lausekkeen silmukkaehto epäonnistuu, silloin "else"-osassa oleva koodi suoritetaan. Jos **break**-lause suoritetaan silmukan sisällä, "else"-osa ohitetaan. Huomaa, että "else"-osa suoritetaan myös, vaikka käytössä on **continue**-lause.

Tässä on muutamia esimerkkejä:

    # Tulostaa 0,1,2,3,4 ja sitten tulostaa "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Tulostaa 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")


Harjoitus
--------

Käy läpi ja tulosta kaikki parilliset numerot numbers-listasta samassa järjestyksessä kuin ne vastaanotetaan. Älä tulosta mitään numeroita, jotka tulevat 237:n jälkeen sekvenssissä.