Зазвичай ми визначаємо функцію, використовуючи ключове слово def десь у коді та викликаємо її, коли нам потрібно її використати.

```python
def sum(a,b):
    return a + b

a = 1
b = 2
c = sum(a,b)
print(c)
```

Тепер, замість того щоб визначати функцію десь та викликати її, ми можемо використовувати лямбда-функції Python, які є вбудованими функціями, визначеними там, де ми їх використовуємо. Таким чином, нам не потрібно оголошувати функцію десь і переглядати код лише для одного використання.

Їм не потрібно мати ім'я, тому їх також називають анонімними функціями. Ми визначаємо лямбда-функцію, використовуючи ключове слово lambda.

```python
your_function_name = lambda inputs : output
```

Отже, наведений вище приклад сумування за допомогою лямбда-функції буде таким,

```python
a = 1
b = 2
sum = lambda x,y : x + y
c = sum(a,b)
print(c)
```

Тут ми призначаємо лямбда-функцію змінній **sum**, і при передачі аргументів, тобто a і b, вона працює як звичайна функція.

Exercise
--------

Напишіть програму, використовуючи лямбда-функції, щоб перевірити, чи є число в заданому списку непарним. Виведіть "True", якщо число непарне, або "False", якщо ні, для кожного елемента.