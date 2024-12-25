# Получаване на променлив брой аргументи във функции в Python

Всяка функция в Python получава предварително определен брой аргументи, ако е декларирана нормално, като например:

```python
def myfunction(first, second, third):
    # do something with the 3 variables
    ...
```

Възможно е да се декларират функции, които получават променлив брой аргументи, използвайки следния синтаксис:

```python
def foo(first, second, third, *therest):
    print("First: %s" % first)
    print("Second: %s" % second)
    print("Third: %s" % third)
    print("And all the rest... %s" % list(therest))
```

Променливата "therest" е списък с променливи, който получава всички аргументи, които са дадени на функцията "foo" след първите 3 аргумента. Така че извикването на `foo(1, 2, 3, 4, 5)` ще изведе:

```python
def foo(first, second, third, *therest):
    print("First: %s" %(first))
    print("Second: %s" %(second))
    print("Third: %s" %(third))
    print("And all the rest... %s" %(list(therest)))
    
foo(1, 2, 3, 4, 5)
```

Също така е възможно да се изпращат аргументи на функции по ключова дума, така че редът на аргументите да няма значение, използвайки следния синтаксис. Следният код произвежда следния изход: 
```The sum is: 6
    Result: 1```

```python
def bar(first, second, third, **options):
    if options.get("action") == "sum":
        print("The sum is: %d" %(first + second + third))

    if options.get("number") == "first":
        return first

result = bar(1, 2, 3, action = "sum", number = "first")
print("Result: %d" %(result))
```

Функцията "bar" получава 3 аргумента. Ако е получен допълнителен аргумент "action", който указва събиране на числата, тогава сумата се отпечатва. Алтернативно, функцията също така знае, че трябва да върне първия аргумент, ако стойността на параметъра "number", предаден на функцията, е равна на "first".

Exercise
--------

Попълнете функциите `foo` и `bar` така, че да могат да приемат променливо количество аргументи (3 или повече).  
Функцията `foo` трябва да връща броя на допълнителните получени аргументи.  
`bar` трябва да връща `True`, ако аргументът с ключовата дума `magicnumber` е равен на 7, и `False` в противен случай.