Normálně definujeme funkci pomocí klíčového slova def někde v kódu a voláme ji kdykoli ji potřebujeme použít.

def sum(a,b):
    return a + b

a = 1
b = 2
c = sum(a,b)
print(c)

Místo definování funkce někde a jejího volání můžeme použít lambdové funkce v Pythonu, které jsou to inline funkce definované přímo na místě, kde je použijeme. Takže nemusíme deklarovat funkci někde a znovu procházet kód jen pro jedno použití.

Nemusí mít název, proto se jim také říká anonymní funkce. Lambda funkci definujeme pomocí klíčového slova lambda.

your_function_name = lambda inputs : output

Takže výše uvedený příklad sum pomocí lambdové funkce by vypadal takto,

a = 1
b = 2
sum = lambda x,y : x + y
c = sum(a,b)
print(c)

Zde přiřazujeme lambdovou funkci proměnné **sum**, a po předání argumentů tj. a a b funguje jako normální funkce.

Exercise
--------
Napište program pomocí lambdových funkcí, který bude kontrolovat, zda je číslo v daném seznamu liché. Pro každou položku vytiskněte "True", pokud je číslo liché, nebo "False", pokud není.