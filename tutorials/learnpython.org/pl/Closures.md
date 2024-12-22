A Closure to obiekt funkcyjny, który pamięta wartości ze zewnętrznych zakresów nawet jeśli nie są obecne w pamięci. Przejdźmy do tego krok po kroku.

Po pierwsze, **Zagnieżdżona Funkcja** to funkcja zdefiniowana wewnątrz innej funkcji. Bardzo ważne jest, aby zauważyć, że zagnieżdżone funkcje mają dostęp do zmiennych z zewnętrznego zakresu. Jednak, przynajmniej w Pythonie, są to tylko zmienne tylko do odczytu. Można jednak użyć słowa kluczowego "nonlocal", aby je zmodyfikować.

Na przykład:

    def transmit_to_space(message):
        "To jest funkcja zewnętrzna"
        def data_transmitter():
            "To jest funkcja zagnieżdżona"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Testowa wiadomość"))

To działa dobrze, ponieważ funkcja 'data_transmitter' ma dostęp do 'message'. Aby zademonstrować użycie słowa kluczowego "nonlocal", rozważ to

    def print_msg(number):
        def printer():
            "Tutaj używamy słowa kluczowego nonlocal"
            nonlocal number
            number = 3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

Bez słowa kluczowego nonlocal, wynik byłby "3 9", jednak z jego użyciem otrzymujemy "3 3", czyli wartość zmiennej "number" zostaje zmodyfikowana.

Teraz, jakbyśmy zwrócili obiekt funkcji zamiast wywoływać funkcję zagnieżdżoną wewnątrz. (Pamiętaj, że nawet funkcje są obiektami. (To Python.))

    def transmit_to_space(message):
        "To jest funkcja zewnętrzna"
        def data_transmitter():
            "To jest funkcja zagnieżdżona"
            print(message)
        return data_transmitter

A funkcję wywołujemy w następujący sposób:

      def transmit_to_space(message):
        "To jest funkcja zewnętrzna"
        def data_transmitter():
            "To jest funkcja zagnieżdżona"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("Spal Słońce!")
  	  fun2()

Mimo że wykonanie "transmit_to_space()" zostało zakończone, wiadomość została zachowana. Ta technika, przez którą dane przywiązywane są do jakiegoś kodu nawet po zakończeniu tych innych oryginalnych funkcji, nazywa się zamknięciami (closures) w Pythonie.

ZALETY: Zamknięcia mogą unikać użycia zmiennych globalnych i zapewniać pewną formę ukrywania danych. (Np. Kiedy jest niewiele metod w klasie, użyj zamknięć zamiast tego).

Ponadto, Dekoratory w Pythonie intensywnie wykorzystują zamknięcia.

Ćwiczenie
--------

Utwórz zagnieżdżoną pętlę i zamknięcie w Pythonie, aby stworzyć funkcje do otrzymywania wielu funkcji mnożenia za pomocą zamknięć. To znaczy, za pomocą zamknięć, można stworzyć funkcje takie jak multiply_with_5() lub multiply_with_4().