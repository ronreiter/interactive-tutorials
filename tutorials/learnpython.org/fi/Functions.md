### Mitä ovat funktiot?

Funktiot ovat kätevä tapa jakaa koodisi hyödyllisiin osiin, mikä antaa meille mahdollisuuden järjestää koodimme, tehdä siitä luettavampaa, käyttää sitä uudelleen ja säästää aikaa. Lisäksi funktiot ovat keskeinen tapa määritellä rajapintoja, jotta ohjelmoijat voivat jakaa koodiaan.

### Kuinka kirjoitat funktioita Pythonissa?

Kuten olemme nähneet aiemmissa tutoriaaleissa, Python käyttää lohkoja.

Lohko on koodin alue, joka on kirjoitettu seuraavassa muodossa:

    block_head:
        1st block line
        2nd block line
        ...

Missä lohkon rivi on lisää Python-koodia (jopa toinen lohko), ja lohkon pää on seuraavassa muodossa:
block_keyword block_name(argument1,argument2, ...)
Lohko avainsanoja, jotka tunnet jo, ovat "if", "for" ja "while".

Funktiot Pythonissa määritellään käyttämällä lohkoavainsanaa "def", jota seuraa funktion nimi lohkon nimenä.
Esimerkki:

    def my_function():
        print("Hello From My Function!")


Funktiot voivat myös saada argumentteja (muuttujia, jotka välitetään kutsujalta funktiolle).
Esimerkki:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Funktiot voivat palauttaa arvon kutsujalle avainsanalla 'return'.
Esimerkki:

    def sum_two_numbers(a, b):
        return a + b

### Kuinka kutsut funktioita Pythonissa?

Kirjoita yksinkertaisesti funktion nimi, jota seuraa (), sijoittamalla vaaditut argumentit hakasulkeiden sisään.
Esimerkiksi, kutsutaan aiemmin kirjoitetut funktiot (edellisessä esimerkissä):

    # Määrittele kolme funktiotamme
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # tulosta yksinkertainen tervehdys
    my_function()

    #tulostaa - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # tämän rivin jälkeen x:llä on arvo 3!
    x = sum_two_numbers(1,2)  


Harjoitus
--------

Tässä harjoituksessa käytät olemassa olevaa funktiota samalla lisäten omasi luodaksesi täysin toimivan ohjelman.

1. Lisää funktio nimeltä `list_benefits()`, joka palauttaa seuraavan merkkijonojen listan: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Lisää funktio nimeltä `build_sentence(info)`, joka vastaanottaa yhden argumentin sisältäen merkkijonon ja palauttaa lauseen, joka alkaa annetulla merkkijonolla ja päättyy merkkijonolla " is a benefit of functions!"

3. Suorita ja katso, kuinka kaikki funktiot toimivat yhdessä!