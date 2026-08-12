Tutorial
--------

Zdecydowana większość programów z jakimi się spotkasz w przyszłości będzie miała swego rodzaju mechanizm decyzyjny. To, jaka akcja zostanie podjęta zależy od informacji dostarczonych przez użytkownika lub odczytanych z dysku. Chyba najważniejszą instrukcją jest tutaj `if`. Pierwsza część kodu demonstruje przy okazji generowanie liczb losowych.

    #include <stdio.h>
    #include <time.h>
    #include <stdlib.h>

    int main(){
      int X;
      /*funkcja rand zwaraca liczbe pseudolosowa*/
      /*domyslnie podstawa pseudolosowania jest 0*/
      /*Aby przy kazdym uruchomieniu programu trzeba */
      /*ustawic jako zalazek czas komputera.*/
      srand(time(NULL));
      /*operator % zwarca reszte z dzielenia*/
      X = rand() % 3;
      printf("X ma wartosc %d\n", X);

      if(X == 0){
        printf("Nie mozna dzielic przez zero\n");
      }
      else{
        printf("%d / %d = %d\n", 100, X, 100 / X);
        printf("%d \% %d = %d\n", 100, X, 100 % X);
      }
      return 0;
    }

Program ma za zadanie wygenerować liczbę pseudolosową, przez którą zostanie podzielone 100. Tutaj prawdopodobieństwo wylosowania 0 wynosi 1/3. Tymczasem dzielenie przez 0 jest po prostu niezdefniowane matematycznie. Tutaj niestety kompilator tego nie wykryje, bo liczby generowane są na bieżąco. Błąd objawi się dopiero w czasie wykonywania się programu. Dokładnie taki właśnie błąd w 1997 r. unieruchomił amerykański krążownik USS Yorktown. Aby uniknąć czegoś takiego, możemy przed każdym dzieleniem użyć instrukcji `if(){} else{}`. Jeśli warunek znajdujący się w okrągłych nawiasach za if jest prawdziwy, to wykonają się instrukcje umieszczone w następujących zaraz potem nawiasach klamrowych. Uwaga! Jeśli zabraknie nawiasów klamrowych to wykona się jedna linijka kodu tuż pod `if` albo `else`. Można po kolei rozważyć kilka różnych warunków za pomocą `else if`.

    #include <stdio.h>

    int main(){
      int X;
      srand(time(NULL));
      X = rand();
      printf("X ma wartosc %d, zatem\n", X);

      if(X % 2 == 0)
        printf("X to liczba parzysta.\n");
      else if(X % 3 == 0)
        printf("X jest podzielne przez 3\n");
      else{
        printf("X nie jest podzielne przez 3,\n");
        printf("ale nie jest tez podzielne przez 2");
      }

      return 0;
    }

Po znalezieniu pierwszego spełnionego warunku i wykonaniu przewidzianych dla niego instrukcji, dalsze warunki nie są sprawdzane. Wykonywane są instrukcje znajdujące się za klamrą zamykającą blok `else`, o ile taki został napisany. Jeśli potrzebujemy sprawdzić niezależnie kilka warunków, to można to zrobić tak:

    if(jakiś warunek){
     jakieś instrukcje
    }

    if(inny warunek){
      inne instrukcje
    }

    if(kolejny warunek){
      i jeszcze inne komendy
    }

### Ćwiczenie

Do zmiennej X jest zapisywana losowa liczba całkowita z przedziału od 1 do 100. Umieść swój kod pomiędzy liniami komentarza. Do zmiennej Y zapisz 1, jeśli X należy do przedzialu od 1 do 25. Jeśli zaś X należy do przedziału od 26 do 50, to do Y dwójkę. Postąp analogicznie w pozostałych dwóch przypadkach. Nie wolno zmieniać ci wartości zmiennej X.

Tutorial Code
-------------

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int X;
  int Y = 0;
  srand(time(NULL));
  X = (rand() % 101) + 1;

  /*Ponizej umiesc swoj kod*/

  /*Powyzej umiesc swoj kod*/

  if((Y-1) * 25 < X && Y*25 > X)
    printf("Dobra robota!\n");
  else
    printf("Cos poszlo nie tak...\n");

  return 0;
}

Expected Output
---------------

Dobra robota!

Solution
--------
