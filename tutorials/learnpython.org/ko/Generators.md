Generators는 구현하기 매우 쉽지만, 이해하기에는 조금 어려울 수 있습니다.

Generators는 iterators를 생성하는 데 사용되지만, 다른 접근 방식을 사용합니다. Generators는 특별한 방식으로 한 번에 하나씩 iterable한 항목 집합을 반환하는 간단한 함수입니다.

for 문을 사용해 항목 집합에 대한 반복이 시작되면, generator가 실행됩니다. 생성자의 함수 코드가 "yield" 문에 도달하면, 생성자는 실행을 for 루프에 다시 반환하고 집합에서 새로운 값을 반환합니다. 생성자 함수는 원하는 만큼의 값(무한히 가능)을 생성할 수 있으며, 각각의 차례에 하나씩 반환합니다.

다음은 7개의 임의의 정수를 반환하는 간단한 생성자 함수의 예입니다:

      import random
      
      def lottery():
          # 1에서 40 사이의 숫자 6개를 반환
          for i in range(6):
              yield random.randint(1, 40)
      
          # 1에서 15 사이의 7번째 숫자를 반환
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

이 함수는 자체적으로 랜덤 숫자를 생성하는 방법을 결정하고, 각 yield 문을 하나씩 실행하며, 사이에 pause하여 주 루프에 실행을 다시 넘깁니다.

Exercise
--------

Fibonacci 수열을 반환하는 생성자 함수를 작성하세요. 그들은 다음의 공식을 사용하여 계산됩니다: 시리즈의 첫 두 숫자는 항상 1과 같으며, 각 연속적인 숫자는 마지막 두 숫자의 합입니다.
힌트: 생성자 함수에서 두 개의 변수만 사용할 수 있나요? 할당은 동시에 수행될 수 있음을 기억하세요. 다음 코드

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

는 a와 b의 값을 동시에 바꿀 수 있습니다.