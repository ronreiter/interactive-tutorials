Tutorial
--------

Les expressions régulières (parfois abrégées en regexp, regex, ou re) sont un outil pour correspondre à des motifs dans le texte. En Python, nous avons le module re. Les applications pour les expressions régulières sont très répandues, mais elles sont assez complexes, donc lorsque vous envisagez d'utiliser une regex pour une certaine tâche, réfléchissez aux alternatives, et n'avez recours aux regex qu'en dernier ressort.

Un exemple de regex est `r"^(From|To|Cc).*?python-list@python.org"` Maintenant, pour une explication : le chapeau `^` correspond au texte au début d'une ligne. Le groupe suivant, la partie avec `(From|To|Cc)` signifie que la ligne doit commencer par l'un des mots qui sont séparés par le pipe `|`. C'est ce qu'on appelle l'opérateur OU, et la regex correspondra si la ligne commence par l'un des mots du groupe. Le `.*?` signifie correspondre de manière non-gourmande à un nombre quelconque de caractères, sauf le caractère de nouvelle ligne `\n`. La partie non-gourmande signifie correspondre aussi peu de répétitions que possible. Le caractère `.` signifie tout caractère sauf une nouvelle ligne, le `*` signifie répéter 0 ou plusieurs fois, et le caractère `?` le rend non-gourmand.

Ainsi, les lignes suivantes seraient assorties par cette regex :
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Une référence complète pour la syntaxe re est disponible dans les [docs python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Comme exemple d'une regex de correspondance d'email "appropriée" (comme celle de l'exercice), voir [ici](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)

Tutorial Code
-------------
# Exemple :
import re
pattern = re.compile(r"\[(on|off)\]") # Légère optimisation
print(re.search(pattern, "Mono: Playback 65 [75%] [-16.50dB] [on]"))
# Renvoie un objet Match!
print(re.search(pattern, "Nada...:-("))
# Ne renvoie rien.
# Fin Exemple

# Exercice : créer une expression régulière qui correspondra à un email
def test_email(your_pattern):
    pattern = re.compile(your_pattern)
    emails = ["john@example.com", "python-list@python.org", "wha.t.`1an?ug{}ly@email.com"]
    for email in emails:
        if not re.match(pattern, email):
            print("Échec de la mise en correspondance %s" % (email))
        elif not your_pattern:
            print("Oublié d'entrer un modèle!")
        else:
            print("Réussi")
pattern = r"" # Votre modèle ici!
test_email(pattern)
    

Expected Output
---------------
test_output_contains("Pass")
success_msg("Great work!")

Solution
--------
# Exercice : créer une expression régulière qui correspondra à un email
import re
def test_email(your_pattern):
    pattern = re.compile(your_pattern)
    emails = ["john@example.com", "python-list@python.org", "wha.t.`1an?ug{}ly@email.com"]
    for email in emails:
        if not re.match(pattern, email):
            print("Échec de la mise en correspondance %s" % (email))
        elif not your_pattern:
            print("Oublié d'entrer un modèle!")
        else:
            print("Réussi")
# Votre modèle ici!
pattern = r"\"?([-a-zA-Z0-9.`?{}]+@\w+\.\w+)\"?"
test_email(pattern)