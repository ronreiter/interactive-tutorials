Inledning till vanliga uttryck --------

    Regular Expressions (ibland förkortade till regexp, regex, eller re) är ett
verktyg för att matcha mönster i text. I Python har vi re-modulen.
Användningsområdena för reguljära uttryck är vitt spridda, men de är
ganska komplexa, så när du överväger att använda ett regex för en viss uppgift,
tänk på alternativ och använd regex som en sista utväg.

Ett exempel på regex är `r"^(From|To|Cc).*?python-list@python.org"` Nu till en
förklaring:
karet `^` matchar text i början av en rad. Den följande
gruppen, delen med `(From|To|Cc)` betyder att raden måste börja med
ett av orden som är åtskilda av röret `|`. Det kallas
elleroperatorn, och regexet kommer att matcha om raden börjar med något
av orden i gruppen. `.*?` betyder att ogirigt matcha valfritt
antal tecken, förutom radbrytningen `\n`. Den ogiriga
delen betyder att matcha så få upprepningar som möjligt. `.`-tecknet
betyder valfritt icke-radbrytande tecken, `*` betyder att upprepa 0 eller fler
gånger, och `?`-tecknet gör det ogirigt.

Så, följande rader skulle matchas av det regex:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

En komplett referens för re-syntaxen finns tillgänglig i [python
docs](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax).

Som ett exempel på en "korrekt" email-matchande regex (liknande den i
övningen), se [detta](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)