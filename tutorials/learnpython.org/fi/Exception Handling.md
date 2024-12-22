Kun ohjelmoidaan, virheet tapahtuvat. Se on vain elämän tosiasia. Ehkä käyttäjä antoi virheellistä syötettä. Ehkä verkkoresurssi ei ollut saatavilla. Ehkä ohjelmalta loppui muisti. Tai ohjelmoija saattoi jopa tehdä virheen!

Pythonin ratkaisu virheisiin ovat poikkeukset. Olet saattanut nähdä poikkeuksen aiemmin.

    print(a)
    
    #virhe
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Hups! Muuttujalle 'a' unohdettiin antaa arvo.

Mutta joskus et halua poikkeusten pysäyttävän ohjelmaa kokonaan. Saatat haluta tehdä jotain erityistä, kun poikkeus heitetään. Tämä tehdään *try/except*-lohkossa.

Tässä on yksinkertainen esimerkki: Oletetaan, että iteroit listan läpi. Sinun täytyy iteroida 20 lukua, mutta lista on käyttäjän antama syöte, eikä siinä välttämättä ole 20 lukua. Kun saavutat listan lopun, haluat vain, että loput luvut tulkitaan nollina. Näin voit tehdä sen:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Poikkeus heitetään, kun yritetään päästä listan olemattomaan indeksiin
                do_stuff_with_number(0)
    
    catch_this()

Siinä se, ei ollut liian vaikeaa! Voit tehdä saman minkä tahansa poikkeuksen kanssa. Lisätietoja poikkeusten käsittelystä löytyy [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

Käsittele kaikki poikkeukset! Muista aiemmat oppitunnit palauttaaksesi näyttelijän sukunimen.