Când programezi, apar erori. Este pur și simplu un fapt al vieții. Poate utilizatorul a introdus date greșite. Poate o resursă de rețea nu era disponibilă. Poate că programul a rămas fără memorie. Sau poate că programatorul chiar a făcut o greșeală!

Soluția Python pentru erori sunt excepțiile. Probabil ai văzut o excepție înainte.

Oops! Ai uitat să atribui o valoare variabilei 'a'.

Dar uneori nu vrei ca excepțiile să oprească complet programul. S-ar putea să vrei să faci ceva special când apare o excepție. Acest lucru este realizat într-un bloc *try/except*.

Iată un exemplu simplu: Să presupunem că iterezi printr-o listă. Trebuie să parcurgi 20 de numere, dar lista este creată dintr-o intrare de la utilizator și s-ar putea să nu aibă 20 de numere în ea. După ce ajungi la sfârșitul listei, vrei doar ca restul numerelor să fie interpretate ca fiind 0. Iată cum ai putea face asta:

Acolo, nu a fost prea greu! Poți face asta cu orice excepție. Pentru mai multe detalii despre gestionarea excepțiilor, nu căuta mai departe decât [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

Gestionează toate excepțiile! Gândește-te la lecțiile anterioare pentru a returna numele de familie al actorului.