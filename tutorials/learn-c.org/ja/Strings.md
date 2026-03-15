Tutorial
--------

### 文字列の定義

C言語における文字列は、実際には文字の配列です。C言語におけるポインタの使用は高度なテーマであり、後ほど詳しく説明しますが、ここでは文字配列へのポインタを使用して、単純な文字列を定義します。その方法は以下のとおりです。

    char * name = "John Smith";

このメソッドは、読み取り専用の文字列を作成します。
操作可能な文字列を定義したい場合は、ローカル文字配列として定義する必要があります。

    char name[] = "John Smith";

この表記法は、配列変数を割り当てて操作できるようにするという点で異なります。空の括弧表記 `[]` は、コンパイラに配列のサイズを自動的に計算するように指示します。これは実際には、明示的に割り当てて文字列の長さに1を加算するのと同じです。

    char name[] = "John Smith";
    /* is the same as */
    char name[11] = "John Smith";

文字列「John Smith」の長さはちょうど10文字ですが、1文字追加する必要があるのは、文字列の終端を示すためです。
文字列の終端を示す特殊文字（0に等しい）です。文字列の終端を示すのは、プログラムが文字列の長さを把握していないためです。
コードから判断して、コンパイラのみが文字列の長さを把握します。

### printfによる文字列のフォーマット

次のように、`printf` コマンドを使用して文字列を他の文字列と一緒にフォーマットすることができます。

    char * name = "John Smith";
    int age = 27;

    /* 'John Smith は 27 歳です。' と出力します。 */
    printf("%s is %d years old.\n", name, age);

文字列を印刷するとき、次の `printf` ステートメントが新しい行に印刷されるように、改行文字 (`\n`) を追加する必要があることに注意してください。

### 文字列の長さ

関数 'strlen' は、引数として渡す必要のある文字列の長さを返します。

    char * name = "Nikhil";
    printf("%d\n",strlen(name));        

### 文字列の比較

関数 `strncmp` は2つの文字列を比較し、等しい場合は数値 0 を、異なる場合は異なる数値を返します。
引数は、比較する2つの文字列と比較する文字列の最大長です。この関数には安全でないバージョンである `strcmp` も存在しますが、使用は推奨されません。例:

    char * name = "John";

    if (strncmp(name, "John", 4) == 0) {
        printf("Hello, John!\n");
    } else {
        printf("You are not John. Go away.\n");
    }

### 文字列の連結

関数 'strncat' は、src 文字列の最初の n 文字を destination 文字列に追加します。ここで n は min(n,length(src)) です。
渡される引数は、 destination 文字列、source 文字列、および n です。n は追加する最大文字数です。例:

    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);

Exercise
--------

ポインタ表記法を使用して、文字列 `first_name` を値 `John` で定義し、ローカル配列表記法を使用して、文字列 `last_name` を値 `Doe` で定義します。

Tutorial Code
-------------

    #include <stdio.h>
    #include <string.h>
    int main() {
      /* first_name を定義 */
      /* last_name を定義 */
      char name[100];

      last_name[0] = 'B';
      sprintf(name, "%s %s", first_name, last_name);
      if (strncmp(name, "John Boe", 100) == 0) {
          printf("Done!\n");
      }
      name[0]='\0';
      strncat(name,first_name,4);
      strncat(name,last_name,20);
      printf("%s\n",name);
      return 0;
    }


Expected Output
---------------

    Done!
    JohnBoe

Solution
----

    #include <stdio.h>
    #include <string.h>
    int main() {
      char * first_name = "John";
      char last_name[] = "Doe";
      char name[100];

      last_name[0] = 'B';
      sprintf(name, "%s %s", first_name, last_name);
      if (strncmp(name, "John Boe", 100) == 0) {
          printf("Done!\n");
      }
      name[0]='\0';
      strncat(name,first_name,4);
      strncat(name,last_name,20);
      printf("%s\n",name);
      return 0;
    }
