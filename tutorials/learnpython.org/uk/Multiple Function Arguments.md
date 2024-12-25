Кожна функція в Python отримує заздалегідь визначену кількість аргументів, якщо вона оголошена звичайним чином, як тут:

    def myfunction(first, second, third):
        # do something with the 3 variables
        ...

Можливо оголосити функції, які отримують змінну кількість аргументів, використовуючи таку синтаксис:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

Змінна "therest" є списком змінних, яка отримує всі аргументи, передані функції "foo" після перших 3 аргументів. Таким чином, виклик `foo(1, 2, 3, 4, 5)` виведе:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

Також можливо передавати аргументи функції за допомогою ключових слів, щоб порядок аргументів не мав значення, використовуючи наступну синтаксис. Наступний код виведе наступний результат: 
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))

Функція "bar" отримує 3 аргументи. Якщо додатковий аргумент "action" отримано, і він вказує на те, що треба скласти числа, тоді сума буде виведена. Альтернативно, функція також знає, що має повернути перший аргумент, якщо значення параметра "number", переданого в функцію, дорівнює "first".

Exercise
--------

Заповніть функції `foo` і `bar`, щоб вони могли приймати змінну кількість аргументів (3 чи більше).
Функція `foo` має повертати кількість додаткових аргументів, отриманих.
Функція `bar` має повертати `True`, якщо аргумент з ключовим словом `magicnumber` дорівнює 7, і `False` в іншому випадку.