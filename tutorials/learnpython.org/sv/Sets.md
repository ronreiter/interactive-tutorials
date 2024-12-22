Sets är listor utan dubbla poster. Låt oss säga att du vill samla en lista över ord som används i ett stycke:

    print(set("my name is Eric and Eric is my name".split()))

Detta kommer att skriva ut en lista som innehåller "my", "name", "is", "Eric" och slutligen "and". Eftersom resten av meningen använder ord som redan finns i mängden, läggs de inte in två gånger.

Sets är ett kraftfullt verktyg i Python eftersom de har förmågan att beräkna skillnader och snitt mellan andra sets. Till exempel, låt oss säga att du har en lista över deltagare i händelserna A och B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

För att ta reda på vilka medlemmar som deltog i båda händelserna kan du använda metoden "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

För att ta reda på vilka medlemmar som bara deltog i en av händelserna, använd metoden "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

För att ta reda på vilka medlemmar som bara deltog i en händelse och inte i den andra, använd metoden "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

För att få en lista över alla deltagare, använd metoden "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

I övningen nedan, använd de givna listorna för att skriva ut ett set som innehåller alla deltagarna från händelse A som inte deltog i händelse B.

Övning--------