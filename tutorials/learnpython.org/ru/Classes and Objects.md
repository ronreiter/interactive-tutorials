Объекты представляют собой инкапсуляцию переменных и функций в одной сущности. Объекты получают свои переменные и функции от классов. Классы по сути являются шаблоном для создания ваших объектов.

Очень простой класс выглядел бы примерно так:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Позже мы объясним, почему вы должны включать "self" в качестве параметра. Сначала, чтобы присвоить вышеуказанный класс(шаблон) объекту, вам нужно сделать следующее:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Теперь переменная "myobjectx" содержит объект класса "MyClass", который содержит переменную и функцию, определенные в классе с именем "MyClass".

### Доступ к переменным объекта

Чтобы получить доступ к переменной внутри вновь созданного объекта "myobjectx", вам нужно сделать следующее:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Итак, например, ниже будет выведена строка "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Вы можете создать несколько разных объектов одного и того же класса (которые имеют те же переменные и функции, определенные в нем). Однако каждый объект содержит независимые копии переменных, определенных в классе. Например, если мы хотим определить другой объект с классом "MyClass" и затем изменить строку в переменной выше:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Далее выведем оба значения
    print(myobjectx.variable)
    print(myobjecty.variable)

### Доступ к функциям объекта

Чтобы получить доступ к функции внутри объекта, используется нотация, аналогичная доступу к переменной:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Выше будет выведено сообщение: "This is a message inside the class."

### __init__()

Функция `__init__()`, является специальной функцией, которая вызывается при инициализации класса.
Она используется для назначения значений в классе.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Выводит '7'
    
Упражнение
--------

У нас есть класс, определенный для транспортных средств. Создайте два новых транспортных средства с именами car1 и car2. Задайте car1 как красный кабриолет стоимостью $60,000.00 с именем Fer, а car2 как синий фургон с именем Jump стоимостью $10,000.00.