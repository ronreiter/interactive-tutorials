This section explains how to use basic operators in Python.

### Aritmetiska Operatorer       

Precis som i andra programmeringsspråk kan operatorerna för addition, subtraktion, multiplikation och division användas med siffror.<br>

    number = 1 + 2 * 3 / 4.0
    print(number)

Försök att förutsäga vad svaret kommer att bli. Följer Python prioritetsregler?

En annan tillgänglig operator är modulusoperatorn (%) som returnerar heltalsresten av divisionen. dividend % divisor = rest.

    remainder = 11 % 3
    print(remainder)

Att använda två multiplikationssymboler skapar en potensekvation.

    squared = 7 ** 2
    cubed = 2 ** 3
    print(squared)
    print(cubed)

### Använda Operatorer med Strängar

Python stöder att sammanfoga strängar med additionsoperatorn:

    helloworld = "hello" + " " + "world"
    print(helloworld)

Python stöder även att multiplicera strängar för att skapa en sträng med en upprepande sekvens:

    lotsofhellos = "hello" * 10
    print(lotsofhellos)

### Använda Operatorer med Listor

Listor kan sammanfogas med additionsoperatorn:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers
    print(all_numbers)

Precis som i strängar stöder Python att skapa nya listor med en upprepande sekvens med multiplikationsoperatorn:

    print([1,2,3] * 3)

Övning
--------

Målet med denna övning är att skapa två listor som kallas `x_list` och `y_list`,
vilka innehåller 10 instanser av variablerna `x` respektive `y`.
Du måste också skapa en lista som heter `big_list`, som innehåller
variablerna `x` och `y`, 10 gånger vardera, genom att sammanfoga de två listorna du har skapat.