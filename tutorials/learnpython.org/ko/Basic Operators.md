이 섹션에서는 Python에서 기본 연산자를 사용하는 방법을 설명합니다.

### 산술 연산자       

다른 프로그래밍 언어와 마찬가지로 덧셈, 뺄셈, 곱셈 및 나눗셈 연산자를 숫자와 함께 사용할 수 있습니다.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

답이 어떻게 나올지 예측해 보세요. Python은 연산자 우선순위를 따를까요?

또 다른 사용할 수 있는 연산자로는 나눗셈의 정수 나머지를 반환하는 모듈로(%) 연산자가 있습니다. 피제수 % 제수 = 나머지.

    remainder = 11 % 3
    print(remainder)

두 개의 곱셈 기호를 사용하면 제곱 관계가 형성됩니다.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### 문자열과 함께 연산자 사용

Python은 덧셈 연산자를 사용하여 문자열을 연결하는 것을 지원합니다:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python은 문자열을 반복 시퀀스로 형성하기 위해 문자열을 곱하는 것을 지원합니다:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### 리스트와 함께 연산자 사용

리스트는 덧셈 연산자로 결합될 수 있습니다:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

문자열과 마찬가지로, Python은 곱셈 연산자를 사용하여 반복 시퀀스로 새로운 리스트를 형성하는 것을 지원합니다:

    print([1,2,3] * 3)

Exercise
--------

이 연습의 목표는 `x_list`와 `y_list`라는 두 개의 리스트를 만드는 것입니다. 이 리스트들은 각각 변수 `x`와 `y`를 10번 포함합니다. 또한, 두 개의 리스트를 연결하여 `x`와 `y`를 각 10번씩 포함하는 `big_list`라는 리스트를 만들어야 합니다.