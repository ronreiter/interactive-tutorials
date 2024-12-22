### What are Functions?

Функции — это удобный способ разделить ваш код на полезные блоки, что позволяет упорядочить код, сделать его более читаемым, использовать повторно и сэкономить время. Также функции являются ключевым способом определения интерфейсов, чтобы программисты могли делиться своим кодом.

### How do you write functions in Python?

Как мы уже видели в предыдущих уроках, Python использует блоки.

Блок — это область кода, написанная в формате:

    block_head:
        1st block line
        2nd block line
        ...

Где строка блока является дополнительным кодом Python (возможно, еще одним блоком), а заголовок блока имеет следующий формат:
block_keyword block_name(argument1,argument2, ...)
Ключевые слова блоков, которые вы уже знаете, это "if", "for" и "while".

Функции в Python определяются с использованием ключевого слова блока "def", после которого идет имя функции как имя блока.
Например:

    def my_function():
        print("Hello From My Function!")

Функции также могут получать аргументы (переменные, передаваемые от вызывающего к функции).
Например:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))

Функции могут возвращать значение вызывающему, используя ключевое слово 'return'.
Например:

    def sum_two_numbers(a, b):
        return a + b

### How do you call functions in Python?

Просто напишите имя функции, за которым следуют скобки (), разместив любые необходимые аргументы в скобках.
Например, давайте вызовем функции, написанные выше (в предыдущем примере):

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


Упражнение
----------

В этом упражнении вы будете использовать существующую функцию, добавляя свои собственные, для создания полностью функциональной программы.

1. Добавьте функцию с именем `list_benefits()`, которая возвращает следующий список строк: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Добавьте функцию с именем `build_sentence(info)`, которая принимает один аргумент, содержащий строку, и возвращает предложение, начинающееся с данной строки и заканчивающееся строкой " is a benefit of functions!"

3. Запустите и посмотрите, как все функции работают вместе!