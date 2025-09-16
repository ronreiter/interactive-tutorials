# Traduzione del tutorial

Ogni funzione in Python riceve un numero predefinito di argomenti, se dichiarata normalmente, come segue:

```python
def myfunction(first, second, third):
    # do something with the 3 variables
    ...
```

È possibile dichiarare funzioni che ricevono un numero variabile di argomenti, usando la seguente sintassi:

```python
def foo(first, second, third, *therest):
    print("First: %s" % first)
    print("Second: %s" % second)
    print("Third: %s" % third)
    print("E tutto il resto... %s" % list(therest))
```

La variabile "therest" è una lista di variabili, che riceve tutti gli argomenti dati alla funzione "foo" dopo i primi 3 argomenti. Quindi chiamando `foo(1, 2, 3, 4, 5)` verrà stampato:

```python
def foo(first, second, third, *therest):
    print("First: %s" %(first))
    print("Second: %s" %(second))
    print("Third: %s" %(third))
    print("E tutto il resto... %s" %(list(therest)))

foo(1, 2, 3, 4, 5)
```

È anche possibile inviare argomenti alle funzioni tramite parole chiave, in modo che l'ordine degli argomenti non abbia importanza, utilizzando la seguente sintassi. Il seguente codice produce il seguente output: 
```La somma è: 6
Risultato: 1```

```python
def bar(first, second, third, **options):
    if options.get("action") == "sum":
        print("La somma è: %d" %(first + second + third))

    if options.get("number") == "first":
        return first

result = bar(1, 2, 3, action = "sum", number = "first")
print("Risultato: %d" %(result))
```

La funzione "bar" riceve 3 argomenti. Se riceve un argomento aggiuntivo "action", che istruisce sulla somma dei numeri, allora la somma viene stampata. In alternativa, la funzione sa anche che deve restituire il primo argomento, se il valore del parametro "number", passato alla funzione, è uguale a "first".

Esercizio
--------

Completa le funzioni `foo` e `bar` in modo che possano ricevere una quantità variabile di argomenti (3 o più).
La funzione `foo` deve restituire il numero di argomenti extra ricevuti.
La `bar` deve restituire `True` se l'argomento con la parola chiave `magicnumber` vale 7, e `False` altrimenti.