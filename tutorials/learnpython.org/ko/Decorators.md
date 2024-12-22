데코레이터는 [함수](http://www.learnpython.org/en/Functions ""), [메서드, 혹은 클래스](http://www.learnpython.org/en/Classes%20and%20Objects "")와 같은 호출 가능한 객체에 간단한 수정을 할 수 있도록 해줍니다. 이번 튜토리얼에서는 함수에 대해 다룰 것입니다. 구문은

    @decorator
    def functions(arg):
        return "value"

다음과 동일합니다:

    def function(arg):
        return "value"
    function = decorator(function) # 이 코드는 함수를 데코레이터에 전달하고, 그것을 functions로 다시 할당합니다.

보시다시피, 데코레이터는 함수이며, 함수를 받아서 또 다른 함수를 반환합니다. 예를 들어 이렇게 할 수 있습니다:

    def repeater(old_function):
        def new_function(*args, **kwds): # *args와 **kwds의 동작 방식은 learnpython.org/en/Multiple%20Function%20Arguments를 참조하세요
            old_function(*args, **kwds) # 이전 함수를 실행합니다
            old_function(*args, **kwds) # 두 번 실행합니다
        return new_function # new_function을 반환해야 값을 다시 할당할 수 있습니다

이렇게 하면 함수가 두 번 반복됩니다.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

출력을 변경할 수도 있습니다.

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # 반환 값을 수정합니다
        return new_function

입력을 변경합니다.

    def double_Ii(old_function):
        def new_function(arg): # 이전 함수가 하나의 인수를 가질 때만 작동합니다
            return old_function(arg * 2) # 전달된 인수를 수정합니다
        return new_function

체크를 수행합니다.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # 잘못된 동작을 수행하지 않도록 오류를 유발합니다
            old_function(arg)
        return new_function

출력을 변수 양만큼 곱하고 싶다면, 데코레이터를 정의하고 다음과 같이 사용할 수 있습니다:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # 새로운 생성기를 반환합니다
    
    # 사용법
    @multiply(3) # multiply는 생성기가 아니지만, multiply(3)은 그렇습니다
    def return_num(num):
        return num
        
    # 이제 return_num은 데코레이터로 장식되고 본인에게 다시 할당됩니다
    return_num(5) # 15를 반환해야 합니다

이전 함수를 무시해도 됩니다! 고급 데코레이터는 문서 문자열과 인수 개수도 조작할 수 있습니다.
멋있는 데코레이터에 대해서는 <http://wiki.python.org/moin/PythonDecoratorLibrary>를 참조하세요.

연습 문제
--------
인수 하나를 가진 함수를 데코레이트하는 데코레이터를 반환하는 데코레이터 팩토리를 만드세요. 팩토리는 하나의 인수, 즉 타입을 취하고, 입력이 올바른 타입인지 확인하는 함수를 만들어야 합니다. 잘못된 경우 "Bad Type"을 출력해야 합니다 (현실에서는 오류를 발생시켜야 하지만, 이 튜토리얼에서는 오류 발생을 다루지 않습니다). 혼란스러울 경우 튜토리얼 코드와 예상 출력을 참조하여 이것이 무엇인지 확인하세요 (저라면 그렇게 할 것입니다). isinstance(object, type_of_object)나 type(object)이 도움이 될 수 있습니다.