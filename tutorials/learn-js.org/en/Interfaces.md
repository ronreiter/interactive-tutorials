Tutorial
--------

JavaScript provides some data structures that allow us to manipulate data in an efficient, useful and simply way.

The most important are:

### Map

ES6 introduces a new data structure used for mapping keys with values. We can iterate over the elements in them order of insertion.

    let myMap = new Map();
    myMap.set("dog", "perro");
    myMap.set("cat", "gato");
    myMap.set("tiger", "tigre");
    console.log(myMap.size);            // prints 3.

    // Let's iterate over our map
    for (let [key, value] of myMap) {
        console.log(key + "-" + value);     // prints dog-perro, cat-gato, ...
    }

It's possible that you realize that there is already a structure for mapping like this in JavaScript, an object. But there are some differences between them:

* Keys of an object are of type String, always. Map allows any type of key.
* We can get the size of a Map doing myMap.size, with an object you have to iterate over it or instead use a function called `Object.keys(myObject)` that will return the keys of an object as an interable.
* Iteration over maps are in the same order that were inserted.

So to get things clear: 
* Use maps when keys are unknown since execution time.
* Use objects when you have clear entities with differenced key-value pairs.

### WeakMap

https://developer.mozilla.org/es/docs/Web/JavaScript/Guide/Keyed_collections

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