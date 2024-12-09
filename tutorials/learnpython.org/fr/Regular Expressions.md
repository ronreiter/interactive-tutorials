Tutorial
--------

Les expressions régulières (parfois abrégées en regexp, regex, ou re) sont un
outil pour correspondre à des motifs dans le texte. En Python, nous avons le module re.
Les applications pour les expressions régulières sont répandues, mais elles sont
assez complexes, donc lorsque vous envisagez d'utiliser une regex pour une certaine tâche,
pensez à des alternatives, et considérez les regex comme un dernier recours.

Un exemple de regex est `r"^(From|To|Cc).*?python-list@python.org"` Maintenant pour une
explication :
le caractère circonflexe `^` correspond au texte au début d'une ligne. Le groupe suivant,
la partie avec `(From|To|Cc)` signifie que la ligne doit commencer par un
des mots qui sont séparés par le pipe `|`. C'est ce qu'on appelle
l'opérateur OR, et la regex correspondra si la ligne commence par l'un
des mots dans le groupe. Le `.*?` signifie correspondre de manière non avide à tout
nombre de caractères, à l'exception du caractère de nouvelle ligne `\n`. La partie non avide
signifie correspondre à aussi peu de répétitions que possible. Le caractère `.`
signifie n'importe quel caractère non nouvelle ligne, le `*` signifie répéter 0 ou plus
de fois, et le caractère `?` le rend non avide.

Ainsi, les lignes suivantes seraient correspondantes à cette regex :
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Une référence complète pour la syntaxe re est disponible dans les [docs python](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax").

Comme exemple d'une regex de correspondance d'e-mail "correcte" (comme celle de l'exercice), voir [ceci](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)

Tutorial Code
-------------
# Example: 
import re
pattern = re.compile(r"\[(on|off)\]") # Slight optimization
print(re.search(pattern, "Mono: Playback 65 [75%] [-16.50dB] [on]"))
# Returns a Match object!
print(re.search(pattern, "Nada...:-("))
# Doesn't return anything.
# End Example

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