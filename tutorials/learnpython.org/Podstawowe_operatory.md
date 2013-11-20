Tutorial
--------

Ta sekcja wyjaśnia jak posługiwać się podstawowymi operatorami w Pythonie.

### Operatory arytmetyczne      


Tak jak w innych językach programowaniaj operatory dodawania, odejmowania, mnożenia i dzielenia mogą być używane na liczbach.<br> 

	liczba = 1 + 2 * 3 / 4.0   

Spróbuj przewidzieć jaką wartość będzie miała ta zmienna. Czy python przestrzega ogólnych reguł kolejności działań?

Innym dostępnym operatorem jest modulo %, który zwraca resztę z dzielenia. dzielna % dzielnik = reszta.
	
	reszta = 11 % 3

Potęgowanie zapisujemy za pomocą dwóch znaków mnożenia.

	kwadrat = 7 ** 2 
	szescian = 2 ** 3

### Działania na napisach

Python pozwala na łączenie napisów za pomocą operatora dodawania:

	witajswiecie = "witaj" + " " + "swiecie"

Python pozwala także na "mnożenie" napisów, czyli uzyskanie ciągu powtarzających się sekwencji:

	DuzoKotow = "Kot" * 10

### Operacje na tablicach

Lists can be joined with the addition operators:

	even_numbers = [2,4,6,8]
	odd_numbers = [1,3,5,7]
	all_numbers = odd_numbers + even_numbers

Just as in strings, Python supports forming new lists with a repeating sequence using the multiplication operator:

	print [1,2,3] * 3

### Exercise

The target of this exercise is to create two lists called x_list and y_list, which contain 10 instances of the variables x and y, respectively. You are also required to create a list called "big_list", which contains the variables "x" and "y", 10 times each, by concatenating the two lists you have created.

Tutorial Code
-------------

	x = object()
	y = object()
	
	# change this code
	x_list = [x]
	y_list = [y]
	big_list = []
	
	print "x_list contains %d objects" % len(x_list)
	print "y_list contains %d objects" % len(y_list)
	print "big_list contains %d objects" % len(big_list)
	
	# testing code
	if x_list.count(x) == 10 and y_list.count(y) == 10:
	    print "Almost there..."
	if big_list.count(x) == 10 and big_list.count(y) == 10:
	    print "Great!"

Expected Output
---------------

	x_list contains 10 objects
	y_list contains 10 objects
	big_list contains 20 objects
	Almost there...
	Great!