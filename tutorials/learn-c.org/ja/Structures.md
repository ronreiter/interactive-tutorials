Tutorial
--------

C構造体は、内部に複数の名前付き変数を含む特別な大きな変数です。構造体は、構造体とクラスの基本的な基礎です。構造体は以下の目的で使用されます。

* データのシリアライズ
* 1つの引数を通じて関数の引数と出力
* 関連リスト、二分木などのデータ構造

構造体の最も基本的な例は、**点**です。点は、xとyという2つの変数を含む単一のエンティティです。点を定義しましょう。

    struct point {
        int x;
        int y;
    };

次に、新しい点を定義し、使用します。関数`draw`が点を受け取り、画面に点を描くと仮定します。構造体を使用せずに、使用するには、各座標用の2つの引数が必要です。

    /* 10, 5 の位置に点を描く */
    int x = 10;
    int y = 5;
    draw(x, y);

構造体を使用して、点を引数として渡すことができます。

    /* 10, 5 の位置に点を描く */
    struct point p;
    p.x = 10;
    p.y = 5;
    draw(p);

点の変数にアクセスするには、ドット`.`演算子を使用します。

### Typedefs

typedefを使用することで、型の別名を定義できます。これは構造体とポインタを扱う際に便利です。ここで私たちは、点構造体の長い定義をなんとかしたいと考えています。新しい点を定義するたびに、いちいち`struct`キーワードをつけなくても済むように、以下の構文を使用できます。

    typedef struct {
        int x;
        int y;
    } point;

これにより、新しい点を定義する際に、`struct`キーワードが不要になります。

    point p;

構造体は、ポインタを含むことができます。これにより、構造体は文字列を保持したり、他の構造体へのポインタを保持したりすることができます。つまり、これが構造体の本当の力です。例えば、以下の方法で乗り物構造体を定義できます。

    typedef struct {
        char * brand;
        int model;
    } vehicle;

ブランドは文字列を保持したり、他の構造体へのポインタを保持したりすることができます。つまり、これが構造体の本当の力です。例えば、以下の方法で乗り物構造体を定義できます。

    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;

Exercise
--------

新しい構造体を定義してください。構造体の名前は"person"で、`name`という名前の文字列（charへのポインタ）と、`age`という整数を含みます。

Tutorial Code
-------------

    #include <stdio.h>

    /* typedef構文を使用してここでperson構造体を定義します */

    int main() {
        person john;

        /* testing code */
        john.name = "John";
        john.age = 27;
        printf("%s is %d years old.", john.name, john.age);
    }

Expected Output
---------------

    John is 27 years old.

Solution
----

    #include <stdio.h>

    typedef struct {
        char * name;
        int age;
    } person;

    int main() {
        person john;

        /* testing code */
        john.name = "John";
        john.age = 27;
        printf("%s is %d years old.", john.name, john.age);
    }
