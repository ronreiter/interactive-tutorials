Tutorial
--------

HTML bepaalt de inhoud van een pagina, maar **CSS** (Cascading Style Sheets) bepaalt hoe die inhoud eruitziet. Met CSS beheer je kleuren, lettertypen, spaties, lay-out en nog veel meer.

Er zijn drie manieren om CSS aan een pagina toe te voegen:

* Een **inline** style-attribuut direct op een element: `style="color: red;"`.
* Een **`<style>`-blok** in de `<head>` van het document.
* Een **extern stylesheet** dat wordt geladen met een `<link>`-tag.

Een CSS-regel bestaat uit een *selector* en een *declaratieblok*. De selector bepaalt op welke elementen de regel van toepassing is, en het blok bevat de eigenschappen:

    h1 {
        color: red;
        font-size: 20px;
    }

Hier selecteert de selector `h1` elk `<h1>`-element en bepalen de declaraties de tekstkleur en lettergrootte. Declaraties worden geschreven als `eigenschap: waarde;`, één per regel.

Er zijn veel selectors, maar drie zijn bijzonder nuttig:

* `element` – komt overeen met alle elementen van dat type, bijv. `p`.
* `.class` – komt overeen met elk element met die class, bijv. `.important`.
* `#id` – komt overeen met het enige element met die id, bijv. `#header`.

Je kunt een element ook stylen via het `class`-attribuut, zodat meerdere elementen dezelfde look delen:

    <p class="important">Deze alinea wordt gemarkeerd.</p>

    .important {
        background-color: yellow;
        font-weight: bold;
    }

Exercise
--------

1. Voeg een `<style>`-blok toe in de `<head>` dat elke `h1` rood maakt.
2. Geef het `<p>`-element de class `important` en style die class met een gele achtergrond.

Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>CSS Basics</title>
        </head>
        <body>
            <h1>Hallo, Wereld!</h1>
            <p>Deze alinea is belangrijk.</p>
        </body>
    </html>

Expected Output
---------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>CSS Basics</title>
            <style>
                h1 { color: red; }
                .important { background-color: yellow; }
            </style>
        </head>
        <body>
            <h1>Hallo, Wereld!</h1>
            <p class="important">Deze alinea is belangrijk.</p>
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
            <title>CSS Basics</title>
            <style>
                h1 { color: red; }
                .important { background-color: yellow; }
            </style>
        </head>
        <body>
            <h1>Hallo, Wereld!</h1>
            <p class="important">Deze alinea is belangrijk.</p>
        </body>
    </html>
