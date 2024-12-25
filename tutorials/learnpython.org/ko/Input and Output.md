Taking Input and showing Output in required way plays an important role in interactive coding. So lets focus on input and output of various data types.

###raw_input()
이는 줄 끝에 도달할 때까지 입력을 받는 데 사용됩니다. 공백이 없어야 한다는 점에 유의하십시오. 입력은 새로운 줄 문자로 종료되며 입력 줄에 공백이 있으면 오류가 발생합니다.

    # stdin에서 받은 입력을 출력합니다
    astring=raw_input()# hello를 입력으로 줍니다
    print raw_input()

입력을 받은 후, 우리는 int(), float(), str()과 같은 함수를 사용하여 이를 원하는 데이터 유형으로 변환할 수 있습니다.

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input())
    print decimalnum

###input()
이는 특히 정수를 입력하는 데 사용됩니다. input()이 raw_input()보다 장점이 있음을 다음 예제로 설명할 수 있습니다.

    # 2*2를 입력으로 줍니다.
    a=input()
    b=raw_input() # int(raw_input())는 오류를 일으킵니다.
    print a # 4를 출력합니다
    print b # 2*2를 출력합니다

###한 줄에서 공백으로 구분된 두 개 이상의 데이터 유형을 어떻게 입력받나요?
여기서는 split() 및 map() 함수를 사용합니다.

    # 첫 번째 줄에는 두 개의 정수를, 세 번째 줄에는 두 개 이상의 정수를 입력합니다.
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # 첫 번째 줄에서 첫 두 정수를 출력하고 두 번째 줄의 정수 합계를 출력합니다.

### 출력 서식 지정
print 문이 자동으로 새 줄을 삽입한다는 것을 이미 눈치챘을 것입니다. 위의 코드에서와 같이 쉼표를 사용하면 값이 한 줄에 공백으로 구분되어 출력됩니다. sys 모듈은 출력 서식을 지정하는 다양한 기능을 제공하지만, 여기서는 기본적인 서식 지식으로 필요한 방식으로 출력하는 방법을 배웁니다. 몇 가지 예를 통해 출력 서식 지정을 배우겠습니다.

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f, c is %s" % (a,b,c)

출력은 자명해야 합니다.

Exercise
--------

사용자에게 이름, 나이 및 국가를 입력하라고 요청하는 프로그램을 작성하십시오. 그런 다음 프로그램은 이 정보를 문장에 포함하여 메시지를 출력해야 합니다. 프로그램에는 다음이 포함되어야 합니다:

1. `raw_input()`을 사용하여 이름을 입력받습니다.
2. `input()`을 사용하여 나이를 입력받고, 이를 정수로 변환합니다.
3. `raw_input()`을 사용하여 국가 이름을 입력받습니다.
4. 이름, 나이 및 국가를 포함하는 문장을 출력하도록 서식을 지정합니다.

프로그램은 입력 처리 및 문자열 서식을 Python에서 구현해야 합니다.