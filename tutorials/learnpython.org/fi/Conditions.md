Python käyttää boolean-logiikkaa ehtojen arviointiin. Boolean-arvot True ja False palautetaan, kun ilmaisua verrataan tai arvioidaan. Esimerkiksi:

Huomaa, että muuttujan määrittely tehdään käyttämällä yhtä yhtäläisyysoperaattoria "=", kun taas kahden muuttujan vertailu tehdään käyttämällä kahta yhtäläisyysoperaattoria "==". "Ei yhtä suuri" -operaattori merkitään "!=".

### Boolen operaattorit

"Ja"- ja "tai"-boolen operaattorit mahdollistavat monimutkaisten boolen lausekkeiden rakentamisen, esimerkiksi:

### "In"-operaattori

"In"-operaattoria voidaan käyttää tarkistamaan, esiintyykö määritelty objekti iteroitavassa objektisäiliössä, kuten listassa:

Python käyttää sisennystä määrittelemään koodilohkoja, hakasulkeiden sijasta. Vakiopython-sisennys on 4 välilyöntiä, vaikka sarkaimet ja muut välit voivat myös toimia, kunhan ne ovat johdonmukaisia. Huomaa, että koodilohkot eivät tarvitse mitään lopetusta.

Tässä on esimerkki Pythonin "if"-lauseen käytöstä koodilohkojen avulla:

Esimerkiksi:

Lause arvioidaan todeksi, jos yksi seuraavista on oikein:
1. Annetaan "True" boolean-muuttuja, tai se lasketaan ilmaisulla, kuten aritmeettisella vertailulla.
2. Välitetään objekti, jota ei pidetä "tyhjänä".

Tässä on joitakin esimerkkejä objekteista, joita pidetään tyhjinä:
1. Tyhjä merkkijono: ""
2. Tyhjä lista: []
3. Numero nolla: 0
4. False boolean-muuttuja: False

### 'Is'-operaattori

Toisin kuin kaksoisvertailuoperaattori "==", "is"-operaattori ei vertaa muuttujien arvoja, vaan itse instansseja. Esimerkiksi:

### "Not" operaattori

Käyttämällä "not" ennen boolean-lausetta se käännetään:

Exercise
--------

Muuta ensimmäisen osan muuttujia niin, että jokainen if-lauseke arvioituu todeksi.