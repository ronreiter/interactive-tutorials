
Tutorial
--------
خەرىتە ، سۈزگۈچ ۋە ئازايتىش ئىقتىدار پروگرامما تۈزۈشنىڭ ئۈلگىسى. ئۇلار پروگراممېر (سىز) نىڭ تېخىمۇ ئاددىي ، قىسقا كود يېزىشىغا يول قويىدۇ ، ھالقا ۋە شاخلىنىش قاتارلىق ئىنچىكە ھالقىلارنىڭ ھاجىتى يوق.

ماھىيەتتە ، بۇ ئۈچ ئىقتىدار سىزنى بىر نەچچە قېتىم تەكرارلاش ئارقىلىق بىر نەچچە فۇنكىسىيەدە ئىقتىدار ئىشلىتەلەيسىز. "خەرىتە" ۋە "سۈزگۈچ" Python بىلەن قاچىلانغان ("__builtins__" مودۇلىدا) ، ئىمپورت قىلىشنى تەلەپ قىلمايدۇ. `` `````, however, need to imported as it as resides in `` functools``` module. «خەرىتە» دىن باشلاپ ، ئۇلارنىڭ ھەممىسىنىڭ قانداق ئىشلەيدىغانلىقىنى تېخىمۇ ياخشى چۈشىنىۋالايلى.

#### خەرىتە
Python دىكى `` map () `` فۇنكسىيەسىنىڭ تۆۋەندىكى گرامماتىكىسى بار:

```map(func, *iterables)```

Where ```func``` is the function on which each element in ```iterables``` (as many as they are) would be applied on. Notice the asterisk(```*```) on ```iterables```? It means there can be as many iterables as possible, in so far ```func``` has that exact number as required input arguments. Before we move on to an example, it's important that you note the following:

1. In Python 2, the ```map()``` function returns a list. In Python 3, however, the function returns a ```map object``` which is a generator object. To get the result as a list, the built-in ```list()``` function can be called on the map object. i.e. ```list(map(func, *iterables))```
2. The number of arguments to ```func``` must be the number of ```iterables``` listed. 

Let's see how these rules play out with the following examples.

Say I have a list (```iterable```) of my favourite pet names, all in lower case and I need them in uppercase. Traditonally, in normal pythoning, I would do something like this:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Which would then output ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

With ```map()``` functions, it's not only easier, but it's also much more flexible. I simply do this:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

Which would also output the same result. Note that using the defined ```map()``` syntax above, ```func``` in this case is ```str.upper``` and ```iterables``` is the ```my_pets``` list -- just one iterable. Also note that we did not call the ```str.upper``` function (doing this: ```str.upper()```), as the map function does that for us on _each element in the ```my_pets``` list_.

What's more important to note is that the ```str.upper``` function requires only **one** argument by definition and so we passed just **one** iterable to it. So, _if the function you're passing requires two, or three, or n arguments_, then _you need to pass in two, three or n iterables to it_. Let me clarify this with another example.

Say I have a list of circle areas that I calculated somewhere, all in five decimal places. And I need to round each element in the list up to its position decimal places, meaning that I have to round up the first element in the list to one decimal place, the second element in the list to two decimal places, the third element in the list to three decimal places, etc. With ```map()``` this is a piece of cake. Let's see how.

Python already blesses us with the ```round()``` built-in function that takes two arguments -- the number to round up and the number of decimal places to round the number up to. So, since the function requires **two** arguments, we need to pass in **two** iterables.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

See the beauty of ```map()```? Can you imagine the flexibility this evokes?

The ```range(1, 7)``` function acts as the second argument to the ```round``` function (the number of required decimal places per iteration). So as ```map``` iterates through ```circle_areas```, during the first iteration, the first element of ```circle_areas```, ```3.56773``` is passed along with the first element of ```range(1,7)```, ```1``` to ```round```, making it effectively become ```round(3.56773, 1)```. During the second iteration, the second element of ```circle_areas```, ```5.57668``` along with the second element of ```range(1,7)```, ```2``` is passed to ```round``` making it translate to ```round(5.57668, 2)```. This happens until the end of the ```circle_areas``` list is reached.

I'm sure you're wondering: "What if I pass in an iterable less than or more than the length of the first iterable? That is, what if I pass ```range(1, 3)``` or ```range(1, 9999)``` as the second iterable in the above function". And the answer is simple: nothing! Okay, that's not true. "Nothing" happens in the sense that the ```map()``` function will not raise any exception, it will simply iterate over the elements until it can't find a second argument to the function, at which point it simply stops and returns the result.

