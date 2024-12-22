파이썬에서 functools 라이브러리의 partial 함수를 사용하여 부분 함수를 생성할 수 있습니다.

부분 함수는 x 매개변수를 가진 함수를 매개변수가 더 적고 더 제한된 함수에 대해 고정된 값들을 설정하여 유도할 수 있게 해 줍니다.

필요한 항목 가져오기:

    from functools import partial

이 코드는 8을 반환할 것입니다.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # 2로 곱하는 새 함수를 생성합니다
    dbl = partial(multiply, 2)
    print(dbl(4))

중요한 참고 사항: 기본 값은 왼쪽부터 변수를 대체하기 시작합니다. 2는 x를 대체합니다.
y는 dbl(4)이 호출될 때 4가 됩니다. 이 예제에서는 차이가 없지만, 아래 예제에서는 차이가 있습니다.

Exercise
--------
partial()을 호출하여 제공된 함수의 첫 번째 세 변수를 대체하고 func()에서 새 부분 함수를 사용하여 출력이 60이 되도록 하나의 입력 변수만 사용하여 출력하십시오.