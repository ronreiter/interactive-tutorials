세트는 중복 항목이 없는 리스트입니다. 문단에서 사용된 단어 목록을 수집하고 싶다고 가정해 봅시다:

    print(set("my name is Eric and Eric is my name".split()))

이 코드는 "my", "name", "is", "Eric", 그리고 마지막으로 "and"를 포함하는 목록을 출력할 것입니다. 문장의 나머지 부분에서는 이미 세트에 있는 단어를 사용하므로 두 번 삽입되지 않습니다.

세트는 다른 세트와의 차이와 교집합을 계산할 수 있는 능력이 있기 때문에 Python에서 강력한 도구입니다. 예를 들어, 이벤트 A와 B의 참가자 목록이 있다고 가정해 봅시다:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

두 이벤트에 참석한 회원을 알아내려면 "intersection" 메소드를 사용할 수 있습니다:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

각 이벤트에만 참석한 회원을 알아내려면 "symmetric_difference" 메소드를 사용하세요:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

하나의 이벤트에만 참석하고 다른 이벤트에는 참석하지 않은 회원을 알아내려면 "difference" 메소드를 사용하세요:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

모든 참가자의 목록을 받으려면 "union" 메소드를 사용하세요:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

아래 연습에서는 주어진 목록을 사용하여 이벤트 A에서 참석하지 않은 모든 참가자를 포함하는 세트를 출력하세요.