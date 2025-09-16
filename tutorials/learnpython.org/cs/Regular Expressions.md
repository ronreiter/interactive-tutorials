# Regulární výrazy

Regulární výrazy (někdy zkráceně regexp, regex nebo re) jsou nástrojem pro shodu vzorů v textu. V Pythonu máme modul re. Aplikace regulárních výrazů jsou rozšířené, ale jsou poměrně složité, takže když uvažujete o použití regexu pro určitý úkol, přemýšlejte o alternativách a k regulárním výrazům se uchylujte jako k poslední možnosti.

Příklad regexu je `r"^(From|To|Cc).*?python-list@python.org"` Nyní k vysvětlení: Znak karetky `^` odpovídá textu na začátku řádku. Následující skupina, část s `(From|To|Cc)`, znamená, že řádek musí začínat jedním ze slov oddělených svislítkem `|`. To se nazývá operátor OR a regex se shoduje, pokud řádek začíná některým ze slov ve skupině. `.*?` znamená nezávisle shodovat libovolný počet znaků, kromě znaku nového řádku `\n`. Nezávislá část znamená shodovat co nejméně opakování. Znak `.` znamená libovolný znak kromě nového řádku, `*` znamená opakovat 0 nebo vícekrát a znak `?` činí šablonu nenažravou.

Takže následující řádky by odpovídaly tomuto regexu:
`From: python-list@python.org`
`To: !asp]<,. python-list@python.org`

Úplný odkaz na syntaxi re je k dispozici na [dokumentaci Pythonu](http://docs.python.org/library/re.html#regular-expression-syntax
"RE syntax).

Jako příklad "řádného" regexu pro shodu e-mailu (podobně jako ten v cvičení), podívejte se na [tento odkaz](http://www.ex-parrot.com/pdw/Mail-RFC822-Address.html).