Декораторы позволяют вносить простые изменения в вызываемые объекты, такие как [функции](http://www.learnpython.org/en/Functions ""), [методы или классы](http://www.learnpython.org/en/Classes%20and%20Objects ""). В этом учебнике мы рассмотрим функции. Синтаксис

    @decorator
    def functions(arg):
        return "value"

Эквивалентен:

    def function(arg):
        return "value"
    function = decorator(function) # эта строка передает функцию декоратору и переназначает ее

Как вы могли заметить, декоратор — это просто еще одна функция, которая принимает функцию и возвращает ее. Например, вы можете сделать так:

    def repeater(old_function):
        def new_function(*args, **kwds): # См. learnpython.org/en/Multiple%20Function%20Arguments для информации о *args и **kwds
            old_function(*args, **kwds) # запускаем старую функцию
            old_function(*args, **kwds) # делаем это дважды
        return new_function # необходимо вернуть new_function, иначе оно не переназначится на значение

Это сделает так, что функция выполнится дважды.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Вы также можете изменить вывод

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # изменить возвращаемое значение
        return new_function

изменить ввод

    def double_Ii(old_function):
        def new_function(arg): # работает только если у старой функции один аргумент
            return old_function(arg * 2) # изменить переданный аргумент
        return new_function

и выполнять проверки.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # это вызывает ошибку, что лучше, чем делать неправильно
            old_function(arg)
        return new_function

Предположим, вы хотите умножить вывод на переменное количество. Вы можете определить декоратор и использовать его следующим образом:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # возвращает новый генератор
    
    # Использование
    @multiply(3) # multiply не генератор, но multiply(3) является
    def return_num(num):
        return num
        
    # Теперь return_num декорирован и переназначен на себя
    return_num(5) # должен вернуть 15

Вы можете делать с старой функцией что угодно, даже полностью игнорировать ее! Продвинутые декораторы могут также изменять строку документации и число аргументов. Для некоторых крутых декораторов зайдите на <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------

Создайте фабрику декораторов, которая возвращает декоратор для декорирования функций с одним аргументом. Фабрика должна принимать один аргумент, тип, и возвращать декоратор, который заставляет функцию проверять, относится ли вход к правильному типу. Если тип неправильный, следует выводить print("Bad Type") (на самом деле, должна возбуждаться ошибка, но в этом учебнике ошибки не рассматриваются). Если вы запутались, посмотрите на пример кода и ожидаемый вывод. Использование isinstance(object, type_of_object) или type(object) может помочь.