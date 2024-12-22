Map, Filter a Reduce jsou paradigmy funkcionálního programování. Umožňují programátorovi (vám) psát jednodušší a kratší kód, aniž by nutně museli řešit složitosti jako smyčky a větvení.

V podstatě tyto tři funkce umožňují použít funkci na celou řadu iterovatel, jedním rázem. ```map``` a ```filter``` jsou v Pythonu vestavěné (v modulu ```__builtins__```) a nevyžadují žádný import. Funkce ```reduce```, na druhou stranu, musí být importována, protože se nachází v modulu ```functools```. Pojďme se podívat, jak všechny fungují, začneme s ```map```.

#### Map
Funkce ```map()``` v Pythonu má následující syntaxi:

```map(func, *iterables)```

Kde ```func``` je funkce, na kterou bude každý prvek v ```iterables``` (v libovolném množství) aplikován. Všimli jste si hvězdičky(```*```) na ```iterables```? To znamená, že může být libovolný počet iterovatel, pokud ```func``` má přesně odpovídající počet vstupních argumentů. Než přejdeme k příkladu, je důležité, abyste si poznamenali následující:

1. V Pythonu 2 funkce ```map()``` vrací seznam. Nicméně v Pythonu 3 funkce vrací ```map object```, což je objekt generátoru. Abychom získali výsledek jako seznam, může být použita vestavěná funkce ```list()``` na map objektu, tj. ```list(map(func, *iterables))```
2. Počet argumentů pro ```func``` musí být stejný jako počet uvedených ```iterables```. 

Podívejme se, jak se tyto pravidla aplikují v následujících příkladech.

Představte si, že mám seznam (```iterable```) mých oblíbených jmen mazlíčků, všechny jsou malými písmeny a potřebuji je ve velkých písmenách. Tradičně, v normálním Pythonovém stylu, bych to udělal takto:

    my_pets = ['alfred', 'tabitha', 'william', 'arla']
    uppered_pets = []

    for pet in my_pets:
        pet_ = pet.upper()
        uppered_pets.append(pet_)

    print(uppered_pets)

Toto by pak vypsalo ```['ALFRED', 'TABITHA', 'WILLIAM', 'ARLA']```

S funkcí ```map()``` je to nejen jednodušší, ale také mnohem flexibilnější. Udělám to takto:

    # Python 3
    my_pets = ['alfred', 'tabitha', 'william', 'arla']

    uppered_pets = list(map(str.upper, my_pets))

    print(uppered_pets)

