Tutorial
--------

### Data types

C++ provides a rich set of built-in as well as user defined data types. Following table lists down seven basic C++ data types:

#### Built-in
* Boolean - `boolean` - either `true` or `false`
* Integers - whole numbers which can be both positive and negative. Defined using `char`, `int`.
* Floating point numbers - real numbers (numbers with fractions). Defined using `float` and `double`.
* Valueless	 using the `void` keyword
* Wide character using the `wchar_t` keyword

The different types of variables define their bounds. A `char` can range only from -128 to 127, whereas a `long` can range from -2,147,483,648 to 2,147,483,647.

#### Type Modifiers

The above types can be modified using the following type modifiers:
* `signed` and `unsigned`
* `short` and `long`

#### User defined
* Structures - `struct` will be explained later, in the Structures section.
* Classes - `class` will be covered later, in the Classes section 

C++ allows an array of characters to define strings. It also provides an extensive `string` library for manipulating strings and will be explained in the Strings section.

#### Typdefs
Typedefs allow for creating new names (think of them as aliases) for existing types. Following is the simple syntax to define a new type using typedef:

    typedef int counter;
    counter tick_c = 100;  // tick_c is a valid integer variable

#### Enumerated types

To create an enumeration requires the use of the keyword enum. The general form of an enumeration type is:

    enum enum-name { list of names } var-list;
Above, the enum-name is the enumeration's type name. The list of names is comma separated. 

For example, the following code defines an enumeration of colors called colors and the variable `a_colour` of type color. Finally, `a_colour` is assigned the value "green".

    enum colour {red, green, blue} a_colour, another_colour;
    a_colour = green;  // a_colour will be assigned value of '1'

### Defining variables

For numbers, we will usually use the type `int`, which an integer in the size of a "word" the default number size of the machine which your program is
compiled on. On most computers today, it is a 32-bit number, which means the number can range from -2,147,483,648 to 2,147,483,647 (same as `long`).

To define the variables `foo` and `bar`, we need to use the following syntax:

    int foo;
    int bar = 1;

The variable `foo` can be used, but since we did not initialize it, we don't know what's in it. The variable `bar` contains the number 1.

Now, we can do some math. Assuming `a`, `b`, `c`, `d`, and `e` are variables, we can simply use plus, minus and multiplication operators
in the following notation, and assign a new value to `a`:

    int a = 0,b = 1,c = 2,d = 3, e = 4;
    a = b - c + d * e;
    cout << a << endl; // will print 1-2+3*4 = 11

Exercise
--------

In the next exercise, you will need to create a program which prints out the sum of the numbers `a`, `b`, and `c`.

Tutorial Code
-------------

    #include <iostream>
    using namespace std;

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      double sum;

      /* Your code goes here */

      cout << "The sum of a, b, and c is", sum << endl;
      return 0;
    }

Expected Output
---------------
    The sum of a, b, and c is 12.750000.

Solution
--------
    #include <iostream>
    using namespace std;

    int main() {
      int a = 3;
      float b = 4.5;
      double c = 5.25;
      double sum;

      sum = a + b + c;

      cout << "The sum of a, b, and c is", sum << endl;
      return 0;
    }
