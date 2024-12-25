At tage input og vise output på den ønskede måde spiller en vigtig rolle i interaktiv kodning. Lad os derfor fokusere på input og output af forskellige datatyper.

###raw_input()
Dette bruges til at tage input, så længe det når slutningen af linjen. Bemærk, at der ikke må være mellemrum. Input afsluttes med et nyt linjetegn, og hvis der er mellemrum i inputlinjen, resulterer det i en fejl.

    # Udskriver det input, der modtages fra stdin
    astring=raw_input()# giv hello som input
    print raw_input()

Efter at have taget input kan vi konvertere dem til vores ønskede datatype ved hjælp af funktioner som int(), float(), str().

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
Dette bruges især til at inputte heltal. Fordelen ved input() over raw_input() kan afklares med følgende eksempel.

    # giv 2*2 som input
    a=input()
    b=raw_input() # bemærk at int(raw_input()) resulterer i fejl
    print a # udskriver 4
    print b # udskriver 2*2

###hvordan tager man to eller flere datatyper som input fra en enkelt linje adskilt af mellemrum?
Her gør vi brug af split() og map() funktionerne.

    # giv to heltal i første linje og mere end to heltal i tredje linje
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # udskriver de første to heltal fra første linje og summen af heltal i anden linje

###Output formatering
Du har måske allerede bemærket, at print-sætningen automatisk indsætter en ny linje. Brug af komma som i ovenstående kode udskriver værdierne på en enkelt linje adskilt af et mellemrum. Sys-modulet leverer forskellige funktioner til outputformatering, men her lærer vi, hvordan man bruger basal viden om formatering til at outputte på vores ønskede måde. Lad os se et par eksempler for at lære outputformatering.

    a = 5
    b = 0.63
    c = "hello"
    print "a er : %d, b er %0.4f, c er %s" % (a,b,c)

Outputtet skal være selvforklarende.

Øvelse
--------

Skriv et program, der beder brugeren om at indtaste deres navn, alder og land. Programmet skal derefter udskrive en meddelelse, der inkluderer denne information i en sætning. Programmet skal indeholde:

1. At tage et navn som input ved hjælp af `raw_input()`.
2. At tage en alder som input ved hjælp af `input()`, og konvertere det til et heltal.
3. At tage et lands navn som input ved hjælp af `raw_input()`.
4. At formatere outputtet til at vise en sætning, der inkluderer navnet, alderen og landet.

Programmet skal demonstrere inputhåndtering og strengformatering i Python.