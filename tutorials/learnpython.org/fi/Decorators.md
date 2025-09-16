Decoratorit mahdollistavat yksinkertaisten muutosten tekemisen kutsuttaviin objekteihin kuten [funktiot](http://www.learnpython.org/en/Functions ""), [metodit tai luokat](http://www.learnpython.org/en/Classes%20and%20Objects ""). Tässä opetusohjelmassa käsitellään funktioita. Syntaksi

    @decorator
    def functions(arg):
        return "value"

On vastaava kuin:

    def function(arg):
        return "value"
    function = decorator(function) # tämä välittää funktion decoratorille, ja määrittää sen uudelleen function-muuttujaan

Kuten olet saattanut huomata, decorator on vain toinen funktio, joka ottaa funktion ja palauttaa sen. Voisit esimerkiksi tehdä näin:

    def repeater(old_function):
        def new_function(*args, **kwds): # Katso learnpython.org/en/Multiple%20Function%20Arguments kuinka *args ja **kwds toimii
            old_function(*args, **kwds) # suoritetaan vanha funktio
            old_function(*args, **kwds) # tehdään se kahdesti
        return new_function # meidän täytyy palauttaa new_function, tai se ei määritä uudelleen arvoa

Tämä saisi funktion toistumaan kahdesti.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Voit myös muuttaa paluuarvoa

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # muokkaa paluuarvoa
        return new_function

muuttaa syötettä

    def double_Ii(old_function):
        def new_function(arg): # toimii vain, jos vanhassa funktiossa on yksi argumentti
            return old_function(arg * 2) # muokkaa välitettyä argumenttia
        return new_function

ja tehdä tarkistuksia.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Tämä aiheuttaa virheen, mikä on parempi kuin virheellinen toiminta
            old_function(arg)
        return new_function

Oletetaan, että haluat kertoa tuloksen muuttujan määrällä. Voisit määritellä decoratorin ja käyttää sitä seuraavasti:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # palauttaa uuden generaattorin
    
    # Käyttö
    @multiply(3) # multiply ei ole generaattori, mutta multiply(3) on
    def return_num(num):
        return num
        
    # Nyt return_num on koristeltu ja määritetty uudelleen itseensä
    return_num(5) # pitäisi palauttaa 15

Voit tehdä mitä tahansa vanhalla funktiolla, jopa täysin sivuuttaa sen! Kehittyneet decoratorit voivat myös muokata dokumenttijonoa ja argumenttien määrää.
Joihinkin hienoihin decoratoreihin voi tutustua osoitteessa <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Harjoitus
--------
Tee decorator-tehdas, joka palauttaa decoratorin, joka koristelee funktioita yhdellä argumentilla. Tehtaan tulisi ottaa yksi argumentti, datatyyppi, ja sitten palauttaa decorator, joka tarkistaa, että syöte on oikea tyyppi. Jos se on väärin, se tulostaa "Bad Type" (Todellisuudessa sen tulisi nostaa virhe, mutta virheiden nostamista ei käsitellä tässä opetusohjelmassa). Katso opetusohjelman koodi ja odotettu tulos, jos olet hämmentynyt (minä olisin). Voit käyttää isinstance(object, type_of_object) tai type(object) apuna.