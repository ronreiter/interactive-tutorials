このセクションでは、Pythonの基本的な演算子の使い方を説明します。

### 算術演算子      

他のプログラミング言語と同様に、加算、減算、乗算、除算の演算子は数値に使用できます。<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

答えが何になるか予測してみてください。Pythonは算術の優先順位に従いますか？

別の演算子として、割り算の剰余を返す剰余演算子（%）があります。 被除数 % 除数 = 剰余。

    remainder = 11 % 3
    print(remainder)

乗算記号を2つ使用すると、べき乗関係を表します。

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### 文字列での演算子の使用

Pythonは文字列の結合に加算演算子をサポートしています:

    helloworld = "hello" + " " + "world"
    print(helloworld)

また、Pythonでは文字列を乗算して繰り返しのシーケンスを含む文字列を生成することもサポートしています:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### リストでの演算子の使用

リストは加算演算子で結合することができます:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

同様に、文字列と同様に、Pythonは乗算演算子を使用して繰り返しのシーケンスを含む新しいリストを作成することもできます:

    print([1,2,3] * 3)

演習
--------

この演習の目標は、`x_list`と`y_list`という2つのリストを作成することです。それぞれのリストには変数`x`と`y`が10個含まれています。さらに、作成した2つのリストを結合して、変数`x`と`y`がそれぞれ10回含まれている`big_list`を作成することです。