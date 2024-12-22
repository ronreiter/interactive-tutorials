الأشياء هي تجسيد للمتغيرات والوظائف في كيان واحد. تحصل الأشياء على متغيراتها ووظائفها من الفئات. الفئات هي في الأساس قالب لإنشاء أشيائك.

فئة بسيطة جدًا ستبدو شيئًا مثل هذا:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

سنشرح لاحقًا لماذا يجب عليك تضمين "self" كمعامل قليلاً. أولاً، لتعيين الفئة أعلاه (القالب) إلى كائن ستقوم بالآتي:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

الآن المتغير "myobjectx" يحمل كائنًا من الفئة "MyClass" يحتوي على المتغير والوظيفة المحددة داخل الفئة المسماة "MyClass".

### الوصول إلى متغيرات الكائن

للوصول إلى المتغير داخل الكائن الجديد "myobjectx" ستقوم بالآتي:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.variable

لذلك على سبيل المثال، فإن الكود أدناه سيُخرج السلسلة النصية "blah":

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    print(myobjectx.variable)

يمكنك إنشاء عدة كائنات مختلفة تنتمي إلى نفس الفئة (تحتوي على نفس المتغيرات والوظائف المحددة). ومع ذلك، كل كائن يحتوي على نسخ مستقلة من المتغيرات المحددة في الفئة. على سبيل المثال، إذا كنا نريد تعريف كائن آخر باستخدام الفئة "MyClass" ثم نغير السلسلة النصية في المتغير أعلاه:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()
    myobjecty = MyClass()

    myobjecty.variable = "yackity"

    # ثم طبع كلا القيمتين
    print(myobjectx.variable)
    print(myobjecty.variable)

### الوصول إلى وظائف الكائن

للوصول إلى وظيفة داخل كائن، تستخدم نفس النمط الذي يستخدم للوصول إلى متغير:

    class MyClass:
        variable = "blah"

        def function(self):
            print("This is a message inside the class.")

    myobjectx = MyClass()

    myobjectx.function()

ما سبق سوف يطبع الرسالة: "This is a message inside the class."

### __init__()

دالة `__init__()`، هي دالة خاصة تُستدعى عند إنشاء الفئة.
تُستخدم لتعيين القيم في الفئة.

    class NumberHolder:
       
       def __init__(self, number):
           self.number = number
           
       def returnNumber(self):
           return self.number

    var = NumberHolder(7)
    print(var.returnNumber()) # يطبع '7'
    
تمرين
--------

لدينا فئة معرفة للمركبات. قم بإنشاء مركبتين جديدتين تسمى car1 و car2.
حدد car1 ليكون سيار حمراء قابلة للتحويل تقدر بـ 60,000.00 دولار باسم Fer،
و car2 لتكون شاحنة زرقاء باسم Jump تقدر بـ 10,000.00 دولار.