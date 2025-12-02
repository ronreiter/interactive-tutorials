Tutorial
--------

لۇغەت سانلار گۇرپىسىغا ئوخشايدىغان سانلىق مەلۇمات تىپى ، ئەمما كۆرسەتكۈچنىڭ ئورنىغا ئاچقۇچ ۋە قىممەت بىلەن ئىشلەيدۇ. لۇغەتتە ساقلانغان ھەر بىر قىممەتنى كۆرسەتكۈچ بىلەن ئەمەس بەلكى ئاچقۇچ ئارقىلىق زىيارەت قىلىشقا بولىدۇ.

مەسىلەن ، تېلېفون نومۇرى سانلىق مەلۇمات ئامبىرىنى مۇشۇنىڭغا ئوخشاش لۇغەت ئارقىلىق ساقلىغىلى بولىدۇ:

    phonebook = {}
    phonebook["John"] = 938477566
    phonebook["Jack"] = 938377264
    phonebook["Jill"] = 947662781
    print(phonebook)

ئۇنىڭدىن باشقا ، تۆۋەندىكى ئىزاھاتتا ئوخشاش قىممەت بىلەن لۇغەتنى قوزغىتىشقا بولىدۇ:

    phonebook = {
        "John" : 938477566,
        "Jack" : 938377264,
        "Jill" : 947662781
    }
    print(phonebook)

### لۇغەتلەرنى باشتىن-ئاياق زىيارەت قىلىش

لۇغەتلەرنى تىزىملىككە ئوخشاش زىيارەت قىلغىلى بولىدۇ. قانداقلا بولمىسۇن ، لۇغەت تىزىملىككە ئوخشىمايدىغىنى ، ئۇنىڭدا ساقلانغان قىممەتلەرنىڭ تەرتىپىنى ساقلىمايدۇ. ھالقىلىق قىممەت جۈپلىرىنى تەكرارلاش ئۈچۈن ، تۆۋەندىكى گرامماتىكىنى ئىشلىتىڭ:
    
    phonebook = {"John" : 938477566,"Jack" : 938377264,"Jill" : 947662781}
    for name, number in phonebook.items():
        print("Phone number of %s is %d" % (name, number))

### قىممەتنى ئۆچۈرۈش

كۆرسىتىلگەن كۆرسەتكۈچنى ئۆچۈرۈش ئۈچۈن ، تۆۋەندىكى ئۇسۇلدىن بىرىنى ئىشلىتىڭ:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    del phonebook["John"]
    print(phonebook)

ياكى:
    
    phonebook = {
       "John" : 938477566,
       "Jack" : 938377264,
       "Jill" : 947662781
    }
    phonebook.pop("John")
    print(phonebook)


كۆنۈكمە
--------

938273443 تېلېفون نومۇرى بىلەن تېلېفون دەپتىرىگە «Jake» نى قوشۇڭ ، تېلېفون دەپتىرىدىن Jill نى ئۆچۈرۈڭ.

Tutorial Code
-------------

phonebook = {  
    "John" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}  
# your code goes here

# testing code
if "Jake" in phonebook:  
    print("Jake is listed in the phonebook.")
    
if "Jill" not in phonebook:      
    print("Jill is not listed in the phonebook.")  


Expected Output
---------------

test_output_contains("Jake is listed in the phonebook.")
test_output_contains("Jill is not listed in the phonebook.")
success_msg("Nice work!")

Solution
--------

phonebook = {  
    "John" : 938477566,
    "Jack" : 938377264,
    "Jill" : 947662781
}  

# your code goes here
phonebook["Jake"] = 938273443  
del phonebook["Jill"]  

# testing code
if "Jake" in phonebook:  
    print("Jake is listed in the phonebook.")
    
if "Jill" not in phonebook:      
    print("Jill is not listed in the phonebook.")  
