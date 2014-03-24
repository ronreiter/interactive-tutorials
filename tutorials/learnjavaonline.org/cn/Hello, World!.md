Tutorial
--------

Java是一个面向对象的语言 (OOP). 对象在Java中我们把它叫做 "classes" 类.

我们看一下下方Hello world的程序, 用来在屏幕打印 "Hello, World!" .

    public class Main {
        public static void main(String[] args) {
            System.out.println("Hello, World!");
        }
    }

第一行定义了一个叫 Main 的类.

    public class Main {

在Java中,每一行实际运行的代码，都必须包含在类的内部。这行声明了一个名为类。这行声明了一个名为类 `Main`,它是 `public` 公共的, 这意味着其他任何类都可以访问它。这不是现在关心的，所以不用担心。现在，我们只写一个类名叫Main的代码，再以后再谈什么是对象。

请注意，当我们声明一个public类，我们必须使用相同的名称（Main.java文件）的文件中声明它，否则编译时，我们会得到一个错误。

当我们运行网站的示例时，我们没有使用关键字public的原因是我们都是写在一个类里面的。

下一行代码是:

    public static void main(String[] args) {

这是我们的Java程序的入口点。 main方法有这个确切的签名 main，以便能够运行我们的程序。

* `public` 意味着任何人都可以访问它. 
* `static` 意味着你可以不创建实例运行此 `Main` 方法.
* `void` 意味着此方法不返回任何值。
* `main` 方法的名称。

String[] args 运行程序的参数。这是一个字符串数组。我们将在下一课讲，所以如果你不明白这一切现在不用担心了。

    System.out.println("Hello, World!");

* `System` 是一个预先定义的类，Java为我们提供，它拥有一些有用的方法和变量
* `out` 是系统类 `System` 中的静态变量，可以提供打印输出。
* `println` 是出一种方法，可用于打印一行。

Exercise
--------

在控制台打印 "Hello, World!" .

Tutorial Code
-------------

public class Main {

    public static void main(String[] args) {

        System.out.println("Hello, World!");

    }

}

Expected Output
---------------

Hello, World!

Solution
--------
