Tutorial
--------

Python دا ۋە بىر مەزگىل ئىچىدە ئىككى خىل ھالقا بار.

### "for" loop

دەۋرىيلىنىش ئۈچۈن بېرىلگەن تەرتىپ بويىچە تەكرارلاڭ. بۇ يەردە بىر مىسال بار:

    primes = [2, 3, 5, 7]
    for prime in primes:
        print(prime)

ئايلانما ھالقىلاردا «دائىرە» ۋە «xrange» فۇنكسىيەسى ئارقىلىق سانلار رەت تەرتىپىدە تەكرارلىنالايدۇ. دائىرە بىلەن xrange نىڭ پەرقى شۇكى ، دائىرە ئىقتىدارى يېڭى تىزىملىكنى شۇ دائىرە سانى بىلەن قايتۇرىدۇ ، ھالبۇكى xrange بولسا تېخىمۇ ئۈنۈملۈك بولغان تەكرارلىغۇچنى قايتۇرىدۇ. (Python 3 xrange غا ئوخشاش ھەرىكەت فۇنكسىيەسىنى ئىشلىتىدۇ). دائىرە فۇنكسىيەسىنىڭ نۆلنى ئاساس قىلغانلىقىغا دىققەت قىلىڭ.

    # Prints out the numbers 0,1,2,3,4
    for x in range(5):
        print(x)

    # Prints out 3,4,5
    for x in range(3, 6):
        print(x)

    # Prints out 3,5,7
    for x in range(3, 8, 2):
        print(x)

### "while" loop

ھالبۇكى مەلۇم بولان شەرتى ھازىرلانسىلا ئايلانما تەكرارلىنىدۇ. مەسىلەن:

    # Prints out 0,1,2,3,4

    count = 0
    while count < 5:
        print(count)
        count += 1  # This is the same as count = count + 1

### "بۇزۇش" ۋە "داۋاملاشتۇرۇش" بايانلىرى

** break ** ئايلانما ياكى بىر ئاز دەۋرىيلىنىشتىن چېكىنىش ئۈچۈن ئىشلىتىلىدۇ ، ئەمما ** داۋاملاشتۇرۇش ** نۆۋەتتىكى بۆلەكتىن ئاتلاپ ئۆتۈپ ، «for» ياكى «while» جۈملىسىگە قايتىدۇ. بىر قانچە مىسال:

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

### ئايلانما ئۈچۈن «باشقا» ماددىسىنى ئىشلىتەمدۇق؟

C ، CPP غا ئوخشاش تىللارغا ئوخشىمايدىغىنىمىز ، بىز ئايلانما ** ئۈچۈن ** باشقا ** نى ئىشلىتەلەيمىز. «For» ياكى «while» جۈملىسىنىڭ ئايلانما ھالىتى مەغلۇپ بولغاندا ، «باشقا» دىكى كود قىسمى ئىجرا بولىدۇ. ئەگەر ئايلانما ئىچىدە ** break ** جۈملىسى ئىجرا قىلىنسا ئۇنداقتا «باشقا» قىسمى ئاتلاپ كېتىدۇ.
شۇنىڭغا دىققەت قىلىڭكى ، «باشقا» قىسمى ** داۋاملاشتۇرۇش ** جۈملىسى بولغان تەقدىردىمۇ ئىجرا بولىدۇ.

بۇ يەردە بىر قانچە مىسال بار:

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


چېنىقىش
--------

رەتكە تىزىپ ، سانلار تىزىملىكىدىكى بارلىق سانلارنى تاپشۇرۇۋالغان تەرتىپ بويىچە بېسىپ چىقىرىڭ. تەرتىپ بويىچە 237 دىن كېيىن كەلگەن سانلارنى بېسىپ چىقارماڭ.

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
