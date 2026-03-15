Tutorial
--------

Cの共用体はCの構造体と基本的に同じですが、複数の変数（それぞれが別々のメモリ領域に割り当てられる）を格納する代わりに、共用体では同じ一つの変数に、複数の名前を付けることができます。それにより、その変数に割り当てられたメモリ領域を、名前ごとに異なる型として扱うことができます（共用体のサイズは、最大の型のサイズに、コンパイラが決定するパディングを加えたものになります）。

したがって、変数に割り当てられたメモリをさまざまな方法で読み取りたい場合、たとえば整数を入れた 4 バイトのメモリ領域を 1 バイトずつに分けて読み取りたい場合、次のようにすれば可能です。

    union intParts {
      int theInt;
      char bytes[sizeof(int)];
    };

ポインタをキャストしたりポインタ演算を使用したりせずに、各バイトを個別に確認できるようになります。

    union intParts parts;
    parts.theInt = 5968145; // 任意の数 > 255 (1 byte)
  
    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
        parts.theInt, parts.bytes[0], parts.bytes[1], parts.bytes[2], parts.bytes[3]);
    
    // vs
    
    int theInt = parts.theInt;
    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
        theInt, *((char*)&theInt+0), *((char*)&theInt+1), *((char*)&theInt+2), *((char*)&theInt+3));
  
    // あるいは配列構文を使ってもよい……その方が、少しだけわかりやすくなるかも
  
    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
        theInt, ((char*)&theInt)[0], ((char*)&theInt)[1], ((char*)&theInt)[2], ((char*)&theInt)[3]);

これを構造体と組み合わせることで、「タグ付き」共用体を作成し、複数の異なる型を1つずつ格納できるようになります。

例えば、「数」の構造体が必要だけれど、次のようにはしたくないとします。

    struct operator {
        int intNum;
        float floatNum;
        int type;
        double doubleNum;
    };

なぜなら、プログラムには変数が多数含まれており、そのすべての変数に必要なメモリは、ちょっとばかり多すぎるから。で、そういうことなら、次のような構造体が使えるかもしれません。

    struct operator {
        int type;
        union {
          int intNum;
          float floatNum;
          double doubleNum;
        } types;
    };

この場合、構造体のサイズは int `type` のサイズ + 共用体内の最大の型（double）のサイズになります。ここでは8バイトか16バイトしか節約できませんが、このコンセプトを同様の構造体に適用することはできます。

使ってみる:

    operator op;
    op.type = 0; // この0は「数」の型がintであること示します。本来は、列挙型またはマクロ定数を使って、0がintであることを、わかりやすくするべきです。
    op.types.intNum = 352;
  
また、ユニオンに名前を付けない場合、そのメンバーは構造体から直接アクセスされます。

    struct operator {
        int type;
        union {
            int intNum;
            float floatNum;
            double doubleNum;
        }; // no name!
    };
  
    operator op;
    op.type = 0; // int
    // intNum は共用体の一部ですが、名前が付いていないため、構造体自体から直接アクセスします。
    op.intNum = 352;

もう 1 つの、おそらくより便利な機能は、常に同じ型の複数の変数があり、名前 (読みやすさのため) とインデックス (反復処理を容易にするため) の両方を使用できるようにしたい場合です。その場合は、次のようにすることができます。

    union Coins {
        struct {
            int quarter;
            int dime;
            int nickel;
            int penny;
        }; // 匿名の構造体は匿名の共用体と同じように動作し、メンバーには外側のコンテナから直接アクセスします。
        int coins[4];
    };

この例では、アメリカ合衆国で一般的に使用される4種類のコインを含む構造体があることがわかります。

union によって変数が同じメモリを共有するため、coins 配列は構造体内の各 int と（順番に）一致します。

    union Coins change;
    for(int i = 0; i < sizeof(change) / sizeof(int); ++i)
    {
        scanf("%i", change.coins + i); // これはよくないコードです！ 入力値が常に正当とは限りません！
    }
    printf("There are %i quarters, %i dimes, %i nickels, and %i pennies\n",
        change.quarter, change.dime, change.nickel, change.penny);


Exercise
--------

21 個の文字と 6 個の整数 (21 / 4 == 5 なので 6 個ですが、5 * 4 == 20 なので、この演習ではあと 1 個必要です) の配列を格納する共用体を作成し、整数を 6 つの指定された値に設定してから、文字配列を一連の文字と文字列の両方として出力します。

Tutorial Code
-------------

    #include <stdio.h>
  
    /* ここで共用体を定義します */
  
    int main() {
    
        // このような初期化リストは、共用体/構造体の最初のメンバーに割り当てられます。
        // ここには 6 つの int があるので...
        <union declaration> intCharacters = {{1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0}};
      
        /* テストコード */
        printf("[");
        // 1バイトは終了の0用であり、ループの最後は出力しないため、18までしか進みません。
        for(int i = 0; i < 19; ++i)
            printf("%c, ", intCharacters.chars[i]);
        printf("%c]\n", intCharacters.chars[19]);
    
        printf("%s\n", intCharacters.chars);
    }

Expected Output
---------------

    [I,  , u, n, d, e, r, s, t, a, n, d,  , U, n, i, o, n, s, !]
    I understand Unions!

Solution
----

    #include <stdio.h>
  
    union hiddenMessage {
        int  ints[6];
        char chars[21];
    };
  
    int main() {
        union hiddenMessage intCharacters = {{1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0}};
    
        printf("[");
        // 1バイトは終了の0用であり、ループの最後は出力しないため、18までしか進みません。
        for(int i = 0; i < 19; ++i)
            printf("%c, ", intCharacters.chars[i]);
        printf("%c]\n", intCharacters.chars[19]);
        printf("%s\n", intCharacters.chars);
    }
