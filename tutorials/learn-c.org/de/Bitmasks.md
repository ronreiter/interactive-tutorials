Tutorial
--------

Bit masking ist der einfache Prozess Daten als echte Bits zu speichern, anstatt als char/int/float. Es ist unfassbar nützlich um gewisse Arten von Daten kompakt und effizient zu speichern.

Die Idee hinter Bit masking ist Booleansche Logik. Booleansche Logik ist die Manipulation von 'wahr' (1) und 'falsch' (0) durch logische Operationen, die 0en und 1en als Argumente nehmen. Wir beschäftigen uns mit den folgenden Operationen:

* NOT a - das Resultat ist das Gegenteil des Eingabewerts (1 -> 0, 0 -> 1)
* a AND b - sind beide Werte 1, dann ist auch das Resultat 1, ansonsten ist das Resultat 0
* a OR b - wenn mind. einer der Werte 1 ist, dann ist das Resultat 1, sind beide 0 ist das Resultat 0
* a XOR b - ist genau einer der Werte 1 und der andere 0, so ist das Resultat 1, ansonsten ist das Resultat 0

In Computern werden diese wahr/falsch Werte als *Bits* bezeichnet. Primitive in C (`int`, `float`, etc) bestehen aus einer Anzahl von Bits, einem Vielfachen von 8. Zum Beispiel das `int` Primitiv ist mind. 16 Bits groß, ein `char` mind. 8 Bits. 8 Bits werden typischerweise als *Byte* bezeichnet. C garantiert, dass gewisse Primitive immer mind. [eine gewisse Anzahl](http://en.wikipedia.org/wiki/C_data_types#Basic_types) an Bytes goß sind. Die Einführung von `stdint.h` in C11 erlaubt Programmierern Ganzzahldatentypen festzulegen, die eine genaue Anzahl an Bytes groß sind. Das ist sehr nützlich, wenn man Bitmasken benutzt.

Bitmasken werden oft benutzt um Einstellungsflags zu setzen. Flags sind Werte, die zwei Zustände haben, zum Beispiel 'an/aus', oder 'bewegend/stehend'.

### Das nte Bit setzen

Das nte Bit zu setzen ist einfach. Man OR-t den Wert der Variable `storage` mit dem Wert `2^n`.

```
storage |= 1 << n;
```

Als Beispiel setzen wir hier Bit 3 (7-0), wobei `storage` ein char (8 Bits) ist:

```
01000010
   OR
00001000
   ==
01001010
```

Die `2^n` Logik setzt die '1' an die richtige Stelle in der Maske selbst, was den Zugang zu dem gleichen Bit in der `storage` Variable erlaubt.

### Das nte Bit löschen

Das `n`te Bit löscht man, indem man das Inverse (NOT) des Werts `2^n` mit dem Wert der `storage` Variable AND-verknüpft.

```
storage &= ~(1 << n);
```

Hier ist noch einmal das Beispiel:

```
01001010
   AND
11110111
   ==
01000010
```

### Das nte Bit flippen

Das `n`te Bit flippt man, indem man den Wert der `storage` Variable mit dem Wert `2^n` XOR-t:

```
storage ^= 1 << n;
```

```
01000010    01001010
   XOR         XOR
00001000    00001000
   ==          ==
01001010    01000010
```

### Das nte Bit checken

Das `n`te Bit checkt man, indem man den Wert der `storage` Variable mit dem Wert von `2^n` AND-verknüpft.

```
bit = storage & (1 << n);
```

```
01000010    01001010
   AND         AND
00001000    00001000
   ==          ==
00000000    00001000
```

Übung
-----

Benutze Bitmasken um ein paar Flags zu manipulieren.


Tutorial Code
-------------

    #include <assert.h>

    /* beende das Initialisieren der Flags */

    const short FLAG_ON          = 1 << 0; // 1  (0x01)
    const short FLAG_MOVEMENT    = 1 << 1; // 2  (0x02)
    const short FLAG_TRANSPARENT = 1 << 2; // 4  (0x04)
    const short FLAG_ALIVE       = ;
    const short FLAG_BROKEN      = ;
    const short FLAG_EDIBLE      = 1 << 5; // 32 (0x20)

    int main() {
      short attributes = 0;

      /* setze die Attribute  ON, TRANSPARENT, und BROKEN */

      assert(attributes == FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN);

      /* verandere (set/clear/toggle) sodass die einzigen Attribute ON und ALIVE sind */

      assert(attributes == FLAG_ON | FLAG_ALIVE);

      /* checke, ob das ALIVE flag gesetzt ist */
      assert(/* ??? */);

      /* checke, ob das BROKEN flag nicht gesetzt ist */
      assert(/* ??? */);

      /* verändere so, dass nur das EDIBLE Attribut gesetzt ist */

      assert(attributes == FLAG_EDIBLE);
    }


Erwartete Ausgabe
-----------------


Lösung
------

    #include <assert.h>

    /* beende das Initialisieren der Flags */

    const short FLAG_ON          = 1 << 0; // 1  (0x01)
    const short FLAG_MOVEMENT    = 1 << 1; // 2  (0x02)
    const short FLAG_TRANSPARENT = 1 << 2; // 4  (0x04)
    const short FLAG_ALIVE       = 1 << 3; // 8  (0x08)
    const short FLAG_BROKEN      = 1 << 4; // 16 (0x10)
    const short FLAG_EDIBLE      = 1 << 5; // 32 (0x20)

    int main() {
      short attributes = 0;

      /* setze die Attribute  ON, TRANSPARENT, und BROKEN */
      storage |= FLAG_ON;
      storage |= FLAG_TRANSPARENT;
      storage |= FLAG_BROKEN;
      // moegliche Loesungen:
      // storage |= FLAG_ON & FLAG_TRANSPARENT & FLAG_BROKEN;
      // storage = FLAG_ON & FLAG_TRANSPARENT & FLAG_BROKEN;

      assert(attributes == FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN);

      /* verandere (set/clear/toggle) sodass die einzigen Attribute ON und ALIVE sind */
      storage &= ~FLAG_TRANSPARENT;
      // moeglich: storage ^= FLAG_TRANSPARENT;
      storage ^= FLAG_BROKEN;
      // moeglich: storage &= ~FLAG_BROKEN;
      storage |= FLAG_ALIVE;

      assert(attributes == FLAG_ON | FLAG_ALIVE);

      /* checke, ob das ALIVE flag gesetzt ist */
      assert(attributes & FLAG_ALIVE);

      /* checke, ob das BROKEN flag nicht gesetzt ist */
      assert(!(attributes & FLAG_BROKEN));

      /* verändere so, dass nur das EDIBLE Attribut gesetzt ist */
      storage = FLAG_EDIBLE;

      assert(attributes == FLAG_EDIBLE);
    }
