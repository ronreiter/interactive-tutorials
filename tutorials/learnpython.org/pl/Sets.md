# Zbiory w Pythonie

Zbiory to listy bez duplikatów. Załóżmy, że chcesz zebrać listę słów użytych w akapicie:

```python
print(set("my name is Eric and Eric is my name".split()))
```

To wydrukuje listę zawierającą "my", "name", "is", "Eric", a na końcu "and". Ponieważ reszta zdania używa słów, które są już w zbiorze, nie są one dodawane po raz drugi.

Zbiory są potężnym narzędziem w Pythonie, ponieważ mogą obliczać różnice i przecięcia między innymi zbiorami. Na przykład, załóżmy, że masz listę uczestników wydarzeń A i B:

```python
a = set(["Jake", "John", "Eric"])
print(a)
b = set(["John", "Jill"])
print(b)
```

Aby dowiedzieć się, którzy członkowie uczestniczyli w obu wydarzeniach, możesz użyć metody "intersection":

```python
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.intersection(b))
print(b.intersection(a))
```

Aby dowiedzieć się, którzy członkowie uczestniczyli tylko w jednym z wydarzeń, użyj metody "symmetric_difference":

```python
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.symmetric_difference(b))
print(b.symmetric_difference(a))
```

Aby dowiedzieć się, którzy członkowie uczestniczyli tylko w jednym wydarzeniu, a nie w innym, użyj metody "difference":

```python
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.difference(b))
print(b.difference(a))
```

Aby otrzymać listę wszystkich uczestników, użyj metody "union":

```python
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.union(b))
```

Exercise--------

W poniższym ćwiczeniu użyj podanych list, aby wydrukować zbiór zawierający wszystkich uczestników z wydarzenia A, którzy nie uczestniczyli w wydarzeniu B.