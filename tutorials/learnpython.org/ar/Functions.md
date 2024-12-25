### ما هي الدوال؟

الدوال تعتبر وسيلة مريحة لتقسيم الكود إلى مجموعة من الكتل المفيدة، مما يسمح لنا بتنظيم الكود، وجعله أكثر قابلية للقراءة، وإعادة استخدامه وتوفير الوقت. كما تعتبر الدوال وسيلة أساسية لتعريف الواجهات حتى يتمكن المبرمجون من مشاركة أكوادهم.

### كيف تكتب دوال في بايثون؟

كما رأينا في الدروس السابقة، تستخدم بايثون الكتل.

الكتلة هي منطقة من الكود مكتوبة في الشكل التالي:

    block_head:
        1st block line
        2nd block line
        ...

حيث تكون سطر الكتلة مزيداً من كود بايثون (حتى كتلة أخرى)، ورأس الكتلة يكون بالشكل التالي:
block_keyword block_name(argument1,argument2, …)
الكلمات المفتاحية للكتل التي تعرفها بالفعل هي "if", "for"، و "while".

الدوال في بايثون تُعرّف باستخدام كلمة الكتلة المفتاحية "def"، تليها اسم الدالة كما في اسم الكتلة.
على سبيل المثال:

    def my_function():
        print("Hello From My Function!")


قد تستقبل الدوال أيضًا معطيات (متغيرات يتم تمريرها من المستدعي إلى الدالة).
على سبيل المثال:

    def my_function_with_args(username, greeting):
        print("Hello, %s , From My Function!, I wish you %s"%(username, greeting))


قد تعيد الدوال قيمة إلى المستدعي، باستخدام الكلمة المفتاحية 'return'.
على سبيل المثال:

    def sum_two_numbers(a, b):
        return a + b

### كيف تنادي الدوال في بايثون؟

ببساطة اكتب اسم الدالة متبوعاً بـ ()، مع وضع أي معطيات مطلوبة داخل الأقواس.
على سبيل المثال، لنناد الدوال المكتوبة أعلاه (في المثال السابق):

    # Define our 3 functions
    def my_function():
        print("Hello From My Function!")

    def my_function_with_args(username, greeting):
        print("Hello, %s, From My Function!, I wish you %s"%(username, greeting))

    def sum_two_numbers(a, b):
        return a + b

    # print(a simple greeting)
    my_function()

    #prints - "Hello, John Doe, From My Function!, I wish you a great year!"
    my_function_with_args("John Doe", "a great year!")

    # after this line x will hold the value 3!
    x = sum_two_numbers(1,2)  


التمرين
--------

في هذا التمرين، ستستخدم دالة موجودة، بينما تضيف دالتك الخاصة لإنشاء برنامج وظيفي كامل.

1. أضف دالة باسم `list_benefits()` التي تعيد قائمة النصوص التالية: "كود أكثر تنظيمًا"، "كود أكثر قابلية للقراءة"، "إعادة استخدام الكود بسهولة"، "السماح للمبرمجين بمشاركة وتوصيل الكود معًا"

2. أضف دالة باسم `build_sentence(info)` التي تستقبل معطى واحد يحتوي على نص وتعيد جملة تبدأ بالنص المعطى وتنتهي بالجملة " is a benefit of functions!"

3. قم بتشغيل جميع الدوال لترى كيف تعمل معًا!