A szótár egy olyan adattípus, amely hasonlít a tömbökhöz, de indexek helyett kulcsokkal és értékekkel működik. A szótárban tárolt minden érték egy kulcs segítségével érhető el, amely bármilyen típusú objektum lehet (egy string, egy szám, egy lista stb.) ahelyett, hogy index alapján hivatkoznánk rá.

Például egy telefonszám-adatbázis szótárban tárolható így:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

Alternatív megoldásként egy szótár az alábbi jelöléssel is inicializálható ugyanazokkal az értékekkel:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Szótárak bejárása

A szótárak bejárhatók, hasonlóan a listákhoz. Azonban a szótár, ellentétben a listával, nem tartja meg az értékek tárolási sorrendjét. Az alábbi szintaxis használható a kulcs-érték párok bejárásához:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Érték eltávolítása

Egy megadott index eltávolításához használjuk valamelyik alábbi jelölést:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

vagy:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Exercise
--------

Adj hozzá "Jake"-et a telefonkönyvhöz a 938273443 telefonszámmal, és távolítsd el "Jill"-t a telefonkönyvből.