클로저는 함수 객체로, 메모리에 존재하지 않더라도 둘러싼 스코프 내의 값을 기억합니다. 단계별로 알아봅시다.

첫째, **중첩 함수**는 다른 함수 내에 정의된 함수입니다. 중첩 함수가 둘러싼 스코프의 변수에 접근할 수 있다는 점이 매우 중요합니다. 그러나 적어도 파이썬에서는 이 변수들을 읽기 전용으로 취급합니다. 하지만 이러한 변수들을 수정하려면 "nonlocal" 키워드를 명시적으로 사용할 수 있습니다.

예를 들어:

    def transmit_to_space(message):
        "이것은 둘러싸고 있는 함수입니다"
        def data_transmitter():
            "이것은 중첩 함수입니다"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("테스트 메시지"))

이것은 'data_transmitter' 함수가 'message'에 접근할 수 있기 때문에 잘 작동합니다. "nonlocal" 키워드의 사용을 보여드리겠습니다.

    def print_msg(number):
        def printer():
            "여기서 우리는 nonlocal 키워드를 사용하고 있습니다"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

nonlocal 키워드를 사용하지 않으면 출력이 "3 9"가 되겠지만, 이를 사용하면 "3 3"이 됩니다. 즉, "number" 변수의 값이 수정됩니다.

이제 중첩 함수 내에서 함수를 호출하는 대신 함수 객체를 반환해 보겠습니다. (함수도 객체라는 것을 기억하세요. (이건 파이썬입니다.))

    def transmit_to_space(message):
        "이것은 둘러싸고 있는 함수입니다"
        def data_transmitter():
            "이것은 중첩 함수입니다"
            print(message)
        return data_transmitter

그리고 함수를 다음과 같이 호출합니다:


      def transmit_to_space(message):
        "이것은 둘러싸고 있는 함수입니다"
        def data_transmitter():
            "이것은 중첩 함수입니다"
            print(message)
        return data_transmitter
        
  	  fun2 = transmit_to_space("태양을 태워라!")
  	  fun2()

"transmit_to_space()"의 실행이 완료되었음에도 불구하고, 메시지가 보존되었습니다. 다른 원래 함수들이 끝난 후에도 데이터가 코드에 붙어 있는 이 기법을 파이썬에서는 클로저라고 합니다.

장점: 클로저는 전역 변수의 사용을 피하고 데이터 은닉의 형태를 제공합니다. (예를 들어, 클래스에 몇 가지 메서드가 있을 때 클로저를 대신 사용하십시오.)

또한, 파이썬의 데코레이터는 클로저를 광범위하게 사용합니다.

Exercise
--------

중첩 루프와 파이썬 클로저를 만들어 클로저를 사용하여 여러 곱셈 함수를 만들 수 있는 함수를 만드십시오. 즉, 클로저를 사용하여 multiply_with_5() 또는 multiply_with_4() 함수를 생성하는 함수를 만들 수 있습니다.