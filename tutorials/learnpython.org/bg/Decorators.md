Декораторите ви позволяват да правите прости модификации на обекти, които могат да бъдат извиквани, като [функции](http://www.learnpython.org/en/Functions ""), [методи или класове](http://www.learnpython.org/en/Classes%20and%20Objects ""). В този урок ще се занимаваме с функции. Синтаксисът

    @decorator
    def functions(arg):
        return "value"

Е еквивалентен на:

    def function(arg):
        return "value"
    function = decorator(function) # това предава функцията на декоратора и я пренасочва към функцията

Както може би сте забелязали, декораторът е просто друга функция, която приема функции и връща такива. Например, можете да направите това:

    def repeater(old_function):
        def new_function(*args, **kwds): # Вижте learnpython.org/en/Multiple%20Function%20Arguments за това как работят *args и **kwds
            old_function(*args, **kwds) # изпълняваме старата функция
            old_function(*args, **kwds) # изпълняваме я два пъти
        return new_function # трябва да върнем new_function, иначе няма да я пренасочим към стойността

Това би направило функцията да се повтори два пъти.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Можете също така да промените изхода

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # модифицираме стойността на връщане
        return new_function

променете входа

    def double_Ii(old_function):
        def new_function(arg): # работи само ако старата функция има един аргумент
            return old_function(arg * 2) # модифицираме предадения аргумент
        return new_function

и направете проверка.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Това предизвиква грешка, което е по-добре, отколкото да прави грешното нещо
            old_function(arg)
        return new_function

Да кажем, че искате да умножите изхода по променлива сума. Може да дефинирате декоратора и да го използвате по следния начин: 

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # връща новия генератор
    
    # Използване
    @multiply(3) # multiply не е генератор, но multiply(3) е
    def return_num(num):
        return num
        
    # Сега return_num е декориран и пренасочен в себе си
    return_num(5) # трябва да върне 15

 Можете да правите всичко, което искате със старата функция, дори напълно да я игнорирате! Напредналите декоратори могат също така да манипулират документацията и броя на аргументите.
За някои интересни декоратори, отидете на <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise--------
Направете фабрика за декоратори, която връща декоратор, който декорира функции с един аргумент. Фабриката трябва да приема един аргумент, тип, и след това да връща декоратор, който прави функцията да проверява дали входът е от правилния тип. Ако е грешен, трябва да изведе "Bad Type" (в действителност би трябвало да предизвика грешка, но предизвикване на грешки не е в този урок). Вижте кода в урока и очаквания изход, ако се объркате (знам, че и аз бих се объркал). Използването на isinstance(object, type_of_object) или type(object) може да помогне.