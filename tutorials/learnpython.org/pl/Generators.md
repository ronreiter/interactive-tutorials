Generatory są bardzo łatwe do zaimplementowania, ale trochę trudne do zrozumienia.

Generatory są używane do tworzenia iteratorów, ale w inny sposób. Generatory to proste funkcje, które zwracają iterowalny zestaw elementów, po jednym na raz, w specjalny sposób.

Kiedy iteracja nad zestawem elementów zaczyna się za pomocą instrukcji for, generator jest uruchamiany. Gdy kod funkcji generatora osiąga instrukcję "yield", generator przekazuje swoje wykonanie z powrotem do pętli for, zwracając nową wartość z zestawu. Funkcja generatora może generować tyle wartości (możliwe, że nieskończono), ile chce, zwracając każdą z nich po kolei.

Oto prosty przykład funkcji generatora, która zwraca 7 losowych liczb całkowitych:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Ta funkcja sama decyduje, jak generować losowe liczby i wykonuje instrukcje yield po kolei, zatrzymując się pomiędzy nimi, aby przekazać wykonanie z powrotem do głównej pętli for.

Ćwiczenie
--------

Napisz funkcję generatora, która zwraca ciąg Fibonacciego. Oblicza się je za pomocą następującego wzoru: Dwie pierwsze liczby ciągu są zawsze równe 1, a każda kolejna liczba zwracana jest sumą dwóch ostatnich liczb.
Wskazówka: Czy możesz użyć tylko dwóch zmiennych w funkcji generatora? Pamiętaj, że przypisania mogą być wykonywane jednocześnie. Kod

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

jednocześnie zamienia wartości a i b.