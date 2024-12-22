Strings는 텍스트의 조각입니다. 인용 부호 안에 무엇이든 정의할 수 있습니다:

    astring = "Hello world!"
    astring2 = 'Hello world!'

보다시피, 당신이 처음으로 배운 것은 간단한 문장을 출력하는 것이었습니다. 이 문장은 Python에 의해 문자열로 저장되었습니다. 그러나 문자열을 즉시 출력하는 대신, 문자열로 할 수 있는 다양한 작업을 탐색할 것입니다.
문자열을 할당하기 위해 따옴표를 사용할 수도 있습니다. 그러나 할당할 값 자체에 따옴표가 포함되어 있는 경우 문제가 발생할 것입니다. 예를 들어, 이 괄호 안에 문자열(따옴표는 ' ')을 할당하려면 다음과 같이 큰 따옴표를 사용해야 합니다:

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

이는 12를 출력합니다. 왜냐하면 "Hello world!"는 구두점과 공백을 포함하여 12개의 문자로 이루어져 있기 때문입니다.

    astring = "Hello world!"
    print(astring.index("o"))

이는 4를 출력합니다. 왜냐하면 첫 번째로 나오는 문자 "o"의 위치가 첫 번째 문자에서 4번째 떨어져 있기 때문입니다. 문장에는 실제로 두 개의 o가 있지만, 이 메서드는 첫 번째만 인식합니다.

하지만 왜 5가 아닌가요? 문자열에서 "o"가 다섯 번째 문자가 아닌가요? 더 간단히 설명하자면, Python(및 대부분의 다른 프로그래밍 언어)은 1이 아닌 0부터 시작합니다. 그래서 "o"의 인덱스는 4입니다.

    astring = "Hello world!"
    print(astring.count("l"))

우스꽝스러운 글꼴을 사용하는 분들을 위해, 이는 숫자 1이 아닌 소문자 L입니다. 이는 문자열에서 l의 수를 셉니다. 따라서 3을 출력해야 합니다.

    astring = "Hello world!"
    print(astring[3:7])

이는 인덱스 3부터 시작하여 인덱스 6에서 끝나는 문자열의 슬라이스를 출력합니다. 하지만 왜 7이 아니고 6인가요? 대부분의 프로그래밍 언어가 이렇게 하고 있습니다 - 이는 괄호 안에서 수학 계산을 더 쉽게 만들어 줍니다.

괄호 안에 숫자를 하나만 넣으면 해당 인덱스의 단일 문자를 제공합니다. 첫 번째 숫자를 생략하고 콜론을 남기면, 시작부터 남긴 숫자까지의 슬라이스를 제공합니다. 두 번째 숫자를 생략하면, 첫 번째 숫자부터 끝까지의 슬라이스를 제공합니다.

괄호에 음수를 넣을 수도 있습니다. 이는 문자열의 시작 대신 끝에서 시작하는 쉬운 방법입니다. 이 방법으로 -3은 "끝에서 세 번째 문자"를 의미합니다.

    astring = "Hello world!"
    print(astring[3:7:2])

이는 3에서 7까지 하나씩 건너뛰며 문자열의 문자를 출력합니다. 이는 확장 슬라이스 문법입니다. 일반 형태는 [start:stop:step]입니다.

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

두 출력 모두 동일한 결과를 생성하는 것을 주목하세요.

C에는 문자열을 뒤집는 strrev 같은 함수가 없습니다. 그러나 위에서 언급된 슬라이스 문법 유형으로 문자열을 쉽게 뒤집을 수 있습니다:

    astring = "Hello world!"
    print(astring[::-1])

이것

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

이들은 각각 대문자와 소문자로 변환된 새로운 문자열을 만듭니다.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

이것은 문자열이 무엇으로 시작하는지 또는 끝나는지를 결정하는 데 사용됩니다. 첫 번째는 "Hello"로 시작하기 때문에 True를 출력할 것입니다. 두 번째는 "asdfasdfasdf"로 끝나지 않으므로 False를 출력할 것입니다.

    astring = "Hello world!"
    afewwords = astring.split(" ")

이는 문자열을 목록으로 함께 묶인 일련의 문자열로 분할합니다. 이 예제에서는 공백에서 나누기 때문에 목록의 첫 번째 항목은 "Hello"가 되고 두 번째 항목은 "world!"가 됩니다.

Exercise
--------

문자열을 변경하여 올바른 정보를 출력하도록 코드를 수정해 보세요.