So, for example, if you evaluate ```result = list(map(round, circle_areas, range(1, 3)))```, you won't get any error even as the length of ```circle_areas``` and the length of ```range(1, 3)``` differ. Instead, this is what Python does: It takes the first element of ```circle_areas``` and the first element of ```range(1,3)``` and passes it to ```round```. ```round``` evaluates it then saves the result. Then it goes on to the second iteration, second element of ```circle_areas``` and second element of ```range(1,3)```, ```round``` saves it again. Now, in the third iteration (```circle_areas``` has a third element), Python takes the third element of ```circle_areas``` and then tries to take the third element of ```range(1,3)``` but since ```range(1,3)``` does not have a third element, Python simply stops and returns the result, which in this case would simply be ```[3.6, 5.58]```. 

Go ahead, try it.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)


The same thing happens if ```circle_areas``` is less than the length of the second iterable. Python simply stops when it can't find the next element in one of the iterables. 

To consolidate our knowledge of the ```map()``` function, we are going to use it to implement our own custom ```zip()``` function. The ```zip()``` function is a function that takes a number of iterables and then creates a tuple containing each of the elements in the iterables. Like ```map()```, in Python 3, it returns a generator object, which can be easily converted to a list by calling the built-in ```list``` function on it. Use the below interpreter session to get a grip of ```zip()``` before we create ours with ```map()```

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

As a bonus, can you guess what would happen in the above session if ```my_strings``` and ```my_numbers``` are not of the same length? No? try it! Change the length of one of them.

Onto our own custom ```zip()``` function!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Just look at that! We have the same result as ```zip```. 

Did you also notice that I didn't even need to create a function using the ```def my_function()``` standard way? That's how flexible ```map()```, and Python in general, is! I simply used a ```lambda``` function. This is not to say that using the standard function definition method (of ```def function_name()```) isn't allowed, it still is. I simply preferred to write less code (be "Pythonic").

That's all about map. Onto ```filter()```

#### Filter
While ```map()``` passes each element in the iterable through a function and returns the result of all elements having passed through the function, ```filter()```, first of all, requires the function to return boolean values (true or false) and then passes each element in the iterable through the function, "filtering" away those that are false. It has the following syntax:

```filter(func, iterable)```

`` Filter () `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` `` ``

1. "خەرىتە ()" گە ئوخشىمايدىغىنى ، پەقەت بىرلا تەكرارلاش تەلەپ قىلىنىدۇ.
2. «فۇنكسىيە» تالاش-تارتىشى ئاق رەڭنى قايتۇرۇش تەلەپ قىلىنىدۇ. ئەگەر ئۇنداق بولمىسا ، "سۈزگۈچ" پەقەت ئۇنىڭغا قايتۇرۇلغان "قايتىلانما" نى قايتۇرىدۇ. ئۇنىڭدىن باشقا ، پەقەت بىرلا تەكرارلىنىشقا ئېھتىياجلىق بولغاچقا ، «فۇنكسىيە» پەقەت بىرلا تالاش-تارتىش قىلىشى كېرەك.
3. مېنىڭ دېمەكچى بولغىنىم ، ئۇ دەل شۇ يەردە - «سۈزگۈچ».

بەزى مىساللارنى كۆرۈپ باقايلى

تۆۋەندىكىسى خىمىيىلىك ئىمتىھاندا 10 ئوقۇغۇچىنىڭ ئېرىشكەن نومۇرى (`` iterable``). «` سۈزگۈچ »ئارقىلىق 75 دىن ئارتۇق نومۇر بىلەن ئۆتكەنلەرنى سۈزۈپ چىقايلى.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

كېيىنكى مىسال پالېندروم تەكشۈرگۈچ بولىدۇ. «پەلەمپەيسىمان سۆز» بىر سۆز ، ئىبارە ياكى تەرتىپ بولۇپ ، ئالدى تەرەپكە ئوخشاش ئوقۇلىدۇ. گۇمانلىق پالېندرومنىڭ بىر توپى (`` iterable```) دىن palindromes بولغان سۆزلەرنى سۈزۈپ چىقايلى.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

Which should output `` ['madam', 'anutforajaroftuna'] ``. 

