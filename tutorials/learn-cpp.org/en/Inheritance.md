Tutorial
--------

Let's extend the `class Point` from the previous tutorial to handle __Complex__ numbers. The `real` and `imaginary` numbers will be defined as `private` integer `references` to coordinates of the Point `object`. 

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
    
### We All Need Friends

Exercise
--------
Form two `Complex` objects. Use the `Swap` function to swap the `Complex` objects as Point types. 
Reset the code area, and take the opportunity to write everything from scratch.

Print the swapped objects as `Point` objects. Subsequently, also print the swapped objects as `Complex` objects.

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

Expected Output
---------------

    Forming...x (real): 15 15 y (imag): 30 30
    Forming...x (real): 100 100 y (imag): 200 200
    
    c1: (Point) x:100 y:200
    c2: x:15 y:30
    
    c1: x (real): 100 100 y (imag): 200 100
    c2: x (real): 15 15 y (imag): 30 30
    
Solution
--------

    #include <iostream>
    using namespace std;

    // important declarations that need to be defined
    class Point;
    std::ostream& operator<<(std::ostream& out, const Point& c);
    
    class Complex;
    std::ostream& operator<<(std::ostream& out, const Complex& c)
    {
      // write obj to stream    
    
    }
    
    int main()
    {
        Complex c1(15, 30), c2 (100, 200);
        Point& p_c1 = c1; Point& p_c2 = c2;
        
        Swap (p_c1, p_c2);  // swapping Complex objects as Point objects
        
        cout << "c1: (Point)" << p_c1 << "c2: " << p_c2 << endl;	    
        cout << "c1: " << c1 << "c2: " << c2 << endl;
        
        return 0;
    }
    