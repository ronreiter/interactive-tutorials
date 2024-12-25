클로저는 메모리에 존재하지 않더라도 포함하고 있는 범위의 값을 기억하는 함수 객체입니다. 단계별로 알아봅시다.

우선, **중첩 함수**는 다른 함수 내부에 정의된 함수입니다. 중첩 함수는 포함 범위의 변수를 접근할 수 있다는 점이 매우 중요합니다. 그러나 적어도 파이썬에서는 이러한 변수들은 읽기 전용입니다. 하지만 "nonlocal" 키워드를 명시적으로 사용하여 이러한 변수들을 수정할 수 있습니다.

예를 들어:

    def transmit_to_space(message):
        "이것은 포함하는 함수입니다"
        def data_transmitter():
            "중첩된 함수입니다"
            print(message)
    
        data_transmitter()
    
    print(transmit_to_space("Test message"))

이는 'data_transmitter' 함수가 'message'를 접근할 수 있으므로 잘 작동합니다. "nonlocal" 키워드의 사용을 보여주기 위해, 다음 예제를 보십시오.

    def print_msg(number):
        def printer():
            "여기서 우리는 nonlocal 키워드를 사용하고 있습니다"
            nonlocal number
            number=3
            print(number)
        printer()
        print(number)
    
    print_msg(9)

nonlocal 키워드를 사용하지 않았다면 출력은 "3 9"가 되었겠지만, 이를 사용함으로써 우리는 "3 3"을 얻습니다, 이는 "number" 변수의 값이 수정됨을 의미합니다.

이제, 중첩 함수를 호출하는 대신 함수 객체를 반환하는 것이 어떨까요? (함수도 객체라는 것을 기억하세요. (이것은 파이썬입니다.))

    def transmit_to_space(message):
        "이것은 포함하는 함수입니다"
        def data_transmitter():
            "중첩된 함수입니다"
            print(message)
        return data_transmitter

그리고 함수를 호출하는 방식은 다음과 같습니다:


    def transmit_to_space(message):
        "이것은 포함하는 함수입니다"
        def data_transmitter():
            "중첩된 함수입니다"
            print(message)
        return data_transmitter
        
    fun2 = transmit_to_space("Burn the Sun!")
    fun2()

"transmit_to_space()"의 실행이 완료되었음에도 불구하고, 메시지는 보존되었습니다. 이러한 방식으로 다른 원래 함수들의 끝 이후에도 데이터가 일부 코드에 연결되는 기술을 파이썬에서는 클로저라고 합니다.

장점: 클로저는 전역 변수의 사용을 피할 수 있으며 데이터 은닉의 형태를 제공합니다. (예: 클래스에 몇 개의 메서드가 있을 때, 클로저를 대신 사용하세요.)

또한, 파이썬의 데코레이터는 클로저를 광범위하게 사용합니다.

Exercise
--------

중첩 루프와 파이썬 클로저를 만들어 클로저를 사용하여 다중 곱셈 함수를 생성하는 함수를 만드세요. 즉, 클로저를 사용하여 multiply_with_5() 또는 multiply_with_4() 함수를 생성하는 함수를 만들 수 있습니다.