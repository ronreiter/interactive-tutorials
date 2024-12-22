Python에는 두 가지 유형의 반복문이 있습니다: for과 while.

### The "for" loop

for 반복문은 주어진 시퀀스를 반복합니다. 여기에 예제가 있습니다:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

for 반복문은 "range" 및 "xrange" 함수를 사용하여 숫자 시퀀스를 반복할 수 있습니다. range 함수와 xrange 함수의 차이점은 range 함수가 지정된 범위의 숫자로 이루어진 새로운 리스트를 반환하는 반면, xrange는 더 효율적인 이터레이터를 반환한다는 것입니다. (Python 3에서는 range 함수가 사용되며, 이 함수는 xrange처럼 동작합니다). range 함수는 0부터 시작한다는 점에 유의하세요.

    # 0,1,2,3,4 출력
    for x in range(5):
        print(x)

    # 3,4,5 출력
    for x in range(3, 6):
        print(x)

    # 3,5,7 출력
    for x in range(3, 8, 2):
        print(x)

### "while" loops

while 반복문은 특정 불리언 조건이 참인 동안 반복됩니다. 예를 들어:

    # 0,1,2,3,4 출력

    count = 0
    while count < 5:
        print(count)
        count += 1  # 이는 count = count + 1과 동일합니다.

### "break" and "continue" statements

**break**는 for 반복문이나 while 반복문을 종료하는 데 사용되며, **continue**는 현재 블록을 건너뛰고 "for" 또는 "while" 문으로 돌아가는 데 사용됩니다. 몇 가지 예제입니다:

    # 0,1,2,3,4 출력

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # 홀수만 출력 - 1,3,5,7,9
    for x in range(10):
        # x가 짝수인지 확인
        if x % 2 == 0:
            continue
        print(x)

### 루프에서 "else" 절을 사용할 수 있나요?

C, CPP와 같은 언어와 달리, 우리는 **else**를 루프에 사용할 수 있습니다. "for" 또는 "while" 문에 대한 루프 조건이 실패할 때 "else"의 코드 부분이 실행됩니다. 만약 **break** 문이 for문 안에서 실행되면 "else" 부분이 건너뛰어집니다. **continue** 문이 있어도 "else" 부분은 여전히 실행됩니다.

몇 가지 예제입니다:

    # 0,1,2,3,4를 출력한 후 "count value reached 5"를 출력합니다.

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # 1,2,3,4 출력
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("이것은 인쇄되지 않습니다. 왜냐하면 for문이 조건이 실패한 것이 아니라 break로 인해 종료되었기 때문입니다.")

Exercise
--------

numbers 목록에서 모든 짝수를 동일한 순서로 반복하고 출력하세요. 237 이후에 나오는 숫자는 출력하지 마세요.