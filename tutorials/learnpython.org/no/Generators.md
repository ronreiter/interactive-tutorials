# Generators er veldig enkle å implementere, men litt vanskelige å forstå.

Generators brukes til å lage iteratorer, men med en annen tilnærming. Generators er enkle funksjoner som returnerer et itererbart sett av elementer, ett om gangen, på en spesiell måte.

Når en iterasjon over et sett med elementer starter ved bruk av for-løkken, kjøres generatoren. Når generatorkode når et "yield"-utsagn, overfører generatoren sin kjøring tilbake til for-løkken og returnerer en ny verdi fra settet. Generatorfunksjonen kan generere så mange verdier (muligens uendelige) som den vil, og gir hver enkelt etter tur.

Her er et enkelt eksempel på en generatorfunksjon som returnerer 7 tilfeldige heltall:

      import random
      
      def lottery():
          # returns 6 numbers between 1 and 40
          for i in range(6):
              yield random.randint(1, 40)
      
          # returns a 7th number between 1 and 15
          yield random.randint(1, 15)
      
      for random_number in lottery():
             print("And the next number is... %d!" %(random_number))

Denne funksjonen bestemmer hvordan den skal generere de tilfeldige tallene på egen hånd, og utfører "yield"-utsagnene ett om gangen, i pauser for å gi utførelsen tilbake til den overordnede for-løkken.

Exercise
--------

Skriv en generatorfunksjon som returnerer Fibonacci-serien. De beregnes ved å bruke følgende formel: De to første numrene i serien er alltid lik 1, og hvert påfølgende tall som returneres er summen av de to siste tallene.
Hint: Kan du bruke bare to variabler i generatorfunksjonen? Husk at tildelinger kan gjøres samtidig. Koden

    a = 1
    b = 2
    a, b = b, a
    print(a, b)

vil samtidig bytte verdiene til a og b.