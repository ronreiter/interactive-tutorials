Tutorial
--------
Maps
----
Maps are used to store key-value pairs, where the keys are unique and are used to access the corresponding values. So instead of accessing its elements/values using an index (start from index 0) like in Arrays and Slices, we access the values using the keys. When we add a key-value pairs with key that already exists in the map, the new value we set will replace the old value of the corresponding key. While arrays and slices have a fixed size, in maps, we can add as many as key-value pairs as we want.

In other programming languages, maps are also known as dictionaries or hashmaps. For example, in Python or C#, we can use dictionaries to store key-value pairs. In Java or Javascrtipt, we can use hashmaps or objexts for the same purpose.

Declaration
-----------

Below are syntax for **defining** maps. We can also use a 'make' function for defining a map. The function's purpose is to return a map of the specified type, which is initialised and prepared for use.

    var <map_name> map[<keys_datatype>]<values_datatype>
    <map_name> := make(map[<keys_datatype>]<values_datatype>)

This is how we use **map literal** for assigning directly some key-value pairs to a map.

    <map variable name> := map[<keys_datatype>]<values_datatype>{
        <key_1>: <value_1>,
        <key_2>: <value_2>,
        ...
        <key_n>: <value_n>,
    }

For example, we have some information of a user, we can use map to store it.

    var user map[string]string = map[string]string{
        "name": "John Doe",
        "phone": "123456789",
        "email": "johndoe@example.com",
    }

Accessing and Modifying Maps
-------------------------------

To **access** or **retrieve** an element.

    username := user["name"]
    fmt.Println(user["address"])

If the key we are accessing for doesn't exist, it will return the default value for that value type, such as "" for string, false for boolean, and 0 for number.

We can also **check** whether the key-value pairs exists or not in the map below. First return value is the value of correspoonding key and the second one tells us about the key-value pairs presents.

    userAddress, ok := user["address"]

The value of ok will be `true` if key "address" is in "user" map. Vice versa.

To **add** a new key-value pairs or **replace** existing one in a map.

    user["country"] = "Singapore"

If key `country` has already been in the map, the existing value will be replaced by new value "Singapore". In contrary, if it doesn't exist yet, a new key-value pairs will be added.

To **delete** a key-value pairs in the map, we can utilize a 'delete' function.

    delete(user, "country")

Exercise
--------

Create a new map called studentGrades that maps a student's name (string) to their numerical grade (integer). You will need to populate the map, verify if a specific student exists, and remove an entry.

Here is the task specification:

1. Create the map and add the following entries:
    
    - "Danny" with a grade of 90
    
    - "John" with a grade of 85
    
    - "Belle" with a grade of 70

5. Change "Belle"'s grade to 75.

6. Remove the entry for "John" from the map.

7. Use a conditional check to see if "Danny", "John", "Belle" exists in the map:
    
    - If the name exists in the map, print "{name} with a grade of {grade}"
    
    - If the name doesn't exists in the map, print "{name} doesn't have a grade in map"


Tutorial Code
-------------
    package main

    import "fmt"

    func main() {
        // 1. TODO: Initialize the map 'studentGrades' and add Danny, John, and Belle

        // 2. TODO: Update Belle's grade to 75

        // 3. TODO: Delete John from the map

        for _, name := range []string{"Danny", "John", and "Belle"} {
            // 4. TODO: Check to see if "Danny", "John", and "Belle" exists in the map, 
            // use grade and exists as a variable name


            if exists {
                
            } else {
                
            }
        }
    }

Expected Output
---------------
    Danny with a grade of 90
    John doesn't have a grade in map
    Belle with a grade of 75

Solution
--------
    package main

    import "fmt"

    func main() {
        // 1. Initialize the map 'studentGrades' and add Danny, John, and Belle
        studentGrades := make(map[string]int)
        studentGrades["Danny"] = 90
        studentGrades["John"] = 85
        studentGrades["Belle"] = 70

        // 2. Update Belle's grade to 75
        studentGrades["Belle"] = 75

        // 3. Delete John from the map
        delete(studentGrades, "John")

        for _, name := range []string{"Danny", "John", "Belle"} {
            // 4. TODO: Check to see if "Danny", "John", and "Belle" exists in the map
            grade, exists := studentGrades[name]
            if exists {
                fmt.Println(name, "with a grade of", grade)
            } else {
                fmt.Println(name, "doesn't have a grade in map")
            }
        }
    }

