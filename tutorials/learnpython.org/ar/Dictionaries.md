A dictionary هو نوع بيانات مشابه للمصفوفات، ولكنه يعمل باستخدام المفاتيح والقيم بدلاً من الفهارس. يمكن الوصول إلى كل قيمة مخزنة في الـ dictionary باستخدام مفتاح، والذي يمكن أن يكون أي نوع من الكائنات (سلسلة نصية، رقم، قائمة، إلخ) بدلاً من استخدام فهرس للوصول إليها.

على سبيل المثال، يمكن تخزين قاعدة بيانات لأرقام الهواتف باستخدام dictionary كهذا:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

بدلاً من ذلك، يمكن تهيئة dictionary بنفس القيم باستخدام الصياغة التالية:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### Iterating over dictionaries

يمكن تكرار الـ dictionaries تمامًا مثل القوائم. ومع ذلك، الـ dictionary، على خلاف القائمة، لا يحتفظ بترتيب القيم المخزنة فيه. للقيام بتكرار أزواج المفتاح والقيمة، استخدم الصيغة التالية:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### Removing a value

لإزالة فهرس معين، استخدم واحدة من الصيغ التالية:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

أو:

    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


Exercise
--------

أضف "Jake" إلى دفتر الهاتف برقم الهاتف 938273443، وقم بإزالة Jill من دفتر الهاتف.