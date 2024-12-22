프로그래밍을 할 때 오류는 발생하기 마련입니다. 이는 어쩔 수 없는 사실입니다. 아마도 사용자가 잘못된 입력을 했거나 네트워크 자원이 사용 불가능했거나 프로그램이 메모리를 초과했을 수도 있습니다. 또는 프로그래머가 실수를 했을 수도 있습니다!

Python에서 오류에 대한 해결책은 예외입니다. 이전에 예외를 본 적이 있을 것입니다.

    print(a)
    
    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

웁스! 'a' 변수에 값을 할당하는 것을 잊었습니다.

하지만 때로는 예외가 프로그램을 완전히 중단시키지 않기를 바랍니다. 예외가 발생했을 때 특별한 무언가를 하고 싶을 수도 있습니다. 이는 *try/except* 블록에서 수행됩니다.

여기 간단한 예시가 있습니다: 리스트를 반복(iterating)한다고 가정해봅시다. 당신은 20개의 숫자를 반복해야 하지만, 리스트는 사용자 입력으로 만들어졌고 20개의 숫자가 없을 수도 있습니다. 리스트의 끝에 도달하면 나머지 숫자는 0으로 해석되기를 원합니다. 이렇게 할 수 있습니다:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Raised when accessing a non-existing index of a list
                do_stuff_with_number(0)
    
    catch_this()

봤죠, 그리 어렵지 않았습니다! 이는 모든 예외에 대해 할 수 있습니다. 예외 처리에 대한 자세한 내용은 [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)를 참고하세요.

Exercise
--------

모든 예외를 처리하세요! 이전 수업을 떠올려 배우의 성(last name)을 반환하세요.