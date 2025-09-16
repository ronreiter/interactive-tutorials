Python je velmi jednoduchý jazyk a má velmi přímočarou syntaxi. Povzbuzuje programátory k programování bez zbytečného (připraveného) kódu. Nejjednodušší direktiva v Pythonu je direktiva "print" - jednoduše vytiskne řádek (a také obsahuje nový řádek, na rozdíl od jazyka C).

Existují dvě hlavní verze Pythonu: Python 2 a Python 3. Python 2 a 3 jsou poměrně odlišné. Tento tutoriál používá Python 3, protože je sémanticky správnější a podporuje novější funkce.

Například jeden rozdíl mezi Pythonem 2 a 3 je v příkazu `print`. V Pythonu 2 není "print" příkaz funkcí, a proto se volá bez závorek. Nicméně v Pythonu 3 je to funkce a musí se volat se závorkami.

Pro vytištění řetězce v Pythonu 3 stačí napsat:

    print("This line will be printed.")

### Odsazení

Python používá odsazení pro bloky místo složených závorek. Jsou podporovány jak tabulátory, tak mezery, ale standardní odsazení vyžaduje, aby standardní Python kód používal čtyři mezery. Například:

    x = 1
    if x == 1:
        # odsazeno čtyřmi mezerami
        print("x is 1.")

Cvičení
--------

Použijte funkci "print" k vytištění řádku "Hello, World!".