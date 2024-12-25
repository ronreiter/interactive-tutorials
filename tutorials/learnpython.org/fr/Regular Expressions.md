Les expressions régulières (parfois abrégées en regexp, regex ou re) sont un outil pour correspondre à des motifs dans le texte. En Python, nous avons le module re. Les applications des expressions régulières sont très variées, mais elles sont assez complexes, donc lorsque vous envisagez d'utiliser une regex pour une tâche donnée, réfléchissez aux alternatives et recourez aux regex en dernier recours.

Un exemple de regex est `r"^(From|To|Cc).*?python-list@python.org"`. Maintenant, une explication : l'accent circonflexe `^` correspond au texte au début d'une ligne. Le groupe suivant, la partie avec `(From|To|Cc)`, signifie que la ligne doit commencer par un des mots séparés par le pipe `|`. C'est ce qu'on appelle l'opérateur OU, et la regex correspondra si la ligne commence par l'un des mots du groupe. Le `.*?` signifie de manière non-gourmande correspondre à n'importe quel nombre de caractères, sauf le caractère de nouvelle ligne `\n`. La partie non-gourmande signifie correspondre au plus petit nombre de répétitions possibles. Le caractère `.` signifie n'importe quel caractère sauf une nouvelle ligne, le `*` signifie répéter 0 ou plusieurs fois, et le caractère `?` rend cela non-gourmand.

Ainsi, les lignes suivantes seraient correspondantes à cette regex :  
`From: python-list@python.org`  
`To: !asp]<,.      python-list@python.org`

Une référence complète pour la syntaxe re est disponible dans les [docs python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Comme un exemple de regex de correspondance d'email « appropriée » (comme celle dans l'exercice), voir [ici](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)