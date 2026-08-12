Tutorial
--------

### Podstawy

W C napisy (nazywane też stałymi napisowymi lub stringami) są tablicami znaków. W tej lekcji będziemy posługiwać się wskaźnikami, ale osobna lekcja na ich temat będzie w zaawansowanym tutorialu. Napisy z użyciem wskaźników będziemy tworzyć w następujący sposób:

    char * Napis = "Ala ma kota."

Takiego napisu już nie można zmieniać. Jest on tylko do odczytu. Aby utworzyć napis, którego treść można zmieniać, trzeba użyć następującej notacji:

    char Napis2[] = "Jan ma kota."

Ten zapis oznacza, że `Napis2` jest tablicą zmiennych typu `char`. Puste nawiasy `[]` oznaczają, że kompilator sam obliczy rozmiar tej tablicy. Ten sam efekt można otrzymać w ten sposób:

    char Napis2[13] = "Jan ma kota."

Zdanie "Jan ma kota." składa się dokładnie z 12 znaków wliczając spacje i kropkę. Dlaczego więc daliśmy tablicy rozmiar 13? Otóż każdy napis w języku C musi się kończyć znakiem specjalnym znakiem zero '\\0'. 

### Formatowanie napisów z funkjcą printf

Na pewno już się zastanawiałeś czemu służy umieszczanie określonych literek poprzedzonych znakiem `%`. Otóż często chcemy wyświetlić nie jakiś wyraz, ale na przykład wartość znajdującą się w danej zmiennej. Zasada posługiwania się `printf` jest taka, że jej pierwszym argumentem jest zawsze napis ograniczony cudzysłowami "". W nim umieszczamy zwykły tekst, ale w miejscu, gdzie chcemy wstawić wartość np. liczby dziesiętnej piszemy `%d`. Zaraz za końcem pierwszego argumentu – napisu umieszczamy te zmienne, których wartość poleciliśmy wypisać.

    int TajemniczaLiczba = 44;
    printf("Tajemnicza liczba jest rowna %d.\n", TajemniczaLiczba);

Umieszczone na końcu stringu `\n` oznacza polecenie przejścia do następnej lini. Mądrzy ludzie nazywają to sekwencją specjalną. Jest jeszcze kilka innych sekwencji specjalnych, ale na razie nie będziemy się nimi zajmować. Jeśli będziesz kiedyś chciał wyświetlić po prostu znaczek `\`, to ukośnik musisz poprzedić drugim ukośnikiem. Unieważni to specjalne znaczenie `\`.

    printf("S\nOS\n");
    /*Wyswietli sie
    S
    OS               */

    printf("S\\nOS\n"); /* wyswietli sie: S\nOS */

Taką samą sztuczkę możesz zastosować z `%`, `'` oraz `"`. Wracając do wypisywania liczb, musisz zasygnalizować funkcji o jaki typ zmiennej ci dokładnie chodzi. I tak dla liczb dziesiętnych całkowitych używamy `%d`, dla zmiennoprzecinkowych `%f`, a dla napisów `%s`.

    char * NazwaZwierzat = "kotow";
    int LiczbaZwierzat = 5;
    float StalaEulera = 2.72;

    printf("Ala ma %d dokladnie %s.\n", LiczbaZwierzat, NazwaZwierzat);
    printf("Stala Eulera wynosi %f\n", StalaEulera);

### Porównywanie napisów

Niestety porównywanie napisów w C nie jest tak proste jak w Pythonie lub C++. Musiałbyś to robić w pętli znaczek po znaczku. Nie jest to trudne do napisania, ale nieco irytujące. Na szczęście już ktoś za nas napisał ten kawałek kodu i umieścił w bibliotece `string.h` jako funkcję `strncmp`. Funkcja ta przyjmuje trzy argumenty. Dwa pierwsze, to porównywane napisy, a trzeci to liczba znaków jaka ma być ze sobą porównana. Pamiętaj, że nie może być ona większa niż długość najkrótszego z porównywanych stringów. Jeśli n początkowych znaków w napisach jest identycznych, to funkcja zwaraca zero. W przeciwnym wypadku dostaniesz 1. Istnieje również mniej bezpieczna wersja funkcji `strcmp`, której nie trzeba podawać liczby znaków. Obie funkcje opierają się na tym, że napis powinien się kończyć znakiem `\0`. Dopóki jednak nie nabierzesz wprawy, radzę używać strncmp, bo ryzyko pomyłki będzie mniejsze.

    if(strncmp(imie, "Jan", 3) == 0){
        printf("Witaj Janie!\n");
    }
    else{
        printf("Nie jestes Janem. Odejdz.\n");
    }

### Ćwiczenie

Używając notacji wskaźnikowej zdefiniuj zmienną `Imie` tak, aby zawierała "Jan". Utwórz także zmienną `Nazwisko` zawierającą "Kowalski", ale do tego wykorzystaj notację tablicową.

Tutorial Code
-------------

#include <stdio.h>
#include <string.h>

int main() {
  /* zdefiniuj imie */

  /* zdefniuj nazwisko */


  /* sprawdzenie poprawnosci */
  if(strcmp(Imie, "Jan") == 0)
    printf("Prawie...\n");
  if(strcmp(Nazwisko, "Kowalski") == 0)
    printf("Doskonale!");

  return 0;
}

Expected Output
---------------

Prawie...
Doskonale!

Solution
--------
