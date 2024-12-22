Az objektumok a változók és függvények egyetlen entitásba való kapszulázásai. Az objektumok változóikat és függvényeiket az osztályokból szerzik. Az osztályok lényegében sablonok az objektumok létrehozásához.

Egy nagyon alapvető osztály így nézne ki:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Később elmagyarázzuk, miért kell belefoglalni a "self" paramétert. Először is, hogy az előző osztályt (sablont) hozzárendeld egy objektumhoz, a következőt kell tenned:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Most a "myobjectx" változó az "MyClass" osztály egy objektumát tartalmazza, amely tartalmazza az "MyClass"-ként definiált osztály változóját és függvényét.

### Objektumváltozók elérése

Ahhoz, hogy hozzáférj az újonnan létrehozott "myobjectx" objektum belső változójához, a következőt kell tenned:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Tehát például az alábbi kód kiírná a "blah" sztringet:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Több különböző objektumot is létrehozhatsz, amelyek ugyanazon osztályba tartoznak (ugyanazokkal a változókkal és függvényekkel). Azonban minden objektum tartalmazza a függvények független másolatait, amelyeket az osztályban meghatározunk. Például, ha egy másik objektumot definiálunk az "MyClass" osztály alapján, majd megváltoztatjuk a fentebb definiált változóban lévő sztringet:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Ezután nyomtasd ki mindkét értéket
    print(myobjectx.variable)
    print(myobjecty.variable)


### Objektumfüggvények elérése

Ahhoz, hogy hozzáférj egy függvényhez egy objektumon belül, használj hasonló jelölést mint a változóeléréshez:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

A fenti példa kiírja az üzenetet: "This is a message inside the class."

### __init__()

Az `__init__()` függvény egy speciális függvény, amely akkor hívódik meg, amikor az osztályt inicializálják. Az osztályon belüli értékek hozzárendelésére szolgál.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Kiírja: '7'
    
Exercise
--------

Egy járművekre vonatkozó osztályt definiáltunk. Hozz létre két új járművet, amelyeket car1-nek és car2-nek hívnak.
Állítsd be, hogy car1 egy piros kabrió legyen 60.000,00 dollár értékben Fer névvel,
és car2 egy kék furgon legyen Jump névvel 10.000,00 dollár értékben.