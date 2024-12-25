Every function in Python принимает заранее определенное количество аргументов, если объявлена обычным образом, как это:

    def myfunction(first, second, third):
        # do something with the 3 variables
        ...

Возможно объявить функции, которые принимают переменное количество аргументов, используя следующий синтаксис:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

Переменная "therest" представляет собой список переменных, который принимает все аргументы, переданные функции "foo" после первых 3 аргументов. Таким образом, вызов `foo(1, 2, 3, 4, 5)` выведет:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

Также можно передавать аргументы функции по ключевым словам, так что порядок аргументов не имеет значения, используя следующий синтаксис. Следующий код выдает следующий результат:
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))

Функция "bar" принимает 3 аргумента. Если получен дополнительный аргумент "action", и он указывает суммировать числа, то выводится сумма. В качестве альтернативы функция также знает, что должна вернуть первый аргумент, если значение параметра "number", переданного в функцию, равно "first".

Exercise
--------

Заполните функции `foo` и `bar`, чтобы они могли принимать переменное количество аргументов (3 или более). 
Функция `foo` должна возвращать количество дополнительных полученных аргументов.
Функция `bar` должна возвращать `True`, если аргумент с ключевым словом `magicnumber` имеет значение 7, и `False` в противном случае.