Sets er lister uden dubletter. Lad os sige, at du vil samle en liste over ord brugt i et afsnit:

    print(set("my name is Eric and Eric is my name".split()))

Dette vil udskrive en liste, der indeholder "my", "name", "is", "Eric" og til sidst "and". Da resten af sætningen bruger ord, som allerede er i sættet, indsættes de ikke to gange.

Sets er et kraftfuldt værktøj i Python, da de har evnen til at beregne forskelle og skæringspunkter mellem andre sets. For eksempel, hvis du har en liste over deltagere i begivenhederne A og B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

For at finde ud af, hvilke medlemmer der deltog i begge begivenheder, kan du bruge "intersection" metoden:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

For at finde ud af, hvilke medlemmer der kun deltog i én af begivenhederne, brug "symmetric_difference" metoden:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

For at finde ud af, hvilke medlemmer der kun deltog i én begivenhed og ikke den anden, brug "difference" metoden:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

For at modtage en liste over alle deltagere, brug "union" metoden:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

I øvelsen nedenfor skal du bruge de givne lister til at udskrive et set, der indeholder alle deltagerne fra begivenhed A, som ikke deltog i begivenhed B.