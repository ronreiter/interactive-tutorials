Luettelot ovat hyvin samankaltaisia taulukoiden kanssa. Ne voivat sisältää minkä tahansa tyyppisiä muuttujia, ja ne voivat sisältää niin monta muuttujaa kuin haluat. Luetteloita voidaan myös kätevästi käydä läpi iteroimalla. Tässä on esimerkki siitä, miten rakentaa lista.

mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)
print(mylist[0]) # tulostaa 1
print(mylist[1]) # tulostaa 2
print(mylist[2]) # tulostaa 3

# tulostaa 1,2,3
for x in mylist:
    print(x)

Indeksin, jota ei ole olemassa, käyttäminen aiheuttaa poikkeuksen (virheen).

mylist = [1,2,3]
print(mylist[10])

Exercise
--------

Tässä harjoituksessa sinun tulee lisätä numeroita ja merkkijonoja oikeisiin listoihin käyttämällä "append"-metodia. Sinun täytyy lisätä numerot 1, 2 ja 3 "numbers"-listaan ja sanat 'hello' ja 'world' "strings"-muuttujaan.

Sinun tulee myös täyttää muuttuja second_name listan names toisella nimellä käyttäen hakasulkeita `[]`. Huomaa, että indeksointi alkaa nollasta, joten jos haluat pääsyn listan toiseen kohteeseen, indeksi on 1.