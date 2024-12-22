Når man programmerer, sker der fejl. Det er bare en del af livet. Måske gav brugeren et forkert input. Måske var en netværksressource ikke tilgængelig. Måske løb programmet tør for hukommelse. Eller måske lavede programmøren endda en fejl!

Pythons løsning på fejl er undtagelser. Du har måske set en undtagelse før.

    print(a)
    
    #fejl
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Ups! Glemte at tildele en værdi til 'a' variablen.

Men nogle gange vil du ikke have, at undtagelser fuldstændigt stopper programmet. Du vil måske gøre noget specielt, når en undtagelse kastes. Dette gøres i en *try/except* blok.

Her er et simpelt eksempel: Antag, at du itererer over en liste. Du skal iterere over 20 tal, men listen er dannet ud fra brugerinput og har måske ikke 20 tal i sig. Når du når slutningen af listen, vil du bare have, at resten af tallene fortolkes som 0. Her er, hvordan du kunne gøre det:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Raised when accessing a non-existing index of a list
                do_stuff_with_number(0)
    
    catch_this()

Sådan, det var ikke så svært! Du kan gøre det med enhver undtagelse. For flere detaljer om håndtering af undtagelser, se nærmere på [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Øvelse
--------

Håndter alle undtagelserne! Tænk tilbage på de tidligere lektioner for at returnere skuespillerens efternavn.