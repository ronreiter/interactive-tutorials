Python använder boolesk logik för att utvärdera villkor. De booleska värdena True och False returneras när ett uttryck jämförs eller utvärderas. Till exempel:

```python
x = 2
print(x == 2) # skriver ut True
print(x == 3) # skriver ut False
print(x < 3) # skriver ut True
```

Observera att variabeltilldelning görs med en enda likamedoperator "=", medan jämförelse mellan två variabler görs med dubbel likamedoperator "==". Operatorn för "inte lika med" markeras som "!=".

### Booleska operatorer

De booleska operatorerna "and" och "or" tillåter att bygga komplexa booleska uttryck, exempelvis:

```python
name = "John"
age = 23
if name == "John" and age == 23:
    print("Ditt namn är John, och du är också 23 år gammal.")

if name == "John" or name == "Rick":
    print("Ditt namn är antingen John eller Rick.")
```

### Operatorn "in"

Operatorn "in" kan användas för att kontrollera om ett specificerat objekt finns inom en itererbar objektcontainer, såsom en lista:

```python
name = "John"
if name in ["John", "Rick"]:
    print("Ditt namn är antingen John eller Rick.")
```

Python använder indrag för att definiera kodblock, istället för måsvingar. Standardindraget i Python är 4 mellanslag, även om tabbar och andra mellanrumsstorlekar fungerar så länge det är konsekvent. Observera att kodblock inte behöver någon slutmarkering.

Här är ett exempel på att använda Pythons "if"-sats med kodblock:

```python
statement = False
another_statement = True
if statement is True:
    # gör något
    pass
elif another_statement is True: # else if
    # gör något annat
    pass
else:
    # gör ytterligare en annan sak
    pass
```

Till exempel:

```python
x = 2
if x == 2:
    print("x är lika med två!")
else:
    print("x är inte lika med två.")
```

Ett påstående utvärderas som sant om något av följande är korrekt:
1. Den booleska variabeln "True" ges, eller beräknas med hjälp av ett uttryck, såsom en aritmetisk jämförelse.
2. Ett objekt som inte anses "tomt" skickas.

Här är några exempel på objekt som anses vara tomma:
1. En tom sträng: ""
2. En tom lista: []
3. Numret noll: 0
4. Den falska booleska variabeln: False

### Operatorn 'is'

Till skillnad från dubbel likamedoperator "==", matchar operatorn "is" inte variablernas värden, utan instanserna själva. Till exempel:

```python
x = [1,2,3]
y = [1,2,3]
print(x == y) # Skriver ut True
print(x is y) # Skriver ut False
```

### Operatorn "not"

Genom att använda "not" före ett booleskt uttryck inverteras det:

```python
print(not False) # Skriver ut True
print((not False) == (False)) # Skriver ut False
```

Övning
--------

Ändra variablerna i den första sektionen så att varje if-sats utvärderas som True.