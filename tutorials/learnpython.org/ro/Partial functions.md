Poți crea funcții parțiale în Python folosind funcția partial din biblioteca functools.

Funcțiile parțiale permit derivarea unei funcții cu x parametri într-o funcție cu mai puțini parametri și valori fixe stabilite pentru funcția mai restrânsă.

Import necesar:

    from functools import partial

Acest cod va returna 8.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # creați o nouă funcție care înmulțește cu 2
    dbl = partial(multiply, 2)
    print(dbl(4))

O notă importantă: valorile implicite vor începe să înlocuiască variabilele de la stânga.  2 va înlocui x.
y va fi egal cu 4 când se apelează dbl(4).  Nu face nicio diferență în acest exemplu, dar face în exemplul de mai jos.

Exercițiu
--------
Editează funcția oferită apelând partial() și înlocuind primele trei variabile în func(). Apoi, afișează cu noua funcție parțială folosind o singură variabilă de intrare astfel încât ieșirea să fie egală cu 60.