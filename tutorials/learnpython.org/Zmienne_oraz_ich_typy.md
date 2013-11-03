Zmienne_oraz_ich_typy
=====================

Tutorial
--------

Python jest językiem stricte obiektowym i bez "typów statycznych". Nie musisz deklarować zmiennych przed ich użyciem lub deklarować ich typ. Każda zmienna w Python'ie jest obiektem.

W tym samouczku zostanie omówione kilka podstawowych typów zmiennych.

### Liczby
Python obsługuje dwa typy liczb - ctałkowite i zmiennoprzecinkowe (in. rzeczywiste). (Obsługiwane są także liczby zespolone, ale nie zostanie to wyjaśnione w tym kursie).
Aby zainicjować zmienną, użyj następującej składni:

	mojacalkowita = 7

W celu zainicjowania liczby zmiennoprzecinkowej musisz użyć jednego z następujących sposobów zapisu:

	mojarzecz = 7.0
	mojarzecz = float(7)

### Napisy
Napisy (in. stringi) są inicjowane za pomocą pojedyńczego (in. apostrofu) lub podwójnego cudzysłowu.

	mojnapis = 'witaj'
	mojnapis = "witaj"

Różnica między nimi polega na tym, że dzięki użyciu podwójnego cudzysłowu można bez przeszkód używać apostrofów (podczas gdy oznaczałyby koniec napisu przy użyciu pojedyńczego cudzysłowu).

	Mój napis = "Nie martw się o 'podstępne' apostrofy."

Jest kilka możliwych sposobów na zainicjowanie napisów, które ułatwiają zawieranie takich znaków jak powrót karetki, ukośniki i znaki Unicode. Wykracza to poza tematykę samouczka, ale jest zawarte w dokumentacji Python'a.

Na liczbach i stringach można wykonywać prostwe operacje:

	jeden = 1
	dwa = 2
	trzy = jeden + dwa
	
	witaj = "witaj"
	swiece = "świecie"
	witajswiecie = witaj + " " + swiecie

Możliwe jest "jednoczesne" przypisanie wartości kilku różnym zmiennym w tej samej linijce jak w przykładzie poniżej

	a, b = 3, 4

Operacje, które mieszają ze sobą liczby i napisy nie są obsługiwane:

	# To nie będzie działać!
	print jeden + dwa + witaj

Ćwiczenie
Celem tego ćwiczenia jest zmienny zawierających napis, liczbę całkowitą i zmiennoprzecinkową.
Napis powinien być nazwany mystring i zawierać słówko "hello". Zmiennoprzecinkowa powinna nazywać się myfloat i zawierać liczbę 10, a liczbę całkowitą nazwij myint i przypisz jej wartosc 20.

        print "Ta linijka tekstu zostanie wypisana."



### Exercise

Celem tego ćwiczenia jest zmienny zawierających napis, liczbę całkowitą i zmiennoprzecinkową.
Napis powinien być nazwany mystring i zawierać słówko "hello". Zmiennoprzecinkowa powinna nazywać się myfloat i zawierać liczbę 10, a liczbę całkowitą nazwij myint i przypisz jej wartosc 20.

	print "Ta linijka tekstu zostanie wypisana."

Tutorial Code
-------------
	# change this code
	mystring = None
	myfloat = None
	myint = None

	# testing code
	if mystring == "hello":
	    print "String: %s" % mystring
	if isinstance(myfloat, float) and myfloat == 10.0:
	    print "Float: %d" % myfloat
	if isinstance(myint, int) and myint == 20:
	    print "Integer: %d" % myint

Expected Output
---------------
	String: hello
	Float: 10
	Integer: 20