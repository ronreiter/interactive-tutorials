Python käyttää C-tyylistä merkkijonojen muotoilua luodakseen uusia, muotoiltuja merkkijonoja. "%" operaattori käytetään muotoilemaan joukkoa muuttujia, jotka on suljettu "tupleen" (kiinteän kokoiseen listaan) yhdessä muotoilumerkkijonon kanssa, joka sisältää normaalia tekstiä yhdessä "argumentin määrittäjien" kanssa, kuten "%s" ja "%d".

Oletetaan, että sinulla on muuttuja nimeltä "name", joka sisältää käyttäjänimesi, ja haluat tulostaa tervehdyksen kyseiselle käyttäjälle.

    # Tämä tulostaa "Hello, John!"
    name = "John"
    print("Hello, %s!" % name)

Kahden tai useamman argumentin määrittäjän käyttämiseksi käytä tuplea (sulkeet):

    # Tämä tulostaa "John is 23 years old."
    name = "John"
    age = 23
    print("%s is %d years old." % (name, age))

Mikä tahansa objekti, joka ei ole merkkijono, voidaan myös muotoilla käyttämällä %s-operaattoria. Merkkijono, joka palautuu objektin "repr"-menetelmästä, muotoillaan merkkijonoksi. Esimerkiksi:

    # Tämä tulostaa: A list: [1, 2, 3]
    mylist = [1,2,3]
    print("A list: %s" % mylist)

Tässä on joitakin perusargumenttien määrittäjiä, jotka sinun tulisi tietää:

`%s - Merkkijono (tai mikä tahansa objekti, jolla on merkkijonoesitysmuoto, kuten numerot)`

`%d - Kokonaisluvut`

`%f - Liukuluvut`

`%.<numero>f - Liukuluvut, joilla on kiinteä määrä numeroita pisteen oikealla puolella.`

`%x/%X - Kokonaisluvut heksadesimaalimuodossa (pienet/suuret kirjaimet)`

Harjoitus
--------

Sinun tulee kirjoittaa muotoilumerkkijono, joka tulostaa seuraavat tiedot käyttäen seuraavaa syntaksia:  
`Hello John Doe. Your current balance is $53.44.`