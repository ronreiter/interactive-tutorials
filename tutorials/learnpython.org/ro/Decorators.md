Decoratoarele îți permit să faci modificări simple obiectelor apelabile, cum ar fi [funcții](http://www.learnpython.org/en/Functions ""), [metode sau clase](http://www.learnpython.org/en/Classes%20and%20Objects ""). Ne vom ocupa de funcții în acest tutorial. Sintaxa

    @decorator
    def functions(arg):
        return "value"

Este echivalentă cu:

    def function(arg):
        return "value"
    function = decorator(function) # aceasta pasează funcția către decorator și o reasignează la funcțiile

După cum ai văzut, un decorator este doar o altă funcție care ia o funcție și returnează una. De exemplu, ai putea face acest lucru:

    def repeater(old_function):
        def new_function(*args, **kwds): # Vezi learnpython.org/en/Multiple%20Function%20Arguments pentru cum funcționează *args și **kwds
            old_function(*args, **kwds) # rulăm funcția veche
            old_function(*args, **kwds) # o facem de două ori
        return new_function # trebuie să returnăm new_function, altfel nu s-ar reasigna la valoare

Aceasta ar face ca o funcție să se repete de două ori.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Poți de asemenea să îi schimbi ieșirea

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # modifică valoarea returnată
        return new_function

schimbă intrarea

    def double_Ii(old_function):
        def new_function(arg): # funcționează doar dacă funcția veche are un singur argument
            return old_function(arg * 2) # modifică argumentul trecut
        return new_function

și face verificări.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Aceasta cauzează o eroare, ceea ce e mai bine decât să facă ceva greșit
            old_function(arg)
        return new_function

Să presupunem că vrei să multiplici ieșirea cu o cantitate variabilă. Ai putea defini decoratorul și să-l folosești astfel:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # returnează noul generator
    
    # Utilizare
    @multiply(3) # multiply nu este un generator, dar multiply(3) este
    def return_num(num):
        return num
        
    # Acum return_num este decorat și reasignat în el însuși
    return_num(5) # ar trebui să returneze 15

 Poți face orice vrei cu funcția veche, chiar să o ignori complet! Decoratorii avansați pot, de asemenea, să manipuleze stringul de documentație și numărul de argumente.
Pentru niște decoratori deosebiți, vizitează <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercițiu
--------
Fă o fabrică de decoratori care returnează un decorator care decorează funcțiile cu un singur argument. Fabrica ar trebui să ia un singur argument, un tip, și apoi să returneze un decorator care să facă ca funcția să verifice dacă inputul este de tipul corect. Dacă este greșit, ar trebui să printeze("Bad Type") (În realitate, ar trebui să genereze o eroare, dar generarea de erori nu este în acest tutorial). Uită-te la codul tutorialului și la ieșirea așteptată pentru a vedea ce este dacă ești confuz (știu că aș fi). Utilizarea isinstance(object, type_of_object) sau type(object) ar putea ajuta.