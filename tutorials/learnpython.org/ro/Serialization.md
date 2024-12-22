Python oferă biblioteci JSON integrate pentru a encoda și decoda JSON.

În Python 2.5, modulul `simplejson` este folosit, în timp ce în Python 2.7 se folosește modulul `json`. Deoarece acest interpretator folosește Python 2.7, vom folosi `json`.

Pentru a utiliza modulul `json`, acesta trebuie importat mai întâi:

    import json

Există două formate de bază pentru datele JSON. Fie sub formă de șir, fie ca structură de date obiect. Structura de date obiect, în Python, constă din liste și dicționare imbricate. Structura de date obiect permite utilizatorului să folosească metodele python (pentru liste și dicționare) pentru a adăuga, lista, căuta și elimina elemente din structura de date. Formatul de șir este folosit în principal pentru a transmite datele într-un alt program sau pentru a le încărca într-o structură de date.

Pentru a încărca JSON înapoi într-o structură de date, folosește metoda "loads". Această metodă ia un șir și îl transformă înapoi în structura de date obiect JSON:

    import json 
    print(json.loads(json_string))

Pentru a encoda o structură de date în JSON, folosește metoda "dumps". Această metodă ia un obiect și returnează un șir:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python suportă o metodă de serializare a datelor specifică Python numită `pickle` (și o alternativă mai rapidă numită `cPickle`).

O poți folosi exact în același mod.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

Scopul acestui exercițiu este de a afișa șirul JSON cu perechea cheie-valoare "Me" : 800 adăugată la acesta.