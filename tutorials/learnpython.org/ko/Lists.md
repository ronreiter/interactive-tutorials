리스트는 배열과 매우 유사합니다. 리스트는 어떤 타입의 변수도 포함할 수 있으며, 원하는 만큼 변수를 포함할 수 있습니다. 리스트는 아주 간단한 방법으로 반복할 수도 있습니다. 다음은 리스트를 만드는 방법에 대한 예입니다.

```python
mylist = []
mylist.append(1)
mylist.append(2)
mylist.append(3)
print(mylist[0]) # prints 1
print(mylist[1]) # prints 2
print(mylist[2]) # prints 3

# prints out 1,2,3
for x in mylist:
    print(x)
```

존재하지 않는 인덱스에 접근하면 예외(오류)가 발생합니다.

```python
mylist = [1,2,3]
print(mylist[10])
```

Exercise
--------

이 연습에서는 "append" 리스트 메서드를 사용하여 숫자와 문자열을 올바른 리스트에 추가해야 합니다. 숫자 1, 2, 3을 "numbers" 리스트에 추가하고, 'hello'와 'world'를 strings 변수에 추가해야 합니다.

또한, 대괄호 연산자 `[]`를 사용하여 names 리스트에서 두 번째 이름을 second_name 변수에 채워 넣어야 합니다. 인덱스가 0부터 시작하므로, 리스트에서 두 번째 항목에 접근하려면 인덱스가 1이 되어야 합니다.