Tutorial
--------

Een HTML-attribuut geeft een element extra informatie. Naast standaardattributen zoals `id`, `class` en `src`, kun je ook je eigen **aangepaste data-attributen** maken om extra informatie op te slaan die je pagina of script later kan lezen.

Een data-attribuut begint met de prefix `data-` gevolgd door een naam. Bijvoorbeeld:

    <ul>
        <li data-email="joe@example.com">Joe</li>
        <li data-email="mary@example.com">Mary</li>
    </ul>

Hier slaat het `data-email`-attribuut een e-mailadres op op elk lijstitem. De browser behandelt het als elk ander attribuut — je kunt het lezen met CSS, JavaScript of gewoon bekijken in de HTML.

Met de DOM kun je een data-attribuut lezen met JavaScript via `getAttribute("data-email")`, of met de moderne `dataset`-API:

    // lees het data-email-attribuut van het eerste li
    var email = document.querySelector("li").dataset.email;
    alert(email);

De eigenschap `dataset` zet `data-email` om naar de sleutel `email`. Streepjes worden verwijderd en de volgende letter wordt met een hoofdletter geschreven, dus `data-user-name` wordt `userName`.

Data-attributen zijn perfect voor het opslaan van kleine hoeveelheden extra data — zoals configuratiewaarden, id's of instellingen — waarvoor geen apart element of script nodig is.

Exercise
--------

1. Voeg een `data-year`-attribuut toe met de waarde `2026` aan het `<span>`-element.
2. Voeg een `data-rank`-attribuut toe met de waarde `first` aan het `<p>`-element.

Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Data Attributes</title>
        </head>
        <body>
            <span>Copyright</span>
            <p>Eerste plaats</p>
        </body>
    </html>

Expected Output
---------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Data Attributes</title>
        </head>
        <body>
            <span data-year="2026">Copyright</span>
            <p data-rank="first">Eerste plaats</p>
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Data Attributes</title>
        </head>
        <body>
            <span data-year="2026">Copyright</span>
            <p data-rank="first">Eerste plaats</p>
        </body>
    </html>
