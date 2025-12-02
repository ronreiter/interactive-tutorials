チュートリアル
-------------

### イントロダクション

連結リストは、ポインタを用いて実装する動的データ構造の最も優れた、そして最もシンプルな例です。
しかし、連結リストの仕組みを理解するには、ポインタを理解することが重要です。そのため、ポインタのチュートリアルをスキップした場合は、戻ってもう一度学習してください。また、動的メモリ割り当てと構造についても理解しておく必要があります。

基本的に、連結リストは、配列内の任意の位置から必要に応じて拡大または縮小できる配列として機能します。

連結リストには、配列に比べていくつかの利点があります。

1. リストの途中から項目を追加または削除できます。
2. 初期サイズを定義する必要はありません。

しかし、連結リストにはいくつかの欠点もあります。

1. 「ランダム」アクセスが不可能です。配列のn番目の項目に到達するには、まずその項目までのすべての項目を反復処理する必要があります。つまり、リストの先頭から始めて、目的の項目に到達するまでリスト内を何回進んだかを数える必要があります。
2. 動的なメモリ割り当てとポインタが必要となるため、コードが複雑になり、メモリリークやセグメントフォールトのリスクが高まります。
3. 連結リストは配列よりもオーバーヘッドがはるかに大きくなります。これは、連結リストの項目が動的に割り当てられるため（メモリ使用効率が低い）、リスト内の各項目に追加のポインタを格納する必要があるためです。

### リンクリストとは何か？

リンクリストは、動的に割り当てられたノードの集合であり、各ノードが1つの値と1つのポインタを持つように配置されています。ポインタは常にリストの次のメンバーを指します。ポインタがNULLの場合、リストの最後のノードを指します。

リンクリストは、リストの最初の項目を指すローカルポインタ変数を使用して保持されます。そのポインタもNULLの場合、リストは空であるとみなされます。

        ------------------------------              ------------------------------
        |              |             |            \ |              |             |
        |     DATA     |     NEXT    |--------------|     DATA     |     NEXT    |
        |              |             |            / |              |             |
        ------------------------------              ------------------------------

リンク リスト ノードを定義する:

    typedef struct node {
        int val;
        struct node * next;
    } node_t;

構造体を再帰的に定義していることに注意してください。これはC言語でも可能です。ノード型の名前を「node_t」としましょう。

これでノードを使用できるようになりました。リストの最初の項目を指すローカル変数（「head」）を作成しましょう。

    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    if (head == NULL) {
        return 1;
    }

    head->val = 1;
    head->next = NULL;

リストの最初の変数を作成しました。リストへのデータの追加を完了するには、値を設定し、次の項目を空にする必要があります。
malloc が NULL 値を返したかどうかを常に確認する必要があることに注意してください。

リストの末尾に変数を追加するには、次のポインタまで進み続けます。

    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    head->val = 1;
    head->next = (node_t *) malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;

これを延々と続けることもできますが、実際に行うべきことは、`next` 変数が `NULL` になるまで、リストの最後の項目まで進むことです。

### リストの反復処理

リストのすべての項目を出力する関数を作成しましょう。そのためには、現在出力中のノードを追跡する「current」ポインタを使用する必要があります。ノードの値を出力した後、「current」ポインタを次のノードに設定し、リストの末尾に達するまで（次のノードはNULLです）、再度出力します。

    void print_list(node_t * head) {
        node_t * current = head;

        while (current != NULL) {
            printf("%d\n", current->val);
            current = current->next;
        }
    }

### リストの最後に項目を追加する

連結リストのすべてのメンバーを反復処理するには、「current」というポインタを使用します。このポインタを先頭から開始するように設定し、各ステップでポインタをリストの次の項目に進め、最後の項目に到達するまで続けます。

    void push(node_t * head, int val) {
        node_t * current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        /* 新しい変数を追加できるようになった */
        current->next = (node_t *) malloc(sizeof(node_t));
        current->next->val = val;
        current->next->next = NULL;
    }

リンク リストの最適な使用例はスタックとキューです。これらをここで実装します。

### リストの先頭にアイテムを追加する（リストにプッシュする）

リストの先頭に追加するには、以下の手順が必要です。

1. 新しい項目を作成し、その値を設定します。
2. 新しい項目をリストの先頭にリンクします。
3. リストの先頭を新しい項目に設定します。

これにより、リストに新しい値を持つ新しいヘッドが作成され、リストの残りの部分はそれにリンクされたままになります。

この操作には関数を使用するため、ヘッド変数を変更できるようにする必要があります。そのためには、ポインタ変数へのポインタ（ダブルポインタ）を渡す必要があります。これにより、ポインタ自体を変更できるようになります。

    void push(node_t ** head, int val) {
        node_t * new_node;
        new_node = (node_t *) malloc(sizeof(node_t));

        new_node->val = val;
        new_node->next = *head;
        *head = new_node;
    }


### 最初の項目を削除する（リストからポップする）

変数をポップするには、このアクションを逆に実行する必要があります。

1. ヘッドが指している次の項目を取得して保存します。
2. ヘッド項目を解放します。
3. サイドに格納した次の項目をヘッドに設定します。

