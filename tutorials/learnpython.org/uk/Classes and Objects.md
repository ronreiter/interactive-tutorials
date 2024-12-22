Об'єкти є інкапсуляцією змінних та функцій в одній сутності. Об'єкти беруть свої змінні та функції з класів. Класи, по суті, є шаблоном для створення ваших об'єктів.

Дуже базовий клас виглядає приблизно так:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Ми пояснимо, чому вам потрібно включати цей "self" як параметр трохи пізніше. Спочатку, щоб призначити наведений вище клас (шаблон) для об'єкта, ви б зробили наступне:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Тепер змінна "myobjectx" містить об'єкт класу "MyClass", який містить змінну та функцію, визначені в класі, що називається "MyClass".

### Доступ до змінних об'єкта

Щоб отримати доступ до змінної всередині новоствореного об'єкта "myobjectx", ви зробите наступне:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Наприклад, нижче виведе рядок "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Ви можете створити кілька різних об'єктів, які є того ж класу (мають такі ж змінні та функції, що визначені). Однак кожен об'єкт містить незалежні копії змінних, визначених у класі. Наприклад, якщо ми були б визначити інший об'єкт з класом "MyClass", а потім змінити рядок у змінній:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Тоді виведемо обидва значення
    print(myobjectx.variable)
    print(myobjecty.variable)

### Доступ до функцій об'єкта

Щоб отримати доступ до функції всередині об'єкта, ви використовуєте подібну нотацію до доступу до змінної:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Наведене вище виведе повідомлення: "This is a message inside the class."

### __init__()

Функція `__init__()`, є спеціальною функцією, яка викликається, коли клас ініціюється.
Вона використовується для присвоєння значень у класі.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) # Виведе '7'
    
Exercise
--------

Ми маємо клас, визначений для транспортних засобів. Створіть два нових транспортних засоби під назвою car1 та car2. Встановіть car1 як червоний кабріолет вартістю $60,000.00 з ім'ям Fer, а car2 як синій фургон на ім'я Jump вартістю $10,000.00.