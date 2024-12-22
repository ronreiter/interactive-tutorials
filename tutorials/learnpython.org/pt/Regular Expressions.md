Regular Expressions (às vezes abreviadas para regexp, regex ou re) são uma ferramenta para correspondência de padrões em texto. Em Python, temos o módulo re. As aplicações para expressões regulares são amplamente difundidas, mas são bastante complexas, então, ao considerar o uso de uma regex para uma determinada tarefa, pense sobre alternativas e recorra a regexes como último recurso.

Um exemplo de regex é `r"^(From|To|Cc).*?python-list@python.org"`. Agora, para uma explicação: o acento circunflexo `^` corresponde ao texto no início de uma linha. O grupo seguinte, a parte com `(From|To|Cc)`, significa que a linha deve começar com uma das palavras separadas pelo pipe `|`. Isso é chamado de operador OR, e a regex corresponderá se a linha começar com qualquer uma das palavras do grupo. O `.*?` significa corresponder de modo não ganancioso a qualquer número de caracteres, exceto o caractere de nova linha `\n`. A parte não gananciosa significa que deve corresponder ao menor número possível de repetições. O caractere `.` significa qualquer caractere que não seja nova linha, o `*` significa repetir 0 ou mais vezes, e o caractere `?` o torna não ganancioso.

Portanto, as linhas a seguir seriam correspondidas por essa regex:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Uma referência completa para a sintaxe re está disponível nos [docs do python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax").

Como exemplo de uma regex "adequada" para correspondência de emails (como a do exercício), veja [este](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html).