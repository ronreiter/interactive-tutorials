Tutorial
--------

### Tomando Decisiones

En la vida, todos debemos tomar decisiones. Para tomar decisiones, revisamos nuestras opciones y nuestros programas también.

Aquí está la estructura de la forma general de tomar decisiones en C.


    int target = 10;
    if (target == 10) {
        printf("Target es igual a 10");
    }


### La sentencia `if`

La sentencia `if` nos permite chequear si una expresión es `true` (verdadera) o `false` (falsa), y ejecutar distinto código según el resultado.

Para evaluar si dos variables son iguales, se utiliza el operador `==`, como en el primer ejemplo.

Los operadores de desigualdad también pueden ser usadso para evaluar expresiones. Por ejemplo:

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo es menor que bar.");
    }

    if (foo > bar) {
        printf("foo es mayor que bar.");
    }

Podemos usar la palabra clave `else` para ejecutar código cuando nuestra expresión se evalúa como `false`.

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo es menor que bar.");
    } else {
        printf("foo es mayor que bar.");
    }

A veces tendremos más de dos salidas de las cuales elegir. En estos casos, encadenamos múltiples sentencias `if` `else`.

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo es menor que bar.");
    } else if (foo == bar) {
        printf("foo es igual a bar.");
    } else {
        printf("foo es mayor que bar.");
    }

También puedes anidar sentencias `if` `else` si así deseas.

    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanuts_in_jar > 80) {
        if (peanuts_eaten < max_peanut_limit) {
            printf("Toma cuantos maníes quieras!\n");
        }
    } else {
        if (peanuts_eaten > peanuts_in_jar) {
            printf("No puedes tener más maníes!\n");
        }
        else {
            printf("Bueno, solo un maní más.\n");
        }
    }


Dos o más expresiones pueden ser evaluadas juntar usando operadores lógicos para chequear si dos expresiones evalúan a `true` juntas, o por lo menos una de ellas. Para chequear si dos expresiones evalúan a `true`, usa el operador AND `&&`. Para chequear si por lo menos una expresión evalúa a `true`, usa el operador OR `||`.

    int foo = 1;
    int bar = 2;
    int moo = 3;

    if (foo < bar && moo > bar) {
        printf("foo es menor que bar Y moo es mayor que bar.");
    }

    if (foo < bar || moo > bar) {
        printf("foo es menor que bar O moo es mayor que bar.");
    }

El operador NOT `!` puede ser usado de la misma manera:

    int target = 9;
    if (target != 10) {
        printf("Target no es igual a 10");
    }


Ejercicio
--------

En este ejercicio, debes construir una sentencia `if` dentro de la función `guessNumber` que chequea si el número `guess` es igual a 555. Si ese es el caso, la función debe imprimir usando `printf` "Correcto. Adivinaste!". Si `guess` es menor que 555, la función debe imprimir usando `printf` "Tu intento es muy bajo." Si `guess` es mayor que 555, la función debe imprimir usando `printf` "Tu intento es muy alto."

* **Importante**: No te olvides de añadir un caracter de nueva línea `\n` al final de tu string de printf.

Tutorial Code
-------------

#include <stdio.h>

void guessNumber(int guess) {
    // TODO: escribe tu código aquí
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}

Expected Output
---------------

Tu intento es muy bajo.
Tu intento es muy alto.
Correcto. Adivinaste!

Solution
--------

#include <stdio.h>

void guessNumber(int guess) {
    // TODO: escribe tu código aquí
    if (guess < 555) {
        printf("Tu intento es muy bajo.\n");
    } else if (guess > 555) {
        printf("Tu intento es muy alto.\n");
    } else {
        printf("Correcto. Adivinaste!\n");
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}
