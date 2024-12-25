Python은 완전히 객체 지향적이며, "정적 타입"이 아닙니다. 변수를 사용하기 전에 선언하거나, 그들의 타입을 선언할 필요가 없습니다. Python의 모든 변수는 객체입니다.

이 튜토리얼에서는 몇 가지 기본 변수 타입을 다룹니다.

### 숫자
Python은 두 가지 유형의 숫자를 지원합니다 - 정수(전체 숫자)와 부동 소수점 숫자(소수점). (복소수도 지원하지만, 이 튜토리얼에서는 설명하지 않습니다).

정수를 정의하려면 다음 구문을 사용하십시오:

    myint = 7
    print(myint)

부동 소수점 숫자를 정의하려면 다음 표기법 중 하나를 사용할 수 있습니다:

    myfloat = 7.0
    print(myfloat)
    myfloat = float(7)
    print(myfloat)

### 문자열

문자열은 작은따옴표나 큰따옴표로 정의됩니다.

    mystring = 'hello'
    print(mystring)
    mystring = "hello"
    print(mystring)

이 둘의 차이는 큰따옴표를 사용하면 아포스트로피를 쉽게 포함시킬 수 있다는 것입니다. (작은따옴표를 사용하면 문자열이 끝나버립니다)

    mystring = "Don't worry about apostrophes"
    print(mystring)
    
문자열을 정의하는 추가 변형들이 있어서, 캐리지 리턴, 백슬래시, 유니코드 문자를 포함시키기가 더 쉽습니다. 이러한 것들은 이 튜토리얼의 범위를 벗어납니다만, [Python 문서](http://docs.python.org/tutorial/introduction.html#strings "Strings in Python Tutorial")에 추가로 설명되어 있습니다.

간단한 연산자는 숫자 및 문자열에 대해 수행할 수 있습니다:

    one = 1
    two = 2
    three = one + two
    print(three)

    hello = "hello"
    world = "world"
    helloworld = hello + " " + world
    print(helloworld)

할당은 다음과 같이 "동시에" 여러 변수에 대해 수행할 수 있습니다:

    a, b = 3, 4
    print(a, b)

숫자와 문자열 사이의 연산자 섞기는 지원되지 않습니다:

    # 작동하지 않습니다!
    one = 1
    two = 2
    hello = "hello"
    
    print(one + two + hello)


Exercise
--------

이 연습의 목표는 문자열, 정수 및 부동 소수점 숫자를 생성하는 것입니다. 문자열은 `mystring`으로 이름이 지정되고 "hello"라는 단어를 포함해야 합니다. 부동 소수점 숫자는 `myfloat`으로 이름이 지정되고 숫자 10.0을 포함해야 하며, 정수는 `myint`로 이름이 지정되고 숫자 20을 포함해야 합니다.