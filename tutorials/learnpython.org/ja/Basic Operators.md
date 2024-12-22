このセクションでは、Pythonで基本的な演算子を使用する方法を説明します。

### Arithmetic Operators

他のプログラミング言語と同様に、加算、減算、乗算、除算の演算子を数値に使用することができます。

    number = 1 + 2 * 3 / 4.0
    print(number)

結果がどうなるか予測してみてください。Pythonは演算の順序を守るでしょうか？

別の利用可能な演算子として、剰余演算子(%)があります。この演算子は、除算の整数の余りを返します。dividend % divisor = remainder。

    remainder = 11 % 3
    print(remainder)

2つの乗算記号を使用すると、べき乗計算になります。

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Pythonは文字列を連結するために加算演算子をサポートしています。

    helloworld = "hello" + " " + "world"
    print(helloworld)

Pythonは文字列を繰り返して形成するために文字列を乗算することもサポートしています。

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

リストは加算演算子を使用して結合できます。

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

文字列と同様に、Pythonは乗算演算子を使用して新しいリストを繰り返し形成することをサポートしています。

    print([1,2,3] * 3)

Exercise
--------

この演習の目標は、変数`x`と`y`のインスタンスをそれぞれ10個含む`x_list`と`y_list`と呼ばれる2つのリストを作成することです。
また、作成した2つのリストを連結することによって、変数`x`と`y`をそれぞれ10回ずつ含む`big_list`というリストを作成する必要があります。