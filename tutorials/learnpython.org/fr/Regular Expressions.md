Tutorial
--------

Les expressions régulières (parfois abrégées en regexp, regex ou re) sont un outil pour trouver des motifs dans le texte. En Python, nous avons le module re. Les applications des expressions régulières sont très répandues, mais elles sont assez complexes, donc lorsque vous envisagez d'utiliser une regex pour une certaine tâche, pensez à des alternatives et utilisez les regex en dernier recours.

Un exemple de regex est `r"^(From|To|Cc).*?python-list@python.org"`. Maintenant pour une explication :
le symbole `^` correspond au texte au début d'une ligne. Le groupe suivant, la partie avec `(From|To|Cc)`, signifie que la ligne doit commencer par l'un des mots séparés par la barre verticale `|`. C'est ce qu'on appelle l'opérateur OU, et la regex correspondra si la ligne commence par n'importe lequel des mots du groupe. Le `.*?` signifie faire correspondre de manière non-gourmande n'importe quel nombre de caractères, sauf le caractère de nouvelle ligne `\n`. La partie non-gourmande signifie faire correspondre le moins de répétitions possible. Le caractère `.` signifie n'importe quel caractère sauf une nouvelle ligne, le `*` signifie répéter 0 ou plusieurs fois, et le caractère `?` le rend non-gourmand.

Ainsi, les lignes suivantes correspondraient à cette regex :
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Une référence complète pour la syntaxe re est disponible dans les [documents Python](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax).

Comme exemple de regex de correspondance d'email "correcte" (comme celle de l'exercice), voir [ici](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html).

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