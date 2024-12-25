Python은 조건을 평가하기 위해 불리언 논리를 사용합니다. 표현식이 비교되거나 평가될 때 불리언 값인 True와 False가 반환됩니다. 예를 들어:

    x = 2
    print(x == 2) # True 출력
    print(x == 3) # False 출력
    print(x < 3) # True 출력

변수 할당은 단일 등호 "="을 사용하여 수행되며, 두 변수 간의 비교는 이중 등호 "=="을 사용하여 수행됩니다. "같지 않음" 연산자는 "!="로 표시됩니다.

### 불리언 연산자

"and" 및 "or" 불리언 연산자를 사용하면 복합 불리언 표현식을 작성할 수 있습니다. 예를 들어:

    name = "John"
    age = 23
    if name == "John" and age == 23:
        print("당신의 이름은 John이고, 나이는 23살입니다.")

    if name == "John" or name == "Rick":
        print("당신의 이름은 John이거나 Rick입니다.")

### "in" 연산자

"in" 연산자는 예를 들어 리스트와 같은 반복 가능한 객체 컨테이너 내에 지정된 객체가 존재하는지 확인하는 데 사용할 수 있습니다:

    name = "John"
    if name in ["John", "Rick"]:
        print("당신의 이름은 John이거나 Rick입니다.")

Python은 코드 블록을 정의하기 위해 중괄호 대신 들여쓰기를 사용합니다. 표준 Python 들여쓰기는 4칸이지만 탭이나 다른 크기의 스페이스도 작동하며, 일관성이 있어야 합니다. 코드 블록에는 종료 표시가 필요하지 않습니다.

다음은 Python의 "if" 문을 코드 블록을 사용하여 사용하는 예제입니다:

    statement = False
    another_statement = True
    if statement is True:
        # 무언가를 수행
        pass
    elif another_statement is True: # else if
        # 다른 무언가를 수행
        pass
    else:
        # 또 다른 무언가를 수행
        pass

예를 들어:

    x = 2
    if x == 2:
        print("x는 2와 같습니다!")
    else:
        print("x는 2와 같지 않습니다.")

다음 중 하나가 올바르면 문장은 true로 평가됩니다:
1. "True" 불리언 변수가 주어지거나, 산술 비교와 같은 표현식을 사용하여 계산된 경우.
2. "빈" 것으로 간주되지 않는 객체가 전달된 경우.

다음은 빈 것으로 간주되는 객체의 예입니다:
1. 빈 문자열: ""
2. 빈 리스트: []
3. 숫자 0: 0
4. false 불리언 변수: False

### 'is' 연산자

이중 등호 연산자 "=="와 달리, "is" 연산자는 변수의 값이 아닌 인스턴스 자체를 일치시킵니다. 예를 들어:

    x = [1,2,3]
    y = [1,2,3]
    print(x == y) # True 출력
    print(x is y) # False 출력

### "not" 연산자

불리언 표현식 앞에 "not"을 사용하면 그것을 반전시킵니다:

    print(not False) # True 출력
    print((not False) == (False)) # False 출력

Exercise
--------

첫 번째 섹션의 변수를 변경하여 각 if 문이 True로 평가되도록 하세요.