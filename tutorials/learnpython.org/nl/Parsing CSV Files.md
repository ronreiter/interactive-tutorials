# Inleiding tot JavaScript

In dit gedeelte leer je de basisprincipes van JavaScript, een van de meest populaire programmeertalen voor webontwikkeling. JavaScript stelt ontwikkelaars in staat om dynamische en interactieve webtoepassingen te maken.

## Wat is JavaScript?

JavaScript is een lichte, geïnterpreteerde scripttaal die wordt gebruikt om webpagina's te ontwikkelen. Het is een van de kerntechnologieën van het World Wide Web, samen met HTML en CSS.

- HTML structureert de inhoud.
- CSS verzorgt de stijl.
- JavaScript maakt interactie mogelijk.

## Eerste stappen met JavaScript

Om te beginnen met JavaScript, hoef je alleen een webbrowser en een teksteditor te hebben. Alle moderne webbrowsers hebben een ingebouwde JavaScript-engine.

### Je eerste JavaScript-code

Je kunt JavaScript direct in een HTML-pagina opnemen met de `<script>`-tag. Hier is een simpel voorbeeld:

```html
<!DOCTYPE html>
<html>
<head>
    <title>Mijn eerste JavaScript</title>
</head>
<body>

<h1>Welkom bij JavaScript</h1>

<script>
  // Dit is een inline JavaScript-commentaar
  alert('Hallo, wereld!');
</script>

</body>
</html>
```

### Comments in JavaScript

Gebruik commentaar om je code te verduidelijken en het onderhoud ervan te vergemakkelijken. Er zijn twee soorten commentaar in JavaScript:

- Enkele regel commentaar: `// Dit is een commentaar`
- Meerdere regels commentaar: `/* Dit is een meerregelige commentaar */`

## Variabelen en Datatypen

In JavaScript worden variabelen gebruikt om gegevens op te slaan. Je kunt variabelen definiëren met de `var`, `let`, of `const` sleutelwoorden.

- `var` wordt gebruikt voor variabelen die door het hele programma toegankelijk moeten zijn.
- `let` heeft een blok-scope en wordt gebruikt binnen een beperkt bereik.
- `const` wordt gebruikt om constanten te definiëren die niet kunnen worden hergebruikt.

#### Voorbeeld:

```javascript
let naam = 'Jan';
const PI = 3.14159;
var leeftijd = 30;
```

## Exercise--------

1. Probeer de bovenstaande code in je eigen HTML-document te implementeren.
2. Experimenteer met het wijzigen van de waarden van variabelen. Wat gebeurt er als je de waarde van een `const` probeert te wijzigen? 

Doorloop deze oefeningen om een beter begrip te krijgen van hoe JavaScript functioneert en hoe het kan worden toegepast in webontwikkeling.