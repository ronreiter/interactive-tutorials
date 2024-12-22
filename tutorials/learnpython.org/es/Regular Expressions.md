# Regular Expressions

Las expresiones regulares (a veces abreviadas como regexp, regex o re) son una herramienta para encontrar patrones en el texto. En Python, tenemos el módulo re. Las aplicaciones para las expresiones regulares son muy amplias, pero son bastante complejas, por lo que cuando contemples usar un regex para una tarea determinada, piensa en alternativas y recurre a los regex como última opción.

Un ejemplo de regex es `r"^(From|To|Cc).*?python-list@python.org"`. Ahora una explicación:
el acento circunflejo `^` coincide con el texto al comienzo de una línea. El siguiente grupo, la parte con `(From|To|Cc)` significa que la línea debe empezar con una de las palabras que están separadas por la barra `|`. Eso se llama el operador OR, y el regex coincidirá si la línea empieza con cualquiera de las palabras en el grupo. El `.*?` significa hacer coincidir de manera no codiciosa cualquier número de caracteres, excepto el carácter de nueva línea `\n`. La parte no codiciosa significa hacer coincidir el menor número de repeticiones posible. El carácter `.` significa cualquier carácter que no sea una nueva línea, el `*` significa repetir 0 o más veces, y el carácter `?` lo hace no codicioso.

Por lo tanto, las siguientes líneas coincidirían con ese regex:
`From: python-list@python.org`
`To: !asp]<,.      python-list@python.org`

Una referencia completa para la sintaxis de re está disponible en la [documentación de python](http://docs.python.org/library/re.html#regular-expression-syntax "RE syntax).

Como ejemplo de un regex "adecuado" para hacer coincidir correos electrónicos (como el del ejercicio), ve [esto](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html)