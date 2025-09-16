Yleensä määritämme funktion käyttämällä def-avainsanaa jossain koodissa ja kutsumme sitä aina, kun tarvitsemme sitä.

def sum(a,b):  
    return a + b

a = 1  
b = 2  
c = sum(a,b)  
print(c)

Nyt sen sijaan, että määrittäisimme funktion jossain ja kutsuisimme sitä, voimme käyttää Pythonin lambda-funktioita, jotka ovat inline-funktioita, jotka määritellään samassa paikassa, jossa käytämme niitä. Joten meidän ei tarvitse määritellä funktiota jossain ja palata koodiin vain yhtä käyttökertaa varten.

Niiden ei tarvitse olla nimettyjä, joten niitä kutsutaan myös anonyymeiksi funktioiksi. Määrittelemme lambda-funktion avainsanalla lambda.

your_function_name = lambda inputs : output

Joten yllä oleva sum-esimerkki lambda-funktiolla olisi,

a = 1  
b = 2  
sum = lambda x,y : x + y  
c = sum(a,b)  
print(c)

Tässä määrittelemme lambda-funktion muuttujaan **sum**, ja annettaessa argumentit eli a ja b, se toimii kuten normaali funktio.

Exercise  
--------  
Kirjoita ohjelma, joka käyttää lambda-funktioita tarkistaakseen, onko annettu lista sisältävä luku pariton. Tulosta "True", jos luku on pariton, tai "False", jos ei, jokaiselle elementille.