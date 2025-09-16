Pythonには2種類のループがあります。forとwhileです。

### The "for" loop

forループは、指定されたシーケンスを反復します。以下はその例です:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

forループは、"range"や"xrange"関数を使って数のシーケンスを反復することができます。rangeとxrangeの違いは、range関数が指定された範囲の数で新しいリストを返すのに対し、xrangeはイテレータを返します。これはより効率的です。（Python 3ではrange関数が使われ、xrangeのように動作します）。range関数は0から始まることに注意してください。

    # 0,1,2,3,4を出力します
    for x in range(5):
        print(x)

    # 3,4,5を出力します
    for x in range(3, 6):
        print(x)

    # 3,5,7を出力します
    for x in range(3, 8, 2):
        print(x)

### "while"ループ

whileループは、指定されたブール条件が満たされている限り繰り返されます。例えば:

    # 0,1,2,3,4を出力します

    count = 0
    while count < 5:
        print(count)
        count += 1  # これはcount = count + 1と同じです

### "break"と"continue"ステートメント

**break**は、forループやwhileループを終了するために使われます。一方で、**continue**は現在のブロックをスキップし、「for」または「while」文に戻ります。以下はいくつかの例です:

    # 0,1,2,3,4を出力します

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # 奇数のみを出力します - 1,3,5,7,9
    for x in range(10):
        # xが偶数かどうかをチェックします
        if x % 2 == 0:
            continue
        print(x)

### ループに"else"節を使用できますか？

C、CPPのような言語とは異なり、ループに**else**を使用することができます。「for」または「while」文のループ条件が失敗した場合、「else」内のコードが実行されます。forループ内で**break**ステートメントが実行された場合、「else」部分はスキップされます。**continue**ステートメントがあっても「else」部分が実行されることに注意してください。

以下はいくつかの例です:

    # 0,1,2,3,4を出力し、その後に"count value reached 5"と出力します

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # 1,2,3,4を出力します
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("これは印刷されません。なぜならforループは条件が失敗したためではなくbreakによって終了されたためです")

Exercise
--------

numbersリストのすべての偶数を、それらが受け取られた順序でループして出力してください。237の後に続く数字は出力しないでください。