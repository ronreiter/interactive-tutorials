### Mikä on CSV?
CSV on lyhenne sanoista 'Comma Separated Values' (pilkuin erotetut arvot). CSV-muoto on yleisin tietokantojen ja taulukoiden tuonti- ja vientimuoto. CSV-tiedosto on yksinkertainen tekstitiedosto, joka sisältää tietoluetteloja. Ne käyttävät pääasiassa pilkkua (,) tietojen erottamiseen, mutta joskus käytetään myös muita merkkejä, kuten puolipisteitä tai tabulaattoreita.

CSV-tietojen esimerkki:

...
sarakkeen 1 nimi,sarakkeen 2 nimi, sarakkeen 3 nimi
ensimmäisen rivin tieto 1,ensimmäisen rivin tieto 2,ensimmäisen rivin tieto 3
toisen rivin tieto 1,toisen rivin tieto 2,toisen rivin tieto 3
...

### CSV-moduuli Pythonissa
Vaikka Pythonissa on sisäänrakennettu open()-funktio työskentelyyn CSV-tiedostojen tai muiden tavallisten tekstitiedostojen kanssa, on olemassa omistettu csv-moduuli, joka toteuttaa luokkia CSV-muodossa olevien tietojen lukemiseen ja kirjoittamiseen, mikä tekee CSV-tiedostojen kanssa työskentelystä paljon helpompaa.

### CSV-moduulin tärkeät funktiot

    csv.field_size_limit – palauttaa maksimikentän koon
    csv.get_dialect – hakea nimelle liittyvä kieliasu
    csv.list_dialects – näyttää kaikki rekisteröidyt kieliasut
    csv.reader – lukee tietoja csv-tiedostosta
    csv.register_dialect - liittää kieliasun nimelle
    csv.writer – kirjoittaa tietoja csv-tiedostoon
    csv.unregister_dialect - poistaa nimen kanssa liitetyn kieliasun kieliasujen rekisteristä
    csv.QUOTE_ALL - Lainaa kaiken, riippumatta tyypistä.
    csv.QUOTE_MINIMAL - Lainaa kentät, joissa on erikoismerkkejä
    csv.QUOTE_NONNUMERIC - Lainaa kaikki kentät, jotka eivät ole numeroarvoja
    csv.QUOTE_NONE – Ei lainaa mitään tulosteessa

### Kuinka käyttää csv-moduulia?
ensin tuo csv-moduuli python-ohjelmassasi.

    import csv

writer- ja reader-funktiot mahdollistavat CSV-tiedoston tietojen muokkaamisen ja muuntamisen.

Kuinka lukea CSV-tiedosto :-

CSV-tiedostojen tietojen lukemiseen käytämme reader-funktiota, joka luo reader-objektin.

Esimerkki:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Tässä avaamme ensin CSV-tiedoston LUKU-tilassa ja nimeämme tiedosto-objektin csvfileksi. Käytämme kontekstinhallintaa tiedoston avaamiseen, jotta meidän ei tarvitse huolehtia tiedoston sulkemisesta. csv.reader-funktio ottaa tiedosto-objektin syötteenä ja palauttaa iteroitavan objektin. Tallennamme iteroitavan objektin csvreaderiksi.

Kuten tiedämme, csvreader on iteroitava objekti, joten voimme iteroida sen for-silmukan avulla:

esimerkki 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Yllä oleva koodi tulostaa kaikki CSV-tiedostosta luetut rivit. Huomaa, että avaamme tiedoston 'r'-tilassa, kun se on jo olemassa.

Mitä seuraavaksi?

csvreader on iteroitava objekti. Siksi .next()-metodi palauttaa nykyisen rivin ja siirtää iteraattorin seuraavalle riville.

esimerkki 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

Esimerkissä 1 näet kaikki rivit tulostettuna konsoliin otsikon mukana. Esimerkissä 2 .next()-metodi lukee otsikon fields-objektiin ja siirtää iteraattorin seuraavalle riville, joten kaikki rivit paitsi otsikko tulostetaan.

