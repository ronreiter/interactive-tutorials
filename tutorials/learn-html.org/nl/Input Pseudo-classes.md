Tutorial
--------

There are several pseudo-classes aimed to style HTML forms according to their configuration.

### Checked

The CSS :active pseudo-class defines the styles to use for a checkbox element in a checked state

    <style>
    input:checked {
        margin-left: 50px;
    }
    </style>
    <form>
        <p><input type="checkbox"> First Option</p>
        <p><input type="checkbox"> Second Option</p>
        <p><input type="checkbox"> Third Option</p>        
    </form>
    

### Enabled & Disabled Form Inputs

The CSS :enabled and :disabled pseudo-class defines the styles to use according to whether or not a form input field
is enabled or disabled.

    <style>
    input:disabled {
        color: gray;    
    }
    
    input:enabled {
        font-weight: bold;    
    }
    </style>
    <form>
        <p><input type="text" value="First Option"></p>
        <p><input type="text" value="Second Option"></p>
        <p><input type="text" value="Third Option"></p>        
    </form>

### Optional and required

### Read-only and read-write

### Valid and invalid

### In-range and out-of-range




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
