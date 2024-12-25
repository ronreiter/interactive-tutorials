Python biedt ingebouwde JSON-bibliotheken om JSON te coderen en decoderen.

In Python 2.5 wordt de simplejson-module gebruikt, terwijl in Python 2.7 de json-module wordt gebruikt. Aangezien deze interpreter Python 2.7 gebruikt, zullen we json gebruiken.

Om de json-module te gebruiken, moet deze eerst worden geïmporteerd:

Er zijn twee basisindelingen voor JSON-gegevens: ofwel als een string of als de object datastructuur. De object datastructuur, in Python, bestaat uit lijsten en woordenboeken die in elkaar genest zijn. De object datastructuur maakt het mogelijk om Python-methoden (voor lijsten en woordenboeken) te gebruiken om elementen toe te voegen, op te sommen, te zoeken en te verwijderen uit de datastructuur. Het stringformaat wordt voornamelijk gebruikt om de gegevens naar een ander programma door te geven of in te laden in een datastructuur.

Om JSON terug te laden naar een datastructuur, gebruik de methode "loads". Deze methode neemt een string en zet deze terug om in de json-object datastructuur:

Om een datastructuur naar JSON te coderen, gebruik de methode "dumps". Deze methode neemt een object en retourneert een string:

Python ondersteunt een eigen Python data serialisatiemethode genaamd pickle (en een snellere alternatieve genaamd cPickle).

Je kunt het op exact dezelfde manier gebruiken.

Het doel van deze oefening is om de JSON-string af te drukken met het key-value paar "Me" : 800 eraan toegevoegd.