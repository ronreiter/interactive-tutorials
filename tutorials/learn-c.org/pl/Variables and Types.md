Tutorial
--------

W C istnieje kilka typów danych. Poniżej opisano te podstawowe:

- **int** – reprezentuje liczby całkowite. To, jak duże liczby może przechowywać zależy od komputera i kompilatora.

    Za pomocą kwalifikatorów można ten typ nieco zmodyfikować:

      _short int_ – służy do przechowywana mniejszych liczb i zajmuje też mniej miejsca w pamięci

      _long int_ – dane tego typu będą zajmowały znacznie więcej pamięci.

      _long long int_ – w tych danych można przechowywać jeszcze większe wartości.

- **char** – pojedynczy bajt, w którym przechowujemy informację o znaku z lokalnego zestawu znaków. W pamięci komputera znaki są reprezentowane za pomocą liczb i dlatego tworząc ten typ równie dobrze możesz zapisywać do niego liczby, ale muszą być odpowiednio małe.

- **float** i **double** – do danych tego typu zapisujemy liczby rzeczywiste. Najczęściej stosuje się nazwę "liczby zmiennoprzecinkowe", ponieważ są zapisywane w pamięci komputera za pomocą tzw. techniki zmiennego przecinka (z ang. _floating point_). **double** (z ang. podwójny) pozwala zapisać liczbę rzeczywistą z dwa razy większą dokładnością niż float. Istnieje również typ **long double**. Różni się on od **double** tylko tym, że można w nim przechowywać większe liczby. Jeśli będziesz kiedyś potrzebował informacji jaką maksymalną wartość może przechowywać dany typ, to znajdują się one w nagłówku **<limits.h>** (dla int są np. dwie stałe `INT_MAX` i `INT_MIN`).

Za pomocą dodatkowych kwalifikatorów **signed** i **unsigned** możemy określić czy chcemy pracować z liczbami dodatnimi i ujemnymi, czy tylko nieujemnymi (ang. _unsigned_ – bez znaku). Jeśli sami nie postawimy tych kwalifikatorów, kompilator domyślnie uzna, że chodzi o _signed_.

Po nazwie typu trzeba podać nazwę naszej zmiennej. Wszystkie zmienne deklarujemy na samym początku funkcji.

    unsigned short int zmienna;

Do powyższej zmiennej `zmienna` można zapisać liczbę całkowitą nieujemną. Jeśli chcesz wiedzieć ile miejsca w konkretnym komputerze zajmuje dany typ, użyj instrukcji `printf("%d\n", sizeof(nazwa_typu));` Zamiast nazwy typu możesz użyć nazwy zadeklarowanej wcześniej zmiennej.

W C nie ma zmiennych do przechowywania warotości logicznych prawda/fałsz. Używamy do tego liczb całkowitych, gdzie 0 to fałsz, a wartość różna od zera to prawda.

Napisy są przechowywane za pomocą tablic znaków oraz możesz tworzyć swoje własne niby-typy, czyli struktury, ale to wyjaśnimy później.

### Ćwiczenie

W tym ćwiczeniu muszą zostać wydrukowana suma zmiennych `a`, `b` i `c`.

Tutorial Code
-------------

#include <stdio.h>

int main(){
  short int a = 1;
  int b = 45;
  int c = 4;
  int suma = 0;

  /*Ponizej umiesc swoj kod*/



  /*ponizej nic nie zmieniaj*/
  printf("Suma zmiennych a, b, i c wynosi %d\n\n", suma);
  printf("Ponizej mozesz zobaczyc ile bajtow\n");
  printf("zajmuja poszczegolne typy danych\n");
  printf("char %d\n", sizeof(char));
  printf("short int %d\n", sizeof(short int));
  printf("int %d\n", sizeof(int));
  printf("long int %d\n", sizeof(long int));
  printf("float %d\n", sizeof(float));
  printf("double %d\n", sizeof(double));

  return 0;
}

Expected Output
---------------
Suma zmiennych a, b, i c wynosi 50

Ponizej mozesz zobaczyc ile bajtow
zajmuja poszczegolne typy danych
char 1
short int 2
int 4
long int 4
float 4
double 8

Solution
--------
