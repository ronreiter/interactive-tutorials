Tutorial
--------

### String vertauschen

Versuche die Strings mit Hilfe von `templates` zu vertauschen (siehe [documentation](https://en.wikipedia.org/wiki/Generic_programming#Templates_in_C.2B.2B)). 

### Unser erstes Programm


Übung
-----

Verändere das Programm unten so, dass es "Welt!, Hallo" ausgibt.

Tutorial Code
-------------

    #include <iostream>
    using namespace std;
    
    template<typename T>
    void Swap(T & a, T & b)  {
    // dein Code hier
    
    }

    int main() {
        string hello = "Welt!", 
        world = "Hallo, ";
        Swap( world, hello );
        cout << hello << world << endl; // Ausgabe ist "Hallo, Welt!"
  
        return 0;
    }

Erwartete Ausgabe
-----------------

    Hallo, Welt!

Lösung
------

    #include <iostream>
    using namespace std;
    template<typename T>
    void Swap(T & a, T & b) {
       T temp = b;
       b = a;
       a = temp;
    }


    int main() {
        string hello = "Welt!", 
        world = "Hallo, ";
        Swap( world, hello );
        cout << hello << world << endl; // Ausgabe ist "Hallo, Welt!"
  
        return 0;
    }
