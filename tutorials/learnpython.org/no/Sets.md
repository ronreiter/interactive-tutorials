Sets er lister uten dupliserte elementer. La oss si at du ønsker å samle en liste med ord brukt i et avsnitt:

    print(set("my name is Eric and Eric is my name".split()))

Dette vil skrive ut en liste som inneholder "my", "name", "is", "Eric", og til slutt "and". Siden resten av setningen bruker ord som allerede er i mengden, blir de ikke satt inn to ganger.

Mengder er et kraftig verktøy i Python fordi de har evnen til å beregne forskjeller og kryssinger mellom andre mengder. For eksempel, si at du har en liste over deltakere i arrangementer A og B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

For å finne ut hvilke medlemmer som deltok på begge arrangementene, kan du bruke "intersection"-metoden:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

For å finne ut hvilke medlemmer som bare deltok på ett av arrangementene, bruk "symmetric_difference"-metoden:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

For å finne ut hvilke medlemmer som deltok på bare ett arrangement og ikke det andre, bruk "difference"-metoden:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

For å motta en liste over alle deltakere, bruk "union"-metoden:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

I øvelsen nedenfor, bruk de gitte listene til å skrive ut et sett som inneholder alle deltakerne fra arrangement A som ikke deltok på arrangement B.