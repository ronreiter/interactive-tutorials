Branie danych wejściowych i wyświetlanie wyników w wymagany sposób odgrywa ważną rolę w interaktywnym kodowaniu. Skupmy się więc na wejściu i wyjściu dla różnych typów danych.

###raw_input()
Jest używane do pobierania danych wejściowych, dopóki nie osiągnięto końca linii. Należy zauważyć, że nie powinno być żadnych spacji. Pobieranie wejścia kończy się wraz ze znakiem nowej linii i jeśli w linii wejściowej znajdują się jakiekolwiek spacje, skutkuje to błędem.

    # Wyświetla dane wejściowe otrzymane ze standardowego wejścia
    astring=raw_input()# podaj hello jako wejście
    print raw_input()

Po pobraniu danych wejściowych możemy je przekonwertować do wymaganego typu danych za pomocą funkcji takich jak int(), float(), str().

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Jest to szczególnie używane do wprowadzania liczb całkowitych. Zaletę input() nad raw_input() można wyjaśnić na przykładzie:

    # podaj 2*2 jako dane wejściowe
    a=input()
    b=raw_input() # zauważ, że int(raw_input()) skutkuje błędem
    print a # wyświetla 4
    print b # wyświetla 2*2

###jak wprowadzić dwa lub więcej typów danych z pojedynczej linii oddzielonych spacjami?
Tutaj korzystamy z funkcji split() oraz map()

    # podaj dwie liczby całkowite w pierwszej linii i więcej niż dwie liczby całkowite w trzeciej linii
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # drukuje pierwsze dwie liczby całkowite z pierwszej linii oraz sumę liczb całkowitych z drugiej linii

###Formatowanie wyjścia
Być może zauważyłeś już, że polecenie print automatycznie wstawia nową linię. Użycie przecinka, jak w powyższym kodzie, drukuje wartości w jednej linii oddzielone spacją. Moduł sys dostarcza różnych funkcji do formatowania wyjścia, ale tutaj uczymy się, jak używać podstawowej wiedzy o formatowaniu do wyświetlania danych w wymagany sposób. Zobaczmy kilka przykładów, aby nauczyć się formatowania wyjścia.

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

Wyjście powinno być samowyjaśniające.

Ćwiczenie
--------

Napisz program, który poprosi użytkownika o podanie imienia, wieku i kraju. Program powinien następnie wydrukować wiadomość, która zawiera te informacje w zdaniu. Program powinien obejmować:

1. Pobranie imienia jako danych wejściowych za pomocą `raw_input()`.
2. Pobranie wieku jako danych wejściowych za pomocą `input()`, i przekonwertowanie go na liczbę całkowitą.
3. Pobranie nazwy kraju jako danych wejściowych za pomocą `raw_input()`.
4. Formatowanie wyjścia w celu wyświetlenia zdania, które zawiera imię, wiek i kraj.

Program powinien demonstrować obsługę danych wejściowych i formatowanie łańcuchów w Pythonie.