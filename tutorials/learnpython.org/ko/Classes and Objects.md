Objects는 변수와 함수를 하나의 엔티티로 캡슐화한 것입니다. Objects는 클래스에서 변수와 함수를 가져옵니다. 클래스는 본질적으로 객체를 만드는 템플릿입니다.

아주 기본적인 클래스는 다음과 같이 보일 것입니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

나중에 왜 "self"를 매개변수로 포함해야 하는지 설명하겠습니다. 먼저, 위의 클래스(템플릿)를 객체에 할당하려면 다음과 같이 합니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

이제 변수 "myobjectx"는 클래스 "MyClass"의 객체를 포함하며, 이 객체는 클래스 "MyClass" 내에서 정의된 변수와 함수를 포함합니다.

### Accessing Object Variables

새로 생성된 객체 "myobjectx" 내의 변수에 접근하려면 다음과 같이 합니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

그래서 예를 들어 아래는 문자열 "blah"를 출력할 것입니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

같은 클래스(정의된 같은 변수와 함수를 가진)의 여러 다른 객체를 생성할 수 있습니다. 그러나 각 객체는 클래스 내 정의된 변수의 독립적인 복사본을 포함합니다. 예를 들어, "MyClass" 클래스로 다른 객체를 정의하고 위의 변수의 문자열을 변경하면:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # 그 후 두 값을 출력합니다
    print(myobjectx.variable)
    print(myobjecty.variable)


### Accessing Object Functions

객체 내의 함수에 접근하려면 변수에 접근하는 것과 유사한 표기법을 사용합니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

위의 코드는 "This is a message inside the class." 메시지를 출력할 것입니다.

### __init__()

`__init__()` 함수는 클래스가 초기화될 때 호출되는 특별한 함수입니다.
클래스 내에서 값을 할당하는 데 사용됩니다.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) # '7'을 출력합니다
    
Exercise
--------

우리는 차량을 위한 클래스를 정의했습니다. car1 및 car2라는 두 개의 새로운 차량을 만드세요.
car1은 $60,000.00의 가격으로 Fer라는 이름을 가진 빨간색 컨버터블로 설정하세요,
그리고 car2는 $10,000.00의 가격으로 Jump라는 이름의 파란색 밴으로 설정하세요.