Python używa logiki boolean do oceny warunków. Wartości boolean True (prawda) i False (fałsz) są zwracane, gdy wyrażenie jest porównywane lub oceniane. Na przykład:

```python
x = 2
print(x == 2) # wyświetla True
print(x == 3) # wyświetla False
print(x < 3) # wyświetla True
```

Zauważ, że przypisanie zmiennej odbywa się przy użyciu pojedynczego operatora równości "=", podczas gdy porównanie między dwiema zmiennymi odbywa się przy użyciu podwójnego znaku równości "==". Operator "nierówności" jest oznaczany jako "!=".

### Operatory boolean

Operatory boolean "and" oraz "or" pozwalają na budowanie złożonych wyrażeń boolean, na przykład:

```python
name = "John"
age = 23
if name == "John" and age == 23:
    print("Your name is John, and you are also 23 years old.")

if name == "John" or name == "Rick":
    print("Your name is either John or Rick.")
```

### Operator "in"

Operator "in" może być użyty do sprawdzenia, czy określony obiekt znajduje się w kontenerze obiektów iterowalnych, takich jak lista:

```python
name = "John"
if name in ["John", "Rick"]:
    print("Your name is either John or Rick.")
```

Python używa wcięć do definiowania bloków kodu, zamiast nawiasów. Standardowe wcięcie w Pythonie to 4 spacje, chociaż tabulacje i inne rozmiary spacji również działają, o ile są spójne. Zauważ, że bloki kodu nie wymagają żadnego zakończenia.

Oto przykład użycia instrukcji "if" Pythona z wykorzystaniem bloków kodu:

```python
statement = False
another_statement = True
if statement is True:
    # zrób coś
    pass
elif another_statement is True: # else if
    # zrób coś innego
    pass
else:
    # zrób jeszcze coś innego
    pass
```

Na przykład:

```python
x = 2
if x == 2:
    print("x equals two!")
else:
    print("x does not equal to two.")
```

Instrukcja jest oceniana jako prawdziwa, jeśli jeden z poniższych warunków jest spełniony:
1. Zmienna boolean "True" jest podana lub obliczana przy użyciu wyrażenia, takiego jak porównanie arytmetyczne.
2. Przekazywany jest obiekt, który nie jest uznawany za "pusty".

Oto kilka przykładów obiektów, które są uznawane za puste:
1. Pusty ciąg znaków: ""
2. Pusta lista: []
3. Liczba zero: 0
4. Zmienna boolean false: False

### Operator 'is'

W przeciwieństwie do podwójnego operatora równości "==", operator "is" nie porównuje wartości zmiennych, ale same instancje. Na przykład:

```python
x = [1,2,3]
y = [1,2,3]
print(x == y) # Wyświetla True
print(x is y) # Wyświetla False
```

### Operator "not"

Użycie "not" przed wyrażeniem boolean odwraca je:

```python
print(not False) # Wyświetla True
print((not False) == (False)) # Wyświetla False
```

Ćwiczenie
--------

Zmień zmienne w pierwszej sekcji, tak aby każda instrukcja if była prawdziwa.