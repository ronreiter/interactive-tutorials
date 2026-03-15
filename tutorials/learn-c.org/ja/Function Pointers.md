Tutorial
--------

ポインタを覚えていますか？文字の配列を指し示し、それを文字列に変換するためにポインタを使いました。
その後、ポインタの制御方法を学んだことで、さらに面白くなりました。
次は、ポインタを使って関数を指し示したり呼び出したりしてみましょう。

### なぜ関数を指すのか?

おそらく最初に頭に浮かぶ疑問は、関数名で関数を呼び出すのになぜポインタを使うのか、ということでしょう。`function();` と書けばいいのですから。これは良い質問です！ では、配列をソートする必要がある `sort` 関数を想像してみてください。配列の要素を昇順または降順に並べ替えたい場合があります。どちらを選びますか？ 関数ポインタです！

### 関数ポインタ構文

    void (*pf)(int);

ま、そうでしょうね。確かに非常に複雑ですね。少なくとも、そう思われるかもしれません。では、コードをもう一度読んで、一つ一つ理解してみましょう。隅々まで読んでみてください。`*pf` は関数へのポインタです。`void` はその関数の戻り値の型、そして `int` はその関数の引数の型です。分かりましたか？いいですね。

関数ポインタにポインタを挿入して、もう一度読み取ってみます:

    char* (*pf)(int*)

繰り返します
1. `*pf` は関数ポインタです。
2. `char*` はその関数の戻り値の型です。
3. `int*` は引数の型です。

理論はもう十分です。実際のコードで実際に試してみましょう。
次の例をご覧ください。

    #include <stdio.h>
    void someFunction(int arg)
    {
		printf("This is someFunction being called and arg is: %d\n", arg);
		printf("Whoops leaving the function now!\n");
    }

    main()
    {
		void (*pf)(int);
		pf = &someFunction;
		printf("We're about to call someFunction() using a pointer!\n");
		(pf)(5);
		printf("Wow that was cool. Back to main now!\n\n");
    }

先ほど説明した `sort()` を覚えていますか？これを使って同じことができます。
集合を昇順で並べ替える代わりに、次のように独自の比較関数を使って逆の順序付けを行うことができます。

    #include <stdio.h>
    #include <stdlib.h> //for qsort()

    int compare(const void* left, const void* right)
    {
		return (*(int*)right - *(int*)left);
		// 複雑に思える場合は、ref に戻ってください: http://www.cplusplus.com/reference/cstdlib/qsort/
    }
    main()
    {
		int (*cmp) (const void* , const void*);
		cmp = &compare;

		int iarray[] = {1,2,3,4,5,6,7,8,9};
		qsort(iarray, sizeof(iarray)/sizeof(*iarray), sizeof(*iarray), cmp);

		int c = 0;
		while (c < sizeof(iarray)/sizeof(*iarray))
		{
			printf("%d \t", iarray[c]);
			c++;
		}
    }

もう一度思い出してみましょう。なぜ関数ポインタを使うのでしょうか？
1. プログラマーが様々な用途でライブラリを利用できるようにするため -> 「柔軟性」


Exercise
--------

関数へのポインタの配列を完成させ、配列内のポインタを使って各関数を呼び出します。関数へのポインタの配列？ はい、できますよ！

Tutorial Code
-------------

    #include <stdio.h>

    void f1(int var)
    {
            printf("this is f1 and var is: %d\n", var);
    }

    void f2(int var)
    {
            printf("this is f2 and var is: %d\n", var);
    }

    void f3(int var)
    {
            printf("this is f3 and var is: %d\n", var);
    }

    int main()
    {
                /* define an array full of function pointers 
                to the above functions, that take an `int` as 
                their only argument */


		int c = 0;
		while(c < 3)
		{
                        /* call the functions using the function pointers
                        of the array at index `c` with `c` as an argument */

			++c;
		}

	  return 0;
    }


Expected Output
---------------

    this is f1 and var is: 0
    this is f2 and var is: 1
    this is f3 and var is: 2

Solution
----

    #include <stdio.h>

    void f1(int var)
    {
            printf("this is f1 and var is: %d\n", var);
    }

    void f2(int var)
    {
            printf("this is f2 and var is: %d\n", var);
    }

    void f3(int var)
    {
            printf("this is f3 and var is: %d\n", var);
    }

    int main()
    {
		void (*pf[])(int) = {f1, f2, f3};

		int c = 0;
		while(c < 3)
		{
			pf[c](c);
			++c;
		}

		return 0;
    }
