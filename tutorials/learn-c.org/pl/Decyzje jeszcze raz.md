Tutorial
--------
Na warsztat weźmiemy tym razem instrukcję `switch`. Za jej pomocą sprawdzamy, czy w danej zmiennej są zapisane konkretne wartości. Najpierw przykład:

    #include <stdio.h>
    #include <time.h>
    #include <stdlib.h>

    int main(){
      /*przypisujemy X losowa wartosc od 1 do 5*/
      int X;
      srand(time(NULL));
      X = rand() % 5 + 1;

      switch(X){
      case 1:
        printf("Zmienna X jest rowna");
        printf(" 1\n");
        break;
      case 2:
        printf("Zmienna X jest rowna 2");
        break;
      case 3:
        printf("Zmienna X jest rowna 3");
        break;
      case 4:
        printf("Zmienna X jest rowna 4");
        break;
      default:
        printf("Zmienna X jest rowna 5");
        break;
      }

      return 0;
    }

Po słowie `switch` w nawiasach `()` umieszczamy zmienną, której wartość chcemy zbadać. Potem w nawiasach `{}` umieszczamy wszystkie rozważane "przypadki". Po słowie `case` umieszczamy wartość, z którą chcemy porównać zmienną, a potem dwukropek. Jeśli zmienna jest równa wartości po słówku case, to zostaną wykonane wszystkie instrukcje do wystąpienia słowa kluczowego `break` albo do nawiasu `}` zamykającego switch. Możesz się o tym przekonać usuwając pierwsze wystąpienie `break` w powyższym przykładzie. Instrukcja `default` jest opcjonalna i służy nam do obsłużenia wszystkich tych sytuacji, których nie uwzględniliśmy za pomocą `case`. `default` umieszczamy zawsze na końcu i prawdę powiedziawszy `break` jest niepotrzebny, ale wielu programistów umieszcza go, aby uniknąć pomyłek przy modyfikowaniu programu w przyszłości.

### Ćwiczenie

Za pomocą instrukcji `switch` oraz operatora `++`, (zwiększa zmienną o jeden) spraw, aby niezależnie od wyniku losowania zmienna X zawsze miała wartość 4. 

Tutorial Code
-------------
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  /* przypisujemy X losowa wartosc od 1 do 3 */
  int X;
  srand(time(NULL));
  X = rand() % 3 + 1;

  /*Ponizej jest miejsce na twoj kod*/

  /*Powyzej jest miejsce na twoj kod*/

  printf("X = %d\n", X);

  return 0;
}

Expected Output
---------------
    X = 4

Solution
--------
