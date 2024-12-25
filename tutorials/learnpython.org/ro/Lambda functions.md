Normally we define a function using the def keyword somewhere in the code and call it whenever we need to use it.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Acum, în loc să definim funcția undeva și să o apelăm, putem folosi funcțiile lambda din Python, care sunt funcții inline definite în același loc în care le folosim. Astfel nu mai este necesar să declarăm o funcție undeva și să revenim la cod doar pentru o singură utilizare.

Nu trebuie să aibă un nume, așa că sunt numite și funcții anonime. Definim o funcție lambda folosind cuvântul cheie lambda.

    your_function_name = lambda inputs : output

Așadar, exemplul de mai sus de sum folosind funcția lambda ar fi,

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Aici atribuim funcția lambda variabilei **sum**, și la introducerea argumentelor, adică a și b, funcționează ca o funcție normală.

Exercise
--------
Scrieți un program folosind funcții lambda pentru a verifica dacă un număr din lista dată este impar. Imprimați "True" dacă numărul este impar sau "False" dacă nu, pentru fiecare element.