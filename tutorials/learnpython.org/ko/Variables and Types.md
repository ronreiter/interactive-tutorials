Python은 완전히 객체 지향적이며, "정적 타입"을 요구하지 않습니다. 변수를 사용하기 전에 선언하거나 그 타입을 선언할 필요가 없습니다. Python의 모든 변수는 객체입니다.

이 튜토리얼에서는 몇 가지 기본적인 변수 타입에 대해 설명합니다.

### Numbers
Python은 두 가지 숫자 타입을 지원합니다 - 정수(홀수)와 부동 소수점 숫자(소수점). (Python은 복소수도 지원하지만, 이 튜토리얼에서는 설명하지 않습니다.)

정수를 정의하려면 다음과 같은 구문을 사용하세요:

    myint = 7
    print(myint)

부동 소수점을 정의하려면 다음 중 하나의 표기법을 사용할 수 있습니다:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### Strings

문자열은 작은따옴표 또는 큰따옴표로 정의됩니다.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

두 경우의 차이점은 큰따옴표를 사용하면 아포스트로피를 쉽게 포함할 수 있다는 것입니다 (작은따옴표를 사용할 경우 문자열이 종료될 수 있음).

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
추가로 캐리지 리턴, 백슬래시, 유니코드 문자 등을 포함하기 쉽게 하는 문자열 정의의 변형이 있습니다. 이는 이 튜토리얼의 범위를 벗어나지만 [Python 문서](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial")에서 다룹니다.

단순 연산자는 숫자와 문자열에 대해 실행될 수 있습니다:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

여러 변수에 할당은 다음과 같이 "동시에" 가능합니다:

    a, b = 3, 4
    print(a, b)

숫자와 문자열 간의 연산자 혼합은 지원되지 않습니다:

    # 이것은 작동하지 않습니다!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

이 연습의 목표는 문자열, 정수, 부동 소수점 숫자를 생성하는 것입니다. 문자열은 `mystring`으로 명명하고 "hello"라는 단어를 포함해야 합니다. 부동 소수점 숫자는 `myfloat`으로 명명하고 10.0을 포함해야 하며, 정수는 `myint`로 명명하고 20을 포함해야 합니다.