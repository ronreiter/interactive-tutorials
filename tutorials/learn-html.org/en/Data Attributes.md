Tutorial
--------

An HTML attribute gives an element extra information. Alongside standard attributes such as `id`, `class`, and `src`, you can create your own **custom data attributes** to store extra information that your page or script can read later.

A data attribute starts with the prefix `data-` followed by a name. For example:

    <ul>
        <li data-email="joe@example.com">Joe</li>
        <li data-email="mary@example.com">Mary</li>
    </ul>

Here the `data-email` attribute stores an email address on each list item. The browser treats it like any other attribute — you can read it with CSS, JavaScript, or just inspect it in the HTML.

Using the DOM, you can read a data attribute with JavaScript via `getAttribute("data-email")`, or with the modern `dataset` API:

    // read the data-email attribute of the first li
    var email = document.querySelector("li").dataset.email;
    alert(email);

The `dataset` property converts `data-email` to the key `email`. Dashes are removed and the following letter is capitalized, so `data-user-name` becomes `userName`.

Data attributes are perfect for storing small amounts of extra data — like configuration values, identifiers, or settings — that don't need a whole separate element or script.

Exercise
--------

1. Add a `data-year` attribute with the value `2026` to the `<span>` element.
2. Add a `data-rank` attribute with the value `first` to the `<p>` element.

Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Data Attributes</title>
        </head>
        <body>
            <span>Copyright</span>
            <p>First place</p>
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
            <p data-rank="first">First place</p>
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
            <p data-rank="first">First place</p>
        </body>
    </html>
