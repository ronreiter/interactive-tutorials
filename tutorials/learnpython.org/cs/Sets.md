Sety jsou seznamy bez duplicitních položek. Řekněme, že chcete shromáždit seznam slov použitých v odstavci:

    print(set("my name is Eric and Eric is my name".split()))

To vytiskne seznam obsahující "my", "name", "is", "Eric" a nakonec "and". Protože zbytek věty používá slova, která již jsou v množině, nejsou vložena dvakrát.

Sety jsou v Pythonu mocným nástrojem, protože umí vypočítat rozdíly a průniky mezi jinými sety. Například, máte seznam účastníků událostí A a B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Abyste zjistili, kteří členové se zúčastnili obou událostí, můžete použít metodu "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Abyste zjistili, kteří členové se zúčastnili pouze jedné z událostí, použijte metodu "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Abyste zjistili, kteří členové se zúčastnili pouze jedné události a ne té druhé, použijte metodu "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Abyste získali seznam všech účastníků, použijte metodu "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Cvičení--------
V níže uvedeném cvičení použijte dané seznamy k vytištění setu obsahujícího všechny účastníky z události A, kteří se nezúčastnili události B.