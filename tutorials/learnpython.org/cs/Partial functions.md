You can create partial functions in Python pomocí funkce `partial` z knihovny `functools`.

Částečné funkce umožňují vytvořit funkci s x parametry na funkci s méně parametry a pevnými hodnotami nastavenými pro omezenější funkci.

Import potřebných knihoven:

    from functools import partial

Tento kód vrátí 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # create a new function that multiplies by 2
    dbl = partial(multiply, 2)
    print(dbl(4))

Důležitá poznámka: Výchozí hodnoty začnou nahrazovat proměnné zleva. Číslo 2 nahradí x. y bude rovno 4, když se zavolá dbl(4). V tomto příkladu to nehraje roli, ale v příkladu níže ano.

Cvičení
--------
Upravte poskytnutou funkci tak, že zavoláte `partial()` a nahradíte první tři proměnné ve funkci `func()`. Poté vytiskněte s novou částečnou funkcí pomocí pouze jedné vstupní proměnné, aby výstup byl roven 60.