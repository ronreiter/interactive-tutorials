När man programmerar händer fel. Det är bara ett faktum i livet. Kanske användaren gav felaktig inmatning. Kanske var en nätverksresurs otillgänglig. Kanske tog programmet slut på minne. Eller kanske gjorde programmeraren till och med ett misstag!

Pythons lösning på fel är undantag. Du kanske har sett ett undantag tidigare.

Oops! Glömde att tilldela ett värde till variabeln 'a'.

Men ibland vill du inte att undantag skall stoppa programmet helt. Du kanske vill göra något speciellt när ett undantag uppstår. Detta görs i ett *try/except*-block.

Här är ett enkelt exempel: Anta att du itererar över en lista. Du behöver iterera över 20 nummer, men listan är gjord från användarinmatning och kanske inte har 20 nummer i sig. När du når slutet av listan vill du bara att resten av numren ska tolkas som en 0. Så här kan du göra det:

Där, det var inte så svårt! Du kan göra det med vilket undantag som helst. För mer detaljer om hur man hanterar undantag, se [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Övning
--------

Hanter alla undantag! Tänk tillbaka på de tidigare lektionerna för att returnera efternamnet på skådespelaren.