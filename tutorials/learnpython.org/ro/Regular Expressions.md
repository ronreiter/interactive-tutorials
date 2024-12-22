Expresiile regulate (sometimes shortened to regexp, regex, or re) sunt un
instrument pentru potrivirea modelelor în text. În Python, avem modulul re.
Aplicațiile pentru expresii regulate sunt larg răspândite, dar sunt
destul de complexe, așa că atunci când te gândești să folosești o expresie regulată pentru o anumită sarcină,
gândește-te la alternative și apelează la regex-uri ca ultimă soluție.

Un exemplu de regex este `r"^(From|To|Cc).*?python-list@python.org"` Acum o
explicație:
circumflexul `^` potrivește textul la începutul unei linii. Grupul următor,
partea cu `(From|To|Cc)` înseamnă că linia trebuie să înceapă cu
unul dintre cuvintele care sunt separate de bara `|`. Aceasta se numește
operatorul SAU, și regex-ul se va potrivi dacă linia începe cu oricare
dintre cuvintele din grup. `.*?` înseamnă să se potrivească în mod ne-lacom
oricărui număr de caractere, cu excepția caracterului de linie nouă `\n`.
Partea ne-lacomă înseamnă să potrivească cât mai puține repetări posibil. Caracterul `.`
înseamnă orice caracter non-linie nouă, `*` înseamnă să repete de 0 sau mai multe
ori, iar caracterul `?` îl face ne-lacom.

Astfel, următoarele linii s-ar potrivi cu acel regex:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

O referință completă pentru sintaxa re este disponibilă la [python
docs](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax").

Ca exemplu de regex "corespunzător" pentru potrivirea email-urilor (ca cel din
exercițiu), vezi [aceasta](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)