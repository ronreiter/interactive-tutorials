Reguliere expressies (soms afgekort als regexp, regex of re) zijn een hulpmiddel voor het matchen van patronen in tekst. In Python hebben we de module re. De toepassingen voor reguliere expressies zijn veelzijdig, maar ze zijn behoorlijk complex. Dus als je overweegt een regex voor een bepaalde taak te gebruiken, denk dan aan alternatieven en beschouw regexen als een laatste redmiddel.

Een voorbeeld van een regex is `r"^(From|To|Cc).*?python-list@python.org"`. Nu voor een uitleg: de dakje `^` matcht tekst aan het begin van een regel. De volgende groep, het deel met `(From|To|Cc)`, betekent dat de regel moet beginnen met een van de woorden die zijn gescheiden door de pipe `|`. Dat wordt de OF-operator genoemd, en de regex zal matchen als de regel begint met een van de woorden in de groep. De `.*?` betekent dat je niet-gretig een willekeurig aantal tekens moet matchen, behalve het nieuwe regel `\n` teken. Het niet-gretige deel betekent dat je zo weinig mogelijk herhalingen moet matchen. Het `.` karakter betekent elk niet-nieuwe regel karakter, de `*` betekent herhaal 0 of meer keer, en het `?` karakter maakt het niet-gretig.

Dus de volgende regels zouden worden gematcht door die regex: 
`From: python-list@python.org`
`To: !asp]<,. python-list@python.org`

Een volledige referentie voor de re-syntaxis is beschikbaar bij de [python docs](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Als een voorbeeld van een "juiste" email-matching regex (zoals degene in de oefening), zie [dit](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html).