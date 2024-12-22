Når du programmerer, oppstår det feil. Det er bare en del av livet. Kanskje brukeren ga feil input. Kanskje en nettverksressurs var utilgjengelig. Kanskje programmet gikk tom for minne. Eller kanskje programmereren til og med gjorde en feil!

Pythons løsning på feil er unntak. Du har kanskje sett et unntak før.

Oops! Glemte å tildele en verdi til 'a'-variabelen.

Men noen ganger vil du ikke at unntak skal stoppe programmet fullstendig. Du vil kanskje gjøre noe spesielt når et unntak oppstår. Dette gjøres i en *try/except*-blokk.

Her er et trivielt eksempel: Anta at du itererer over en liste. Du trenger å iterere over 20 tall, men listen er laget fra brukerinput og har kanskje ikke 20 tall i seg. Etter at du når slutten av listen, vil du bare at resten av tallene skal tolkes som 0. Slik kunne du gjort det:

Der, det var ikke for vanskelig! Du kan gjøre det med hvilket som helst unntak. For mer informasjon om håndtering av unntak, se på [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

Håndter alle unntakene! Tenk tilbake til de forrige leksjonene for å returnere etternavnet til skuespilleren.