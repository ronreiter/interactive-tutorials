객체는 변수와 함수를 하나의 엔터티로 캡슐화한 것입니다. 객체는 클래스에서 변수와 함수를 가져옵니다. 클래스는 본질적으로 객체를 생성하기 위한 템플릿입니다.

아주 기본적인 클래스는 다음과 같이 보일 것입니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

그 "self"를 매개변수로 포함해야 하는 이유는 조금 있다가 설명하겠습니다. 먼저, 위의 클래스(템플릿)를 객체에 할당하려면 다음과 같이 하면 됩니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

이제 변수 "myobjectx"는 클래스 "MyClass"의 객체를 가지고 있으며, "MyClass"라는 클래스에 정의된 변수와 함수를 포함하고 있습니다.

### 객체 변수에 접근하기

새로 생성된 객체 "myobjectx" 안의 변수에 접근하려면 다음과 같이 합니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

예를 들어 아래는 문자열 "blah"를 출력할 것입니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

같은 클래스에서(같은 변수 및 함수를 정의한 상태로) 여러 개의 다른 객체를 생성할 수 있습니다. 그러나 각 객체는 클래스에 정의된 변수의 독립적인 복사본을 포함합니다. 예를 들어, "MyClass" 클래스로 또 다른 객체를 정의한 다음 위 변수의 문자열을 변경한다고 했을 때:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # 그런 다음 두 값을 모두 출력합니다
    print(myobjectx.variable)
    print(myobjecty.variable)


### 객체 함수에 접근하기

객체 내의 함수에 접근하려면 변수에 접근할 때와 유사한 표기법을 사용합니다:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

위의 코드는 "This is a message inside the class."라는 메시지를 출력합니다.

### __init__()

`__init__()` 함수는 클래스가 초기화될 때 호출되는 특별한 함수입니다. 이는 클래스에서 값을 할당하기 위해 사용됩니다.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) # '7'을 출력합니다
    
Exercise
--------

차량에 대해 정의된 클래스가 있습니다. car1과 car2라는 두 개의 새로운 차량을 만드세요.
car1을 이름이 'Fer'이고 빨간색 컨버터블이며 가격이 $60,000.00이 되도록 설정하고,
car2를 파란색 밴이며 이름이 'Jump'이고 가격이 $10,000.00이 되도록 하세요.