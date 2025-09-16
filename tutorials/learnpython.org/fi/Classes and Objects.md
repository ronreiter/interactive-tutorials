Objektit ovat muuttujien ja funktioiden kapselointia yhdeksi kokonaisuudeksi. Objektit saavat muuttujansa ja funktionsa luokista. Luokat ovat pohjimmiltaan malli, jonka avulla luodaan omia olioita.

Hyvin perusluokka näyttäisi tällaiselta:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

Selitämme myöhemmin, miksi sinun täytyy sisällyttää "self" parametriksi. Ensin voit luoda oliolle luokan (mallin) seuraavasti:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

Nyt muuttuja "myobjectx" sisältää olion luokasta "MyClass", joka sisältää muuttujan ja funktion, jotka on määritelty luokassa "MyClass".

### Objektin muuttujien käsitteleminen

Jotta voit käsitellä uuden luodun olion "myobjectx" sisällä olevaa muuttujaa, tee seuraavasti:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

Esimerkiksi alla oleva tulostaisi merkkijonon "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

Voit luoda useita erilaisia objekteja, jotka kuuluvat samaan luokkaan (joilla on samat määritellyt muuttujat ja funktiot). Kuitenkin jokainen objekti sisältää itsenäiset kopiot luokassa määritellyistä muuttujista. Esimerkiksi jos määrittelemme toisen olion luokalla "MyClass" ja sitten muutamme muuttujan merkkijonon:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # Tulostetaan molemmat arvot
    print(myobjectx.variable)
    print(myobjecty.variable)


### Objektin funktioiden käsitteleminen

Jotta voit käsitellä olion sisällä olevaa funktiota, käytä samanlaista merkintätapaa kuin käsitellessäsi muuttujaa:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

Yllä oleva tulostaisi viestin, "This is a message inside the class."

### __init__()

`__init__()`-funktio on erityinen funktio, jota kutsutaan, kun luokka alustetaan.
Sitä käytetään arvojen asettamiseen luokassa.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) #Tulostaa '7'
    
Exercise
--------

Meillä on määriteltynä luokka ajoneuvoille. Luo kaksi uutta ajoneuvoa nimeltä car1 ja car2.
Aseta car1 punaiseksi avoautoksi, joka on arvoltaan 60 000,00 $ ja nimeltään Fer,
ja car2 siniseksi pakettiautoksi nimeltään Jump, joka on arvoltaan 10 000,00 $.