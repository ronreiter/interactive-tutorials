Tutorial
--------

Załóżmy, że nasz program w pewnym momencie musi wypisać na ekranie wszystkie liczby z przedziału od 9 do 323. Pomysł na użycie w tym miejscu pętli nasuwa się sam. Korzystając z poznanej wcześniej pętli `while`, zapis wyglądałby następująco.

    i = 9;
    while(i <= 323){
      printf("%d\n", i);
      i++ /* rownowazne i = i + 1; albo i += 1; */
    }

Za wykonanie pętli odpowiednią ilość razy są odpowiedzialne 3 linijki. Zmiennej `i` najpierw przypisujemy jakąś początkową wartość, potem mamy sprawdzenie warunku oraz zwiększenie jej o jeden. W praktyce treść pętli jest często o wiele bardziej rozbudowana. W tedy taka pętla staje się niewygodna do zapisu i interpretowania przez programistę. Natomiast pętla `for` pozwala umieścić wszystkie trzy wspomniane wyżej instrukcje w jednej linijce.

    for(i = 9; i <= 323; i++)
      printf("%d\n", i);

Instrukcje zawarte między `(` i pierwszym średnikiem są wykonywane tylko raz przed pierwszym sprawdzeniem warunku pętli. Warunek pętli jest zawarty między dwoma średnikami. Jeśli jest prawdzimy, to wykonywane są instrukcje zawarte w nawiasach klamrowych `{}`. W końcu wykonywane są instrukcje między drugim średnikiem a `)`, a potem znowu sprawdzamy warunek. Jeśli dalej jest spełniony, to cały cykl się powtarza. Dzięki użyciu w pętli `for` średników można umieścić więcej instrukcji.

    for(i = -43, j = 67; j != 0 && i != 0; i++, j--)
      printf("%d / %d = %d\n", i, j, i / j);

Instrukcje `i = -43, j = 67;` są wykonywanywane raz przed rozpoczęciem pętli, a `i++, j--` po każdym obiegu pętli.

### Ćwiczenie

Dla liczb naturalnych 0, 1, 2, 3, 4 ... silnię `n!` z liczby n definiujemy następująco:

Jeśli n = 0, to n! = 1.

Jeśli n > 1, to n = n * (n-1) * (n-2) * ... * 3 * 2 * 1.

Za pomocą pętli `for` napisz program, który obliczy liczbę 7! i wypisze ją na ekran.

Tutorial Code
-------------

#include <stdio.h>

int main() {
  int n;

  /*miejsce na twoj kod*/

  printf("%d\n", n);

  return 0;
}


Expected Output
---------------
5040

Solution
--------
