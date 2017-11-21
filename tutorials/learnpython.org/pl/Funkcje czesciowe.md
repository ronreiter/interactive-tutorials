Tutorial
--------
Czasami w swoim programie wielokrotnie wywołujemy pewną funkcję z tymi samymi argumentami. Aby skrócić zapis w takich sytuacjach, stosujemy funkcje częściowe. Najpierw musimy je zaimportować z odpowiedniej biblioteki.

Przykład:

    from functools import partial

    def mnozenie(x, y):
        return x * y

    podwojenie = partial(mnozenie, 2)

    print podwojenie(6)  # 12
    print podwojenie(11) # 22
    print podwojenie(7)  # 14

Tutorial Code
-------------

Expected Output
---------------

Solution
--------
