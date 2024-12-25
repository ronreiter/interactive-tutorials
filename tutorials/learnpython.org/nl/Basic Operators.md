Deze sectie legt uit hoe basisoperatoren in Python worden gebruikt.

### Aritmetische Operatoren       

Net als bij andere programmeertalen kunnen de operators optellen, aftrekken, vermenigvuldigen en delen met getallen worden gebruikt.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Probeer te voorspellen wat het antwoord zal zijn. Volgt Python de volgorde van operaties?

Een andere beschikbare operator is de modulo (%) operator, die de gehele rest van de deling retourneert. deeltal % deler = rest.

    remainder = 11 % 3
    print(remainder)

Het gebruik van twee vermenigvuldigingssymbolen maakt een machtsverhouding.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Het Gebruik van Operatoren met Strings

Python ondersteunt het samenvoegen van strings met behulp van de opteloperator:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python ondersteunt ook het vermenigvuldigen van strings om een string met een herhalende volgorde te vormen:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Het Gebruik van Operatoren met Lijsten

Lijsten kunnen worden samengevoegd met de opteloperator:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Net als bij strings ondersteunt Python het vormen van nieuwe lijsten met een herhalende volgorde met behulp van de vermenigvuldigingsoperator:

    print([1,2,3] * 3)

Oefening
--------

Het doel van deze oefening is om twee lijsten te maken genaamd `x_list` en `y_list`,
die elk 10 instanties van de variabelen `x` en `y` bevatten.
Je moet ook een lijst maken genaamd `big_list`, die de variabelen `x` en `y` elk 10 keer bevat door de twee door jou gemaakte lijsten samen te voegen.