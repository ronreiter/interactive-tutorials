У Python існує два типи циклів: for і while.

### Цикл "for"

Цикли for ітеруються по заданій послідовності. Ось приклад:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Цикли for можуть ітеруватися по послідовності чисел, використовуючи функції "range" і "xrange". Різниця між range і xrange полягає в тому, що функція range повертає новий список з чисел заданого діапазону, тоді як xrange повертає ітератор, що є більш ефективним. (Python 3 використовує функцію range, яка працює як xrange). Зверніть увагу, що функція range базується на нулі.

    # Виведе числа 0,1,2,3,4
    for x in range(5):
        print(x)

    # Виведе 3,4,5
    for x in range(3, 6):
        print(x)

    # Виведе 3,5,7
    for x in range(3, 8, 2):
        print(x)

### Цикли "while"

Цикли while повторюються, поки виконується певна булева умова. Наприклад:

    # Виведе 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # Це те ж саме, що й count = count + 1

### Оператори "break" і "continue"

**break** використовується для виходу з циклу for або while, тоді як **continue** використовується для пропуску поточного блоку і повертається до оператора "for" або "while". Кілька прикладів:

    # Виведе 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Виведе тільки непарні числа - 1,3,5,7,9
    for x in range(10):
        # Перевіряє, чи x є парним
        if x % 2 == 0:
            continue
        print(x)

### Чи можемо ми використовувати блок "else" для циклів?

На відміну від мов, таких як C, CPP.. ми можемо використовувати **else** для циклів. Коли умова циклу "for" або "while" не виконується, тоді частина коду в "else" виконується. Якщо всередині циклу for виконується оператор **break**, тоді частина "else" пропускається. Зверніть увагу, що частина "else" виконується навіть якщо є оператор **continue**.

Ось кілька прикладів:

    # Виведе 0,1,2,3,4 і потім виведе "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Виведе 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")


Exercise
--------

Проітеруйте та виведіть всі парні числа з списку чисел в тому ж порядку, в якому вони отримані. Не виводьте жодних чисел, які йдуть після 237 у послідовності.