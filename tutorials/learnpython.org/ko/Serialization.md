Python은 JSON을 인코딩하고 디코딩하기 위한 내장 JSON 라이브러리를 제공합니다.

Python 2.5에서는 simplejson 모듈이 사용되며, Python 2.7에서는 json 모듈이 사용됩니다. 이 인터프리터는 Python 2.7을 사용하므로, 우리는 json 모듈을 사용할 것입니다.

json 모듈을 사용하려면 먼저 가져와야 합니다:

    import json

JSON 데이터에는 두 가지 기본 형식이 있습니다. 문자열 형식이거나 객체 데이터 구조입니다. Python에서 객체 데이터 구조는 리스트와 사전이 서로 중첩된 형태로 구성됩니다. 객체 데이터 구조를 사용하면 데이터 구조에서 요소를 추가, 나열, 검색, 제거할 수 있는 Python 메서드(리스트와 사전용)를 사용할 수 있습니다. 문자열 형식은 주로 데이터를 다른 프로그램에 전달하거나 데이터 구조에 로드하는 데 사용됩니다.

JSON을 데이터 구조로 다시 로드하려면 "loads" 메서드를 사용합니다. 이 메서드는 문자열을 받아 JSON 객체 데이터 구조로 변환합니다:

    import json 
    print(json.loads(json_string))

데이터 구조를 JSON으로 인코딩하려면 "dumps" 메서드를 사용합니다. 이 메서드는 객체를 받아 문자열을 반환합니다:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python은 pickle이라는 Python 고유의 데이터 직렬화 방법(더 빠른 대안인 cPickle도 있음)을 지원합니다.

pickle을 동일한 방식으로 사용할 수 있습니다.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

이 연습의 목표는 "Me" : 800이라는 키-값 쌍이 추가된 JSON 문자열을 출력하는 것입니다.