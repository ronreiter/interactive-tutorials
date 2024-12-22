# Generators are very easy to implement, but a bit difficult to understand.

    Generators are used to create iterators, but with a different approach. Generators are simple functions which return an iterable set of items, one at a time, in a special way.

    젠레이터는 간단하게 구현할 수 있지만, 이해하기는 약간 어려울 수 있습니다.

    젠레이터는 반복자를 생성하는 데 사용되지만, 접근 방식이 다릅니다. 젠레이터는 항목 집합을 하나씩 특수한 방식으로 반환하는 간단한 함수입니다.

    When an iteration over a set of item starts using the for statement, the generator is run. Once the generator's function code reaches a "yield" statement, the generator yields its execution back to the for loop, returning a new value from the set. The generator function can generate as many values (possibly infinite) as it wants, yielding each one in its turn.

    for 문을 사용하여 항목 집합에 대한 반복이 시작되면 젠레이터가 실행됩니다. 젠레이터의 함수 코드가 "yield" 문에 도달하면 젠레이터는 실행을 for 루프에 반환하고 집합에서 새 값을 반환합니다. 젠레이터 함수는 원하는 만큼 많은 값을 생성할 수 있으며, 차례로 각 값을 생성합니다.

    Here is a simple example of a generator function which returns 7 random integers:

    다음은 7개의 무작위 정수를 반환하는 젠레이터 함수의 간단한 예입니다:

          import random
          
          def lottery():
              # returns 6 numbers between 1 and 40
              for i in range(6):
                  yield random.randint(1, 40)
          
              # returns a 7th number between 1 and 15
              yield random.randint(1, 15)
          
          for random_number in lottery():
                 print("And the next number is... %d!" %(random_number))

    This function decides how to generate the random numbers on its own, and executes the yield statements one at a time, pausing in between to yield execution back to the main for loop.

    이 함수는 무작위 숫자를 생성하는 방법을 스스로 결정하고, yield 문을 한 번에 하나씩 실행하면서 중간에 멈춰 메인 for 루프에 실행을 반환합니다.

    Exercise
    --------

    Write a generator function which returns the Fibonacci series. They are calculated using the following formula: The first two numbers of the series is always equal to 1, and each consecutive number returned is the sum of the last two numbers.

    힌트: 제너레이터 함수에서 두 개의 변수만 사용할 수 있습니까? 동시에 할당을 수행할 수 있다는 것을 기억하십시오. 코드는 다음과 같이 작동합니다

    를 작성하십시오.

        a = 1
        b = 2
        a, b = b, a
        print(a, b)

    는 a와 b의 값을 동시에 전환합니다.