프로그래밍을 할 때, 오류는 발생합니다. 이는 삶의 하나의 사실입니다.   
사용자가 잘못된 입력을 제공했을 수도 있습니다. 네트워크 리소스가 사용 불가능했을 수도 있습니다.   
프로그램이 메모리를 다 써버렸을 수도 있습니다. 또는 프로그래머가 실수를 했을 수도 있습니다!

Python의 오류에 대한 해결책은 예외입니다. 여러분은 전에 예외를 본 적이 있을 것입니다.

    print(a)
    
    #오류
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

앗! 'a' 변수에 값을 할당하는 것을 잊었습니다.

하지만 때때로 예외가 프로그램을 완전히 멈추게 하고 싶지 않을 수도 있습니다.   
예외가 발생했을 때 특별한 무언가를 하고 싶을 수도 있습니다. 이것은 *try/except* 블록에서 이루어집니다.

여기 간단한 예가 있습니다: 여러분이 목록에서 반복하고 있다고 가정해 봅시다.   
20개의 숫자를 반복할 필요가 있는데, 목록은 사용자 입력으로 만들어졌고, 거기에 20개의 숫자가 없을 수도 있습니다.   
목록의 끝에 도달하면 나머지 숫자는 0으로 해석되기를 원할 뿐입니다. 그렇게 하려면 다음과 같이 할 수 있습니다:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # 리스트의 존재하지 않는 인덱스에 접근할 때 발생
                do_stuff_with_number(0)
    
    catch_this()

보세요, 별로 어렵지 않죠! 어떤 예외에도 그렇게 할 수 있습니다. 예외 처리에 대한 더 자세한 사항은   
[Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)에서 확인하세요.

Exercise
--------

모든 예외를 처리하세요! 이전 수업을 상기하여 배우의 성을 반환하세요.