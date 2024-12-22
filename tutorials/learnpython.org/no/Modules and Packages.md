In programmering er en modul et stykke programvare som har en spesifikk funksjonalitet. For eksempel, når du bygger et ping pong-spill, kan en modul være ansvarlig for spilllogikken, og en annen modul tegner spillet på skjermen. Hver modul består av en forskjellig fil, som kan redigeres separat.

### Skrive moduler

Moduler i Python er bare Python-filer med en .py-utvidelse. Navnet på modulen er det samme som filnavnet. En Python-modul kan ha et sett med funksjoner, klasser eller variabler definert og implementert. Eksempelet ovenfor inkluderer to filer:

mygame/

- mygame/game.py

- mygame/draw.py

Python-skriptet `game.py` implementerer spillet. Det bruker funksjonen `draw_game` fra filen `draw.py`, eller med andre ord, `draw`-modulen som implementerer logikken for å tegne spillet på skjermen.

Moduler importeres fra andre moduler ved hjelp av `import`-kommandoen. I dette eksempelet kan `game.py`-skriptet se slik ut:

Modulen `draw` kan se slik ut:

I dette eksempelet importerer `game`-modulen `draw`-modulen, som gjør at den kan bruke funksjoner implementert i den modulen. `main`-funksjonen bruker den lokale funksjonen `play_game` for å kjøre spillet, og deretter tegner resultatet av spillet ved å bruke en funksjon implementert i `draw`-modulen kalt `draw_game`. For å bruke funksjonen `draw_game` fra `draw`-modulen, må vi spesifisere i hvilken modul funksjonen er implementert, ved å bruke punktoperatoren. For å referere til `draw_game`-funksjonen fra `game`-modulen, må vi importere `draw`-modulen og deretter kalle `draw.draw_game()`.

Når `import draw`-direktivet kjører, leter Python-tolken etter en fil i katalogen der skriptet ble kjørt med modulenavnet og en `.py`-suffiks. I dette tilfellet vil den lete etter `draw.py`. Hvis den blir funnet, vil den bli importert. Hvis den ikke blir funnet, vil den fortsette å lete etter innebygde moduler.

Du har kanskje lagt merke til at når du importerer en modul, blir en `.pyc`-fil opprettet. Dette er en kompilert Python-fil. Python kompilerer filer til Python-bytecode slik at den ikke trenger å analysere filene hver gang moduler lastes inn. Hvis en `.pyc`-fil finnes, lastes den i stedet for `.py`-filen. Denne prosessen er transparent for brukeren.

### Importere modulobjekter til gjeldende navnerom

Et navnerom er et system der hvert objekt er navngitt og kan nås i Python. Vi importerer funksjonen `draw_game` inn i hovedskriptets navnerom ved å bruke `from`-kommandoen.

Du har kanskje lagt merke til at i dette eksempelet, står ikke navnet på modulen foran `draw_game`, fordi vi har spesifisert modulenavnet med `import`-kommandoen.

Fordelene med denne notasjonen er at du ikke trenger å referere til modulen om og om igjen. Imidlertid kan ikke et navnerom ha to objekter med samme navn, så `import`-kommandoen kan erstatte et eksisterende objekt i navnerommet.

### Importere alle objekter fra en modul

Du kan bruke `import *`-kommandoen for å importere alle objektene i en modul slik:

Dette kan være litt risikabelt ettersom endringer i modulen kan påvirke modulen som importerer den, men det er kortere og krever ikke at du spesifiserer hvert objekt du vil importere fra modulen.

### Tilpasse importnavn

Moduler kan lastes inn under et hvilket som helst navn du vil. Dette er nyttig når du importerer en modul betinget for å bruke samme navn i resten av koden.

For eksempel, hvis du har to `draw`-moduler med litt forskjellige navn, kan du gjøre følgende:

### Modulinitialisering

Første gang en modul lastes inn i et kjørende Python-skript, blir den initialisert ved å kjøre koden i modulen én gang. Hvis en annen modul i koden din importerer den samme modulen igjen, vil den ikke bli lastet igjen, så lokale variabler inne i modulen fungerer som en "singelton", noe som betyr at de er initialisert bare én gang.

Du kan da bruke dette til å initialisere objekter. For eksempel:

### Utvide modulens lastesti

Det finnes et par måter å fortelle Python-tolken hvor den skal lete etter moduler, bortsett fra standard lokale katalog og innebygde moduler. Du kan bruke miljøvariabelen `PYTHONPATH` for å spesifisere tilleggskataloger for å lete etter moduler, slik:

Dette kjører `game.py`, og lar skriptet laste moduler fra `foo`-katalogen, så vel som den lokale katalogen.

Du kan også bruke `sys.path.append`-funksjonen. Utfør den *før* du kjører `import`-kommandoen:

Nå er `foo`-katalogen lagt til listen over stier der det letes etter moduler.

### Utforske innebygde moduler

Sjekk ut hele listen over innebygde moduler i Pythons standardbibliotek [her](https://docs.python.org/3/library/).

To svært viktige funksjoner er nyttige når man utforsker moduler i Python - `dir`- og `help`-funksjonene.

For å importere modulen `urllib`, som gir oss mulighet til å opprette lese data fra URLer, `import`-er vi modulen:

Vi kan se hvilke funksjoner som er implementert i hver modul ved å bruke `dir`-funksjonen:

Når vi finner funksjonen i modulen vi vil bruke, kan vi lese mer om den med `help`-funksjonen, ved å bruke Python-tolken:

### Skrive pakker

Pakker er navnerom som inneholder flere pakker og moduler. De er bare kataloger, men med visse krav.

Hver pakke i Python er en katalog som **MÅ** inneholde en spesiell fil kalt `__init__.py`. Denne filen, som kan være tom, indikerer at katalogen den er i er en Python-pakke. Slik kan den importeres på samme måte som en modul.

Hvis vi oppretter en katalog kalt `foo`, som markerer pakkenavnet, kan vi da opprette en modul inne i den pakken kalt `bar`. Deretter legger vi til `__init__.py`-filen i `foo`-katalogen.

For å bruke modulen `bar`, kan vi importere den på to måter:

I det første eksempelet ovenfor, må vi bruke `foo`-prefikset hver gang vi får tilgang til modulen `bar`. I det andre eksempelet, trenger vi ikke det, fordi vi har importert modulen til vår moduls navnerom.

`__init__.py`-filen kan også bestemme hvilke moduler pakken eksporterer som API, samtidig som andre moduler holdes internt, ved å overstyre `__all__`-variabelen slik:

Exercise
--------

I denne oppgaven, skriv ut en alfabetisk sortert liste over alle funksjonene i `re`-modulen som inneholder ordet `find`.