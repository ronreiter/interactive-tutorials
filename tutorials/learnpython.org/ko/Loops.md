파이썬에는 두 가지 유형의 루프가 있습니다: for 루프와 while 루프입니다.

### "for" 루프

For 루프는 주어진 시퀀스를 반복합니다. 여기에 예가 있습니다:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

For 루프는 "range"와 "xrange" 함수를 사용하여 숫자 시퀀스를 반복할 수 있습니다. range와 xrange의 차이점은 range 함수는 지정된 범위의 숫자를 가진 새로운 리스트를 반환하는 반면, xrange는 더 효율적인 반복자를 반환한다는 점입니다. (파이썬 3에서는 xrange처럼 작동하는 range 함수를 사용합니다). range 함수는 0을 기준으로 한다는 점에 유의하세요.

    # 0,1,2,3,4을 출력합니다
    for x in range(5):
        print(x)

    # 3,4,5를 출력합니다
    for x in range(3, 6):
        print(x)

    # 3,5,7을 출력합니다
    for x in range(3, 8, 2):
        print(x)

### "while" 루프

While 루프는 특정 조건이 참일 때 반복합니다. 예를 들어:

    # 0,1,2,3,4을 출력합니다

    count = 0
    while count < 5:
        print(count)
        count += 1  # 이는 count = count + 1과 같습니다

### "break"와 "continue" 문

**break**는 for 루프나 while 루프를 종료하는 데 사용되며, **continue**는 현재 블록을 건너뛰고 "for" 또는 "while" 문으로 돌아가도록 합니다. 몇 가지 예시를 보십시오:

    # 0,1,2,3,4를 출력합니다

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # 홀수만 출력합니다 - 1,3,5,7,9
    for x in range(10):
        # x가 짝수인지 확인합니다
        if x % 2 == 0:
            continue
        print(x)

### 루프에서 "else" 절을 사용할 수 있나요?

C 또는 CPP와 같은 언어와 달리, 우리는 루프에서도 **else**를 사용할 수 있습니다. "for" 또는 "while" 문이 실패하면 "else"에 있는 코드가 실행됩니다. 루프 내에서 **break** 문이 실행되면 "else" 부분은 건너뛰게 됩니다. **continue** 문이 있어도 "else" 부분은 실행됩니다.

다음은 몇 가지 예시입니다:

    # 0,1,2,3,4을 출력한 후 "count value reached 5"를 출력합니다

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # 1,2,3,4를 출력합니다
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")

Exercise
--------

리스트에 있는 모든 짝수를 받아들인 순서대로 루프를 통해 출력하세요. 237이 시퀀스에서 나타난 이후의 숫자는 출력하지 마세요.