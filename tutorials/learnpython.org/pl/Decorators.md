Dekoratory pozwalają na proste modyfikacje obiektów wywoływalnych, takich jak [funkcje](http://www.learnpython.org/en/Functions ""), [metody lub klasy](http://www.learnpython.org/en/Classes%20and%20Objects ""). W tym tutorialu zajmiemy się funkcjami. Składnia

    @decorator
    def functions(arg):
        return "value"

jest równoważna:

    def function(arg):
        return "value"
    function = decorator(function) # przekazuje funkcję do dekoratora i ponownie przypisuje ją do funkcji

Jak można było zauważyć, dekorator to po prostu inna funkcja, która przyjmuje funkcję i zwraca jedną. Na przykład możesz zrobić to:

    def repeater(old_function):
        def new_function(*args, **kwds): # Zobacz learnpython.org/en/Multiple%20Function%20Arguments dla wyjaśnienia działania *args i **kwds
            old_function(*args, **kwds) # uruchamiamy starą funkcję
            old_function(*args, **kwds) # robimy to dwa razy
        return new_function # musimy zwrócić nową funkcję, w przeciwnym razie nie zostanie przypisana do wartości

To spowoduje, że funkcja zostanie uruchomiona dwa razy.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Możesz również zmienić wynik

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # modyfikujemy zwracaną wartość
        return new_function

zmienić dane wejściowe

    def double_Ii(old_function):
        def new_function(arg): # działa tylko jeśli stara funkcja ma jeden argument
            return old_function(arg * 2) # modyfikujemy przekazany argument
        return new_function

i dokonać sprawdzenia.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # to powoduje błąd, co jest lepsze niż błędne działanie
            old_function(arg)
        return new_function

Załóżmy, że chcesz pomnożyć wynik przez zmienną. Możesz zdefiniować dekorator i użyć go w następujący sposób:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # zwraca nowy generator
    
    # Użycie
    @multiply(3) # multiply nie jest generatorem, ale multiply(3) jest
    def return_num(num):
        return num
        
    # Teraz return_num jest udekorowane i ponownie przypisane do siebie
    return_num(5) # powinno zwrócić 15

 Możesz zrobić cokolwiek chcesz z tą starą funkcją, nawet zupełnie ją zignorować! Zaawansowane dekoratory mogą także manipulować docstringiem i ilością argumentów.
Dla bardziej zaawansowanych dekoratorów, odwiedź <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Ćwiczenie
--------
Stwórz fabrykę dekoratorów, która zwraca dekorator dekorujący funkcje z jednym argumentem. Fabryka powinna przyjmować jeden argument, typ, a następnie zwracać dekorator, który sprawdza, czy dane wejściowe są poprawnego typu. Jeśli typ jest nieprawidłowy, powinno być wyświetlone "Bad Type" (w rzeczywistości powinno wystąpić podniesienie błędu, ale nie omawiamy tego w tym tutorialu). Skorzystanie z isinstance(object, type_of_object) lub type(object) może pomóc.