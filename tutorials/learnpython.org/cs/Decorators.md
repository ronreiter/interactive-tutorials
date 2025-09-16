Dekorátory vám umožňují provádět jednoduché úpravy volatelných objektů, jako jsou [funkce](http://www.learnpython.org/en/Functions ""), [metody nebo třídy](http://www.learnpython.org/en/Classes%20and%20Objects ""). V tomto tutoriálu se budeme zabývat funkcemi. Syntaxe

    @decorator
    def functions(arg):
        return "hodnota"

Je ekvivalentní:

    def function(arg):
        return "hodnota"
    function = decorator(function) # to předá funkci dekorátoru a přiřadí ji zpět k funkci

Jak jste mohli vidět, dekorátor je jen další funkce, která vezme funkci a vrátí ji. Například byste mohli udělat toto:

    def repeater(old_function):
        def new_function(*args, **kwds): # Viz learnpython.org/en/Multiple%20Function%20Arguments, jak funguje *args a **kwds
            old_function(*args, **kwds) # spustíme starou funkci
            old_function(*args, **kwds) # provedeme ji dvakrát
        return new_function # musíme vrátit new_function, nebo by se nepřiřadila k hodnotě

Toto způsobí, že se funkce provede dvakrát.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Můžete také upravit výstup

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # upravit návratovou hodnotu
        return new_function

upravit vstup

    def double_Ii(old_function):
        def new_function(arg): # funguje jen pokud stará funkce má jeden argument
            return old_function(arg * 2) # upravit předaný argument
        return new_function

a provádět kontrolu.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # To způsobí chybu, což je lepší, než by to dělalo špatně
            old_function(arg)
        return new_function

Řekněme, že chcete násobit výstup proměnným množstvím. Můžete definovat dekorátor a použít ho následovně: 

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # to vrací nový generátor
    
    # Použití
    @multiply(3) # multiply není generátor, ale multiply(3) je
    def return_num(num):
        return num
        
    # Teď je return_num dekorován a znovu přiřazen ke svému názvu
    return_num(5) # mělo by vrátit 15

Můžete udělat cokoli, co chcete se starou funkcí, i ji zcela ignorovat! Pokročilé dekorátory mohou také měnit doc string a počet argumentů.
Pro některé zajímavé dekorátory, jděte na <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
Vytvořte továrnu dekorátorů, která vrátí dekorátor, jenž dekoruje funkce s jedním argumentem. Továrna by měla přijmout jeden argument, typ, a poté vrátit dekorátor, který kontroluje, zda vstup má správný typ. Pokud je špatný, měl by vytisknout("Bad Type") (Ve skutečnosti by měl vyvolat chybu, ale vyvolávání chyb není v tomto tutoriálu). Mohlo by pomoci použití isinstance(object, type_of_object) nebo type(object).