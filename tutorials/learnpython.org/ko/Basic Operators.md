이 섹션에서는 Python에서 기본 연산자를 사용하는 방법을 설명합니다.

### 산술 연산자    

다른 프로그래밍 언어와 마찬가지로 덧셈, 뺄셈, 곱셈, 나눗셈 연산자를 숫자와 함께 사용할 수 있습니다.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

결과가 어떻게 나올지 예측해 보세요. Python이 연산자의 우선순위를 따르나요?

또 다른 사용 가능한 연산자는 나머지(%) 연산자로, 나눗셈의 정수 나머지를 반환합니다. 피제수 % 제수 = 나머지.

    remainder = 11 % 3
    print(remainder)

곱셈 기호를 두 번 사용하면 거듭제곱 관계가 됩니다.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### 문자열과 함께 연산자 사용하기

Python은 덧셈 연산자를 사용하여 문자열 연결을 지원합니다:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python은 또한 반복되는 문자열을 형성하기 위해 문자열을 곱하는 것을 지원합니다:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### 리스트와 함께 연산자 사용하기

리스트는 덧셈 연산자로 결합될 수 있습니다:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

문자열과 마찬가지로, Python은 곱셈 연산자를 사용하여 반복되는 새로운 리스트를 형성하는 것을 지원합니다:

    print([1,2,3] * 3)

Exercise
--------

이 연습의 목표는 `x_list`와 `y_list`라고 불리는 두 리스트를 생성하는 것입니다. 각각 `x`와 `y` 변수를 10번 포함합니다. 또한 두 리스트를 연결하여 각 변수를 10번씩 포함하는 `big_list`라는 리스트를 생성해야 합니다.