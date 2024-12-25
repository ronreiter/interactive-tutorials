Att ta emot inmatning och visa utmatning på rätt sätt spelar en viktig roll i interaktiv programmering. Så låt oss fokusera på inmatning och utmatning av olika datatyper.

###raw_input()
detta används för att ta emot inmatning så länge det når radens slut. Observera att det inte bör finnas några mellanslag. Inmatningen avslutas med ett nytt radtecken och om det finns några mellanslag i inmatningsraden resulterar det i ett fel.

    # Skriver ut den inmatning som tas emot från stdin
    astring=raw_input()# ange hello som inmatning
    print raw_input()

efter att ha tagit inmatningen kan vi konvertera dem till vår önskade datatyp med hjälp av funktioner som int(), float(), str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
detta används särskilt för att mata in heltal. Fördelen med input() över raw_input() kan förtydligas med följande exempel

    #ange 2*2 som inmatning
    a=input()
    b=raw_input() #notera att int(raw_input()) resulterar i fel
    print a #skriver ut 4
    print b #skriver ut 2*2

###hur tar man emot två eller flera datatyper som inmatning från en enda rad separerade med mellanslag?
Här använder vi funktionerna split() och map()

    #ange två heltal på första raden och mer än två heltal på tredje raden
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # skriver ut de första två heltalen från första raden och summan av heltalen från andra raden

###Formatering av utmatning
Du kanske redan har märkt att print-satsen automatiskt infogar ett nytt radtecken. Användningen av kommatecken som i koden ovan skriver ut värdena i en enda rad separerade med ett mellanslag. Modulen sys tillhandahåller olika funktioner för utmatningsformatering men här lär vi oss hur man använder grundläggande kunskaper om formatering för att visa utmatning på vårt önskade sätt. Låt oss se några exempel för att lära oss utmatningsformatering

    a = 5
    b = 0.63
    c = "hello"
    print "a är : %d, b är %0.4f, c är %s" % (a, b, c)

Utmatningen måste vara självklar.

Övning
--------

Skriv ett program som ber användaren att mata in sitt namn, ålder och land. Programmet ska sedan skriva ut ett meddelande som inkluderar denna information i en mening. Programmet bör omfatta:

1. Att ta emot ett namn som inmatning med hjälp av `raw_input()`.
2. Att ta emot en ålder som inmatning med hjälp av `input()` och konvertera den till ett heltal.
3. Att ta emot ett landsnamn som inmatning med hjälp av `raw_input()`.
4. Formatering av utmatningen för att visa en mening som inkluderar namnet, åldern och landet.

Programmet ska demonstrera hur man hanterar inmatning och formaterar strängar i Python.