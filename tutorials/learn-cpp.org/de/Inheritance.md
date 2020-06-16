Tutorial
--------

Erweitern wir die Klasse `Point` des letzten Tutorials um __Komplexe__ Zahlen halten zu können. Die `reellen` und `imaginären` Zahlen müssen als `private integer` Referenzen definiert werden, um als Koordinaten des `Point` Objektes zu dienen.

    #include <iostream>
    using namespace std;
    
    class Point;
    std::ostream& operator<<(std::ostream& out, const Point& c);
    
    template<typename T>
    void Swap(T &a, T &b) { T temp = a; a = b; b = temp; }
    
    class Point {
    public:
        int x, y;
    
        Point (int c1, int c2) { x = c1; y = c2;}
        Point& operator=(Point rhs) {
            x = rhs.x; y = rhs.y;
            return *this;
        }
    };
    
    class Complex : public Point {
      private: 
        int &real, &imag;
      public: 
        Complex(int r, int i) : Point (r, i), real (x), imag (y) 
        { cout << "Forming..." << *this; }
        
    };
    
    
    int main()
    {
    
        Complex c1(15, 15), c2 (100, 100); 
        return 0;
    }
    
    std::ostream& operator<<(std::ostream& out, const Point& c)
    {
      out<< "x:" << c.x << " ";
      out<< "y:" << c.y << "\n";
      return out;
    }

### Wir alle brauchen Freunde

Übung
-----
Definiere 2 `Complex` Objekte. Verwende die `Swap` Funktion um die `Complex` Objekte als `Point` Typen zu vertauschen.
Lösche das Code Fenster und nutze die Gelegenheit um alles noch einmal selbst zu schreiben.

Gib die vertauschten Objekte als `Point` Objekte aus. Gebe sie außerdem als `Complex` Objekte aus.

Tutorial Code
-------------

    #include <iostream>
    using namespace std;
    
    class Point;
    class Complex;
    std::ostream& operator<<(std::ostream& out, const Point& c);
    
    int main()
    {
        Complex c1(15, 15), c2 (100, 100);
        return 0;
    }

Erwartete Ausgabe
-----------------

    Forming...x (real): 15 15 y (imag): 30 30
    Forming...x (real): 100 100 y (imag): 200 200
    
    c1: (Point) x:100 y:200
    c2: x:15 y:30
    
    c1: x (real): 100 100 y (imag): 200 100
    c2: x (real): 15 15 y (imag): 30 30
    
Lösung
------

    #include <iostream>
    using namespace std;

    // wichtige Deklaration, die vorhanden sein muss
    class Point;
    std::ostream& operator<<(std::ostream& out, const Point& c);
    
    class Complex;
    std::ostream& operator<<(std::ostream& out, const Complex& c)
    {
      // Schreibe das Objekt in den Stream
    
    }
    
    int main()
    {
        Complex c1(15, 30), c2 (100, 200);
        Point& p_c1 = c1; Point& p_c2 = c2;
        
        Swap (p_c1, p_c2);  // vertausche die Complex Objekte als Point Objekte
        
        cout << "c1: (Point)" << p_c1 << "c2: " << p_c2 << endl;	    
        cout << "c1: " << c1 << "c2: " << c2 << endl;
        
        return 0;
    }
    
