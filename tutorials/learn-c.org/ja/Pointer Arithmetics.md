チュートリアル
-------------
以前、ポインタとは何か、そしてポインタの操作方法を学びました。このチュートリアルでは、ポインタに対する算術演算について学習します。
C言語のポインタには、++、--、-、+ といった複数の算術演算を適用できます。

### (++) によるポインタのインクリメント

他の変数と同様に、++ 演算はその変数の値を増加させます。今回の場合、変数はポインタなので、その値を増加させると、ポインタが指すメモリ内のアドレスが増加します。
この演算を例に、配列と組み合わせてみましょう:

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] has value %d - and address @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[3]; // 配列の4番目の要素を指す
	    printf("address: %x - has value %d\n", intpointer, *intpointer); // 4番目の要素のアドレスを出力する
	    
	    intpointer++; // ポインタのアドレスを増やして配列の5番目の要素を指すようにします。
	    printf("address: %x - has value %d\n", intpointer, *intpointer); // 5番目の要素のアドレスを出力する
	    
	    return 0;
	}


### (--) によるポインタの減少

前の例で ++ 演算子を使用してポインターの指すアドレスを 1 つ増やしたのと同様に、デクリメント演算子 (--) を使用して、指すアドレスを 1 つ減らすことができます。

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] has value %d - and address @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[4]; // 配列の5番目の要素を指す
	    printf("address: %x - has value %d\n", intpointer, *intpointer); // 5番目の要素のアドレスを出力する
	    
	    intpointer--; // ポイントのアドレスを減らして、配列の4番目の要素を指すようにする
	    printf("address: %x - has value %d\n", intpointer, *intpointer); // 4番目の要素のアドレスを出力する
	    
	    return 0;
	}

### (+) でポインタを追加する

先ほど、ポインタの指すアドレスを1ずつ増やしました。次のように整数値で増やすこともできます。

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] has value: %d - and address @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[1]; // 配列の2番目の要素を指す
	    printf("address: %x - has value %d\n", intpointer, *intpointer); // 2番目の要素のアドレスを出力する
	    
	    intpointer += 2; // ポイントのアドレスを2つシフトして、配列の4番目の要素を指すようにします。
	    printf("address: %x - has value %d\n", intpointer, *intpointer); // 4番目の要素のアドレスを出力する
	    
	    return 0;
	}

出力では、メモリ内でアドレスが8ステップシフトしていることに注目してください。なぜだろうと疑問に思うかもしれません。
答えは簡単です。ポインタがint型ポインタであり、int型変数のサイズが4バイトであるため、メモリは4ブロックシフト可能です。
コードでは、最初のアドレスに2（+2）シフトしたので、2 x 4バイト = 8になります。

### (-) によるポインタの減算

同様に引き算もできます:

	#include <stdio.h>
	
	int main()
	{
	    int intarray[5] = {10,20,30,40,50};
	    
	    int i;
	    for(i = 0; i < 5; i++)
	        printf("intarray[%d] has value: %d - and address @ %x\n", i, intarray[i], &intarray[i]);
	    
	    
	    int *intpointer = &intarray[4]; // 配列の5番目の要素を指す
	    printf("address: %x - has value %d\n", intpointer, *intpointer); // 5番目の要素のアドレスを出力する
	    
	    intpointer -= 2; // ポイントのアドレスを2つシフトして、配列の3番目の要素を指すようにする
	    printf("address: %x - has value %d\n", intpointer, *intpointer); // 3番目の要素のアドレスを出力する
	    
	    return 0;
	}

ここでも、アドレスは 4 バイトのブロック単位でシフトされます (int の場合)。

### その他の操作

他にも比較演算（>、<、==など）があります。考え方は変数の比較と非常に似ていますが、この場合はメモリアドレスを比較します。

演習
----
intarray の最後の 3 つのアドレスを、int へのポインターの配列である parray にコピーします。

チュートリアル コード
-------------------
    #include <stdio.h>
	
    int main() {
    	int intarray[5] = {10,20,30,40,50};
        //-----------------------^
        int *pointer = &intarray[2];

        // 3つのポインタの配列
        int *parray[3];

		// intarray の最後の3つのアドレスを parray にコピーします
		// parray とポインタを使用します
        int i;
        for (i = 0; i < 3; i++) {
            // Insert code here
        }

        // テスト コード
        for (i = 0; i < 3; i++) {
            if (parray[i] == &pointer[i]) {
                printf("Matched!\n");
            } else {
                printf("Fail\n");
            }
        }

        return 0;
    }


期待している出力
---------------
    Matched!
    Matched!
    Matched!

解答
----
        #include <stdio.h>

        int main() {
            int intarray[5] = {10,20,30,40,50};
            //-----------------------^
            int *pointer = &intarray[2];

            int *parray[3];

            int i;
            for (i = 0; i < 3; i++) {
                parray[i] = pointer + i;
            }

            for (i = 0; i < 3; i++) {
                if (parray[i] == &pointer[i]) {
                    printf("Matched!\n");
                } else {
                    printf("Fail\n");
                }
            }

            return 0;
        }
      
      