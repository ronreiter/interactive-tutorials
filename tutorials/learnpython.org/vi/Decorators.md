Decoratori permit modificări simple ale obiectelor apelabile precum [funcții](http://www.learnpython.org/en/Functions ""), [metode sau clase](http://www.learnpython.org/en/Classes%20and%20Objects ""). Pentru acest tutorial, ne vom ocupa de funcții. Sintaxa

Is echivalentă cu:

Așa cum ați văzut, un decorator este doar o altă funcție care primește o funcție și returnează una. De exemplu, ați putea face acest lucru:

Aceasta ar face ca o funcție să fie repetată de două ori.

De asemenea, puteți să îi modificați ieșirea

modificați intrarea

și faceți verificări.

Să spunem că doriți să multiplicați ieșirea cu o cantitate variabilă. Puteți defini decoratorul și să-l utilizați astfel:

Puteți face orice doriți cu funcția veche, chiar să o ignorați complet! Decoratorii avansați pot manipula, de asemenea, șirul de documentare și numărul de argumente. Pentru decoratori avansați, accesați <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
Creați o fabrică de decoratori care returnează un decorator ce decorează funcții cu un argument. Fabrica ar trebui să ia un argument, un tip, și apoi să returneze un decorator care face ca funcția să verifice dacă intrarea este de tipul corect. Dacă este greșit, ar trebui să imprime("Bad Type") (în realitate, ar trebui să ridice o eroare, dar ridicarea de erori nu este în acest tutorial). Uită-te la codul tutorialului și la ieșirea așteptată pentru a vedea ce este, dacă ești confuz (știu că aș fi). Utilizarea isinstance(object, type_of_object) sau type(object) ar putea ajuta.