Tutoriel
--------

Les expressions régulières (parfois abrégées en regexp, regex ou re) sont
un outil pour faire correspondre des modèles dans du texte. En Python, nous avons le module re. 
Les applications des expressions régulières sont très répandues, mais elles sont 
assez complexes. Donc, lorsque vous envisagez d'utiliser une regex pour une certaine tâche, 
pensez aux alternatives et ne recourez aux regex qu'en dernier recours.

Un exemple de regex est `r"^(From|To|Cc).*?python-list@python.org"` Voici maintenant une
explication :
le symbole accent circonflexe `^` correspond au texte au début d'une ligne. Le groupe suivant, la partie avec `(From|To|Cc)`, signifie que la ligne doit commencer par
l'un des mots qui sont séparés par le tuyau `|`. Cela s'appelle 
l'opérateur OR, et la regex correspondra si la ligne commence par l'un
des mots du groupe. Le `.*?` signifie faire correspondre de manière peu gourmande n'importe quel
nombre de caractères, sauf le caractère de nouvelle ligne `\n`. La partie peu gourmande 
signifie faire correspondre aussi peu de répétitions que possible. Le caractère `.` 
désigne n'importe quel caractère non-nouvelle ligne, le `*` signifie répéter 0 ou plus
de fois, et le caractère `?` le rend peu gourmand.

Ainsi, les lignes suivantes seraient correspondantes à cette regex :
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Une référence complète pour la syntaxe re est disponible dans les [docs python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

En exemple d'une regex "proper" pour la correspondance d’e-mails (comme celle de l’exercice), voir [ceci](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html).

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