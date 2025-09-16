Každá funkce v Pythonu přijímá předem definovaný počet argumentů, pokud je deklarována běžným způsobem, jako je tento:

Je možné deklarovat funkce, které přijímají proměnlivý počet argumentů, pomocí následující syntaxe:

Proměnná "therest" je seznam proměnných, která přijímá všechny argumenty, které byly předány funkci "foo" po prvních 3 argumentech. Takže volání `foo(1, 2, 3, 4, 5)` vytiskne:

Je také možné předat argumenty funkce podle klíčového slova, takže pořadí argumentů není důležité, pomocí následující syntaxe. Následující kód dá následující výsledek: 
```The sum is: 6
    Result: 1```

Funkce "bar" přijímá 3 argumenty. Pokud je přijat další argument "action", a ten zadává součet čísel, pak je součet vytištěn. Alternativně funkce také ví, že musí vrátit první argument, pokud je hodnota parametru "number", předaného funkci, rovna "first".

Exercise
--------

Vyplňte funkce `foo` a `bar`, aby mohly přijímat proměnlivý počet argumentů (3 nebo více)
Funkce `foo` musí vrátit počet přijatých dodatečných argumentů.
`Bar` musí vrátit `True`, pokud argument s klíčovým slovem `magicnumber` má hodnotu 7, a `False` v opačném případě.