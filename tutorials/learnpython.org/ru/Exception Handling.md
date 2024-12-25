Когда программируешь, ошибки случаются. Это просто факт жизни. Возможно, пользователь ввел неправильные данные. Может быть, сетевой ресурс был недоступен. Возможно, программа исчерпала память. Или даже программист мог допустить ошибку!

Решением Python для ошибок являются исключения. Вы могли раньше видеть исключение.

    print(a)
    
    #ошибка
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Упс! Забыл присвоить значение переменной 'a'.

Но иногда вы не хотите, чтобы исключения полностью останавливали программу. Вы можете захотеть сделать что-то особенное, когда возникает исключение. Это делается в блоке *try/except*.

Вот тривиальный пример: Предположим, вы перебираете список. Вам нужно перебрать 20 чисел, но список сформирован из ввода пользователя и может не содержать 20 чисел. После того, как вы достигли конца списка, вы просто хотите, чтобы остальные числа интерпретировались как 0. Вот как это можно сделать:

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

Вот, это было не так сложно! Вы можете делать это с любым исключением. Для получения более подробной информации об обработке исключений посмотрите [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

Handle all the exception! Think back to the previous lessons to return the last name of the actor.