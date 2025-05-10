Tutorial
--------

تەڭشەكلەر تەكرارلانمىغان تىزىملىك. بىر ئابزاستا ئىشلىتىلگەن سۆزلەرنىڭ تىزىملىكىنى توپلىماقچى دەيلى:

    print(set("my name is Eric and Eric is my name".split()))

بۇنىڭدا «مېنىڭ» ، «ئىسمىم» ، «is» ، «ئېرىك» ، ئاخىرىدا «ۋە» بار تىزىملىك چىقىرىلىدۇ. قالغان جۈملىلەر ئاللىقاچان توپلانغان سۆزلەرنى ئىشلىتىدىغان بولغاچقا ، ئىككى قېتىم قىستۇرۇلمايدۇ.

يۈرۈشلۈكلەر Python دىكى كۈچلۈك قورال ، چۈنكى ئۇلار باشقا يۈرۈشلۈكلەر ئارىسىدىكى پەرق ۋە كېسىشىش نۇقتىلىرىنى ھېسابلاش ئىقتىدارىغا ئىگە. مەسىلەن ، A ۋە B پائالىيەتلىرىگە قاتناشقۇچىلارنىڭ تىزىملىكى بار دېگىن:

    a = set(["Jake", "John", "Eric"])
    print(a)
    b = set(["John", "Jill"])
    print(b)

قايسى ئەزالارنىڭ ھەر ئىككى پائالىيەتكە قاتناشقانلىقىنى بىلىش ئۈچۈن ، «كېسىشىش» ئۇسۇلىنى قوللانسىڭىز بولىدۇ:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.intersection(b))
    print(b.intersection(a))

قايسى ئەزالارنىڭ پەقەت بىرلا پائالىيەتكە قاتناشقانلىقىنى بىلىش ئۈچۈن ، «symmetric_difference» ئۇسۇلىنى ئىشلىتىڭ:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.symmetric_difference(b))
    print(b.symmetric_difference(a))

قايسى ئەزالارنىڭ پەقەت بىرلا پائالىيەتكە قاتناشقانلىقىنى ، يەنە بىر پائالىيەتكە قاتناشمىغانلىقىنى بىلىش ئۈچۈن ، «پەرق» ئۇسۇلىنى ئىشلىتىڭ:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.difference(b))
    print(b.difference(a))

بارلىق قاتناشقۇچىلارنىڭ تىزىملىكىنى تاپشۇرۇۋېلىش ئۈچۈن ، «ئىتتىپاق» ئۇسۇلىنى ئىشلىتىڭ:

    a = set(["Jake", "John", "Eric"])
    b = set(["John", "Jill"])
    
    print(a.union(b))

تۆۋەندىكى مانېۋىردا ، بېرىلگەن تىزىملىكتىن پايدىلىنىپ A پائالىيىتىگە قاتناشمىغان بارلىق پائالىيەتلەرنى ئۆز ئىچىگە ئالغان بىر يۈرۈشنى بېسىپ چىقىرىڭ.

Tutorial Code
-------------
a = ["Jake", "John", "Eric"]
b = ["John", "Jill"]

Expected Output
---------------
test_output_contains("['Jake', 'Eric']")
success_msg("Nice work!")

Solution
--------
a = ["Jake", "John", "Eric"]
b = ["John", "Jill"]

A = set(a)
B = set(b)

print(A.difference(B))
