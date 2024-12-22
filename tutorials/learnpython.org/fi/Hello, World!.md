Python on erittäin yksinkertainen kieli, ja sillä on erittäin suoraviivainen syntaksi. Se rohkaisee ohjelmoijia ohjelmoimaan ilman valmista (turhaa) koodia. Yksinkertaisin komento Pythonissa on "print" -komento - se yksinkertaisesti tulostaa rivin (ja lisää myös rivinvaihdon, toisin kuin C:ssä).

Pythonista on kaksi pääversiota, Python 2 ja Python 3. Python 2 ja 3 ovat melko erilaisia. Tämä tutoriaali käyttää Python 3:a, koska se on semanttisesti oikeampi ja tukee uudempia ominaisuuksia.

Esimerkiksi yksi ero Python 2:n ja 3:n välillä on `print`-lause. Python 2:ssa "print"-lause ei ole funktio, ja siksi se käytetään ilman sulkeita. Kuitenkin Python 3:ssa se on funktio, ja se on käytettävä sulkeiden kanssa.

Tulostaaksesi merkkijonon Python 3:ssa, kirjoita vain:

    print("This line will be printed.")

### Sisennys

Python käyttää sisennystä lohkojen määrittelyyn kaarisulkujen sijasta. Sekä tabulaattorit että välilyönnit ovat tuettuja, mutta vakioindentaatio vaatii, että vakio Python-koodi käyttää neljää välilyöntiä. Esimerkiksi:

    x = 1
    if x == 1:
        # sisennetty neljä välilyöntiä
        print("x is 1.")

Exercise
--------

Käytä "print"-funktiota tulostaaksesi rivin "Hello, World!".