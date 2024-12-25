Regular Expressions (czasami skracane do regexp, regex lub re) to narzędzie do dopasowywania wzorców w tekście. W Pythonie mamy moduł re. Zastosowania wyrażeń regularnych są szeroko rozpowszechnione, ale są one dość skomplikowane, więc rozważając użycie wyrażeń regularnych do wykonania pewnego zadania, pomyśl o alternatywach i sięgaj po wyrażenia regularne jako ostateczność.

Przykładowe wyrażenie regularne to `r"^(From|To|Cc).*?python-list@python.org"` Teraz wyjaśnienie:
daszek `^` dopasowuje tekst na początku linii. Następująca grupa, część z `(From|To|Cc)` oznacza, że linia musi zaczynać się od jednego z wyrazów rozdzielonych przez pionowy pasek `|`. To jest tzw. operator OR, a wyrażenie regularne dopasuje, jeśli linia zaczyna się od dowolnego z wyrazów w grupie. `.*?` oznacza nie-łapczywe dopasowanie dowolnej liczby znaków, z wyjątkiem znaku nowej linii `\n`. Część nie-łapczywa oznacza dopasowanie jak najmniejszej liczby powtórzeń. Znak `.` oznacza dowolny znak niebędący nową linią, `*` oznacza powtórzenie 0 lub więcej razy, a znak `?` sprawia, że jest ono nie-łapczywe.

Tak więc, następujące linie byłyby dopasowane przez to wyrażenie regularne:
`From: python-list@python.org`
`To: !asp]<,. python-list@python.org`

Pełną referencję składni re można znaleźć w [dokumentacji Python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Jako przykład "poprawnego" wyrażenia regularnego do dopasowywania adresów email (takiego jak w ćwiczeniu), zobacz [to](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)