コードは次のとおりです。

    int pop(node_t ** head) {
        int retval = -1;
        node_t * next_node = NULL;

        if (*head == NULL) {
            return -1;
        }

        next_node = (*head)->next;
        retval = (*head)->val;
        free(*head);
        *head = next_node;

        return retval;
    }


### リストの最後の項目を削除する

リストから最後の項目を削除することは、リストの末尾に追加することと非常に似ていますが、大きな違いが 1 つあります。最後の項目の 1 つ前の項目を変更する必要があるため、実際には 2 つ先の項目を調べて、次の項目がリストの最後の項目であるかどうかを確認する必要があります。:


    int remove_last(node_t * head) {
        int retval = 0;
        /* リストに項目が1つしかない場合はそれを削除します */
        if (head->next == NULL) {
            retval = head->val;
            free(head);
            return retval;
        }

        /* リストの最後から2番目のノードに移動する */
        node_t * current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }
        
        /* 現在、currentはリストの最後から2番目の項目を指しているので、current->nextを削除します */
        retval = current->next->val;
        free(current->next);
        current->next = NULL;
        return retval;
        
    }


### 特定のアイテムを削除する

リストから特定の項目を削除するには、リストの先頭からのインデックス、または値のいずれかで、すべての項目を調べ、削除したい項目の前のノードに到達しているかどうかを確認する必要があります。
これは、前のノードが指している場所にも位置を変更する必要があるためです。

アルゴリズムは次のとおり:

1. 削除したいノードの前のノードまで反復処理する
2. 削除したいノードを一時ポインタに保存する
3. 前のノードの次のポインタを、削除したいノードの次のノードを指すように設定する
4. 一時ポインタを使ってノードを削除する

いくつかのエッジケースに対処する必要があるので、コードの内容を理解しておいてください。

    int remove_by_index(node_t ** head, int n) {
        int i = 0;
        int retval = -1;
        node_t * current = *head;
        node_t * temp_node = NULL;


        if (n == 0) {
            return pop(head);
        }

        for (i = 0; i < n-1; i++) {
            if (current->next == NULL) {
                return -1;
            }
            current = current->next;
        }

        if (current->next == NULL) {
            return -1;
        }

        temp_node = current->next;
        retval = temp_node->val;
        current->next = temp_node->next;
        free(temp_node);

        return retval;

    }


演習
----

先頭へのダブルポインタを受け取り、リスト内の値 `val` を持つ最初の項目を削除する関数 `remove_by_value` を実装する必要があります。

チュートリアル コード
-------------------

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct node {
        int val;
        struct node * next;
    } node_t;

    void print_list(node_t * head) {
        node_t * current = head;

        while (current != NULL) {
            printf("%d\n", current->val);
            current = current->next;
        }
    }

    int pop(node_t ** head) {
        int retval = -1;
        node_t * next_node = NULL;

        if (*head == NULL) {
            return -1;
        }

        next_node = (*head)->next;
        retval = (*head)->val;
        free(*head);
        *head = next_node;

        return retval;
    }

    int remove_by_value(node_t ** head, int val) {
        /* TODO: ここにコードを入力してください */
    }

    int main() {

        node_t * test_list = (node_t *) malloc(sizeof(node_t));
        test_list->val = 1;
        test_list->next = (node_t *) malloc(sizeof(node_t));
        test_list->next->val = 2;
        test_list->next->next = (node_t *) malloc(sizeof(node_t));
        test_list->next->next->val = 3;
        test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
        test_list->next->next->next->val = 4;
        test_list->next->next->next->next = NULL;

        remove_by_value(&test_list, 3);

        print_list(test_list);
    }

期待している出力
---------------

    1
    2
    4

解答
----

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct node {
        int val;
        struct node * next;
    } node_t;

    void print_list(node_t * head) {
        node_t * current = head;

        while (current != NULL) {
            printf("%d\n", current->val);
            current = current->next;
        }
    }

    int pop(node_t ** head) {
        int retval = -1;
        node_t * next_node = NULL;

        if (*head == NULL) {
            return -1;
        }

        next_node = (*head)->next;
        retval = (*head)->val;
        free(*head);
        *head = next_node;

        return retval;
    }

    int remove_by_value(node_t ** head, int val) {
        node_t *previous, *current;

        if (*head == NULL) {
            return -1;
        }

        if ((*head)->val == val) {
            return pop(head);
        }

        previous = *head;
        current = (*head)->next;
        while (current) {
            if (current->val == val) {
                previous->next = current->next;
                free(current);
                return val;
            }

            previous = current;
            current  = current->next;
        }
        return -1;
    }

    void delete_list(node_t *head) {
        node_t  *current = head, 
                *next = head;

        while (current) {
            next = current->next;
            free(current);
            current = next;
        }
    }

    int main(void) {
        node_t * test_list = (node_t *) malloc(sizeof(node_t));

        test_list->val = 1;
        test_list->next = (node_t *) malloc(sizeof(node_t));
        test_list->next->val = 2;
        test_list->next->next = (node_t *) malloc(sizeof(node_t));
        test_list->next->next->val = 3;
        test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
        test_list->next->next->next->val = 4;
        test_list->next->next->next->next = NULL;

        remove_by_value(&test_list, 3);

        print_list(test_list);
        delete_list(test_list);

        return EXIT_SUCCESS;
    }
