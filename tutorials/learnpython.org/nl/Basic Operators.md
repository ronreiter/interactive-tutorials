Deze sectie legt uit hoe je basisoperatoren in Python kunt gebruiken.

### Arithmetic Operators       

Net als in andere programmeertalen kunnen de operators voor optellen, aftrekken, vermenigvuldigen en delen worden gebruikt met getallen.

    number = 1 + 2 * 3 / 4.0
    print(number)

Probeer te voorspellen wat het antwoord zal zijn. Volgt Python de volgorde van bewerkingen?

Een andere beschikbare operator is de modulo (%) operator, die de gehele rest van de deling teruggeeft. deeltal % deler = rest.

    remainder = 11 % 3
    print(remainder)

Het gebruik van twee vermenigvuldigingssymbolen creëert een machtsrelatie.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python ondersteunt het samenvoegen van strings met de opteloperator:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python ondersteunt ook het vermenigvuldigen van strings om een string met een herhalende reeks te vormen:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

Lijsten kunnen worden samengevoegd met de opteloperatoren:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Net als bij strings ondersteunt Python het vormen van nieuwe lijsten met een herhalende reeks met behulp van de vermenigvuldigingsoperator:

    print([1,2,3] * 3)

Exercise
--------

Het doel van deze oefening is om twee lijsten te maken, `x_list` en `y_list`, die elk 10 exemplaren van de variabelen `x` en `y` bevatten. Je moet ook een lijst maken genaamd `big_list`, die de variabelen `x` en `y` elk 10 keer bevat, door de twee lijsten die je hebt gemaakt samen te voegen.