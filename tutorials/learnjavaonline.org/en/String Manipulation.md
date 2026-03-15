Tutorial
--------

In Java, strings (`String`) are immutable objects with many built-in utilities that allow inspecting and operating on text. Once a `String` is created, its content cannot change; methods like `substring`, `replace`, `toUpperCase`, etc., return a new `String` object without altering the original. Some common operations:

**Concatenation**: You can use the `+` operator or the `concat` method. Example:

    String a = "Hello";
    String b = "World";
    String c = a + " " + b;              // "Hello World"
    String d = a.concat(" ").concat(b);  // equivalent

**Length and character access**:

  `length()`: returns the number of characters.

  `charAt(int index)`: returns the `char` at the given position (0-based).

    String s = "Java";
    int len = s.length();    // 4
    char ch = s.charAt(2);   // 'v'

**Substring or character search**:

`indexOf(String/char)`, `lastIndexOf(...)`, `contains(...)`, `startsWith(...)`, `endsWith(...)`.

    String s = "abracadabra";
    int pos = s.indexOf("cada");      // 4
    boolean has = s.contains("cad");  // true

**Substring extraction**:

`substring(int beginIndex)` and `substring(int beginIndex, int endIndex)`.

    String s2 = "Hello, Java!";
    String part = s2.substring(7, 11); // "Java"

**Common transformations**:

`toUpperCase()`, `toLowerCase()`, `trim()`, `replace(oldChar, newChar)`, `replaceAll(regex, repl)`.

    String s3 = "  Java  ";
    String t = s3.trim().toUpperCase(); // "JAVA"

**Building and joining strings in loops**:

For multiple concatenations in loops, using `StringBuilder` improves performance, although for basic exercises `+` is acceptable:

    StringBuilder sb = new StringBuilder();
    for (char c : "abc".toCharArray()) {
        sb.append(c).append('-');
    }
    String result = sb.toString(); // "a-b-c-"


These methods are part of the standard Java SE API.

Exercise
--------

Implement a function that reverses a given string and prints it. The reversal must be done "manually" using character access, without directly using `StringBuilder.reverse()`.

- Define a `String input` with a test value.
- Implement a method `reverseString(String s)` that:
- Obtain the length with `length()`.
- Iterate over the string from the end to the beginning using `charAt(int)`.
- Build the reversed string, for example by accumulating in a `StringBuilder` or by concatenating characters in a loop.
- In `main`, print the result of `reverseString(input)`.
- Verify that, when passing `"Hello, Java!"`, the result is `"!avaJ ,olleH"`.

Tutorial Code
-------------

public class Main {
    /**
     * Reverses the string s without using StringBuilder.reverse().
     * @param s Original string.
     * @return Reversed string.
     */
    public static String reverseString(String s) {
        // Use StringBuilder to accumulate without reverse():
        StringBuilder sb = new StringBuilder();
        int n = s.length();
        for (int i = n - 1; i >= 0; i--) {
            sb.append(s.charAt(i));
        }
        return sb.toString();

        // Alternative (less efficient): directly concatenate:
        // String result = "";
        // for (int i = s.length() - 1; i >= 0; i--) {
        //     result += s.charAt(i);
        // }
        // return result;
    }

    public static void main(String[] args) {
        // Basic test:
        String input = "Hello, Java!";
        System.out.println(reverseString(input));

        // Additional tests:
        // System.out.println(reverseString("Java Tutorials"));
    }
}

Expected Output
---------------

!avaJ ,olleH

Solution
--------

public class Main {
    public static String reverseString(String s) {
        StringBuilder sb = new StringBuilder();
        for (int i = s.length() - 1; i >= 0; i--) {
            sb.append(s.charAt(i));
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        String input = "Hello, Java!";
        System.out.println(reverseString(input));
    }
}