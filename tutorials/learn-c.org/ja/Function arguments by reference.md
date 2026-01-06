Tutorial
--------

ポインタと関数について理解した上で、関数の引数は値渡し、つまり関数間でコピーされて渡されることをご存知でしょう。
しかし、値そのものではなく、値へのポインタを渡したらどうなるでしょうか？ こうすることで、関数は親関数の変数や構造体をコピーではなく制御できるようになり、元のオブジェクトを直接読み書きできるようになります。

例えば、`addone` という、数値を1ずつ増やす関数を記述するとします。これはうまくいきません。

    void addone(int n) {
        // nは関数スコープ内にのみ存在するローカル変数です
        n++; // そのため、nを増やしても、関数の外からは影響を与えません
    }

    int n;
    printf("Before: %d\n", n);
    addone(n);
    printf("After: %d\n", n);

しかし、これはうまくいきます。

    void addone(int *n) {
        // nは関数スコープ外のメモリアドレスを指すポインタです
        (*n)++; // これにより、nの値が実質的に増加します。
    }

    int n;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);

違いは、`addone` の 2 番目のバージョンは変数 `n` へのポインタを引数として受け取り、それがメモリ内のどこにあるかを知っているため、それを操作できるという点です。

`addone` 関数を呼び出す際は、変数 `n` 自体ではなく、変数への参照を渡す必要があることに注意してください。これは、関数が変数のアドレスを認識し、変数のコピーを受け取らないようにするためです。

### 構造体へのポインタ

点を `x` 方向と `y` 方向の両方に移動する、`move` という関数を作成するとします。2つのポインタを引数として渡す代わりに、点構造体の関数へのポインタを1つだけ渡すことができます。

    void move(point * p) {
        (*p).x++;
        (*p).y++;
    }

構造体を逆参照して内部メンバーにアクセスしたいときのために、簡略化された構文があります。それほど、この操作は構造体データで広く使用されているのです。この関数は、次の構文を使って書き換えることができます。

    void move(point * p) {
        p->x++;
        p->y++;
    }

Exercise
--------

`person`の`age`に1を加算する`birthday`という関数を書いてください。

Tutorial Code
-------------

    #include <stdio.h>

    typedef struct {
      char * name;
      int age;
    } person;

    /* 関数宣言 */

    void birthday(person * p);

    /* ここに関数を記述してください */

    int main() {
      person john;
      john.name = "John";
      john.age = 27;

      printf("%s is %d years old.\n", john.name, john.age);
      birthday(&john);
      printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

      return 0;
    }

Expected Output
---------------

    John is 27 years old.
    Happy birthday! John is now 28 years old.

Solution
----

    #include <stdio.h>

    typedef struct {
      char * name;
      int age;
    } person;

    /* 関数宣言 */
    void birthday(person * p);

    void birthday(person * p){
        p->age++; // This is the same..	
        //(*p).age++; // ... as this would be
    }

    int main() {
      person john;
      john.name = "John";
      john.age = 27;

      printf("%s is %d years old.\n", john.name, john.age);
      birthday(&john);
      printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

      return 0;
    }
