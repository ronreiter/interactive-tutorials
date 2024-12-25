كل دالة في بايثون تستقبل عددًا محددًا مسبقًا من المعطيات إذا تم تعريفها بشكل عادي، مثل هذا:

    def myfunction(first, second, third):
        # do something with the 3 variables
        ...

من الممكن تعريف الدوال التي تستقبل عددًا متغيرًا من المعطيات باستخدام الصيغة التالية:

    def foo(first, second, third, *therest):
        print("First: %s" % first)
        print("Second: %s" % second)
        print("Third: %s" % third)
        print("And all the rest... %s" % list(therest))

المتغير "therest" هو قائمة من المتغيرات التي تستقبل جميع المعطيات التي أعطيت للدالة "foo" بعد المعطيات الثلاثة الأولى. لذا، فإن استدعاء `foo(1, 2, 3, 4, 5)` سوف يطبع:

    def foo(first, second, third, *therest):
        print("First: %s" %(first))
        print("Second: %s" %(second))
        print("Third: %s" %(third))
        print("And all the rest... %s" %(list(therest)))
    
    foo(1, 2, 3, 4, 5)

من الممكن أيضًا إرسال معطيات الدوال باستخدام الكلمات المفتاحية، بحيث لا يهم ترتيب المعطيات، باستخدام الصيغة التالية. الكود التالي يعطي الناتج التالي:
```The sum is: 6
    Result: 1```

    def bar(first, second, third, **options):
        if options.get("action") == "sum":
            print("The sum is: %d" %(first + second + third))
    
        if options.get("number") == "first":
            return first
    
    result = bar(1, 2, 3, action = "sum", number = "first")
    print("Result: %d" %(result))

الدالة "bar" تستقبل 3 معطيات. إذا تم استقبال معطى إضافي باسم "action"، ويوجد توجيه بجمع الأرقام، سيتم طباعة المجموع. بدلاً من ذلك، ستعلم الدالة أنها يجب أن تعيد المعطى الأول إذا كانت قيمة معطى "number" المدخل للدالة تساوي "first".

Exercise
--------

قم بملء الدالتين `foo` و `bar` بحيث يمكنهما استقبال عدد متغير من المعطيات (3 أو أكثر).
يجب أن تعيد الدالة `foo` عدد المعطيات الإضافية المستلمة.
يجب أن تعيد الدالة `bar` `True` إذا كانت قيمة المعطى بالكلمة المفتاحية `magicnumber` تساوي 7، و `False` بخلاف ذلك.