چىرايلىق رەتلىك ھە؟ ئاخىرىدا ، `` `` (`` `)

#### ئازايتىش
```reduce``` applies a function **of two arguments** cumulatively to the elements of an iterable, optionally starting with an initial argument. It has the following syntax:

```reduce(func, iterable[, initial])```

`` فۇنكسىيە`` بولسا `` قايتىلانغىلى بولىدىغان`` دىكى ھەر بىر ئېلېمېنتنىڭ ھەممىسىگە قوللىنىلىدىغان فۇنكسىيە بولۇپ ، `` ````````````````````````````````````````````````````````````````````````````````````````````````````````` `` `` `` `` `` `` `` ``
1. ئەگەر `` ``````````````````````````````````````````````````````````````````````````````````
2. `` `````` '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' '' 

ئادەتتىكىگە ئوخشاش ، بەزى مىساللارنى كۆرۈپ باقايلى.

ئۆزىمىزنىڭ Python نىڭ ئىچىگە قاچىلانغان `` sum () `` فۇنكسىيەسىنى ئۆزىمىز قۇرايلى. `` Sum () `` فۇنكسىيەسى ئۇنىڭغا تەكرارلانغان بارلىق تۈرلەرنىڭ يىغىندىسىنى قايتۇرىدۇ.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


نەتىجە ، سىز ئويلىغاندەك `` 68``.

ئۇنداقتا ، نېمە ئىش بولدى؟

ئادەتتىكىگە ئوخشاش ، بۇلارنىڭ ھەممىسى تەكرارلىنىشقا مۇناسىۋەتلىك: "ئازايتىش" "سان" دىكى بىرىنچى ۋە ئىككىنچى ئېلېمېنتلارنى ئېلىپ ، ئۇلارنى ئايرىم-ئايرىم ھالدا "Custom_sum" غا يۆتكەيدۇ. `` custom_sum``` ئۇلارنىڭ سوممىسىنى ھېسابلاپ ، ئۇنى `` ```` گە قايتۇرىدۇ. `` ````` ئاندىن بۇ نەتىجىنى ئېلىپ ، ئۇنى «Custom_sum» نىڭ بىرىنچى ئېلېمېنتى سۈپىتىدە قوللىنىدۇ ۋە «سان» دىكى كېيىنكى ئېلېمېنتنى (ئۈچىنچى) نى «ئېلېمېنت» نىڭ ئىككىنچى ئېلېمېنتى سۈپىتىدە «Custom_sum» غا ئالىدۇ. `` ```````````````````````````````````````````````````````````````````````` 

ئىختىيارىي `` initial`` قىممىتىنى ئىشلەتكەندە نېمە ئىش يۈز بېرىدىغانلىقىنى كۆرۈپ باقايلى.


    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


نەتىجە ، سىز ئويلىغاندەك ، `` 78`` ، چۈنكى `` ````````````````````````````````````````````````````````````````````````````


بۇلارنىڭ ھەممىسى Python نىڭ خەرىتىسى ، ئازايتىش ۋە سۈزگۈچكە مۇناسىۋەتلىك. تۆۋەندىكى ئىقتىدارلارنى ئىشلىتىپ سىناپ بېقىڭ ، ھەر بىر ئىقتىدارغا بولغان چۈشەنچىڭىزنى ئېنىقلاڭ.

چېنىقىش
--------
بۇ مانېۋىردا بۇزۇلغان كودنى ئوڭشاش ئۈچۈن «خەرىتە» ، «سۈزگۈچ» ۋە «ئازايتىش» نىڭ ھەر بىرىنى ئىشلىتىسىز. 

Tutorial Code
-------------
from functools import reduce 

# Use map to print the square of each numbers rounded
# to three decimal places
my_floats = [4.35, 6.09, 3.25, 9.77, 2.16, 8.88, 4.59]

# Use filter to print only the names that are less than 
# or equal to seven letters
my_names = ["olumide", "akinremi", "josiah", "temidayo", "omoseun"]

# Use reduce to print the product of these numbers
my_numbers = [4, 6, 9, 23, 5]

# Fix all three respectively.
map_result = list(map(lambda x: x, my_floats))
filter_result = list(filter(lambda name: name, my_names, my_names))
reduce_result = reduce(lambda num1, num2: num1 * num2, my_numbers, 0)

print(map_result)
print(filter_result)
print(reduce_result)

Expected Output
---------------
test_output_contains("[18.922, 37.088, 10.562, 95.453, 4.666, 78.854, 21.068]")
test_output_contains("['olumide', 'josiah', 'omoseun']")
test_output_contains("24840")
success_msg("Congrats! Nice work.")

Solution
--------
#### Map
from functools import reduce 

my_floats = [4.35, 6.09, 3.25, 9.77, 2.16, 8.88, 4.59]
my_names = ["olumide", "akinremi", "josiah", "temidayo", "omoseun"]
my_numbers = [4, 6, 9, 23, 5]

map_result = list(map(lambda x: round(x ** 2, 3), my_floats))
filter_result = list(filter(lambda name: len(name) <= 7, my_names))
reduce_result = reduce(lambda num1, num2: num1 * num2, my_numbers)

print(map_result)
print(filter_result)
print(reduce_result)
