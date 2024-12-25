Python poskytuje vestavěné knihovny JSON pro kódování a dekódování JSON.

V Pythonu 2.5 se používá modul simplejson, zatímco v Pythonu 2.7 se používá modul json. Protože tento interpret používá Python 2.7, budeme používat json.

Abychom mohli používat modul json, musíme jej nejprve importovat:

Existují dva základní formáty pro JSON data. Buď ve formě řetězce, nebo objektové datové struktury. Objektová datová struktura v Pythonu se skládá ze seznamů a slovníků vnořených do sebe navzájem. Objektová datová struktura umožňuje používat pythonové metody (pro seznamy a slovníky) k přidávání, zobrazování, vyhledávání a odstraňování prvků z datové struktury. Formát řetězce se používá především k přenosu dat do jiného programu nebo jejich načítání do datové struktury.

Pro načtení JSON zpět do datové struktury použijte metodu "loads". Tato metoda vezme řetězec a převede jej zpět do json objektové datové struktury:

Pro kódování datové struktury do JSON použijte metodu "dumps". Tato metoda vezme objekt a vrátí řetězec:

Python podporuje interní metodu serializace dat Pythonu nazvanou pickle (a rychlejší alternativu nazvanou cPickle).

Můžete ji použít naprosto stejným způsobem.

Cílem tohoto cvičení je vytisknout JSON řetězec s přidaným párem klíč-hodnota "Me" : 800.