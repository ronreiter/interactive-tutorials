Tutorial
--------

Język C jest językiem ogólnego stosowania, który ściśle odnosi się do sposobu w jaki pracują komputery. Bierze się to stąd, że był on pierwotnie pomyślany jako język do budowy systemów operacyjnych. Dokładne zrozumienie, w jaki sposób działa pamięć komputera jest bardzo ważnym aspektem nauki języka C. Jest on często postrzegany jako trudny w nauce, ale tak naprawdę jest bardzo prostym i potężnym językiem.

Z programami napisanymi w języku C masz styczność prawie każdego dnia. Są to np. systemy Windows, Linux, interpreter Pythona, Git i wiele innych.

C jest językiem kompilowanym, czyli przed uruchomieniem musi przejść proces kompilacji oraz ewentualnej konsolidacji. Kompilacja polega na przetworzeniu pliku z napisanym przez ciebie kodem w plik wykonywalny, który możesz uruchomić. Kompilacji dokonuje program zwany kompilatorem (np. GCC lub Visual Studio). Przed stworzeniem pliku wykonywalnego kompilator sprawdza, czy w twoim programie nie ma błędów składniowych, np brakującego średnika lub nawiasu. Nie jest natomiast sprawdzany sens zapisanych instrukcji. Program może się również skladać z kilku plików i wtedy każdy plik kompilujemy oddzielnie do typu `object` (*.o) i następnie łączymy za pomocą linkera (wspomniane wcześniej kompilatory są de facto również linkerami). 

Jeśli się w tym wszystkim pogubiłeś, to na razie nic się nie martw. W tym tutorialu masz dostęp do kompilatora on-line. Wystarczy, że umieścisz swój kod w lewym dolnym oknie i klikniesz `run`. Kompilacja i uruchomienie programu przebiegnie automatycznie.

### Nasz pierwszy program

Każdy program napisany w języku C korzysta z bibliotek, czyli plików zawierających niezbędne funkcje (małe podprogramy). Aby wyświetlić na ekranie tekst potrzebna jest funkcja **printf**, która znajduje się w bibliotece stdio.h. Aby dołączyć tą bibliotekę na samym początku programu umieść komendę

    #include <stdio.h>

W drugiej części naszego programu znajduje się funkcja main (ang. główna), w której zapisane jest to, co robi nasz program.

    int main(){
      tutaj umieszczamy polecenia dla komputera
    }

Słowo **int** oznacza, że main zwraca liczbę całkowitą. Funkcja główna zwraca ten rezultat systemowi operacyjnemu. Zgodnie z powszechnie przyjętą wśród programistów zasadą program powinien zwracać 0, gdy zakończył się powodzeniem. Jeśli napotkał błąd, to powinien zwrócić liczbę różną od zera. Już niedługo będziesz mógł tworzyć własne funkcje, które będą zwracały również liczby rzeczywiste, znaki, wskaźniki a nawet... nic.

W tym kursie również przyjmiemy, że program zwraca zero, gdy wszystko poszło dobrze

    return 0;

Pamiętaj, że każda komenda musi się kończyć średnikiem. Jest to informacja dla kompilatora, że tu kończy się pojedyńcza instrukcja.
Ta zasada nie dotyczy tylko instrukcji zaczynających się znakiem **#**, ale o nich porozmawiamy później. W końcu musimy wywołać komendę `printf`, aby wypisać tekst na ekran.

Być może zwróciłeś uwagę na tekst ogranicznony z dwóch stron znakami /* i */ W ten sposób oznacza się komentarze. Komentarze są przez kompilator całkowicie ignorowane. Nie jest to bowiem informacja przeznaczona dla niego ale dla programisty. Gorąco zachęcam cię do umieszczania komentarzy we wszystkich bardziej skomplikowanych miejscach programu. Zapewniam cię, że po niecałym tygodniu od napisania programu zapomnisz o co ci właściwie chodziło w tej linijce. Dobrze napisany komentarz z pewnością się przyda w takiej sytuacji i pozwoli szybciej zmodyfikować program.

**Polskie ą, ę, ł...**

W kodzie programu nie możesz umieszczać żadnych polskich znaków diakrytycznych. Wyjątek stanowią jedynie komentarze. Niestety nasz interaktywny kompilator ze względów czysto technicznych nawet tam ich nie akceptuje. Jeśli zobaczysz komunikat *There was an unknown error!*, to najprawdopodobniej przez pomyłkę wstawiłeś gdzieś np. 'ę'. 

### Ćwiczenie

Zmień kod programu tak, aby na ekranie zostało wypisany tekst 'Witaj Swiecie'

Tutorial Code
-------------

#include <stdio.h>

/*oto przykladowy
komentarz w programie*/
/*Uwaga! komentarzy nie mozna zagniezdzac*/

int main(){
  printf("Zegnaj Swiecie");
  return 0;
}

Expected Output
---------------

Witaj Swiecie

Solution
--------
