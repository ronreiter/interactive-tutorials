데코레이터는 [함수](http://www.learnpython.org/en/Functions ""), [메서드 또는 클래스](http://www.learnpython.org/en/Classes%20and%20Objects "")와 같은 호출 가능한 객체에 간단한 수정을 할 수 있게 해줍니다. 이 튜토리얼에서는 함수에 대해 다룰 것입니다. 문법은 다음과 같습니다

    @decorator
    def functions(arg):
        return "value"

다음과 같습니다:

    def function(arg):
        return "value"
    function = decorator(function) # 이 함수가 데코레이터로 전달되고, 함수에 재할당됩니다

보시다시피, 데코레이터는 단순히 다른 함수를 취하고 하나를 반환하는 또 다른 함수입니다. 예를 들어, 다음과 같이 할 수 있습니다:

    def repeater(old_function):
        def new_function(*args, **kwds): # *args 및 **kwds의 작동 방식은 learnpython.org/en/Multiple%20Function%20Arguments를 참조하십시오
            old_function(*args, **kwds) # 이전 함수를 실행합니다
            old_function(*args, **kwds) # 두 번 수행합니다
        return new_function # new_function을 반환해야 합니다. 그렇지 않으면 값에 재할당되지 않을 것입니다

이렇게 하면 함수가 두 번 반복됩니다.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6
    
출력을 변경할 수도 있습니다

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # 반환 값을 수정합니다
        return new_function

입력을 변경합니다

    def double_Ii(old_function):
        def new_function(arg): # 이전 함수가 하나의 인수를 갖는 경우에만 작동합니다
            return old_function(arg * 2) # 전달된 인수를 수정합니다
        return new_function

그리고 확인을 수행합니다.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # 잘못된 작업보다는 이 오류를 발생시키는 것이 더 좋습니다
            old_function(arg)
        return new_function

출력을 변수 수량으로 곱하고 싶다고 가정해봅시다. 데코레이터를 정의하고 다음과 같이 사용할 수 있습니다:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # 새로운 생성기를 반환합니다
    
    # 사용 예
    @multiply(3) # multiply는 생성기가 아니지만 multiply(3)은 생성기입니다
    def return_num(num):
        return num
        
    # 이제 return_num은 데코레이터가 붙고, 자기 자신에게 재할당됩니다
    return_num(5) # 15를 반환해야 합니다

기존의 함수로 원하는 모든 작업을 수행할 수 있으며, 완전히 무시할 수도 있습니다! 고급 데코레이터는 doc 문자열 및 인수 개수도 조작할 수 있습니다. 멋진 데코레이터를 보려면 <http://wiki.python.org/moin/PythonDecoratorLibrary>로 이동하세요.

Exercise
--------
인수를 하나 갖는 함수를 데코레이트하는 데코레이터를 반환하는 데코레이터 팩토리를 만드십시오. 팩토리는 한 개의 인수, 즉 타입을 받아야 하며, 함수의 입력이 올바른 타입인지 확인하는 데코레이터를 반환해야 합니다. 잘못된 경우 "Bad Type"을 출력해야 합니다 (실제로는 오류를 발생시켜야 하지만, 이 튜토리얼에서는 오류 발생을 다루지 않습니다). 튜토리얼 코드와 예상 출력을 보고 혼란스러울 때는 확인하십시오 (저도 그렇게 할 것입니다). isinstance(object, type_of_object) 또는 type(object)을 사용하는 것이 도움이 될 수 있습니다.