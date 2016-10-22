Tutorial
--------

There are many special selectors in CSS that allow us to query for a list of elements using advanced methods.

## Child selectors

Child selectors allow us to select a specific set of children of an element according to their internal ordering.

### first-child, last-child

To select the first and last child contained within a parent element, use the :first-child
and :last-child selectors. Here is an example:

    <style>
    li:first-child {
        color: blue;
    }
    
    li:last-child {
        color: green;
    }
    </style>
    <ul>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
        <li>Fourth item</li>
    </ul>

To make sure that we select only `<li>` elements within a `<ul>` element, we can use a relational selector:

    <style>
    ul li:first-child {
        color: blue;
    }
    
    ul li:last-child {
        color: green;
    }
    </style>
    <ul>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
        <li>Fourth item</li>
    </ul>


### nth-child and nth-last-child

Similarly to first-child and last-child, we can select using a fixed offset from the start and end of the 
list of children of the parent container. Take a look at the following example:

    <style>
    ul li:nth-child(2) {
        color: blue;
    }
    
    ul li:nth-last-child(2) {
        color: green;
    }
    </style>
    <ul>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
        <li>Fourth item</li>
    </ul>

### first-of-type and last-of-type

The first-of-type selector is very similar to the first-child selector, only that it is less restrictive - it
only looks at elements of its type as opposed to the first-child selector.  

    <style>
    ul li:first-child {
        color: blue;
    }
    
    ul li:first-of-type {
        color: red;
    }
    
    ul li:last-of-type {
        color: green;
    }
    </style>
    <ul>
        <dl><dt>First descriptive list item</dt></dl>
        <li>First regular list item</li>
        <li>Second regular list item</li>
        <li>Third regular list item</li>
        <li>Fourth regular list item</li>
    </ul>

Notice how the first CSS rule for coloring the first li child in blue does not do anything, since it will only be
applied to the first child element which is also an `<li>` element. This example also shows that the first-of-type
selector is usually less useful than its counterpart first-of-type.

### nth-of-type and nth-last-of-type

Similarly to the previous section, nth-of-type and nth-of-last-type also is less restrictive by counting elements
similar to its type, but also allows selecting an element using a fixed offset from either the 
start or the end of the list.

    <style>
    ul li:nth-child(2) {
        color: blue;
    }
    
    ul li:nth-of-type(2) {
        color: red;
    }
    
    ul li:nth-last-of-type(2) {
        color: green;
    }
    </style>
    <ul>
        <dl><dt>First descriptive list item</dt></dl>
        <li>First item</li>
        <li>Second item</li>
        <li>Third item</li>
        <li>Fourth item</li>
    </ul>

### only-child and only-of-type

The :only-child selector will only select an element if it does not have any siblings at all contained within its
parent element. The :only-of-type is similar, only that it will only consider elements from the same type as itself.

Let's take a look at both in action:

    <style>
    ul dl:only-child {
        color: red;
    }
    
    ul li:only-of-type {
        color: blue;
    }
    </style>

    <ul>
        <dl><dt>Only descriptive list item in the list</dt></dl>
        <li>Only list item in the list</li>
    </ul>
   
Notice how in this example the only-child selector fails to color the `<dl>` element in read because of the presence
of the `<li>` element as a sibling. However, for the only-of-type selector, having a `<dl>` element as a sibling
is not an issue, since there are no other `<li>` elements contained within the same parent. 


## Hierarchy selectors

### empty selector

The :empty selector applies only to elements that are empty and contain only whitespaces and/or HTML comments.
Let's take a look at an example:

    <style>
    ul li {
        background-color: #cff;
    }
    
    ul li:empty {
        background-color: #fcf;
    }
    </style>
    <ul>
        <li>First item</li>
        <li>Second item</li>
        <li></li>
        <li>Fourth item</li>
    </ul>
    

### Adjacent sibling selectors (+ and ~)

## Special selectors

### The universal selector (*)

### The not selector

## Attribute Selectors

### Basic attribute selector

### Attribute equals value selector (=)

### Attribute contains value selector (~= and *=)

### Attribute starts with selectors (|= and ^=)

### Attribute ends with selector ($=)




Exercise
--------

This page does not have an exercise yet. You are welcome to contribute one by sending me a pull request:

[[https://github.com/ronreiter/interactive-tutorials]]


Tutorial Code
-------------

    <!DOCTYPE html>
    <html>
        <head>
        </head>
        <body>
        </body>
    </html>
    
Expected Output
---------------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Hello, World!</title>
        </head>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>

Solution
--------

    <!DOCTYPE html>
    <html>
        <head>
            <title>Hello, World!</title>
        </head>
        <body>
            <p>Hello, World!</p>
        </body>
    </html>
