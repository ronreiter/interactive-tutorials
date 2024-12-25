Taking Input and showing Output in required way plays an important role in interactive coding. So lets focus on input and output of various data types.

###raw_input()
Toto se používá k přijímání vstupu, dokud nedosáhne konce řádku. Upozorňujeme, že by neměly být žádné mezery. Přijímání vstupu končí znakem nového řádku a pokud jsou v řádku vstupu nějaké mezery, výsledkem je chyba.

    # Prints out the input received from stdin
    astring=raw_input() # give hello as input
    print raw_input()

Po přijetí vstupu je můžeme převést na požadovaný datový typ pomocí funkcí jako int(), float(), str().

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input())
    print decimalnum

###input()
Toto je obzvláště používáno pro zadávání celých čísel. Výhodu input() nad raw_input() si můžeme vyjasnit následujícím příkladem.

    #give 2*2 as input
    a=input()
    b=raw_input() #note that int(raw_input()) results in error
    print a #print 4
    print b #print 2*2

###jak přijmout dva a více datových typů z jednoho řádku oddělených mezerami?
Zde využíváme funkce split() a map().

    #give two integers in first line and more than two integers in third line
    a, b = map(int, raw_input().split())
    array = raw_input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # tiskne první dvě celá čísla z prvního řádku a součet celých čísel z druhého řádku

###Formátování výstupu
Možná jste si již všimli, že příkaz print automaticky vkládá nový řádek. Použití čárky jako v uvedeném kódu tiskne hodnoty na jednom řádku oddělené mezerou. Modul sys poskytuje různé funkce pro formátování výstupu, ale zde se naučíme, jak použít základní znalosti formátování k výstupu podle našich požadavků. Podívejme se na několik příkladů, jak se naučit formátovat výstup.

    a = 5
    b = 0.63
    c = "hello"
    print "a is: %d, b is %0.4f, c is %s" % (a, b, c)

Výstup musí být samozřejmý.

Exercise
--------

Napište program, který požádá uživatele, aby zadal své jméno, věk a zemi. Program by měl poté vytisknout zprávu, která obsahuje tyto informace ve větě. Program by měl obsahovat:

1. Přijetí jména jako vstupu pomocí `raw_input()`.
2. Přijetí věku jako vstupu pomocí `input()`, a jeho převedení na celé číslo.
3. Přijetí názvu země jako vstupu pomocí `raw_input()`.
4. Formátování výstupu pro zobrazení věty, která obsahuje jméno, věk a zemi.

Program by měl demonstrovat zpracování vstupu a formátování řetězců v Pythonu.