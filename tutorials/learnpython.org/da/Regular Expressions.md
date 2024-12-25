Regularudtryk (nogle gange forkortet til regexp, regex eller re) er et værktøj til at matche mønstre i tekst. I Python har vi re-modulet. Anvendelserne for regularudtryk er udbredte, men de er ret komplekse, så når du overvejer at bruge et regularudtryk til en bestemt opgave, bør du tænke på alternativer og kun vælge regularudtryk som en sidste udvej.

Et eksempel på et regularudtryk er `r"^(From|To|Cc).*?python-list@python.org"`. Nu til en forklaring: Caret `^` matcher tekst i begyndelsen af en linje. Den efterfølgende gruppe, delen med `(From|To|Cc)`, betyder at linjen skal starte med et af ordene, der er adskilt af røret `|`. Dette kaldes ELLER-operatoren, og regularudtrykket vil matche, hvis linjen starter med et hvilket som helst af ordene i gruppen. `.*?` betyder at matche et hvilket som helst antal karakterer undtagen linjeskiftkarakteren `\n` på en ikke-grådig måde. Den ikke-grådige del betyder at matche så få gentagelser som muligt. Tegnet `.` betyder en hvilken som helst ikke-linjeskift karakter, `*` betyder at gentage 0 eller flere gange, og `?` tegnet gør det ikke-grådigt.

Så de følgende linjer vil blive matchet af det regularudtryk:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

En komplet reference til re-syntax er tilgængelig i [python documentation](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Som et eksempel på et "korrekt" e-mail-matching regularudtryk (som det i øvelsen), se [dette](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)