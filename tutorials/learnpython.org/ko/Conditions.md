Python은 불리언 논리를 사용하여 조건을 평가합니다. 표현식이 비교되거나 평가될 때 불리언 값 True와 False가 반환됩니다. 예를 들어:

    x = 2
    print(x == 2) # True 출력
    print(x == 3) # False 출력
    print(x < 3) # True 출력

변수 할당은 하나의 등호 연산자 "="을 사용하여 수행되는 반면, 두 변수 간의 비교는 이중 등호 연산자 "=="를 사용하여 수행됩니다. "not equals" 연산자는 "!="로 표시됩니다.

### Boolean operators

"and"와 "or" 불리언 연산자는 복잡한 불리언 표현식을 작성할 수 있게 합니다. 예를 들어:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("Your name is John, and you are also 23 years old.")

    if name == "John" or name == "Rick":
        print("Your name is either John or Rick.")

### The "in" operator

"in" 연산자는 특정 객체가 리스트와 같은 반복 가능한 객체 컨테이너 내에 존재하는지를 확인하는 데 사용될 수 있습니다:

    name = "John"
    if name in ["John", "Rick"]:
        print("Your name is either John or Rick.")

Python은 중괄호 대신 들여쓰기를 사용하여 코드 블록을 정의합니다. 표준 Python 들여쓰기는 4칸이지만, 탭과 기타 다른 공백 크기도 일관성이 있는 한 작동합니다. 코드 블록은 종료를 필요로 하지 않습니다.

다음은 코드 블록을 사용한 Python의 "if" 문 예제입니다:

    statement = False
    another_statement = True
    if statement is True:
        # 무언가를 수행
        pass
    elif another_statement is True: # else if
        # 다른 무언가를 수행
        pass
    else:
        # 또 다른 일을 수행
        pass

예를 들어:

    x = 2
    if x == 2:
        print("x는 2입니다!")
    else:
        print("x는 2가 아닙니다.")

다음 조건 중 하나라도 맞다면, 문장은 참으로 평가됩니다:
1. "True" 불리언 변수가 주어지거나, 산술 비교 등 표현식을 사용하여 계산됩니다.
2. "비어있지 않다"로 간주되는 객체가 전달됩니다.

"비어있다"로 간주되는 객체의 예는 다음과 같습니다:
1. 빈 문자열: ""
2. 빈 리스트: []
3. 숫자 0: 0
4. false 불리언 변수: False

### The 'is' operator

이중 등호 연산자 "=="와는 달리, "is" 연산자는 변수의 값을 비교하는 것이 아니라 인스턴스 자체를 비교합니다. 예를 들어:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # True 출력
    print(x is y) # False 출력

### The "not" operator

불리언 표현 앞에 "not"을 사용하면 이를 반전시킵니다:

    print(not False) # True 출력
    print((not False) == (False)) # False 출력

Exercise
--------

첫 번째 섹션의 변수를 변경하여 각 if 문이 참으로 평가되도록 하세요.