Tutoriel
--------

Il existe deux types de boucles en Python : for et while.

### La boucle "for"

Les boucles for itèrent sur une séquence donnée. Voici un exemple :

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

Les boucles for peuvent itérer sur une séquence de nombres en utilisant les fonctions "range" et "xrange". La différence entre range et xrange est que la fonction range renvoie une nouvelle liste avec des nombres de cette plage spécifiée, tandis que xrange renvoie un itérateur, ce qui est plus efficace. (Python 3 utilise la fonction range, qui agit comme xrange). Notez que la fonction range est basée sur zéro.

    # Prints out the numbers 0,1,2,3,4
    for x in range(5):
        print(x)

    # Prints out 3,4,5
    for x in range(3, 6):
        print(x)

    # Prints out 3,5,7
    for x in range(3, 8, 2):
        print(x)

### Boucles "while"

Les boucles while se répètent tant qu'une certaine condition booléenne est remplie. Par exemple :

    # Prints out 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # This is the same as count = count + 1

### Instructions "break" et "continue"

**break** est utilisé pour sortir d'une boucle for ou d'une boucle while, tandis que **continue** est utilisé pour passer le bloc courant et revenir à l'instruction "for" ou "while". Quelques exemples :

    # Prints out 0,1,2,3,4

    count = 0
    while True:
        print(count)
        count += 1
        if count >= 5:
            break

    # Prints out only odd numbers - 1,3,5,7,9
    for x in range(10):
        # Check if x is even
        if x % 2 == 0:
            continue
        print(x)

### Peut-on utiliser la clause "else" avec les boucles ?

Contrairement aux langages comme C, CPP, etc., nous pouvons utiliser **else** avec les boucles. Lorsque la condition de la boucle "for" ou "while" échoue, alors la partie de code dans "else" est exécutée. Si une instruction **break** est exécutée à l'intérieur de la boucle for, alors la partie "else" est ignorée. Notez que la partie "else" est exécutée même s'il y a une instruction **continue**.

Voici quelques exemples :

    # Prints out 0,1,2,3,4 and then it prints "count value reached 5"

    count=0
    while(count<5):
        print(count)
        count +=1
    else:
        print("count value reached %d" %(count))

    # Prints out 1,2,3,4
    for i in range(1, 10):
        if(i%5==0):
            break
        print(i)
    else:
        print("this is not printed because for loop is terminated because of break but not due to fail in condition")


Exercice
--------

Parcourez et imprimez tous les nombres pairs de la liste des nombres dans l'ordre où ils sont reçus. N'imprimez aucun nombre qui vient après 237 dans la séquence.

Tutorial Code
-------------
numbers = [
    951, 402, 984, 651, 360, 69, 408, 319, 601, 485, 980, 507, 725, 547, 544,
    615, 83, 165, 141, 501, 263, 617, 865, 575, 219, 390, 984, 592, 236, 105, 942, 941,
    386, 462, 47, 418, 907, 344, 236, 375, 823, 566, 597, 978, 328, 615, 953, 345,
    399, 162, 758, 219, 918, 237, 412, 566, 826, 248, 866, 950, 626, 949, 687, 217,
    815, 67, 104, 58, 512, 24, 892, 894, 767, 553, 81, 379, 843, 831, 445, 742, 717,
    958, 609, 842, 451, 688, 753, 854, 685, 93, 857, 440, 380, 126, 721, 328, 753, 470,
    743, 527
]

# your code goes here
for number in numbers:

Expected Output
---------------

test_object("number", undefined_msg="Define a object `number` using the code from the tutorial to print just the desired numbers from the exercise description.",incorrect_msg="Your `number` object is not correct, You should use an `if` statement and a `break` statement to accomplish your goal.")
success_msg("Great work!")

Solution
--------

numbers = [
    951, 402, 984, 651, 360, 69, 408, 319, 601, 485, 980, 507, 725, 547, 544,
    615, 83, 165, 141, 501, 263, 617, 865, 575, 219, 390, 984, 592, 236, 105, 942, 941,
    386, 462, 47, 418, 907, 344, 236, 375, 823, 566, 597, 978, 328, 615, 953, 345,
    399, 162, 758, 219, 918, 237, 412, 566, 826, 248, 866, 950, 626, 949, 687, 217,
    815, 67, 104, 58, 512, 24, 892, 894, 767, 553, 81, 379, 843, 831, 445, 742, 717,
    958, 609, 842, 451, 688, 753, 854, 685, 93, 857, 440, 380, 126, 721, 328, 753, 470,
    743, 527
]

# your code goes here
for number in numbers:
    if number == 237:
        break

    if number % 2 == 1:
        continue

    print(number)