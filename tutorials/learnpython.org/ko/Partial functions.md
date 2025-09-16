Python에서 functools 라이브러리의 partial 함수를 사용하여 부분 함수를 생성할 수 있습니다.

부분 함수는 x 매개 변수를 가진 함수를 파라미터가 더 적은 함수로 유도하고, 그 제한된 함수에 고정된 값을 설정할 수 있게 합니다.

필요한 라이브러리 가져오기:

    from functools import partial

이 코드는 8을 반환합니다.

    from functools import partial
    
    def multiply(x, y):
            return x * y
    
    # 2를 곱하는 새로운 함수를 생성합니다.
    dbl = partial(multiply, 2)
    print(dbl(4))

중요한 점: 기본값은 왼쪽부터 변수를 대체하기 시작합니다. 2는 x를 대체할 것입니다. dbl(4)를 호출할 때 y는 4가 됩니다. 이 예제에서는 차이가 없지만, 아래 예제에서는 차이가 있습니다.

Exercise
--------
partial()을 호출하고 func()의 첫 세 개의 변수를 대체하여 제공된 함수를 수정하십시오. 그런 다음 새로운 부분 함수를 사용하여 출력이 60이 되도록 하나의 입력 변수로만 인쇄하십시오.