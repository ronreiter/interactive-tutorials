Sets sunt liste fără elemente duplicate. Să presupunem că doriți să colectați o listă de cuvinte folosite într-un paragraf:

    print(set("my name is Eric and Eric is my name".split()))

Aceasta va afișa o listă conținând "my", "name", "is", "Eric" și, în cele din urmă, "and". Deoarece restul propoziției folosește cuvinte care sunt deja în set, acestea nu sunt inserate de două ori.

Seturile sunt un instrument puternic în Python, deoarece au capacitatea de a calcula diferențele și intersecțiile între alte seturi. De exemplu, să zicem că aveți o listă de participanți la evenimentele A și B:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

Pentru a afla care membri au participat la ambele evenimente, puteți folosi metoda "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

Pentru a afla care membri au participat doar la unul dintre evenimente, folosiți metoda "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

Pentru a afla care membri au participat doar la un eveniment și nu la celălalt, folosiți metoda "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

Pentru a obține o listă a tuturor participanților, folosiți metoda "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Exercise-------- 

În exercițiul de mai jos, folosiți listele date pentru a afișa un set care conține toți participanții de la evenimentul A care nu au participat la evenimentul B.