Obiekty są enkapsulacją zmiennych i funkcji w jedną jednostkę. Obiekty otrzymują swoje zmienne i funkcje z klas. Klasy to zasadniczo szablon do tworzenia obiektów.

Bardzo podstawowa klasa wyglądałaby tak:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Wyjaśnimy, dlaczego musisz dołączyć "self" jako parametr nieco później. Najpierw, aby przypisać powyższą klasę (szablon) do obiektu, należy zrobi jeden z poniższych kroków:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Teraz zmienna "myobjectx" przechowuje obiekt klasy "MyClass", która zawiera zmienną i funkcję zdefiniowaną wewnątrz klasy o nazwie "MyClass".

### Dostęp do zmiennych obiektu

Aby uzyskać dostęp do zmiennej wewnątrz nowo utworzonego obiektu "myobjectx", należy wykonać następujące kroki:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Na przykład poniżej kod wypisze ciąg "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Możesz utworzyć wiele różnych obiektów tej samej klasy (mają tych samych zmiennych i funkcji zdefiniowanych). Jednakże, każdy obiekt zawiera niezależne kopie zmiennych zdefiniowanych w klasie. Na przykład, jeśli zdefiniujemy inny obiekt za pomocą klasy "MyClass", a następnie zmienimy ciąg w zmiennej:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Następnie wypiszemy obie wartości
    print(myobjectx.variable)
    print(myobjecty.variable)

### Dostęp do funkcji obiektu

Aby uzyskać dostęp do funkcji wewnątrz obiektu, używasz notacji podobnej do uzyskiwania dostępu do zmiennej:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Powyższy kod wypisze komunikat: "This is a message inside the class."

### __init__()

Funkcja `__init__()`, to specjalna funkcja, która jest wywoływana, gdy klasa jest inicjowana. Jest używana do przypisywania wartości w klasie.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) # Wypisze '7'
    
Ćwiczenie
---------

Mamy zdefiniowaną klasę dla pojazdów. Utwórz dwa nowe pojazdy o nazwach car1 i car2. Ustaw car1 na czerwoną kabriolet wartej 60,000.00 $ z nazwą Fer, a car2 na niebieski van o nazwie Jump wart 10,000.00 $.