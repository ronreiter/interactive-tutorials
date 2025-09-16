```
문자열은 텍스트의 일부분입니다. 큰따옴표 사이에 있는 모든 것으로 정의될 수 있습니다:

    astring = "Hello world!"
    astring2 = 'Hello world!'

보시다시피, 첫 번째로 배운 것은 간단한 문장을 출력하는 것이었습니다. 이 문장은 Python에 의해 문자열로 저장되었습니다. 하지만 문자열을 즉시 출력하는 대신, 문자열에 대해 할 수 있는 다양한 것들을 탐색해 보겠습니다.
문자열을 할당할 때, 작은따옴표를 사용할 수도 있습니다. 하지만 할당할 값 자체에 작은따옴표가 포함된 경우 문제가 발생합니다. 예를 들어, 다음과 같은 문자열을 할당하려면 (작은따옴표는 ' ') 반드시 큰따옴표를 사용해야 합니다.

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

"Hello world!"는 구두점과 공백을 포함하여 12자이므로 12가 출력됩니다.

    astring = "Hello world!"
    print(astring.index("o"))

첫 번째 "o"가 첫 번째 문자에서 4자리 떨어져 있는 위치이므로 4가 출력됩니다. 이 구절에는 실제로 두 개의 o가 있지만, 이 메소드는 첫 번째 것만 인식합니다.

그런데 왜 5가 출력되지 않았을까요? 문자열에서 "o"가 다섯 번째 문자가 아니었던가요? 좀 더 단순하게 하기 위해, Python(및 대부분 다른 프로그래밍 언어)은 1 대신 0에서 시작합니다. 따라서 "o"의 인덱스는 4입니다.

    astring = "Hello world!"
    print(astring.count("l"))

간혹 이상한 글꼴을 사용하는 분들을 위해 말씀드리는데, 이것은 소문자 L이며 숫자 1이 아닙니다. 이 함수는 문자열 내의 l의 개수를 셉니다. 따라서 3이 출력됩니다.

    astring = "Hello world!"
    print(astring[3:7])

이것은 문자열의 일부를 인덱스 3부터 시작하여 인덱스 6에서 끝나는 부분을 출력합니다. 하지만 왜 6이고 7이 아닐까요? 대부분의 프로그래밍 언어가 이렇게 하는 이유는 괄호 안의 수학을 더 쉽게 하기 위함입니다.

괄호 안에 숫자 하나만 있으면 그 인덱스의 단일 문자를 제공합니다. 첫 번째 숫자를 생략하지만 콜론을 유지하면 시작부터 괄호 안 숫자까지의 조각을 제공합니다. 두 번째 숫자를 생략하면 첫 번째 숫자부터 끝까지의 조각을 제공합니다.

괄호 안에 음수를 넣을 수도 있습니다. 이는 문자열의 끝이 아닌 시작부터 시작하기 위한 쉬운 방법입니다. 이렇게 하면 -3은 문자열의 끝에서 "3번째 문자"를 의미합니다.

    astring = "Hello world!"
    print(astring[3:7:2])

이것은 문자열의 인덱스 3부터 7까지의 문자를 하나 건너뛰며 출력합니다. 이것은 확장된 슬라이스 문법입니다. 일반 형식은 [start:stop:step] 입니다.

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

둘 다 같은 출력을 생성한다는 점에 유의하세요.

C에는 문자열을 뒤집는 strrev와 같은 함수가 존재하지 않습니다. 하지만 위에서 언급한 슬라이스 문법을 사용하여 쉽게 문자열을 뒤집을 수 있습니다:

    astring = "Hello world!"
    print(astring[::-1])

이것은

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

각각 모든 문자를 대문자와 소문자로 변환한 새 문자열을 만듭니다.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

이는 문자열이 어떤 것으로 시작하는지 또는 끝나는지를 결정하는 데 사용됩니다. 첫 번째는 문자열이 "Hello"로 시작하기 때문에 True를 출력합니다. 두 번째는 문자열이 "asdfasdfasdf"로 끝나지 않으므로 False를 출력합니다.

    astring = "Hello world!"
    afewwords = astring.split(" ")

이는 문자열을 함께 그룹화한 문자열 목록으로 나눕니다. 이 예에서는 공백에서 분할하기 때문에, 목록의 첫 번째 항목은 "Hello"이고 두 번째 항목은 "world!"가 됩니다.

Exercise
--------

문자열을 변경하여 올바른 정보를 출력하도록 코드를 수정해보세요.
```