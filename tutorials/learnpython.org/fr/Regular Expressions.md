Tutorial
--------

Les expressions régulières (parfois abrégées en regexp, regex ou re) sont un outil pour correspondre à des motifs dans le texte. En Python, nous avons le module re. Les applications des expressions régulières sont étendues, mais elles sont assez complexes, donc lorsqu'on envisage d'utiliser une regex pour une tâche donnée, pensez aux alternatives, et ne venez aux regex qu'en dernier recours.

Un exemple de regex est `r"^(From|To|Cc).*?python-list@python.org"` Maintenant pour une explication :
le caret `^` correspond au texte au début d'une ligne. Le groupe suivant, la partie avec `(From|To|Cc)` signifie que la ligne doit commencer par un des mots qui sont séparés par le pipe `|`. C'est ce qu'on appelle l'opérateur OR, et la regex correspondra si la ligne commence par l'un des mots du groupe. Le `.*?` signifie correspondre non-goulûment à tout nombre de caractères, à l'exception du caractère de nouvelle ligne `\n`. La partie non-goulue signifie correspondre au minimum de répétitions possible. Le caractère `.` signifie tout caractère sauf nouvelle ligne, le `*` signifie répéter 0 fois ou plus, et le caractère `?` le rend non-goulû.

Donc, les lignes suivantes seraient correspondantes avec cette regex :
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Une référence complète pour la syntaxe re est disponible dans les [docs python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Comme exemple de regex "appropriée" pour correspondre à un email (comme celle dans l'exercice), voir [ceci](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)

Exercise
--------

# Exercice : faire une expression régulière qui correspondra à un email