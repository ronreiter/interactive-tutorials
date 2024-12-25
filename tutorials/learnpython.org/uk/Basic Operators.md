This section explains how to use basic operators in Python.

### Арифметичні оператори       

Як і в будь-яких інших мовах програмування, оператори додавання, віднімання, множення та ділення можуть використовуватись з числами.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Спробуйте передбачити, яка буде відповідь. Чи дотримується Python порядку виконання операцій?

Інший оператор — це оператор відсотків (%), який повертає цілу частину остачі від ділення. ділене % дільник = остача.

    remainder = 11 % 3
    print(remainder)

Використання двох символів множення створює відношення піднесення до степеня.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Використання операторів зі рядками

Python підтримує конкатенацію рядків за допомогою оператора додавання:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python також підтримує множення рядків для формування рядка з повторюваною послідовністю:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Використання операторів зі списками

Списки можуть об'єднуватися за допомогою операторів додавання:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Як і в рядках, Python підтримує формування нових списків із повторюваною послідовністю за допомогою оператора множення:

    print([1,2,3] * 3)

Exercise
--------

The target of this exercise is to create two lists called `x_list` and `y_list`, which contain 10 instances of the variables `x` and `y`, respectively. You are also required to create a list called `big_list`, which contains the variables `x` and `y`, 10 times each, by concatenating the two lists you have created.