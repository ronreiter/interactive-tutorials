### Ce sunt Funcțiile?

Funcțiile sunt o modalitate convenabilă de a împărți codul tău în blocuri utile, permițându-ne să ordonăm codul, să-l facem mai ușor de citit, să-l reutilizăm și să economisim timp. De asemenea, funcțiile sunt o metodă esențială de a defini interfețe astfel încât programatorii să poată partaja codul lor.

### Cum scrii funcții în Python?

Așa cum am văzut în tutorialele anterioare, Python utilizează blocuri.

Un bloc reprezintă o zonă de cod scris în formatul:

    block_head:
        1st block line
        2nd block line
        ...

Unde o linie de bloc este mai mult cod Python (chiar și un alt bloc), iar capul blocului are următorul format:
block_keyword block_name(argument1,argument2, ...)
Cuvintele cheie de bloc pe care deja le cunoști sunt "if", "for" și "while".

Funcțiile în Python sunt definite folosind cuvântul cheie de bloc "def", urmat de numele funcției ca nume al blocului.
De exemplu:

    def my_function():
        print("Hello From My Function!")


Funcțiile pot primi și argumente (variabile trecute de la apelant la funcție).
De exemplu:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


Funcțiile pot returna o valoare apelantului, folosind cuvântul cheie 'return'.
De exemplu:

    def sum_two_numbers(a, b):
        return a + b

### Cum apelezi funcții în Python?

Pur și simplu scrii numele funcției urmat de (), introducând orice argument necesar între paranteze.
De exemplu, să apelăm funcțiile scrise mai sus (în exemplul anterior):

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


Exercițiu
--------

În acest exercițiu vei utiliza o funcție existentă și vei adăuga propriile tale funcții pentru a crea un program complet funcțional.

1. Adaugă o funcție numită `list_benefits()` care returnează următoarea listă de șiruri de caractere: "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

2. Adaugă o funcție numită `build_sentence(info)` care primește un singur argument ce conține un șir de caractere și returnează o propoziție care începe cu șirul dat și se termină cu șirul " is a benefit of functions!"

3. Rulează și vezi toate funcțiile lucrând împreună!