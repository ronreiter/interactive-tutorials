Inom programmering är en modul en mjukvarukomponent med en specifik funktionalitet. Till exempel, när man bygger ett ping pong-spel kan en modul ansvara för spel-logiken och en annan modul rita spelet på skärmen. Varje modul består av en separat fil, som kan redigeras oberoende av andra.

### Skriva moduler

Moduler i Python är bara Python-filer med `.py`-tillägg. Modulens namn är detsamma som filnamnet. En Python-modul kan ha ett antal funktioner, klasser eller variabler definierade och implementerade. Exemplet ovan innehåller två filer:

mygame/

- mygame/game.py

- mygame/draw.py

Python-skriptet `game.py` implementerar spelet. Det använder funktionen `draw_game` från filen `draw.py`, eller med andra ord, `draw`-modulen som implementerar logiken för att rita spelet på skärmen.

Moduler importeras från andra moduler med kommandot `import`. I detta exempel kan skriptet `game.py` se ut så här:

Modulen `draw` kan se ut så här:

I detta exempel importerar `game`-modulen `draw`-modulen, vilket gör att den kan använda funktioner som implementerats i den modulen. Funktionen `main` använder den lokala funktionen `play_game` för att köra spelet och drar sedan resultatet av spelet med en funktion som implementerats i `draw`-modulen, kallad `draw_game`. För att använda funktionen `draw_game` från `draw`-modulen behöver vi specificera i vilken modul funktionen är implementerad, med hjälp av punkt-operatören. För att referera till `draw_game`-funktionen från `game`-modulen behöver vi importera `draw`-modulen och sedan anropa `draw.draw_game()`.

När `import draw`-direktivet körs letar Python-tolkaren efter en fil i katalogen där skriptet kördes med modulnamnet och ett `.py`-tillägg. I detta fall kommer den att leta efter `draw.py`. Om den hittas kommer den att importeras. Om den inte hittas kommer den fortsätta att leta efter inbyggda moduler.

Du kanske har lagt märke till att när en modul importeras skapas en `.pyc`-fil. Detta är en kompilerad Python-fil. Python kompilerar filer till Python-bytecode så att den inte behöver tolka filerna varje gång moduler laddas. Om en `.pyc`-fil existerar, laddas den istället för `.py`-filen. Denna process är transparent för användaren.

### Importera modulobjekt till det aktuella namnområdet

Ett namnområde är ett system där varje objekt namnges och kan nås i Python. Vi importerar funktionen `draw_game` till huvudskriptets namnområde genom att använda `from`-kommandot.

Du kanske har lagt märke till att i detta exempel föregås inte modulnamnet före `draw_game`, eftersom vi har specificerat modulnamnet med `import`-kommandot.

Fördelarna med denna notation är att du inte behöver referera till modulen om och om igen. Emellertid kan ett namnområde inte ha två objekt med samma namn, så `import`-kommandot kan ersätta ett existerande objekt i namnområdet.


### Importera alla objekt från en modul

Du kan använda kommandot `import *` för att importera alla objekt i en modul så här:

Detta kan vara lite riskabelt eftersom ändringar i modulen kan påverka modulen som importerar den, men det är kortare och kräver inte att du specificerar varje objekt du vill importera från modulen.


### Anpassat importnamn

Moduler kan laddas under vilket namn du vill. Detta är användbart när du importerar en modul under vissa förhållanden för att använda samma namn i resten av koden.

Till exempel, om du har två `draw`-moduler med något olika namn, kan du göra följande:

### Modulinitialisering

Första gången en modul laddas in i ett körande Python-skript, initialiseras den genom att koden i modulen körs en gång. Om en annan modul i din kod importerar samma modul igen, kommer den inte att laddas igen, så lokala variabler inuti modulen fungerar som en "singleton," vilket betyder att de initialiseras bara en gång.

Du kan sedan använda detta för att initiera objekt. Till exempel:

### Utöka modulens sökvägsladdning

Det finns ett par sätt att berätta för Python-tolkaren var den ska leta efter moduler, utöver den förvalda lokala katalogen och inbyggda moduler. Du kan använda miljövariabeln `PYTHONPATH` för att specificera ytterligare kataloger där moduler ska letas upp som så här:

Detta kör `game.py` och möjliggör för skriptet att ladda moduler från `foo`-katalogen, samt den lokala katalogen.

Du kan också använda funktionen `sys.path.append`. Kör den *innan* du kör `import`-kommandot:

Nu har `foo`-katalogen lagts till i listan över sökvägar där moduler söks.

### Utforska inbyggda moduler

Kolla in den fullständiga listan över inbyggda moduler i Pythons standardbibliotek [här](https://docs.python.org/3/library/).

Två mycket viktiga funktioner är praktiska när man utforskar moduler i Python - funktionerna `dir` och `help`.

För att importera modulen `urllib`, som gör det möjligt för oss att läsa data från URL:er, `importerar` vi modulen:

Vi kan se vilka funktioner som implementeras i varje modul genom att använda funktionen `dir`:

När vi har hittat den funktion vi vill använda i modulen kan vi läsa mer om den med hjälp av `help`-funktionen i Python-tolkaren:

### Skriva paket

Paket är namnområden som innehåller flera paket och moduler. De är bara kataloger, men med vissa krav.

Varje paket i Python är en katalog som **MÅSTE** innehålla en speciell fil som heter `__init__.py`. Denna fil, som kan vara tom, anger att katalogen den befinner sig i är ett Python-paket. På så sätt kan det importeras på samma sätt som en modul.

Om vi skapar en katalog som heter `foo`, som markerar paketnamnet, kan vi sedan skapa en modul inuti det paketet som heter `bar`. Sedan lägger vi till filen `__init__.py` inuti `foo`-katalogen.

För att använda modulen `bar`, kan vi importera den på två sätt:

I det första exemplet ovan måste vi använda prefixet `foo` varje gång vi vill komma åt modulen `bar`. I det andra exemplet behöver vi inte det, eftersom vi har importerat modulen till vårt moduls namnområde.

Fil `__init__.py` kan också bestämma vilka moduler paketet exporterar som API, medan andra moduler hålls interna, genom att åsidosätta variabeln `__all__` så här:

Exercise
--------

I denna övning, skriv ut en alfabetiskt sorterad lista över alla funktioner i `re`-modulen som innehåller ordet `find`.