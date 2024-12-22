Декоратори дозволяють робити прості зміни викликаючим об'єктам, таким як [функції](http://www.learnpython.org/en/Functions ""), [методи або класи](http://www.learnpython.org/en/Classes%20and%20Objects ""). У цьому уроці ми будемо розглядати функції. Синтаксис

    @decorator
    def functions(arg):
        return "value"

еквівалентний:

    def function(arg):
        return "value"
    function = decorator(function) # це передає функцію до декоратора і переназначає її на функції

Як ви могли помітити, декоратор — це просто ще одна функція, яка приймає функцію і повертає її. Наприклад, ви можете зробити так:

    def repeater(old_function):
        def new_function(*args, **kwds): # Див. learnpython.org/en/Multiple%20Function%20Arguments як працюють *args і **kwds
            old_function(*args, **kwds) # ми виконуємо стару функцію
            old_function(*args, **kwds) # ми робимо це двічі
        return new_function # ми повинні повернути new_function, або воно не переназначиться

Це змусить функцію повторюватися двічі.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

Ви також можете зробити так, щоб змінити вихідні дані

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # модифікувати значення повернення
        return new_function

змінити вхідні дані

    def double_Ii(old_function):
        def new_function(arg): # працює лише якщо стара функція має один аргумент
            return old_function(arg * 2) # модифікувати аргумент, який передається
        return new_function

і робити перевірку.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # Це викликає помилку, що краще, ніж робити щось неправильно
            old_function(arg)
        return new_function

Припустимо, ви хочете помножити вихідний результат на змінну величину. Ви можете визначити декоратор і використати його наступним чином:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # він повертає новий генератор
    
    # Використання
    @multiply(3) # multiply не є генератором, але multiply(3) є
    def return_num(num):
        return num
        
    # Тепер return_num декоровано і переназначено на себе
    return_num(5) # має повернути 15

Ви можете робити що завгодно зі старою функцією, навіть повністю її ігнорувати! Просунуті декоратори також можуть маніпулювати рядком документу і кількістю аргументів. Для деяких ефектних декораторів перейдіть на <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
Зробіть фабрику декораторів, яка повертає декоратор, що декорує функції з одним аргументом. Фабрика повинна приймати один аргумент, тип, а потім повертати декоратор, який перевіряє, чи є вхідний аргумент правильного типу. Якщо це не так, вона повинна вивести ("Bad Type") (на практиці, вона повинна викликати помилку, але в цьому уроці виклик помилок не розглядається). Подивіться на код уроку і очікуваний результат, щоб побачити, що це, якщо ви збентежені (я б сам таким був). Використання isinstance(object, type_of_object) або type(object) може допомогти.