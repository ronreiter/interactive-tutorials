```markdown
I set sono liste senza voci duplicate. Supponiamo di voler raccogliere una lista di parole usate in un paragrafo:

    print(set("my name is Eric and Eric is my name".split()))

Questo stamperà una lista contenente "my", "name", "is", "Eric" e infine "and". Poiché il resto della frase utilizza parole che sono già nel set, esse non vengono inserite due volte.

I set sono uno strumento potente in Python poiché hanno la capacità di calcolare differenze e intersezioni tra altri set. Ad esempio, diciamo che hai una lista di partecipanti agli eventi A e B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Per scoprire quali membri hanno partecipato a entrambi gli eventi, puoi usare il metodo "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Per scoprire quali membri hanno partecipato solo a uno degli eventi, utilizza il metodo "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Per scoprire quali membri hanno partecipato solo a un evento e non all'altro, utilizza il metodo "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Per ricevere una lista di tutti i partecipanti, utilizza il metodo "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Esercizio--------
Nell'esercizio di seguito, utilizza le liste date per stampare un set contenente tutti i partecipanti all'evento A che non hanno partecipato all'evento B.
```