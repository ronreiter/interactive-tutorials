Tutorial
--------

### 決断を下す

人生において、私たちは皆、決断を下さなければなりません。決断を下すために、私たちは選択肢を検討し、計画も練り上げます。

以下は、C 言語に見られる『決断を下す』構造の一般的な形式です。

    int target = 10;
    if (target == 10) {
        printf("Target is equal to 10");
    }


### `if`文

`if` 文を使うと、式が `true` か `false` かを確認し、結果に応じて異なるコードを実行できます。

2つの変数が等しいかどうかを評価するには、最初の例のように `==` 演算子を使用します。

不等号演算子も式の評価に使用できます。例:

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.");
    }

    if (foo > bar) {
        printf("foo is greater than bar.");
    }

式が `false` と評価された場合にコードを実行するには、 `else` キーワードを使用できます。

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.");
    } else {
        printf("foo is greater than bar.");
    }

場合によっては、2つ以上の結果から選択する必要があります。このような場合は、複数の `if` `else` 文を「連結」することができます。

    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.");
    } else if (foo == bar) {
        printf("foo is equal to bar.");
    } else {
        printf("foo is greater than bar.");
    }

必要に応じて、`if` `else` ステートメントをネストすることもできます。

    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanuts_in_jar > 80) {
        if (peanuts_eaten < max_peanut_limit) {
            printf("Take as many peanuts as you want!\n");
        }
    } else {
        if (peanuts_eaten > peanuts_in_jar) {
            printf("You can't have anymore peanuts!\n");
        }
        else {
            printf("Alright, just one more peanut.\n");
        }
    }


論理演算子を使用して2つ以上の式をまとめて評価することで、『2つの式が両方とも「true」と評価されるか』『または少なくともどちらか一方が「true」と評価されるか』を確認できます。2つの式が両方とも「true」と評価されるかどうかを確認するには、AND演算子「&&」を使用します。少なくとも一方の式が「true」と評価されるかどうかを確認するには、OR演算子「||」をを使用します。

    int foo = 1;
    int bar = 2;
    int moo = 3;

    if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is larger than bar.");
    }

    if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo is larger than bar.");
    }

The NOT operator `!` can also be used likewise:

NOT 演算子 `!` も同様に使用できます。

    int target = 9;
    if (target != 10) {
        printf("Target is not equal to 10");
    }


Exercise
--------

この演習では、`guessNumber` 関数ステートメント内に、数値 `guess` が 555 に等しいかどうかを確認する `if` ステートメントを作成する必要があります。等しい場合、関数は `printf` を使用して「正解です。お察しの通りです！」と出力する必要があります。`guess` が 555 未満の場合、関数は `printf` を使用して「あなたの推測は低すぎます。」と出力する必要があります。`guess` が 555 より大きい場合、関数は `printf` を使用して「あなたの推測は高すぎます。」と出力する必要があります。

* **重要**: printf 文字列の最後に改行文字 `\n` を追加することを忘れないでください。

Tutorial Code
-------------

    #include <stdio.h>

    void guessNumber(int guess) {
        // TODO: ここにコードを記述してください
    }

    int main() {
        guessNumber(500);
        guessNumber(600);
        guessNumber(555);
    }

Expected Output
---------------

    Your guess is too low.
    Your guess is too high.
    Correct. You guessed it!

Solution
----

    #include <stdio.h>

    void guessNumber(int guess) {
        // TODO: ここにコードを記述してください
        if (guess < 555) {
            printf("Your guess is too low.\n");
        } else if (guess > 555) {
            printf("Your guess is too high.\n");
        } else {
            printf("Correct. You guessed it!\n");
        }
    }

    int main() {
        guessNumber(500);
        guessNumber(600);
        guessNumber(555);
    }
