Python의 모든 함수는 일반적으로 선언할 경우 미리 정의된 수의 인수를 받습니다. 예를 들면 다음과 같습니다:

```python
def myfunction(first, second, third):
    # do something with the 3 variables
    ...
```

다음의 문법을 사용하여 가변 개수의 인수를 받는 함수를 선언할 수 있습니다:

```python
def foo(first, second, third, *therest):
    print("First: %s" % first)
    print("Second: %s" % second)
    print("Third: %s" % third)
    print("And all the rest... %s" % list(therest))
```

"therest" 변수는 리스트로, "foo" 함수에 첫 번째 세 개의 인수 이후에 전달된 모든 인수를 받습니다. 따라서 `foo(1, 2, 3, 4, 5)`를 호출하면 다음처럼 출력됩니다:

```python
def foo(first, second, third, *therest):
    print("First: %s" %(first))
    print("Second: %s" %(second))
    print("Third: %s" %(third))
    print("And all the rest... %s" %(list(therest)))
    
foo(1, 2, 3, 4, 5)
```

또한 키워드로 함수 인수를 전달할 수도 있어 인수의 순서가 중요하지 않게 할 수 있습니다. 다음 문법을 사용하세요. 다음 코드는 다음과 같은 출력을 제공합니다:
```The sum is: 6
    Result: 1```

```python
def bar(first, second, third, **options):
    if options.get("action") == "sum":
        print("The sum is: %d" %(first + second + third))

    if options.get("number") == "first":
        return first

result = bar(1, 2, 3, action = "sum", number = "first")
print("Result: %d" %(result))
```

"bar" 함수는 3개의 인수를 받습니다. 추가적으로 "action" 인수가 수신되고, 숫자를 합산하라는 지시가 있다면, 합계가 출력됩니다. 반대로, "number" 매개변수의 값이 "first"일 경우, 함수는 첫 번째 인수를 반환해야 합니다.

Exercise
--------

`foo` 및 `bar` 함수를 완성하여 가변적인 양의 인수(3개 이상)를 받을 수 있도록 하세요.
`foo` 함수는 추가로 받은 인수의 수를 반환해야 합니다.
`bar` 함수는 `magicnumber` 키워드 인수가 7일 경우 `True`를 반환하고, 그렇지 않으면 `False`를 반환해야 합니다.