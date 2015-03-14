Tutorial
--------

Templates in C++ hilfen uns generische Programmierung zu implementieren.
Die `Swap` Funktion aus dem letzten Turorial ist mächtig genug jede Art von Datentyp zu unterstützen. 

Im unteren Code, kann die `Swap` Funktion so wie sie ist, benutzt werden, um Integer Zahlen zu vertauschen.

    #include <iostream>
    using namespace std;

    template<typename T>
    void Swap(T &a, T &b)
    {
		T temp = a;
		a = b;
		b = temp; 
    }
  
    int main()
    {
        string hello = "Welt!", world = "Hallo, ";
        Swap(world, hello);
        cout << hello << world << endl; 
	
        int a = 5, b = 11;
        Swap(a, b);
        cout << "a:" << a << " b:" << b << endl; 
	    return 0;
    }

### Templates, Klassen und Operatorüberladung

Übung
-----
Die `Swap` Funktion wird auch für Datentypen des Users funktionieren. Um das zu demonstrieren, implementieren wir die C++ Klasse `Point` mit den Koordinaten `x` und `y`. Erstelle 2 Objekte des Typs `Point` und tausche sie. Operatorüberladung für den `=` Operator muss ebenfalls implementiert werden.

Tutorial Code
-------------

    #include <iostream>
    using namespace std;
    
    class Point;
    std::ostream& operator<<(std::ostream& out, const Point& c);
    
    template<typename T>
    void Swap(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp; 
    }
    
    class Point
    {
        // dein code hier
         
        Point& operator=(Point rhs)
        {
            // dein code hier
     
        }
    };
    
    int main() {
    
        Point p1(5,5), p2(100, 100);
        Swap (p1, p2);
      
        cout << p1 << p2 << std::endl;
        return 0;
    }
    
    std::ostream& operator<<(std::ostream& out, const Point& c)
    {
       out<< "x:" << c.x << " ";
       out<< "y:" << c.y << "\n";
       return out;
    }

Erwartete Ausgabe
-----------------

    p1: x:100 y:100
    p2: x:5 y:5

Lösung
--------

    #include <iostream>
    using namespace std;

    class Point;
    std::ostream& operator<<(std::ostream& out, const Point& c);

    template<typename T>
    void Swap(T & a, T & b) //"&" uebergibt Parameter als Referenz 
    {
      T temp = b;
      b = a;
      a = temp;
    }

    class Point {
    public:
        int x, y;

        Point (int c1, int c2) { x = c1; y = c2;}
        Point& operator=(Point rhs) {
            x = rhs.x; y = rhs.y;
            return *this;
        }
    };

    int main()
    {

        Point p1(5,5), p2 (100,100);
        Swap (p1, p2);
        cout << "p1: " << p1 << "p2: " << p2 << endl;
        return 0;
    }

    std::ostream& operator<<(std::ostream& out, const Point& c)
    {
      out<< "x:" << c.x << " ";
      out<< "y:" << c.y << "\n";
      return out;
    }
