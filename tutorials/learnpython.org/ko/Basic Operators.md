이 섹션에서는 Python에서 기본 연산자를 사용하는 방법에 대해 설명합니다.

### Arithmetic Operators       

다른 프로그래밍 언어와 마찬가지로, 숫자에 대한 덧셈, 뺼셈, 곱셈 및 나눗셈 연산자를 사용할 수 있습니다.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

결과를 예측해 보세요. Python이 연산자의 우선순위를 따를까요?

또한 나머지를 구하는 연산자인 모듈로 (%) 연산자가 있습니다. 이 연산자는 나눗셈의 나머지를 반환합니다. 배수 % 피제수 = 나머지.

    remainder = 11 % 3
    print(remainder)

두 개의 곱셈 기호를 사용하면 제곱 관계를 나타냅니다.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Using Operators with Strings

Python은 덧셈 연산자를 사용하여 문자열을 연결하는 것을 지원합니다:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python은 또한 문자열을 곱하여 반복되는 시퀀스로 구성된 문자열을 만드는 것을 지원합니다:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Using Operators with Lists

리스트는 덧셈 연산자를 사용하여 결합할 수 있습니다:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

문자열과 마찬가지로 Python은 곱셈 연산자를 사용하여 반복되는 시퀀스로 새로운 리스트를 구성하는 것을 지원합니다:

    print([1,2,3] * 3)

Exercise
--------

이 연습의 목표는 `x_list`와 `y_list`라는 10개의 `x`와 `y` 변수를 각각 포함하는 두 리스트를 만드는 것입니다. 또한 두 개의 만든 리스트를 연결하여 `x`와 `y` 변수를 각각 10번 포함하는 `big_list`라는 리스트를 만들도록 요구됩니다.