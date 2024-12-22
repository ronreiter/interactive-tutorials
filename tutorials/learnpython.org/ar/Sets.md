# محتوى الدرس

تُعَد المجموعات قوائم بدون إدخالات مكررة. لنفترض أنك تريد جمع قائمة بالكلمات المستخدمة في فقرة:

    print(set("my name is Eric and Eric is my name".split()))

سيطبع هذا الأمر قائمة تحتوي على "my" و"name" و"is" و"Eric" وأخيراً "and". نظرًا لأن باقي الجملة يستخدم كلمات موجودة بالفعل في المجموعة، فلن يتم إدخالها مرتين.

المجموعات هي أداة قوية في بايثون لأنها تمتلك القدرة على حساب الفروق والتقاطعات بين مجموعات أخرى. على سبيل المثال، افترض أن لديك قائمة بالمشاركين في الحدثين A وB:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

لمعرفة الأعضاء الذين حضروا كلا الحدثين، يمكنك استخدام طريقة "intersection":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

لمعرفة الأعضاء الذين حضروا فقط أحد الحدثين، استخدم طريقة "symmetric_difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

لمعرفة الأعضاء الذين حضروا أحد الحدثين ولم يحضروا الآخر، استخدم طريقة "difference":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

لتلقي قائمة بجميع المشاركين، استخدم طريقة "union":

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

**تمرين--------**

في التمرين أدناه، استخدم القوائم المعطاة لطباعة مجموعة تحتوي على جميع المشاركين من الحدث A الذين لم يحضروا الحدث B.