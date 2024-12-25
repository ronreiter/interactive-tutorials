Decorators تتيح لك إجراء تعديلات بسيطة على الكائنات القابلة للاستدعاء مثل [الدوال](http://www.learnpython.org/en/Functions "") و[الأساليب أو الكلاسات](http://www.learnpython.org/en/Classes%20and%20Objects ""). سنتعامل مع الدوال في هذا الدرس. الصيغة

    @decorator
    def functions(arg):
        return "value"

تعادل:

    def function(arg):
        return "value"
    function = decorator(function) # هذا يمرر الدالة إلى المزخرف ويعيد تعيينها إلى الدوال

كما قد تكون قد لاحظت، المزخرف هو مجرد دالة أخرى تأخذ دالة وتعيد دالة. على سبيل المثال، يمكنك القيام بما يلي:

    def repeater(old_function):
        def new_function(*args, **kwds): # انظر learnpython.org/en/Multiple%20Function%20Arguments لمعرفة كيف يعمل *args و **kwds
            old_function(*args, **kwds) # نقوم بتشغيل الدالة القديمة
            old_function(*args, **kwds) # نقوم بتكرارها مرتين
        return new_function # يجب أن نعيد الدالة الجديدة، أو لن يتم إعادة تعيينها إلى القيمة

هذا سيجعل الدالة تكرر نفسها مرتين.

    >>> @repeater
    def multiply(num1, num2):
        print(num1 * num2)

    >>> multiply(2, 3)
    6
    6

يمكنك أيضاً تعديل النتيجة

    def double_out(old_function):
        def new_function(*args, **kwds):
            return 2 * old_function(*args, **kwds) # تعديل قيمة الإرجاع
        return new_function

وتعديل المدخلات

    def double_Ii(old_function):
        def new_function(arg): # يعمل فقط إذا كانت الدالة القديمة تحتوي على وسيطة واحدة
            return old_function(arg * 2) # تعديل الوسيطة الممررة
        return new_function

وإجراء التحقق.

    def check(old_function):
        def new_function(arg):
            if arg < 0: raise (ValueError, "Negative Argument") # يتسبب هذا في خطأ، وهو أفضل من القيام بشيء خاطئ
            old_function(arg)
        return new_function

لنقل أنك تريد مضاعفة النتيجة بمقدار متغير. يمكنك تعريف المزخرف واستخدامه كالتالي:

    def multiply(multiplier):
        def multiply_generator(old_function):
            def new_function(*args, **kwds):
                return multiplier * old_function(*args, **kwds)
            return new_function
        return multiply_generator # يعيد منشئ جديد
    
    # الاستخدام
    @multiply(3) # multiply ليست منشئ، ولكن multiply(3) هي
    def return_num(num):
        return num
        
    # الآن return_num مزخرفة ومعاد تعيينها إلى نفسها
    return_num(5) # يجب أن تعيد 15

 يمكنك فعل أي شيء تريده مع الدالة القديمة، حتى تجاهلها تمامًا! يمكن للمزخرفات المتقدمة أيضًا التلاعب بسلسلة التوثيق وعدد الوسائط.
للحصول على بعض المزخرفات الرائعة، انتقل إلى <http://wiki.python.org/moin/PythonDecoratorLibrary>.

Exercise
--------
اصنع مصنع مزخرف يعيد مزخرفاً يزين الدوال بوسيط واحد. يجب أن يأخذ المصنع وسيطة واحدة، وهي نوع، ويعيد مزخرفا يجعل الدالة تتحقق مما إذا كانت المدخلات هي النوع الصحيح. إذا كانت خاطئة، يجب أن تطبع("نوع سيء") (في الواقع، يجب أن تثير خطأً، لكن إثارة الأخطاء ليست في هذا الدرس). النظر إلى كود الدرس والخروج المتوقع يمكن أن يساعد إذا كنت مرتبكًا (أعلم أنني سأكون.) قد يساعد استخدام isinstance(object, type_of_object) أو type(object).