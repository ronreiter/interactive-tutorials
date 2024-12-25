```markdown
Python의 모든 함수는 일반적으로 선언할 경우 미리 정의된 수의 인수를 받습니다. 예를 들면 다음과 같습니다:

```python
def myfunction(first, second, third):
    # do something with the 3 variables
    ...
```

다음과 같은 구문을 사용하여 가변적인 수의 인수를 받는 함수를 선언하는 것도 가능합니다:

```python
def foo(first, second, third, *therest):
    print("First: %s" % first)
    print("Second: %s" % second)
    print("Third: %s" % third)
    print("And all the rest... %s" % list(therest))
```

"therest" 변수는 처음 세 개의 인수 이후에 "foo" 함수에 전달된 모든 인수를 받는 변수 목록입니다. 따라서 `foo(1, 2, 3, 4, 5)`를 호출하면 다음과 같은 출력이 나타납니다:

```python
def foo(first, second, third, *therest):
    print("First: %s" %(first))
    print("Second: %s" %(second))
    print("Third: %s" %(third))
    print("And all the rest... %s" %(list(therest)))

foo(1, 2, 3, 4, 5)
```

키워드를 사용하여 함수 인수를 전달함으로써 인수의 순서가 중요하지 않도록 하는 것도 가능합니다. 다음과 같은 구문을 사용할 수 있습니다. 다음 코드는 다음과 같은 출력을 생성합니다:
```텍스트
The sum is: 6
Result: 1
```

```python
def bar(first, second, third, **options):
    if options.get("action") == "sum":
        print("The sum is: %d" %(first + second + third))

    if options.get("number") == "first":
        return first

result = bar(1, 2, 3, action = "sum", number = "first")
print("Result: %d" %(result))
```

"bar" 함수는 3개의 인수를 받습니다. 추가적인 "action" 인수를 받은 경우, 숫자를 합산하라는 지시가 있을 때 합계를 출력합니다. 또는 "number" 매개변수가 함수에 "first"로 전달된 경우 첫 번째 인수를 반환해야 함을 알고 있습니다.

Exercise
--------

`foo` 및 `bar` 함수를 수정하여 가변적인 수의 인수(3개 이상)를 수신할 수 있도록 하세요. `foo` 함수는 수신한 추가 인수의 수를 반환해야 합니다.
`bar`는 키워드 `magicnumber`가 값 7인 경우 `True`를 반환하고, 그렇지 않으면 `False`를 반환해야 합니다.
```