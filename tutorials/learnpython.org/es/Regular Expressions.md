Tutorial
--------

Las expresiones regulares (a veces resumidas como 'regexp', 'regex', o 're')
son una herramienta para unir patrones de texto. En Python, tenemos el modulo de re.
Las aplicaciones para expresiones regulares están muy extendidas, pero son
bastante complejas, así que cuando consideres usar una expresión regular
para una determinada tarea, piensa primero alguna alternativa, y acude a
regexes como un ultimo recurso.

Como un ejemplo tenemos `r"^(From|To|Cc).*?python-list@python.org"` Ahora para
explicarlo mejor:

El signo de intercalacion `^` coincide con el texto al comienzo de una línea. 
El siguiente grupo, la parte con `(From|To|Cc)` significa que la línea tiene que comenzar con
una de las palabras que están separadas por el pipe `|`. Eso se llama operador OR,
y la expresión regular coincidirá si la línea comienza con cualquier
de las palabras en el grupo. El `.\*?`significa emparejar sin codicia cualquier
número de caracteres, excepto el caracter de nueva linea `\n`.La parte no codiciosa
significa hacer coincidir la menor cantidad de repeticiones posible. El caracter `.` 
significa cualquier caracter que no sea de nueva linea, el `\*` significa repetir 0 o
mas veces, y el caracter `?`  lo hace no codicioso. 

Entonces, las siguientes líneas coincidirían con esa expresión regular:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

A complete reference for the re syntax is available at the [python
docs](http://docs.python.org/library/re.html#regular-expression-syntax 
"RE syntax).

As an example of a "proper" email-matching regex (like the one in the
exercise), see [this](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)

Tutorial Code
-------------

# Example
import re
pattern = re.compile(r"\[(on|off)\]") # Slight optimization
re.search(pattern, "Mono: Playback 65 [75%] [-16.50dB] [on]")
# Returns a Match object!
re.search(pattern, "Nada...:-(")
# Doesn't return anything.
# End Example

# Exercise: make a regular expression that will match an email
def test_email(your_pattern):
    pattern = re.compile(your_pattern)
    emails = ["john@example.com", "python-list@python.org", '"wha.t.`1an?ug{}ly@email.com"']
    for email in emails:
        if not re.match(pattern, email):
            print "You failed to match %s" % (email)
        elif not your_pattern:
            print "Forgot to enter a pattern!"
        else:
            print "Pass"
pattern = r"" # Your pattern here!
test_email(pattern)

Expected Output
---------------
Pass
Pass
Pass

Solution
--------
