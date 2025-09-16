Sets zijn lijsten zonder dubbele items. Stel dat je een lijst wilt verzamelen van woorden die in een alinea worden gebruikt:

```python
print(set("my name is Eric and Eric is my name".split()))
```

Dit zal een lijst afdrukken met de woorden "my", "name", "is", "Eric" en tenslotte "and". Aangezien de rest van de zin woorden gebruikt die al in de set voorkomen, worden ze niet opnieuw ingevoegd.

Sets zijn een krachtig hulpmiddel in Python omdat ze in staat zijn om verschillen en doorsneden tussen andere sets te berekenen. Bijvoorbeeld, stel dat je een lijst hebt van deelnemers aan evenementen A en B:

```python
a = set(["Jake", "John", "Eric"])
print(a)
b = set(["John", "Jill"])
print(b)
```

Om te achterhalen welke leden beide evenementen hebben bijgewoond, kun je de methode "intersection" gebruiken:

```python
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.intersection(b))
print(b.intersection(a))
```

Om te achterhalen welke leden maar één van de evenementen hebben bijgewoond, gebruik je de methode "symmetric_difference":

```python
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.symmetric_difference(b))
print(b.symmetric_difference(a))
```

Om te achterhalen welke leden alleen één evenement hebben bijgewoond en niet het andere, gebruik je de methode "difference":

```python
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.difference(b))
print(b.difference(a))
```

Om een lijst te ontvangen van alle deelnemers, gebruik je de methode "union":

```python
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.union(b))
```

Oefening--------
Gebruik in de onderstaande oefening de gegeven lijsten om een set af te drukken die alle deelnemers van evenement A bevat die evenement B niet hebben bijgewoond.