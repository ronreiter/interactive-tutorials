Regular Expressions (joskus lyhennettynä regexp, regex tai re) ovat
työkalu kuvioiden tunnistamiseen tekstissä. Pythonissa käytössämme on re-moduuli.
Säännöllisten lausekkeiden sovelluksia on laajasti, mutta ne ovat melko monimutkaisia, joten, kun harkitset regexin käyttämistä tiettyyn tehtävään,
ajattele vaihtoehtoja ja turvaudu regexiin vasta viimeisenä keinona.

Esimerkki regexistä on `r"^(From|To|Cc).*?python-list@python.org"` Selitys:
Hohtimerkki `^` vastaa tekstin alussa olevaa kohtaa. Seuraava
ryhmä, osa, jossa on `(From|To|Cc)`, tarkoittaa, että rivin on alettava
jollakin sanoista, jotka on erotettu putki-merkillä `|`. Sitä kutsutaan
JOKO-operaattoriksi, ja regex vastaa, jos rivi alkaa jollakin
ryhmän sanoista. `.*?` tarkoittaa epäahneesti yhden tai useamman
merkin, pois lukien rivinvaihdon `\n` merkin. Epäahneas
osuus tarkoittaa mahdollisimman vähäisten toistojen täsmäämistä. `.` merkki
tarkoittaa mitä tahansa ei-rivinvaihtomerkkiä, `*` tarkoittaa toistamista 0 tai enemmän
kertoja, ja `?` merkki tekee siitä epäahneen.

Joten seuraavat rivit vastaisivat sitä regexiä:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Kattava viite re-syntaksista on saatavilla [python
docs](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax).

Esimerkki "asianmukaisesta" sähköpostin täsmäävästä regexistä (kuten
harjoituksessa), katso [tämä](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)