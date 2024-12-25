Python používá booleovskou logiku pro vyhodnocování podmínek. Booleovské hodnoty True a False jsou vráceny, když je výraz porovnáván nebo vyhodnocován. Například:

x = 2
print(x == 2) # vypíše True
print(x == 3) # vypíše False
print(x < 3) # vypíše True

Všimněte si, že přiřazení proměnné je provedeno pomocí jednoho operátoru rovnosti "=", zatímco porovnání mezi dvěma proměnnými je provedeno pomocí dvojitého operátoru rovnosti "==". Operátor "nerovná se" je označen jako "!=".

### Booleovské operátory

Booleovské operátory "and" a "or" umožňují vytvářet složité booleovské výrazy, například:

name = "John"
age = 23
if name == "John" and age == 23:
    print("Vaše jméno je John a je vám také 23 let.")

if name == "John" or name == "Rick":
    print("Vaše jméno je buď John, nebo Rick.")

### Operátor "in"

Operátor "in" může být použit ke kontrole, zda určený objekt existuje uvnitř iterovatelného objektového kontejneru, jako je seznam:

name = "John"
if name in ["John", "Rick"]:
    print("Vaše jméno je buď John, nebo Rick.")

Python používá odsazení pro definování bloků kódu, místo složených závorek. Standardní odsazení v Pythonu je 4 mezery, ačkoli záložky a jakákoli jiná velikost mezery budou fungovat, pokud je to konzistentní. Všimněte si, že bloky kódu nepotřebují žádné ukončení.

Zde je příklad pro použití příkazu "if" v Pythonu pomocí bloků kódu:

statement = False
another_statement = True
if statement is True:
    # něco udělej
    pass
elif another_statement is True: # else if
    # něco jiného udělej
    pass
else:
    # udělej další věc
    pass

Například:

x = 2
if x == 2:
    print("x se rovná dvěma!")
else:
    print("x se nerovná dvěma.")

Prohlášení je vyhodnoceno jako pravdivé, pokud platí jedna z následujících podmínek:
1. Booleovská proměnná "True" je zadána, nebo vypočítána pomocí výrazu, jako je aritmetické porovnání.
2. Objekt, který není považován za "prázdný", je předán.

Zde jsou některé příklady objektů, které jsou považovány za prázdné:
1. Prázdný řetězec: ""
2. Prázdný seznam: []
3. Číslo nula: 0
4. Booleovská proměnná false: False

### Operátor 'is'

Na rozdíl od dvojitého operátoru rovnosti "==", operátor "is" neporovnává hodnoty proměnných, ale samotné instance. Například:

x = [1,2,3]
y = [1,2,3]
print(x == y) # Vypíše True
print(x is y) # Vypíše False

### Operátor "not"

Použití "not" před booleovským výrazem ho invertuje:

print(not False) # Vypíše True
print((not False) == (False)) # Vypíše False

Cvičení
--------

Změňte proměnné v první sekci tak, aby každé if prohlášení bylo True.