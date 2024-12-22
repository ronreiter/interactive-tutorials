A dictionary هو نوع من البيانات يشبه المصفوفات، لكنه يعمل مع المفاتيح والقيم بدلاً من الفهارس. يمكن الوصول إلى كل قيمة مخزنة في قاموس باستخدام مفتاح، والذي يمكن أن يكون أي نوع من الكائنات (مثل سلسلة، أو رقم، أو قائمة، إلخ) بدلاً من استخدام الفهرس.

على سبيل المثال، يمكن تخزين قاعدة بيانات لأرقام الهواتف باستخدام القاموس كما يلي:

```python
phonebook = {}
phonebook["John"] = 938477566
phonebook["Jack"] = 938377264
phonebook["Jill"] = 947662781
print(phonebook)
```

وبدلاً من ذلك، يمكن تهيئة قاموس بالقيم نفسها بالنحو التالي:

```python
phonebook = {
    "John" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}
print(phonebook)
```

### Iterating over dictionaries

يمكن تكرار القواميس تمامًا مثل القائمة. ومع ذلك، لا يحافظ القاموس، بخلاف القائمة، على ترتيب القيم المخزنة فيه. لتكرار أزواج المفاتيح والقيم، استخدم البنية التالية:

```python
phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
for name, number in phonebook.items():
    print("Phone number of %s is %d" % (name, number))
```

### Removing a value

لإزالة فهرس محدد، استخدم إحدى الصيغ التالية:

```python
phonebook = {
   "John" : 938477566,
   "Jack" : 938377264,
   "Jill" : 947662781
}
del phonebook["John"]
print(phonebook)
```

أو:

```python
phonebook = {
   "John" : 938477566,
   "Jack" : 938377264,
   "Jill" : 947662781
}
phonebook.pop("John")
print(phonebook)
```

Exercise
--------

أضف "Jake" إلى دفتر الهاتف برقم الهاتف 938273443، وقم بإزالة Jill من دفتر الهاتف.