Kuinka kirjoittaa CSV-tiedostoon-

Kirjoittaakseen CSV-tiedostoon csv-moduuli tarjoaa csv.writer-funktion. Tietojen kirjoittamiseen avaamme ensin CSV-tiedoston KIRJOITUS-tilassa ('w'). Tiedosto-objekti nimetään csvfileksi. Tallennamme csv.writer-objektin csvwriteriksi.

Esimerkki:
    #julista otsikko
    fields = ['column1','column2', 'column3']

    #julista rivit
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

Yllä olevassa esimerkissä writerow()-funktio kirjoittaa yksittäisen rivin, joka on fields-objekti, kun taas writerows()-metodi kirjoittaa koko yläpuolella määritellyn rivilistan CSV-tiedostoon.

Nyt menemme askeleen eteenpäin. Lue yhden CSV-tiedoston sisältö ja kirjoita se toiseen CSV-tiedostoon.

Esimerkki:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # tallenna otsikot ja siirrä lukijan osoitin
            csvwriter.writerow(header) #kirjoittaa otsikon uuteen tiedostoon
            for row in reader:
                csvwriter.writerow(row)

Tässä avaamme 'newfilename.csv'-tiedoston 'w'-tilassa f2:ksi ja avaamme 'mycsvfile.csv'-tiedoston 'r'-tilassa f1:ksi. Käytämme csv-moduulin .next(), .reader(),.writer(), .writerow()-funktioita. Käyttämällä .next()-funktiota siirrämme lukijan osoitinta ja käyttämällä csvwriter.writerow()-funktiota kirjoitamme tulevan rivin kerrallaan.

### DictReader- ja DictWriter-luokat Pythonissa

Alla on kaksi tärkeää luokkaa Pythonissa CSV-tiedostojen lukemiseen ja kirjoittamiseen.

csv.DictWriter-luokka
csv.DictReader-luokka

DictReader- ja DictWriter-luokat ovat käytettävissä Pythonissa CSV-tiedostojen lukemiseen ja kirjoittamiseen. Vaikka ne ovat samanlaisia kuin reader- ja writer-funktiot, nämä luokat käyttävät sanakirjaobjekteja lukemiseen ja kirjoittamiseen CSV-tiedostoihin.

DictReader:

Se luo objektin, joka kartoittaa luetut tiedot sanakirjaksi, jonka avaimet annetaan fieldnames-parametrissa. Tämä parametri on valinnainen, mutta kun sitä ei määritetä tiedostossa, ensimmäisen rivin tiedot tulevat sanakirjan avaimiksi.

Esimerkki csv(info.csv)

.....
etunimi, sukunimi
foo, bar
foo1, bar1
.....

Esimerkki:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['etunimi'], row['sukunimi'])

DictWriter:

csv.DictWriter-luokka toimii kuten tavallinen writer, mutta kartoittaa Pythonin sanakirjat CSV-riveiksi. Fieldnames-parametri on avainten sarja, joka määrittää järjestyksen, jossa sanakirjaan välitetyt arvot kirjoitetaan writerow()-metodin avulla CSV-tiedostoon. Luokka määritellään seuraavasti: csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Esimerkki:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['etunimi', 'sukunimi']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'etunimi' : 'Rob', 'sukunimi': 'Scott'})
            writer.writerow({'etunimi' : 'Tom', 'sukunimi': 'Brown'})
            writer.writerow({'etunimi' : 'Henry', 'sukunimi': 'Smith'})


Harjoitus
--------

Tässä harjoituksessa työskentelet CSV-tietojen kanssa. Tehtävänäsi on luoda Python-ohjelma, joka lukee tietoja CSV-tiedostosta ja kirjoittaa ne toiseen CSV-tiedostoon varmistaen, että vain ne rivit, joissa ensimmäisen sarakkeen arvo on yli 50, sisällytetään lähtötiedostoon.