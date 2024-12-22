Jokainen Python-funktio saa ennalta määritellyn määrän argumentteja, jos ne on määritelty normaalisti, kuten tässä:

    def myfunction(first, second, third):
        # tee jotain näiden kolmen muuttujan kanssa
        ...

On mahdollista määritellä funktioita, jotka saavat muuttuvan määrän argumentteja, käyttämällä seuraavaa syntaksia:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

"therest"-muuttuja on lista muuttujista, joka vastaanottaa kaikki argumentit, jotka annettiin "foo"-funktiolle ensimmäisten 3 argumentin jälkeen. Joten kutsuttaessa `foo(1, 2, 3, 4, 5)` tulos on:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

On myös mahdollista lähettää funktion argumentteja avainsanojen avulla, jolloin argumenttien järjestyksellä ei ole väliä, käyttämällä seuraavaa syntaksia. Seuraava koodi antaa seuraavan tuloksen: 
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))

"bar"-funktio saa kolme argumenttia. Jos lisäargumentti "action" vastaanotetaan ja se ohjeistaa summaamaan luvut, summa tulostetaan. Vaihtoehtoisesti funktio tietää, että sen on palautettava ensimmäinen argumentti, jos funktiolle annetun "number"-parametrin arvo on "first".

Exercise
--------

Täydennä `foo` ja `bar` funktiot siten, että ne voivat vastaanottaa muuttuvan määrän argumentteja (3 tai enemmän)
`foo`-funktion on palautettava ylimääräisten vastaanotettujen argumenttien määrä.
`bar`-funktion on palautettava `True`, jos avainsana-argumentin `magicnumber` arvo on 7, ja `False` muutoin.