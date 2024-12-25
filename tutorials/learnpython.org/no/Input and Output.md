Å ta inn data og vise utdata på ønsket måte spiller en viktig rolle i interaktiv koding. La oss derfor fokusere på input og output av ulike datatyper.

###raw_input()
dette brukes til å ta inn data så lenge det når slutten av linjen. Merk at det ikke skal være mellomrom. Inntaket avsluttes med et nytt linjeskift, og hvis det er mellomrom i inntakslinjen, resulterer det i en feil

etter å ha tatt inn data kan vi konvertere dem til ønsket datatyper ved å bruke funksjoner som int(), float(), str()

###input()
dette brukes spesielt til å ta inn heltall. Fordelen med input() over raw_input() kan tydeliggjøres med følgende eksempel

###hvordan ta inn to eller flere datatyper fra en enkelt linje adskilt med mellomrom?
Her bruker vi split() og map() funksjoner

###Utdataformatering
Du har kanskje allerede lagt merke til at print-utsagnet automatisk legger til et nytt linjeskift. Bruk av komma som i koden ovenfor skriver ut verdiene i en enkelt linje adskilt med et mellomrom. modulen sys gir ulike funksjoner for utdataformatering, men her skal vi lære hvordan vi kan bruke grunnleggende kunnskaper om formatering for å generere utdata på vår ønskede måte. La oss se noen eksempler for å lære utdataformatering

Utdataene må være selvforklarende.

Øvelse
--------

Skriv et program som ber brukeren om å skrive inn deres navn, alder og land. Programmet skal deretter skrive ut en melding som inkluderer denne informasjonen i en setning. Programmet skal inkludere:

1. Ta inn et navn ved hjelp av `raw_input()`.
2. Ta inn en alder ved hjelp av `input()`, og konvertere den til heltall.
3. Ta inn et landnavn ved hjelp av `raw_input()`.
4. Formatere output for å vise en setning som inkluderer navn, alder og land.

Programmet skal demonstrere håndtering av input og strengformatering i Python.