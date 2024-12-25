# Harjoitus--------

Joukot ovat listoja, joissa ei ole päällekkäisiä merkintöjä. Sanotaan, että haluat kerätä luettelon sanoista, joita käytettiin kappaleessa:

```
print(set("my name is Eric and Eric is my name".split()))
```

Tämä tulostaa luettelon, joka sisältää "my", "name", "is", "Eric", ja lopuksi "and". Koska lauseen loppuosa käyttää sanoja, jotka ovat jo joukossa, niitä ei lisätä kahdesti.

Joukot ovat tehokas työkalu Pythonissa, koska ne voivat laskea eroja ja yhtymäkohtia muiden joukkojen välillä. Esimerkiksi, sanotaan että sinulla on luettelo osallistujista tapahtumissa A ja B:

```
a = set(["Jake", "John", "Eric"])
print(a)
b = set(["John", "Jill"])
print(b)
```

Jos haluat selvittää, mitkä jäsenet osallistuivat molempiin tapahtumiin, voit käyttää "intersection"-metodia:

```
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.intersection(b))
print(b.intersection(a))
```

Jos haluat selvittää, mitkä jäsenet osallistuivat vain yhteen tapahtumista, käytä "symmetric_difference"-metodia:

```
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.symmetric_difference(b))
print(b.symmetric_difference(a))
```

Jos haluat selvittää, mitkä jäsenet osallistuivat vain yhteen tapahtumaan mutta eivät toiseen, käytä "difference"-metodia:

```
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.difference(b))
print(b.difference(a))
```

Jos haluat saada luettelon kaikista osallistujista, käytä "union"-metodia:

```
a = set(["Jake", "John", "Eric"])
b = set(["John", "Jill"])

print(a.union(b))
```

Alla olevassa harjoituksessa, käytä annettuja listoja tulostaaksesi joukon, joka sisältää kaikki tapahtuman A osanottajat, jotka eivät osallistuneet tapahtumaan B.