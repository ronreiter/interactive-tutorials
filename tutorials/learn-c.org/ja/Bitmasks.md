Tutorial
--------

ビットマスクとは、データをchar/int/float型ではなく、ビットとして保存するプロセスです。特定の種類のデータをコンパクトかつ効率的に保存するのに非常に便利です。

ビットマスクの考え方はブール論理に基づいています。ブール論理とは、論理演算（0と1を引数として取る）によって「真」（1）と「偽」（0）を操作することです。ここでは以下の演算について考えます。

* NOT a - 最終値は入力値の反対になります (1 -> 0、0 -> 1)
* a AND b - 両方の値が 1 の場合、最終値は 1 になります。それ以外の場合は、最終値は 0 になります。
* a OR b - どちらかの値が 1 の場合、最終値は 1 になります。それ以外の場合は、最終値は 0 になります。
* a XOR b - 一方の値が 1 でもう一方の値が 0 の場合、最終値は 1 になります。それ以外の場合は、最終値は 0 になります。

コンピューティングにおいて、これらの真偽値の1つは*ビット*です。C言語のプリミティブ（`int`、`float`など）は、8の倍数のビット数で構成されます。例えば、`int`は少なくとも16ビットのサイズであるのに対し、`char`は8ビットです。8ビットは通常*バイト*と呼ばれます。C言語では、特定のプリミティブが[少なくともあるバイト数](http://en.wikipedia.org/wiki/C_data_types#Basic_types)バイトのサイズであることが保証されています。C11で導入された`stdint.h`により、プログラマーは正確にあるバイト数の整数型を指定できるようになりました。これはマスクを使用する際に非常に便利です。

ビットマスクはフラグを設定する際によく使用されます。フラグとは、「オン/オフ」や「移動/静止」など、2つの状態を取ることができる値です。

### ビット n の設定

ビット `n` を設定するのは、ストレージ変数の値と、値 `2^n` の OR 演算を行うのと同じくらい簡単です。

```
storage |= 1 << n;
```

例として、`storage` が char (8 ビット) の場合のビット 3 の設定を次に示します。

```
01000010
   OR
00001000
   ==
01001010
```

`2^n` ロジックは、マスク自体の適切なビットに '1' の値を配置し、ストレージ変数内の同じビットにアクセスできるようにします。

### ビット n をクリアする

ビット `n` をクリアすることは、ストレージ変数の値と値 `2^n` の逆数 (NOT) との AND 演算の結果です。

```
storage &= ~(1 << n);
```

もう一度例を挙げます。

```
01001010
   AND
11110111
   ==
01000010
```

### 反転ビット n

ビット `n` の反転は、ストレージ変数の値と `2^n` の XOR 演算の結果です。

```
storage ^= 1 << n;
```

```
01000010    01001010
   XOR         XOR
00001000    00001000
   ==          ==
01001010    01000010
```

### ビット n をチェック

ビットをチェックすることは、ビットストレージと `2^n` の値の AND 演算です。

```
bit = storage & (1 << n);
```

```
01000010    01001010
   AND         AND
00001000    00001000
   ==          ==
00000000    00001000
```

Exercise
--------

ビットマスクを使用して一部のフラグを操作します。


Tutorial Code
-------------

    #include <stdio.h>
    #include <assert.h>

    /* フラグの初期化を完了する */

    const short FLAG_ON          = 1 << 0; // 1  (0x01)
    const short FLAG_MOVEMENT    = 1 << 1; // 2  (0x02)
    const short FLAG_TRANSPARENT = 1 << 2; // 4  (0x04)
    const short FLAG_ALIVE       = ;
    const short FLAG_BROKEN      = ;
    const short FLAG_EDIBLE      = 1 << 5; // 32 (0x20)

    int main() {
      short attributes = 0;

      /* 属性をON、TRANSPARENT、BROKENに設定する */

      assert(attributes == (FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN));

      /* 属性がONとALIVEのみになるように変更（設定/クリア/切り替え）します */

      assert(attributes == (FLAG_ON | FLAG_ALIVE));

      /* ALIVEフラグが設定されているかどうかを確認する */
      assert(/* ??? */);

      /* BROKENフラグが設定されていないか確認する */
      assert(/* ??? */);

      /* EDIBLE属性のみが設定されるように変更します */

      assert(attributes == FLAG_EDIBLE);

      printf("Done!");
    }


Expected Output
---------------
   Done!

Solution
----
    #include <stdio.h>
    #include <assert.h>

    /* フラグの初期化を完了する */

    const short FLAG_ON          = 1 << 0; // 1  (0x01)
    const short FLAG_MOVEMENT    = 1 << 1; // 2  (0x02)
    const short FLAG_TRANSPARENT = 1 << 2; // 4  (0x04)
    const short FLAG_ALIVE       = 1 << 3; // 8  (0x08)
    const short FLAG_BROKEN      = 1 << 4; // 16 (0x10)
    const short FLAG_EDIBLE      = 1 << 5; // 32 (0x20)

    int main() {
      short attributes = 0;

      /* 属性をON、TRANSPARENT、BROKENに設定する */

      attributes |= FLAG_ON;
      attributes |= FLAG_TRANSPARENT;
      attributes |= FLAG_BROKEN;
      // possible solution(s):
      // attributes |= FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN;
      // attributes = FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN;

      assert(attributes == (FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN));

      /* 属性がONとALIVEのみになるように変更（設定/クリア/切り替え）します */

      attributes &= ~FLAG_TRANSPARENT;
      // possible: attributes ^= FLAG_TRANSPARENT;
      attributes ^= FLAG_BROKEN;
      // possible: attributes &= ~FLAG_BROKEN;
      attributes |= FLAG_ALIVE;

      assert(attributes == (FLAG_ON | FLAG_ALIVE));

      /* ALIVEフラグが設定されているかどうかを確認する */
      assert(attributes & FLAG_ALIVE);

      /* BROKENフラグが設定されていないか確認する */
      assert(!(attributes & FLAG_BROKEN));

      /* EDIBLE属性のみが設定されるように変更します */
      attributes = FLAG_EDIBLE;

      assert(attributes == FLAG_EDIBLE);

      printf("Done!");
    }
