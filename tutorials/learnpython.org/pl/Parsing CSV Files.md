### Co to jest CSV?
CSV oznacza 'Comma Separated Values' (wartości rozdzielane przecinkami). Format CSV jest najczęściej używanym formatem do importu i eksportu danych z baz danych i arkuszy kalkulacyjnych. Plik CSV jest prostym plikiem tekstowym, który zawiera listę danych. Zazwyczaj używają przecinka (,) jako separatora danych, ale czasami wykorzystują inne znaki, np. średniki lub tabulatory.

Przykład danych CSV:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

### Moduł CSV w Pythonie
Choć Python posiada wbudowaną funkcję open() do pracy z plikami CSV lub innymi zwykłymi plikami tekstowymi, istnieje dedykowany moduł csv, który implementuje klasy do odczytu i zapisu danych w formacie CSV, co znacząco ułatwia pracę z plikami CSV.

### Ważne funkcje modułu CSV

    csv.field_size_limit – zwraca maksymalny rozmiar pola
    csv.get_dialect – uzyskuje dialekt związany z nazwą
    csv.list_dialects – pokazuje wszystkie zarejestrowane dialekty
    csv.reader – odczytuje dane z pliku CSV
    csv.register_dialect - przypisuje dialekt do nazwy
    csv.writer – zapisuje dane do pliku CSV
    csv.unregister_dialect - usuwa dialekt związany z nazwą w rejestrze dialektów
    csv.QUOTE_ALL - Cudzysłowy wszystkie, niezależnie od typu.
    csv.QUOTE_MINIMAL - Cudzysłowy pola zawierające znaki specjalne
    csv.QUOTE_NONNUMERIC - Cudzysłowy wszystkie pola, które nie są liczbami
    csv.QUOTE_NONE – Nie cudzysłowuje niczego w wyjściu

### Jak używać modułu csv?
Najpierw zaimportuj moduł csv do swojego programu w Pythonie.

    import csv

Funkcje writer i reader pozwalają na edycję, modyfikację i transformację danych w pliku CSV.

Jak odczytać plik CSV :-

Aby odczytać dane z plików CSV, używamy funkcji reader, aby wygenerować obiekt reader.

Na przykład:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Tutaj najpierw otwieramy plik CSV w trybie ODCZYTU i nazywamy obiekt pliku jako csvfile. Używamy menedżera kontekstu do otwarcia pliku, aby nie martwić się o zamknięcie pliku. Funkcja csv.reader przyjmuje obiekt pliku jako wejście i zwraca obiekt iterowalny. Zapisujemy ten obiekt iterowalny jako csvreader.

Jak wiemy, csvreader jest obiektem iterowalnym i w związku z tym możemy iterować za pomocą pętli for:

przykład 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Powyższy kod wypisze wszystkie wiersze, które odczytujemy z pliku CSV. Należy zauważyć, że otwieramy plik z trybem 'r', gdy już istnieje.

Co dalej?

csvreader jest obiektem iterowalnym. Dlatego metoda .next() zwraca bieżący wiersz i przesuwa iterator do następnego wiersza.

przykład 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

W przykładzie 1 zobaczyłbyś wszystkie wiersze wypisane na konsoli wraz z nagłówkiem. W przykładzie 2 metoda .next() odczytuje nagłówek w obiekcie fields i przesuwa iterator do następnego wiersza, w związku z czym wszystkie wiersze są wypisywane z wyjątkiem nagłówka.

Jak zapisać w pliku CSV-

Aby zapisać w pliku CSV, moduł csv zapewnia funkcję csv.writer. Aby zapisać dane, najpierw otwieramy plik CSV w trybie ZAPISU ('w'). Obiekt pliku nazywany jest csvfile. Zapisujemy obiekt csv.writer jako csvwriter.

Przykład:
    #deklaruj nagłówek
    fields = ['column1','column2', 'column3']

    #deklaruj wiersze
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

W powyższym przykładzie funkcja writerow() zapisze pojedynczy wiersz, który jest obiektem fields, natomiast metoda writerows() zapisze całą listę wierszy zdefiniowaną powyżej w pliku CSV.

Teraz przejdźmy o krok dalej. Odczytaj zawartość jednego pliku CSV i zapisz do innego pliku CSV.

Przykład:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # przechowuje nagłówki i przesuwa wskaźnik readera
            csvwriter.writerow(header) #zapisuje nagłówki do nowego pliku
            for row in reader:
                csvwriter.writerow(row)

Tutaj otwieramy 'newfilename.csv' w trybie 'W' jako f2 i otwieramy 'mycsvfile.csv' w trybie 'r' jako f1. Korzystamy z funkcji .next(), .reader(),.writer(), .writerow() modułu csv. Używając .next(), przesuwamy wskaźnik readera i korzystając z csvwriter.writerow(), zapisujemy przychodzący wiersz jeden po drugim.

### Klasy DictReader i DictWriter w Pythonie

Poniżej przedstawiono dwie ważne klasy w Pythonie do odczytywania i zapisywania plików CSV.

csv.DictWriter class
csv.DictReader class

Klasy DictReader i DictWriter są dostępne w Pythonie do odczytywania i zapisywania do plików CSV. Chociaż są podobne do funkcji reader i writer, te klasy wykorzystują obiekty słownika do odczytywania i zapisywania do plików CSV.

DictReader:

Tworzy obiekt, który mapuje informacje odczytane do słownika, którego klucze są podane przez parametr fieldnames. Ten parametr jest opcjonalny, ale gdy nie jest określony w pliku, dane z pierwszego wiersza stają się kluczami słownika.

Przykład csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

Przykład:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

Klasa csv.DictWriter działa jak zwykły writer ale mapuje słowniki Pythona na wiersze CSV. Parametr fieldnames to sekwencja kluczy, które identyfikują kolejność, w jakiej wartości w słowniku przekazanym do metody writerow() są zapisywane do pliku CSV. Klasa jest zdefiniowana jako csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Przykład:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Ćwiczenie
--------

W tym ćwiczeniu będziesz pracować z danymi CSV. Twoim zadaniem jest stworzenie programu w Pythonie, który odczytuje dane z pliku CSV i zapisuje je do innego pliku CSV, upewniając się, że do pliku wyjściowego są włączone tylko wiersze, w których wartość w pierwszej kolumnie jest większa niż 50.