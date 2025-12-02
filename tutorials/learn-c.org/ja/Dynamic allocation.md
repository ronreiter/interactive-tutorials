チュートリアル
-------------

メモリの動的割り当てはC言語において非常に重要なテーマです。これにより、連結リストなどの複雑なデータ構造を構築できます。メモリを動的に割り当てることで、プログラム作成時にデータのサイズを事前に把握することなく、データを保存できるようになります。

メモリチャンクを動的に割り当てるには、新しく割り当てられたメモリの位置を格納するためのポインタを用意しておく必要があります。同じポインタを使って割り当てられたメモリにアクセスでき、使い終わったメモリもそのポインタを使って解放できます。

person構造体を動的に割り当てるとします。personは次のように定義されています。

    typedef struct {
        char * name;
        int age;
    } person;

`myperson` 引数に新しい人物を割り当てるには、次の構文を使用します。

    person * myperson = (person *) malloc(sizeof(person));

これは、person構造体を保持するのに十分なメモリを動的に割り当て、その新しく割り当てられたデータへの`person`型のポインタを返すことをコンパイラに指示します。メモリ割り当て関数`malloc()`は、指定されたメモリ空間を予約します。この場合、これは`person`のバイト単位のサイズです。

`malloc()` の呼び出しの前に `(person *)` と書くのは、`malloc()` が「void ポインタ」、つまり型を持たないポインタを返すためです。`(person *)` を前に書くことは *型キャスト* と呼ばれ、`malloc()` から返されるポインタの型を `person` に変更します。ただし、型キャストしない場合、C 言語は返されるポインタの型を、代入先のポインタ（この場合は `myperson`）の型に暗黙的に変換するため、必ずしもこのように書く必要はありません。

`sizeof` は実際の関数ではないことに注意してください。コンパイラがこれを解釈し、 person 構造体の実際のメモリ サイズに変換するためです。

person 構造体のメンバーにアクセスするには、`->` 表記を使用できます。

    myperson->name = "John";
    myperson->age = 27;

動的に割り当てられた構造体の使用が終わったら、`free` を使用して解放できます。

    free(myperson);

free は `myperson` 変数自体を削除するのではなく、その変数が指しているデータを解放するだけであることに注意してください。`myperson` 変数はメモリ内のどこかを指したままになりますが、`free(myperson)` を呼び出した後は、その領域にアクセスできなくなります。新しいデータを割り当てるまでは、そのポインタを再び使用してはいけません。

演習
----

`malloc` を使用してポイント構造体を動的に割り当てます。

チュートリアル コード
-------------------

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct {
      int x;
      int y;
    } point;

    int main() {
      point * mypoint = NULL;

      /* ここで、mypoint が指す新しいポイント構造体を
         動的に割り当てます */

      mypoint->x = 10;
      mypoint->y =5 ;
      printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

      free(mypoint);
      return 0;
    }

期待している出力
---------------

    mypoint coordinates: 10, 5

解答
----

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct {
      int x;
      int y;
    } point;

    int main() {
      point * mypoint;

      mypoint = (point *)malloc(sizeof(point));

      mypoint->x = 10;
      mypoint->y =5 ;
      printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

      free(mypoint);
      return 0;
    }
