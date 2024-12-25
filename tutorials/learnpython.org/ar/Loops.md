هناك نوعان من الحلقات في بايثون، وهما for وwhile.

### حلقة "for"

حلقات for تكرارية فوق تسلسل معين. هنا مثال:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

حلقات for يمكنها التكرار على تسلسل من الأرقام باستخدام وظائف "range" و"xrange". الفرق بين range وxrange هو أن دالة range ترجع قائمة جديدة بأرقام من النطاق المحدد، بينما xrange ترجع مكرراً، وهو أكثر كفاءة. (بايثون 3 يستخدم دالة range، التي تعمل مثل xrange). لاحظ أن دالة range تبدأ العد من الصفر.

    # يطبع الأرقام 0،1،2،3،4
    for x in range(5):
        print(x)

    # يطبع 3،4،5
    for x in range(3, 6):
        print(x)

    # يطبع 3،5،7
    for x in range(3, 8, 2):
        print(x)

### الحلقات "while"

الحلقات while تكرر ما دام هناك شرط بوليني معين مستوفى. على سبيل المثال:

    # يطبع 0،1،2،3،4

    count = 0
    while count < 5:
        print(count)
        count += 1  # هذا يعادل count = count + 1

### أوامر "break" و"continue"

تستخدم **break** للخروج من حلقة for أو while، بينما **continue** تُستخدم لتخطي الكتلة الحالية، والعودة إلى جملة "for" أو "while". بعض الأمثلة:

    # يطبع 0،1،2،3،4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # يطبع الأعداد الفردية فقط - 1،3،5،7،9
    for x in range(10):
        # تحقق مما إذا كان x زوجياً
        if x % 2 == 0:
            continue
        print(x)

### هل يمكننا استخدام جملة "else" للحلقات؟

على عكس لغات مثل C،CPP.. يمكننا استخدام **else** للحلقات. عندما يفشل شرط الحلقة لجملة "for" أو "while" يتم تنفيذ الجزء البرمجي في "else". إذا تم تنفيذ جملة **break** داخل حلقة for فعندها يتم تخطي الجزء "else".
لاحظ أن الجزء "else" يتم تنفيذه حتى إذا كان هناك جملة **continue**.

إليك بعض الأمثلة:

    # يطبع 0،1،2،3،4 ثم يطبع "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # يطبع 1،2،3،4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")

تمرين
--------

حلقة من خلال وطباعة كل الأرقام الزوجية من قائمة الأرقام بنفس الترتيب الذي تم استلامها فيه. لا تطبع أي أرقام تأتي بعد 237 في التسلسل.