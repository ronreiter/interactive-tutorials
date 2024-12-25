Le espressioni regolari (a volte abbreviate in regexp, regex o re) sono uno strumento per trovare schemi nei testi. In Python, abbiamo il modulo re. Le applicazioni delle espressioni regolari sono molto diffuse, ma sono abbastanza complesse, quindi quando si pensa di utilizzare una regex per un determinato compito, si dovrebbe considerare prima le alternative e arrivare alle regex come ultima risorsa.

Un esempio di regex è `r"^(From|To|Cc).*?python-list@python.org"` Ora una spiegazione: il simbolo `^` corrisponde al testo all'inizio di una riga. Il gruppo successivo, la parte con `(From|To|Cc)`, significa che la riga deve iniziare con una delle parole separate dalla barra `|`. Questo è chiamato operatore OR, e la regex corrisponderà se la riga inizia con una delle parole nel gruppo. `.*?` significa corrispondere in modo non ingordo a qualsiasi numero di caratteri, tranne il carattere di nuova riga `\n`. La parte non ingorda significa corrispondere al minor numero possibile di ripetizioni. Il carattere `.` significa qualsiasi carattere tranne la nuova riga, il `*` significa ripetere 0 o più volte, e il carattere `?` lo rende non ingordo.

Quindi, le seguenti righe sarebbero corrisposte da quella regex: 
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Una guida completa alla sintassi re è disponibile nei [documenti python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Come esempio di una regex di corrispondenza email "corretta" (come quella nell'esercizio), vedi [qui](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)