Tutorial
--------
There are three types of pop-up boxes in javascript: confirm, alert, and prompt. To use any of them, type


    confirm("Hi!");
    prompt("Bye!");
    alert("Hello");

Confirm boxes will return "true" if ok is selected, and return "false" if cancel is selected. Alert boxes will not return anything. Prompt boxes will return whatever is in the text box. Note: prompt boxes also have an optional second parameter, which is the text that will already be in the text box.

Exercise
--------
Make a variable ```test``` set it equal to a prompt box, and type "Hi!" in it (without the quotes) when it pops up. Note: your pop-up blocker must not be enabled.

Tutorial Code
-------------
// Make your prompt box below!

console.log(test);

Expected Output
---------------
Hi!

Solution
--------
// Make your prompt box below!
var test = prompt("Type Hi!");
console.log(test);
