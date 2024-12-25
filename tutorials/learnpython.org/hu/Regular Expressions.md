Regular Expressions (esetenként rövidítve regexp, regex vagy re) eszközök a szövegminták illesztésére. Pythonban az re modul áll rendelkezésünkre. A reguláris kifejezések alkalmazásai széles körben elterjedtek, de meglehetősen összetettek, ezért amikor mérlegeljük a regex használatát egy adott feladathoz, gondoljuk át az alternatívákat, és hagyjuk a regexeket legvégső megoldásként.

Egy példa a regexre: `r"^(From|To|Cc).*?python-list@python.org"` Most következik a magyarázat: a `^` karakt kezdetén illeszkedik a sor elején. Az ezt követő csoport, amely `(From|To|Cc)` tartalmazza, azt jelenti, hogy a sornak az egyik szóval kell kezdődnie, amelyek a `|` jellel vannak elválasztva. Ezt hívják OR operátornak, és a regex akkor illeszkedik, ha a sor a csoport bármelyik szavával kezdődik. A `.*?` annyi karaktert próbál illeszteni szűkségtelenül, kivéve az új sort `\n`. A szüntelen rész azt jelenti, hogy a lehető legkevesebb ismétlést próbálja meg illeszteni. A `.` karakter bármely nem-új sor karaktert jelent, a `*` jelenti 0 vagy több ismétlést, és a `?` karakter szűkségtelent jelent.

Tehát a következő sorok illeszkednek az adott regexhez: `From: python-list@python.org` `To: !asp]<,. python-list@python.org`

A teljes re szintaxisra vonatkozó referencia elérhető a [python docs](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax") oldalán.

Egy "helyes" email-egyező regex példájaként (mint a gyakorlatban), lásd [ezt](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)