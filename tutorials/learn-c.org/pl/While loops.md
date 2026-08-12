Tutorial
--------

Pętla to taka konstrukcja, która pozwala na wykonywanie tej samej instrukcji, aż zostanie spełniony zadany przez nas warunek. W języku C są dostępne 3 rodzaje pętli: `while`, `do while` oraz `for`. W tej lekcji omówimy pierwszą i drugą.

    while(warunek){
      instrukcje;
    }

Instrukcje zawarte w nawiasach klamrowych są powtarzane tak długo, jak wyrażenie zawarte w nawiasach `()` jest różne od 0.

    #include <stdio.h>

    int main(){
      int i = 0;
      while(i < 20){
        i++;
        printf("%4d", i);
        if(i % 5 == 0)
          putchar('\n');
      }
      return 0;
    }

Program wypisuje na ekran liczby od 1 do 20. Instrukcja `i % 5` oblicza resztę z dzielenia `i` przez 5, natomiast `putchar` wypisuje pojedynczy znak. W tym przypadku jest to znak nowej linii.

Zanim przejdziemy do innych pętli, warto zwrócić uwagę na pewien istotny szczegół. W `while` najpierw jest sprawdzany warunek w pętli, a jeśli ten jest spełniony, to zostają wykonane instrukcje zawarte w pętli. Jeśli przy pierwszym sprawdzeniu warunek będzie fałszywy, to pętla w ogóle się nie wykona.

Pętla `do while` różni się od `while`, tym że warunek jest sprawdzany po pierwszym wykonaniu pętli. Zatem pętla wykona się co najmniej raz.

    do{
      instrukcje;
    }while(warunek);


### Ćwiczenie

Zmień poniższy kod tak, aby wyświetlał tablicę od 1 do 100. W jednym wierszu tabliczki powinno znajdować się 10 liczb (czyli w pierwszej kolumnie będą 1, 11, 21 itd.). Podczas pisania nie zmieniaj instrukcji `printf`.

Tutorial Code
-------------

#include <stdio.h>

int main(){
  int i;
  while(1){
    printf("%4d", i);
    if(i % 1000 == 0)
      putchar('\n');
  }
  return 0;
}

Expected Output
---------------
   1   2   3   4   5   6   7   8   9  10
  11  12  13  14  15  16  17  18  19  20
  21  22  23  24  25  26  27  28  29  30
  31  32  33  34  35  36  37  38  39  40
  41  42  43  44  45  46  47  48  49  50
  51  52  53  54  55  56  57  58  59  60
  61  62  63  64  65  66  67  68  69  70
  71  72  73  74  75  76  77  78  79  80
  81  82  83  84  85  86  87  88  89  90
  91  92  93  94  95  96  97  98  99 100

Solution
--------
