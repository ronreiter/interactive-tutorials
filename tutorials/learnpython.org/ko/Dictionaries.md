사전(dictionary)는 배열과 유사한 데이터 형식이지만, 인덱스 대신 키와 값을 사용하여 작동합니다. 사전에 저장된 각 값은 인덱스를 사용하는 대신, 키라는 어떤 유형의 객체(문자열, 숫자, 리스트 등)로 접근할 수 있습니다.

예를 들어, 전화번호 데이터베이스는 다음과 같은 사전을 사용하여 저장될 수 있습니다:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

또는, 다음과 같은 표기법으로 동일한 값으로 초기화할 수 있습니다:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterating over dictionaries

사전은 리스트처럼 반복(iterate)할 수 있습니다. 하지만 리스트와 달리 사전은 저장된 값의 순서를 유지하지 않습니다. 키와 값 쌍을 반복하려면 다음 문법을 사용하십시오:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Removing a value

지정된 인덱스를 제거하려면 다음 중 하나의 표기법을 사용하세요:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

또는:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)

Exercise
--------

전화번호부에 938273443이라는 전화번호를 가진 "Jake"를 추가하고, "Jill"을 전화번호부에서 제거하세요.