To by také vypsalo stejný výsledek. Všimněte si, že použiji definovanou syntaxi ```map()``` výše, a v tomto případě je ```func``` funkce ```str.upper``` a ```iterables``` je seznam ```my_pets``` -- jen jeden iterable. Také si všimněte, že jsme nevolali funkci ```str.upper``` (dělajíc to: ```str.upper()``), protože funkce map to udělá za nás na _každém prvku v seznamu ```my_pets```_.

Je důležité si uvědomit, že funkce ```str.upper``` podle definice vyžaduje pouze **jeden** argument, takže jsme ji předali pouze **jeden** iterable. Takže, _pokud funkce, kterou předáváte, vyžaduje dva, tři nebo n argumentů_, pak _musíte předat dva, tři nebo n iterovatel_. Dovolte mi to objasnit dalším příkladem.

Představte si, že mám seznam ploch kruhů, který jsem někde vypočítal, všechny jsou na pět desetinných míst. A potřebuji každý prvek v seznamu zaokrouhlit nahoru až do jeho poziční desetinné místa, což znamená, že musím zaokrouhlit první prvek v seznamu na jedno desetinné místo, druhý prvek v seznamu na dvě desetinná místa, třetí prvek v seznamu na tři desetinná místa atd. S ```map()``` je to hračka. Pojďme to vidět.

Python nám už požehnal vestavěnou funkcí ```round()```, která bere dva argumenty -- číslo zaokrouhlit a počet desetinných míst, kam číslo zaokrouhlit. Vzhledem k tomu, že funkce vyžaduje **dva** argumenty, musíme předat **dva** iterovatelé.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 7)))

    print(result)

Viděli jste krásu ```map()```? Dokážete si představit tu flexibilitu, kterou to vyvolává?

Funkce ```range(1, 7)``` funguje jako druhý argument pro funkci ```round``` (počet požadovaných desetinných míst na iteraci). Takže když ```map``` iteruje skrze ```circle_areas```, během první iterace, první element z ```circle_areas```, ```3.56773``` je předán společně s prvním elementem z ```range(1,7)```, ```1``` do ```round```, čímž efektivně se stane ```round(3.56773, 1)```. Během druhé iterace, druhý element z ```circle_areas```, ```5.57668``` spolu s druhým elementem z ```range(1,7)```, ```2``` je předán do ```round```, což překládá k ```round(5.57668, 2)```. Toto se děje až k dosažení konce seznamu ```circle_areas```.
 
Jsem si jistý, že se ptáte: "Co pokud předám iterovatelný objekt méně než nebo více než první iterable? To znamená, co když předám ```range(1, 3)``` nebo ```range(1, 9999)``` jako druhý iterable ve výše uvedené funkci." A odpověď je jednoduchá: nic! Dobře, to není pravda. "Nic" se stane ve smyslu, že funkce ```map()``` nezpůsobí žádnou výjimku, jednoduše iteruje přes prvky, dokud nenajde druhý argument pro funkci a v tomto bodě jednoduše zastaví a vrátí výsledek.

Tak například, pokud ohodnotíte ```result = list(map(round, circle_areas, range(1, 3)))```, nedostanete žádnou chybu, i když se délka ```circle_areas``` a délka ```range(1, 3)``` liší. Místo toho Python udělá toto: Vezme první element z ```circle_areas``` a první element z ```range(1,3)``` a předá ho do ```round```. ```round``` to vyhodnotí, poté uloží výsledek. Pak pokračuje na druhou iteraci, druhý element z ```circle_areas``` a druhý element z ```range(1,3)```, ```round``` to znovu uloží. Nyní ve třetí iteraci (```circle_areas``` má třetí element), Python vezme třetí element z ```circle_areas``` a pak se pokusí vzít třetí element z ```range(1,3)```, ale protože ```range(1,3)``` nemá třetí element, Python jednoduše zastaví a vrátí výsledek, což v tomto případě bude jednoduše ```[3.6, 5.58]```. 

Jděte dál, zkuste to.

    # Python 3

    circle_areas = [3.56773, 5.57668, 4.00914, 56.24241, 9.01344, 32.00013]

    result = list(map(round, circle_areas, range(1, 3)))

    print(result)

Stejné se stane, pokud je ```circle_areas``` méně než délka druhého iterabilního objektu. Python jednoduše zastaví, když nemůže najít další element v jednom z iterovatel.

Pro konsolidaci našich znalostí o funkci ```map()```, použijeme ji k implementaci vlastní funkce ```zip()```. Funkce ```zip()``` je funkce, která přijímá počet iterovatel a pak vytváří n-tici obsahující každý z prvků v iterovatel. Jako ```map()```, v Pythonu 3 vrací objekt generátoru, který může být snadno převeden na seznam zavoláním vestavěné funkce ```list``` na něj. Použijte níže uvedenou session interpretu, abyste se seznámili s funkcí ```zip()``` dříve, než si vytvoříme naši vlastní s funkcí ```map()```.

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(zip(my_strings, my_numbers))
    
    print(results)

Jako bonus můžete hádat, co by se stalo v výše uvedené session, pokud ```my_strings``` a ```my_numbers``` nejsou stejné délky? Ne? zkuste to! Změňte délku jednoho z nich.

Teď k vlastní funkci ```zip()```!

    # Python 3

    my_strings = ['a', 'b', 'c', 'd', 'e']
    my_numbers = [1, 2, 3, 4, 5]

    results = list(map(lambda x, y: (x, y), my_strings, my_numbers))

    print(results)

Jen se podívejte na to! Máme stejný výsledek jako ```zip```. 

Všimli jste si také, že jsem nemusel ani vytvořit funkci pomocí standardního způsobu ```def my_function()```? Tak flexibilní je funkce ```map()```, a Python vůbec! Jednoduše jsem použil funkci ```lambda```. To neznamená, že použití standardní metody definice funkce (pomocí ```def function_name()```) není povoleno, stále je. Jen jsem se rozhodl napsat méně kódu (být "Pythonický").

To je vše k map. Přejděme na ```filter()```

#### Filter
Zatímco každý prvek v iterovatelném objektu skrze funkci ```map()``` prochází funkcí a vrací výsledek všech prvků, které prošly funkcí, ```filter()```, především vyžaduje, aby funkce vracela booleovské hodnoty (true nebo false) a pak prochází každý prvek v iterovatelném objektu skrze funkci, "filtruje" ty, které jsou false. Má následující syntaxi:

```filter(func, iterable)```

Následující body si všimněte v souvislosti s ```filter()```:

1. Na rozdíl od ```map()``` je potřebný pouze jeden iterovatelný objekt.
2. Argument ```func``` musí vrátit booleovský typ. Pokud nevrátí, ```filter``` jednoduše vrátí předaný iterovatelný objekt. Také, protože je potřebný pouze jeden iterovatelný objekt, je implicitní, že ```func``` může mít jen jeden argument.
3. ```filter``` prochází každý prvek v iterovatelném objektu skrze ```func``` a vrací **pouze** ty, které vyhodnotí jako true. Myslím, že je to přímo v názvu -- je to "filtr".

Podíváme se na nějaké příklady

Následující je seznam (```iterable```) skóre 10 studentů z chemického testu. Pojďme odfiltrovat ty, kteří prošli s více než 75 body... pomocí ```filter```.

    # Python 3
    scores = [66, 90, 68, 59, 76, 60, 88, 74, 81, 65]

    def is_A_student(score):
        return score > 75

    over_75 = list(filter(is_A_student, scores))

    print(over_75)

Další příklad bude detektor palindromů. "Palindrom" je slovo, fráze nebo sekvence, která se čte stejně pozpátku jako dopředu. Pojďme odfiltrovat slova, která jsou palindromy z n-tice (```iterable```) podezřelých palindromů.

    # Python 3
    dromes = ("demigod", "rewire", "madam", "freer", "anutforajaroftuna", "kiosk")

    palindromes = list(filter(lambda word: word == word[::-1], dromes))

    print(palindromes)

To by mělo vypsat ```['madam', 'anutforajaroftuna']```. 

Skvělé, že? Nakonec, ```reduce()```

#### Reduce
```reduce``` aplikuje funkci **dvou argumentů** kumulativně na prvky iterovatelného objektu, s možností začít s počátečním argumentem. Má následující syntaxi:

```reduce(func, iterable[, initial])```

Kde ```func``` je funkce, na kterou je každý prvek v ```iterable``` kumulativně aplikován, a ```initial``` je volitelná hodnota, která se umístí před prvky iterovatelného objektu v počítání a slouží jako výchozí, když je iterovatelný objekt prázdný. Následující body si všimněte v souvislosti s ```reduce()```:
1. ```func``` vyžaduje dva argumenty, z nichž první je první element v ```iterable``` (pokud není poskytnut ```initial```) a druhý element v ```iterable```. Pokud je poskytnut ```initial```, pak se stává prvním argumentem pro ```func``` a první element v ```iterable``` se stává druhým elementem.
2. ```reduce``` "redukuje" (já vím, omluvte mě) ```iterable``` do jedné hodnoty. 

Jako obvykle, podíváme se na nějaké příklady.

Pojďme vytvořit naši vlastní verzi vestavěné funkce ```sum()``` v Pythonu. Funkce ```sum()``` vrací součet všech prvků v iterovatelném objektu, který je jí předán.

    
    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers)
    print(result)


Výsledek, jak očekáváte, je ```68```.

Tak co se stalo?

Jako obvykle, je to o iteracích: ```reduce``` vezme první a druhý prvek z ```numbers``` a předá je příslušně do ```custom_sum```. ```custom_sum``` vypočítá jejich součet a vrátí ho do stupně```reduce```. ```reduce``` pak vezme tento výsledek a aplikuje ho jako první prvek do ```custom_sum``` a vezme další prvek (třetí) z ```numbers``` jako druhý prvek do ```custom_sum```. Dělá to souvisle (kumulativně), dokud nejsou vyčerpány ```numbers```. 

Podíváme se, co se stane, když použijeme volitelnou hodnotu ```initial```.
  
  
    # Python 3
    from functools import reduce

    numbers = [3, 4, 6, 9, 34, 12]

    def custom_sum(first, second):
        return first + second

    result = reduce(custom_sum, numbers, 10)
    print(result)


Výsledek, jak očekáváte, je ```78```, protože ```reduce```, zpočátku, použije ```10``` jako první argument pro ```custom_sum```.


To je vše o Pythonových funkcích Map, Reduce a Filter. Vyzkoušejte níže uvedené úlohy, abyste si potvrdili své porozumění každé funkci.

Exercise
--------
V tomto cvičení použijete každou z funkcí ```map```, ```filter``` a ```reduce``` k opravě rozbitého kódu.