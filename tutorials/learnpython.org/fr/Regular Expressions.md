Tutorial
--------

Les expressions régulières (parfois raccourcies en regexp, regex, ou re) sont un outil pour faire correspondre des motifs dans du texte. En Python, nous avons le module re. Les applications des expressions régulières sont très variées, mais elles sont assez complexes. Donc, lorsque vous envisagez d'utiliser une expression régulière pour une certaine tâche, pensez à des alternatives et adressez-vous aux regex en dernier recours.

Un exemple de regex est `r"^(From|To|Cc).*?python-list@python.org"` Maintenant pour une explication: le chapeau `^` correspond au texte au début d'une ligne. Le groupe suivant, la partie avec `(From|To|Cc)` signifie que la ligne doit commencer par l'un des mots séparés par la barre verticale `|`. C'est ce qu'on appelle l'opérateur OU, et la regex correspondra si la ligne commence par l'un des mots du groupe. Le `.*?` signifie faire correspondre de manière non-gourmande n'importe quel nombre de caractères, à l'exception du caractère de nouvelle ligne `\n`. La partie non-gourmande signifie faire correspondre le moins de répétitions possible. Le caractère `.` signifie tout caractère sauf une nouvelle ligne, le `*` signifie répéter 0 ou plusieurs fois, et le caractère `?` rend cela non-gourmand.

Ainsi, les lignes suivantes seraient correspondantes avec cette regex:
`From: python-list@python.org`
`To: !asp]<,. python-list@python.org`

Une référence complète pour la syntaxe re est disponible dans la [documentation python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Comme exemple d'une regex "correcte" pour correspondre à des adresses email (comme celle de l'exercice), voir [ici](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html).

Tutorial Code
-------------
# Exemple : 
import re
pattern = re.compile(r"\[(on|off)\]") # Légère optimisation
print(re.search(pattern, "Mono: Playback 65 [75%] [-16.50dB] [on]"))
# Renvoie un objet Match !
print(re.search(pattern, "Nada...:-("))
# Ne renvoie rien.
# Fin de l'exemple

# Exercise: make a regular expression that will match an email
def test_email(your_pattern):
    pattern = re.compile(your_pattern)
    emails = ["john@example.com", "python-list@python.org", "wha.t.`1an?ug{}ly@email.com"]
    for email in emails:
        if not re.match(pattern, email):
            print("You failed to match %s" % (email))
        elif not your_pattern:
            print("Forgot to enter a pattern!")
        else:
            print("Pass")
pattern = r"" # Your pattern here!
test_email(pattern)
    
Expected Output
---------------
test_output_contains("Pass")
success_msg("Great work!")

Solution
--------
# Exercise: make a regular expression that will match an email
import re
def test_email(your_pattern):
    pattern = re.compile(your_pattern)
    emails = ["john@example.com", "python-list@python.org", "wha.t.`1an?ug{}ly@email.com"]
    for email in emails:
        if not re.match(pattern, email):
            print("You failed to match %s" % (email))
        elif not your_pattern:
            print("Forgot to enter a pattern!")
        else:
            print("Pass")
# Your pattern here!
pattern = r"\"?([-a-zA-Z0-9.`?{}]+@\w+\.\w+)\"?"
test_email(pattern)