Tutorial
--------

Python provides built-in JSON libraries to encode and decode JSON.

In Python 2.5, the simplejson module is used, whereas in Python 2.7, the json module is used. Since this interpreter uses Python 2.7, we'll be using json.

In order to use the json module, it must first be imported:

    import json

There are two basic formats for JSON data.  Either in a string or the object datastructure.  The object datastructure, in Python, consists of lists and dictionaries nested inside each other.  The object datastructure allows one to use python methods (for lists and dictionaries) to add, list, search and remove elements from the datastructure.  The String format is mainly used to pass the data into another program or load into a datastructure.

To load JSON back to a data structure, use the "loads" method.  This method takes a string and turns it back into the json object datastructure:

    print json.loads(json_string)

To encode a data structure to JSON, use the "dumps" method.  This method takes an object and returns a String:

    json_string = json.dumps([1, 2, 3, "a", "b", "c"])


Python supports a Python proprietary data serialization method called pickle (and a faster alternative called cPickle).

You can use it exactly the same way.

    import cPickle
    pickled_string = cPickle.dumps([1, 2, 3, "a", "b", "c"])
    print cPickle.loads(pickled_string)

The aim of this exercise is to print out the JSON string with key-value pair "Me" : 800 added to it.

Tutorial Code
-------------

#Exercise fix this function, so it adds the given name and salary pair to the json it returns
def add_employee(jsonSalaries, name, salary): 
    # Add your code here

    return jsonSalaries 

#Test code - shouldn't need to be modified
originalJsonSalaries = '{"Alfred" : 300, "Jane" : 301 }'
newJsonSalaries = add_employee(originalJsonSalaries, "Me", 800)
print(newJsonSalaries)

Expected Output
---------------
{"Jane": 301, "Me": 800, "Alfred": 300}