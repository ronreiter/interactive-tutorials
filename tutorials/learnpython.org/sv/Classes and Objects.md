Objekt är en kapsling av variabler och funktioner i en enskild enhet. Objekt får sina variabler och funktioner från klasser. Klasser är i huvudsak en mall för att skapa dina objekt.

En mycket grundläggande klass skulle se ut ungefär så här:

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("This is a message inside the class.")
```

Vi kommer att förklara varför du måste inkludera "self" som en parameter lite senare. Först, för att tilldela ovanstående klass (mall) till ett objekt skulle du göra följande:

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("This is a message inside the class.")

myobjectx = MyClass()
```

Nu håller variabeln "myobjectx" ett objekt av klassen "MyClass" som innehåller variabeln och funktionen definierad inom klassen kallad "MyClass".

### Accessing Object Variables

För att komma åt variabeln inuti det nyskapade objektet "myobjectx" skulle du göra följande:

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("This is a message inside the class.")

myobjectx = MyClass()

myobjectx.variable
```

Så till exempel skulle koden nedan skriva ut strängen "blah":

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("This is a message inside the class.")

myobjectx = MyClass()

print(myobjectx.variable)
```

Du kan skapa flera olika objekt som har samma klass (har samma variabler och funktioner definierade). Men varje objekt innehåller oberoende kopior av de variabler som definieras i klassen. Till exempel, om vi definierar ett annat objekt med klassen "MyClass" och sedan ändrar strängen i variabeln ovan:

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("This is a message inside the class.")

myobjectx = MyClass()
myobjecty = MyClass()

myobjecty.variable = "yackity"

# Sedan skriv ut båda värdena
print(myobjectx.variable)
print(myobjecty.variable)
```

### Accessing Object Functions

För att komma åt en funktion inuti ett objekt använder du en notation som liknar åtkomst till en variabel:

```python
class MyClass:
    variable = "blah"

    def function(self):
        print("This is a message inside the class.")

myobjectx = MyClass()

myobjectx.function()
```

Ovanstående skulle skriva ut meddelandet, "This is a message inside the class."

### __init__()

Funktionen `__init__()` är en speciell funktion som kallas när klassen initieras. Den används för att tilldela värden i en klass.

```python
class NumberHolder:

   def __init__(self, number):
       self.number = number

   def returnNumber(self):
       return self.number

var = NumberHolder(7)
print(var.returnNumber()) # Skriver ut '7'
```

Övning
--------

Vi har en klass definierad för fordon. Skapa två nya fordon kallade bil1 och bil2. Sätt bil1 till att vara en röd cabriolet värd 60 000,00 USD med namnet Fer, och bil2 till att vara en blå skåpbil med namnet Jump värd 10 000,00 USD.