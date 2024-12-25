```markdown
### 함수란 무엇인가요?

함수는 코드를 유용한 블록으로 나누어 코드를 정리하고, 가독성을 높이며, 재사용 가능하게 하고 시간을 절약할 수 있는 편리한 방법입니다. 또한, 함수는 인터페이스를 정의하는 주요 방법으로 프로그래머들이 코드를 공유할 수 있게 해줍니다.

### 파이썬에서 함수를 어떻게 작성하나요?

이전 튜토리얼에서 보았듯이, 파이썬은 블록을 사용합니다.

블록은 다음과 같은 형식으로 작성된 코드 영역입니다:

    block_head:
        1st block line
        2nd block line
        ...

여기서 블록 라인은 더 많은 파이썬 코드(심지어 다른 블록일 수도 있음)이며, 블록 헤드는 다음 형식입니다:
block_keyword block_name(argument1,argument2, ...)
이미 알고 있는 블록 키워드는 "if", "for", 및 "while"입니다.

파이썬에서 함수는 블록 키워드 "def"를 사용하여 정의하며, 블록의 이름으로 함수의 이름을 사용합니다.
예를 들어:

    def my_function():
        print("Hello From My Function!")

함수는 또한 인수(호출자가 함수에 전달한 변수)를 받을 수 있습니다.
예를 들어:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))

함수는 호출자에게 값을 반환하기 위해 'return' 키워드를 사용할 수 있습니다.
예를 들어:

    def sum_two_numbers(a, b):
        return a + b

### 파이썬에서 함수를 어떻게 호출하나요?

간단하게 함수 이름을 쓰고, 괄호 ()로 감싸고 필요한 인수를 괄호 안에 넣으면 됩니다.
예를 들어, 이전에 작성한 함수를 호출해 보겠습니다:

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


Exercise
--------

이 연습에서는 기존 함수를 사용하고, 스스로의 함수를 추가하여 완전히 기능적인 프로그램을 만들어 보세요.

1. "More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"라는 문자열 목록을 반환하는 `list_benefits()`라는 이름의 함수를 추가하세요.

2. 문자열을 포함한 단일 인수를 받아 주어진 문자열로 시작하고 " is a benefit of functions!"으로 끝나는 문장을 반환하는 `build_sentence(info)`라는 함수 이름을 추가하세요.

3. 모든 함수가 함께 작동하는 것을 실행하고 확인하세요!
```