Regular Expressions (manchmal abgekürzt als regexp, regex oder re) sind ein Werkzeug zum Abgleichen von Mustern in Texten. In Python haben wir das re-Modul. Die Anwendungen für reguläre Ausdrücke sind weit verbreitet, aber sie sind ziemlich komplex, daher sollte man beim Überlegen, ob man einen regulären Ausdruck für eine bestimmte Aufgabe verwenden möchte, zunächst andere Alternativen in Betracht ziehen und reguläre Ausdrücke als letzten Ausweg nutzen.

Ein Beispiel für einen regulären Ausdruck ist `r"^(From|To|Cc).*?python-list@python.org"`. Nun zur Erklärung: das Caret `^` passt auf Text am Anfang einer Zeile. Die folgende Gruppe, der Teil mit `(From|To|Cc)`, bedeutet, dass die Zeile mit einem der Worte beginnen muss, die durch das Pipe `|` getrennt sind. Das wird als OR-Operator bezeichnet, und der reguläre Ausdruck wird passen, wenn die Zeile mit einem der Wörter in der Gruppe beginnt. Das `.*?` bedeutet, so wenig wie möglich eine beliebige Anzahl von Zeichen abzugleichen, außer dem Zeilenumbruch `\n`-Zeichen. Der Teil "ungierig" bedeutet, so wenige Wiederholungen wie möglich abzugleichen. Das Zeichen `.` steht für jedes Zeichen außer einem Zeilenumbruch, das `*` für die Wiederholung 0 oder mehr Mal, und das `?`-Zeichen macht es un-gierig.

Die folgenden Zeilen würden von diesem regulären Ausdruck übereinstimmen:
`From: python-list@python.org`
`To: !asp]<,. python-list@python.org`

Eine vollständige Referenz zur re-Syntax ist in den [Python-Dokumentationen](http://docs.python.org/library/re.html#regular-expression-syntax "RE-Syntax) verfügbar.

Als Beispiel eines "richtigen" E-Mail-abstimmenden regulären Ausdrucks (wie der im Übungsteil), siehe [dies](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html).