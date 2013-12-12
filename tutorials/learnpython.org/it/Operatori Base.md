Tutorial
--------

# Questa sezione spiega l'uso degli operatori base in Python
###Operatori Aritmetici

Esattamente come negli altri linguaggi, l'addizione,la sottrazione, la moltiplicazione e la divisione possono essere usati con i numeri.<br>
La divisione con la virgola compare o meglio è rappresentata dal nostro amico Python solo quando uno dei due numeri(dividendo ,divisore) è  rappresentato in virgola mobile. Questa 77.0 è una rappresentazione di un numero in virgola mobile. Ecco alcuni esempi :

    addizione 1+2= 3  , sottrazione  6-2=4, moltiplicazione 3*5 = 15 , divisione 46/3 = 15 ( mostra solo la parte intera del quoziente)


Come detto sopra per vedere l'esatto quoziente di una divisione e necessario che almeno uno dei due numeri che compaio nella divisione sia rappresentato in virgola mobile anche se trattasi di numeri interi cosi  10/4 in questa rappresentazione da come risultato 2 mentre 10.0/4 da come quoziente 2.5
Provate ad inserire nel quadro di sinistra questo codice e osservate i risultati sul riquadro di destra:
#Codice nel quadro di sinistra:
    10/4 =
     10.0/4 =

#Nel riquadro di destra dopo aver Cliccato Run apparirà:  <br>
Diamo per scontato che per vedere la stampa nel riquadro di destra occorre cliccare su Run.

        2
        2,5

Oltre a quelli sopra indicati c'è anche l'operatore modulo (%) che viene utilizzato nella divisione tra numeri interi per conoscere se c'è resto o meno.   Osservate questi esempi:<br>
10/ 2 = **quoziente**  5 ,   **resto** 0   11/ 2 = **quoziente**  5,    **resto** 1 

Se scrivo 10/2=  Python risponde 5  e così pure  11/2 = 5;  inoltre se scrivo 10/2  ==(leggesi è strettamente uguale a) 11/2  l'amico Python risponde  **_True_** (**VERO**).<br> Python fa il confronto tra i quozienti delle due divisioni non prende in considerazione i resti che invece sono diversi. 

Ora usiamo l'operatore % così scrivendo  10%2=  Python risponde 0,    11%2=  risponde 1  e se scrivo  10%2 ==11%2   Python risponde **_False_** **Falso**  
<br> Nella divisione tra interi, anche se i quozienti sono uguali ( python non tiene conto dei resti) è necessario utilizzare l'opratore modulo(%) per far si che Python nella divisione tra interi tenga conto anche dei resti.<br>
#Scriviamo nel quadro di sinistra:
        10/2=
        11/2= 
        10/2== 11/2
        10%2 == 11%2


#Nel riquadro di destra leggeremo:

        5
        5
        True
        False


Il nostro amico Python incorpora anche l'operatore esponente  ( elevamento a potenza) in alcuni linguaggi l'elevamento a potenza è rappresentato così 2^2
il nostro amico Python preferisce questa 6**2 =  36    

#Osserviamo il comportamento di Python con gli operatori **+** e *. 
L'operatore "+" viene usato da Python anche per concatenare le stringhe.<br>
 _a ="bello e"; b= " buono "_    Osservate  **a+b** diviene  **bello e buono**.

#Nel riquadro di sinistra:

        a ="bello e"; b= " buono "
        print a+b

#Nel riquadro di destra vedremo:
        bello e buono

L'operatore **"*"** viene usato da Python per ripetere il carattere che precede l'operatore tante volte quante ne indica il numero dopo l'operatore stesso
osserva   **"A"*4 = "AAAA"**

# Nel riquadro di sinistra prova a scrivere:
        **a = "A"*4**
        print a
        c = "quattro"
        print " A*4 = "+c+" A"

#Nel riquadro di destra leggerai:
    AAAA
        A*4 = quattro A
# Osserviamo 0ra il comportamento di python con gli operatori "+" e "*"  con le liste:
    a = [1,2,3]
    b = [4,5,6]
    a + b = [1,2,3,4,5,6]
    a * 2 = [1,2,3,1,2,3]

# Nel riquadro di sinistra scriviamo :
    a = [1,2,3] ; b = [ 4,5,6]
        print a+b
        print a*2

# Nel riquadro di destra leggiamo:
    [1,2,3,4,5,6]
        [1,2,3,1,2,3]



