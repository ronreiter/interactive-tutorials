Tutorial
--------

Python بولسا JSON نى كودلاش ۋە يېشىش ئۈچۈن ئىچىگە ئورۇنلاشتۇرۇلغان JSON كۈتۈپخانىلىرى بىلەن تەمىنلەيدۇ.

Python 2.5 دە ، simplejson مودۇلى ئىشلىتىلگەن ، Python 2.7 دە json مودۇلى ئىشلىتىلگەن. بۇ تەرجىمان Python 2.7 نى ئىشلىتىدىغان بولغاچقا ، بىز json ئىشلىتىمىز.

Json مودۇلىنى ئىشلىتىش ئۈچۈن ئالدى بىلەن ئىمپورت قىلىش كېرەك:

    import json

JSON سانلىق مەلۇماتلىرىنىڭ ئىككى ئاساسىي شەكلى بار.  ياكى بىر قۇر ياكى ئوبيېكت سانلىق مەلۇمات قۇرۇلمىسىدا.  Python دىكى ئوبيېكت سانلىق مەلۇمات قۇرۇلمىسى بىر-بىرىگە ئۇلانغان تىزىملىك ۋە لۇغەتلەردىن تەركىب تاپقان.  ئوبيېكت سانلىق مەلۇمات قۇرۇلمىسى  بىزگە (تىزىملىك ۋە لۇغەت ئۈچۈن) سانلىق مەلۇمات قۇرۇلمىسىدىن ئېلېمېنتلارنى قوشۇش ، تىزىش ، ئىزدەش ۋە ئۆچۈرۈشكە يول قويىدۇ.  String فورماتى ئاساسلىقى سانلىق مەلۇماتنى باشقا پروگراممىغا يەتكۈزۈش ياكى سانلىق مەلۇمات قۇرۇلمىسىغا يۈكلەش ئۈچۈن ئىشلىتىلىدۇ.

JSON نى سانلىق مەلۇمات قۇرۇلمىسىغا قايتا يۈكلەش ئۈچۈن ، «loads» ئۇسۇلىنى ئىشلىتىڭ.  بۇ ئۇسۇل بىر ھەرىپ تىزمىسىنى ئېلىپ ئۇنى json ئوبيېكت سانلىق مەلۇمات قۇرۇلمىسىغا ئايلاندۇرىدۇ:

    import json 
    print(json.loads(json_string))

JSON غا سانلىق مەلۇمات قۇرۇلمىسىنى كودلاش ئۈچۈن ، «dumps» ئۇسۇلىنى ئىشلىتىڭ.  بۇ ئۇسۇل بىر ئوبيېكتنى ئېلىپ بىر قۇرنى قايتۇرىدۇ:

    import json
    json_string = json.dumps([1, 2, 3, "a", "b", "c"])
    print(json_string)

Python بولسا pickle (ۋە cPickle دەپ ئاتىلىدىغان تېخىمۇ تېز ئۇسۇل) دەپ ئاتىلىدىغان Python شەخسىي سانلىق مەلۇمات تەرتىپلەش ئۇسۇلىنى قوللايدۇ.

ئۇنى ئوخشاش ئۇسۇلدا ئىشلىتەلەيسىز.

    import pickle
    pickled_string = pickle.dumps([1, 2, 3, "a", "b", "c"])
    print(pickle.loads(pickled_string))

بۇ مەشىقنىڭ مەقسىتى ئاچقۇچلۇق جۈپ «مەن»: ئۇنىڭغا 800 قوشۇلغان JSON تىزمىسىنى بېسىپ چىقىرىش.

Tutorial Code
-------------

import json

# fix this function, so it adds the given name
# and salary pair to salaries_json, and return it
def add_employee(salaries_json, name, salary):
    # Add your code here

    return salaries_json

# test code
salaries = '{"Alfred" : 300, "Jane" : 400 }'
new_salaries = add_employee(salaries, "Me", 800)
decoded_salaries = json.loads(new_salaries)
print(decoded_salaries["Alfred"])
print(decoded_salaries["Jane"])
print(decoded_salaries["Me"])

Expected Output
---------------

test_output_contains("300")
test_output_contains("400")
test_output_contains("800")
success_msg("Great work!")

Solution
--------

import json

# fix this function, so it adds the given name
# and salary pair to salaries_json, and return it
def add_employee(salaries_json, name, salary):
    salaries = json.loads(salaries_json)
    salaries[name] = salary

    return json.dumps(salaries)

# test code
salaries = '{"Alfred" : 300, "Jane" : 400 }'
new_salaries = add_employee(salaries, "Me", 800)
decoded_salaries = json.loads(new_salaries)
print(decoded_salaries["Alfred"])
print(decoded_salaries["Jane"])
print(decoded_salaries["Me"])
