Tutorial
--------

Destructuring is a feature of ES6, introduced for making easier and cleaner repetitive operations and assignments made in JS.

With destructuring we can extract data from a deeper level inside an array / object with a more concise syntax, even giving this 'extracted' data some other name in the same operation.

In JavaScript we can achieve this in a very simply way:

    // Consider this object
    const person = {
        head: {
            eyes: 'x',
            mouth: {
                teeth: 'x',
                tongue: 'x'
            }
        },
        body: {
            shoulders: 'x',
            chest: 'x',
            arms: 'x',
            hands: 'x',
            legs: 'x'
        }   
    };

    // If we want to get head, the old way:
    let head = person.head;

    // ES6 Destructuring
    let { head } = person;

    // We can give other name as if a variable was declared, in the same line
    let { head : myHead } = person;

    // So we can do...
    console.log(myHead);            // prints '{ eyes, mouth: { ... } }'


With arrays:

    let numbers = ['2', '3', '7'];

    // Old way
    let two = numbers[0];
    let three = numbers[1];

    // ES6 Destructuring
    let [two, three] = numbers;

    // We can give them other names too
    let [two: positionZero, three: positionOne] = numbers;

    console.log(positionZero)       // prints '2'
    console.log(positionOne)        // prints '3'


We can do this with function parameters too:

    // Old way
    function getHeadAndBody(person) {

        let headAndBody = {
            head: person.head,
            body: person.body
        }

        return headAndBody;
    } 

    // ES6 Destructuring
    function getHeadAndBody({ head, body }) {
        return { head, body }
    }

    // With arrow functions
    let getHeadAndBody = ({ head, body }) => { head, body };

Warning: Be careful with destructuring, if you aren't sure if the function is going to receive
an object with those parameters, it's better to use the old way in order to not incurring in ` head / body is undefined ` errors. You can avoid that type of errors while using ES6 Destructuring giving default parameters to the function, so you can be sure that properties will exist, not being obliged to rely on the parameters received.

    // I'm not sure if head and body will be present in some cases...
    // Now we are sure that head or body will be equal to '' if the real parameter doesn't have that properties inside
    function getHeadAndBody({ head = '', body = '' }) {
        return { head, body }
    }

You can destructure as deep as you like, always considering if that property exists. 

    // Deep destructuring
    let computer = {
        processor: {
            transistor: {
                silicon: {
                    thickness: '9nm'
                }
            }
        }
    }

    let {
        processor: 
            { 
                transistor: { 
                    silicon: { 
                        thickness 
                    }
                }
            } 
    } = computer;

    // Making it cleaner
    let { thickness: inteli9Thickness } = computer.processor.transistor.silicon;

    console.log(inteli9Thickness)          // prints '9nm'

Exercise
--------

Get the `legs` property and get the data inside the third position of `numbers` using destructuring. Give it the names of `myLegs` and `thirdPosition` respectively.

Tutorial Code
-------------

const person = {
    head: {
        eyes: 'x',
        mouth: {
            teeth: 'x',
            tongue: 'x'
        }
    },
    body: {
        shoulders: 'x',
        chest: 'x',
        arms: 'x',
        hands: 'x',
        legs: 'x'
    }   
};

const numbers = ['2', '3', '4'];

// TODO: Destructure here.

console.log(myLegs);
console.log(thirdPosition);

Expected Output
---------------

x
4

Solution
--------

// TODO: Destructure here.
let { body: { legs: myLegs } } = person;
let [onePosition, secondPosition, thirdPosition] = numbers;

// or...
// const { legs: myLegs } = person.body;
// const [,,thirdPosition] = numbers;

console.log(myLegs);
console.log(thirdPosition);
