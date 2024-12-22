Regular Expressions (noen ganger forkortet til regexp, regex eller re) er et
verktøy for å matche mønstre i tekst. I Python har vi re-modulen. Bruksområdene
for regulære uttrykk er omfattende, men de er ganske komplekse, så når du vurderer
å bruke et regex for en bestemt oppgave, tenk på alternativer, og bruk regex som
siste utvei.

Et eksempel på regex er `r"^(From|To|Cc).*?python-list@python.org"` Nå følger en
forklaring:
caret `^` matcher tekst i begynnelsen av en linje. Den neste gruppen,
delen med `(From|To|Cc)` betyr at linjen må starte med ett av ordene som er
separert med pipen `|`. Det kalles OR-operatøren, og regexen vil matche
hvis linjen starter med et av ordene i gruppen. `.*?` betyr å u-grådig matche
et hvilket som helst antall tegn, unntatt linjeskift `\n`-tegnet. Den u-grådige
delen betyr å matche så få repetisjoner som mulig. Tegnet `.` betyr ethvert tegn
som ikke er linjeskift, `*` betyr å gjenta 0 eller flere ganger, og tegnet `?`
gjør det u-grådig.

Så, følgende linjer ville blitt matchet av det regexet:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

En fullstendig referanse for re-syntaks finnes på [python
docs](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax).

Som et eksempel på en "ordentlig" e-post-mat som regex (som den i øvelsen), se [denne](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)