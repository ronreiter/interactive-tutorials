Sets는 중복 항목이 없는 리스트입니다. 문단에서 사용된 단어들의 리스트를 모으고 싶다고 가정해 봅시다:

    print(set("my name is Eric and Eric is my name".split()))

이 코드는 "my", "name", "is", "Eric", 그리고 마지막으로 "and"를 포함하는 리스트를 출력합니다. 문장의 나머지 부분에 사용된 단어들은 이미 집합에 있기 때문에 두 번 삽입되지 않습니다.

Sets는 다른 집합들 사이의 차이와 교집합을 계산할 수 있는 Python의 강력한 도구입니다. 예를 들어, 이벤트 A와 B에 참가한 참가자의 목록이 있다고 가정해 봅시다:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

두 이벤트에 모두 참가한 멤버를 찾으려면 "intersection" 메소드를 사용할 수 있습니다:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

하나의 이벤트에만 참가한 멤버를 찾으려면 "symmetric_difference" 메소드를 사용하십시오:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

한 이벤트에만 참가하고 다른 이벤트에는 참가하지 않은 멤버를 찾으려면 "difference" 메소드를 사용하십시오:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

모든 참가자의 목록을 받으려면 "union" 메소드를 사용하십시오:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

Exercise--------  
아래 연습 문제에서는 주어진 목록을 사용하여 이벤트 A에 참가했지만 이벤트 B에는 참석하지 않은 참가자들을 포함하는 집합을 출력하십시오.