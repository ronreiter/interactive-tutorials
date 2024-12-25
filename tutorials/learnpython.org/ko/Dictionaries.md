A dictionary는 배열과 유사한 데이터 타입이지만 인덱스 대신 키와 값으로 작동합니다. dictionary에 저장된 각 값은 인덱스를 사용하지 않고, 키(문자열, 숫자, 리스트 등 어떤 종류의 객체도 가능)를 사용하여 액세스할 수 있습니다.

예를 들어, 전화번호 데이터베이스는 다음과 같이 dictionary를 사용하여 저장할 수 있습니다:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

또는, dictionary를 다음과 같은 표기법으로 초기화할 수도 있습니다:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### 사전 반복하기

dictionary는 리스트처럼 반복할 수 있습니다. 하지만 리스트와 달리 dictionary는 저장된 값의 순서를 유지하지 않습니다. 키-값 쌍을 반복하려면 다음 구문을 사용하세요:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### 값 제거하기

지정된 인덱스를 제거하기 위해서는 다음 표기법 중 하나를 사용하세요:
    
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

phonebook에 "Jake"를 전화번호 938273443으로 추가하고, Jill을 phonebook에서 제거하세요.