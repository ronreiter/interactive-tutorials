Python este un limbaj foarte simplu și are o sintaxă foarte directă. Încurajează programatorii să programeze fără cod boilerplate (pregătit). Cea mai simplă directivă în Python este directiva "print" - aceasta pur și simplu tipărește o linie (și include, de asemenea, o linie nouă, spre deosebire de C).

Există două versiuni majore Python, Python 2 și Python 3. Python 2 și 3 sunt destul de diferite. Acest tutorial folosește Python 3, deoarece este mai corect din punct de vedere semantic și suportă caracteristici mai noi.

De exemplu, o diferență între Python 2 și 3 este declarația `print`. În Python 2, declarația "print" nu este o funcție și, prin urmare, se invocă fără paranteze. Totuși, în Python 3, este o funcție și trebuie invocată cu paranteze.

Pentru a tipări un șir de caractere în Python 3, scrie pur și simplu:

    print("This line will be printed.")

### Indentația

Python folosește indentația pentru blocuri, în loc de acolade. Sunt acceptate atât tab-urile, cât și spațiile, dar standardul de indentație cere codului Python standard să folosească patru spații. De exemplu:

    x = 1
    if x == 1:
        # indented four spaces
        print("x is 1.")

Exercițiu
--------

Utilizează funcția "print" pentru a tipări linia "Hello, World!".