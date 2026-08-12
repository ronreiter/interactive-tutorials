Tutorial
--------

Tablice to bardzo sympatyczne narzędzie. Mianowicie w tablicy możemy przechowywać wiele wartości jednego typu. Aby zadeklarować tablicę musisz podać typ danych jakie ma przechowywać, jej nazwę oraz rozmiar podany w nawiasach kwadratowych.

    double Tablica[10]; /*oto tablica 10 zmiennych*/

W C i większości innych języków programowania pierwszy el ment w tablicy ma indeks (numer porządkowy) równy 0, a np. dziesiąty element – indeks 9.

    double Tablica[10];
    double a = 99.9;

    Tablica[4] = 43.33; /*tym sposobem zapisujemy dane do tablicy*/
    a = Tablica[4]; /*Podobnie przypisujemy ich wartosci innym zmiennym*/
    printf("a = %f\n", a); /*a i Tablica[4] beda mialy te same wartosci*/
    printf("Tablica[%d] = %f\n", 4 , Tablica[4]);

Liczba określająca wielkość tablicy musi być znana już w trakcie kompilacji programu. W przeciwnym wypadku kompilator odmówi dalszej współpracy. W przyszłości poznasz sposoby tworzenia tablic dynamicznych, czyli takich, które tworzymy w trakcie wykonywania programu. Może to być wyrażenie typu `4*6/3`.

Istnieje również sposób tworzenia tablicy bez podawania jej rozmiaru. W chwili deklarowania tablicy musimy ją jednocześnie zainicjalizować pewnymi wartościami.

    int T[] = {1, 4, 4, 0, 5}; /*Tutaj kompilator sam oblicza wielkosc tablicy na 5*/
    int T2[3*5] = {1, 4, 5, 5}; /*A tu mozesz potem bezpiecznie wpisac liczbe
                                  do 13. elementu tablicy, bo ma rozmiar 15*/
    /* int T3[3] = {1, 2, 3, 4, 5}; ten zapis jest niepoprawny, ale do 'przelkniecia' dla kompilatora
                                    Przez to 'schizofreniczne' okreslenie rozmiaru najprawdopodobniej otrzymasz ostrzezenia*/



W pamięci komputera komórki przechowujące zmienne z danej tablicy "leżą" jedna za drugą, "gęsiego". Dzięki takiej organizacji dostęp do danych jest bardzo szybki. Dosyć często się zdarza, że zadeklarowaliśmy tablicę np. 100 obiektów, a potem próbujemy dostać się do elemntu o indeksie 100 (przypominam, że ostatni element ma indeks 99).

Kompilator nas tutaj w żaden sposób nie ostrzeże (on tylko sprawdza poprawność składni). W efekcie wypiszemy lub, co gorsza, zniszczymy zawartość komórki pamięci, która znajdowała się za ostatnią komórką tablicy. Taki błąd może się objawić natychmiaśt, bo ta konkretna komórka nie należy do obszaru pamięci operacyjnej przydzielonej naszemu programowi. System operacyjny nie pozwoli na takie manewry i brutalnie zamknie nasz program. Gorzej jeśli zniszczymy tym sposobem jakąś zmienną w naszym programie. W takim przypadku błąd może się objawić w zupełnie niespodziewanym miejscu.

W ostatnim przykładzie inicjalizacji tablic wspomniałem o ostrzeżeniach, których udzieli ci kompilator. Oznacza to, że program się skompilował, ale kompilator ma do niego pewne wątpliwości. W 99,9% procentach przypadków są one uzasadnione, a program w trakcie wykonywania (czasami któregoś z kolei testu) jest pacyfikowany przez system operacyjny. W naszym interaktywnym oknie program jest od razu uruchamiany po kompilacji i nie masz szansy zobaczyć ostrzeżeń. Kiedy jednak skończysz kurs i będziesz pracował na własnym komputerze, będziesz je widywał częściej niż byś chciał.

### Ćwiczenie

* Poniższy program nie kompiluje się ponieważ brakuje tablicy `Oceny`.
* W programie brakuje jednej z ocen. Nadaj jej taką wartość, aby średnia wyniosła 85.

Tutorial Code
-------------

    #include <stdio.h>
    
    int main() {
      /* DO_ROBOTY: brakuje tu deklaracji
         zmiennej Oceny */
      int srednia;

      Oceny[0] = 80;
      /* DO_ROBOTY: Wpisz brakujaca ocene tak,
         by srednia wynosila 85 */
      Oceny[2] = 90;

      srednia = (Oceny[0] + Oceny[1] + Oceny[2]) / 3.0;
      printf("Srednia z 3 ocen wynosi: %d", srednia);

      return 0;
    }

Expected Output
---------------
    Srednia z 3 ocen wynosi: 85

Solution
--------
