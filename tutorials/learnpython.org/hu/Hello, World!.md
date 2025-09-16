Python egy nagyon egyszerű nyelv, és nagyon egyértelmű szintaxissal rendelkezik. Arra ösztönzi a programozókat, hogy sablonkód nélkül programozzanak. A legegyszerűbb utasítás Pythonban a "print" utasítás - egyszerűen csak kiír egy sort (és tartalmaz egy új sort is, ellentétben a C-vel).

Két fő Python verzió létezik, Python 2 és Python 3. A Python 2 és 3 meglehetősen különbözik egymástól. Ez a tutorial a Python 3-at használja, mert szintaktikailag helyesebb és támogatja az újabb funkciókat.

Például az egyik különbség a Python 2 és 3 között a `print` utasítás. Python 2-ben a "print" utasítás nem függvény, és ezért zárójelek nélkül hívható meg. Azonban a Python 3-ban már függvény, és zárójelekkel kell meghívni.

Ahhoz, hogy egy stringet nyomtasson ki Python 3-ban, egyszerűen írja:

    print("This line will be printed.")

### Behúzás

Python behúzást használ blokkokhoz, zárójelek helyett. Mind a tabulátorok, mind a szóközök támogatottak, de a szabványos behúzás szerint a Python kódnak négy szóközt kell használnia. Például:

    x = 1
    if x == 1:
        # behúzás négy szóköz
        print("x is 1.")

Gyakorlat
--------

Használja a "print" függvényt a "Hello, World!" sor kinyomtatásához.