Tutorial
--------
### The Linked List Data Structure

A linked list is a linear data structure similar to an array, but the elements are stored in a way such that each element is a seperate object which contains a pointer to next element/object in the list

There are many types of linkedlists but in this tutorial we are going to discuss about `singly Linked List`

Each element of a linked list can be called as `Node` and `head` is a reference to the first element/Node in the linked list , if a list is Empty then the head of the list should be `null` and to indicate the end of the list the next value of the last element points to null 

Each Element/Node of a linkedlist would be of an object Node type 

     class Node {
     constructor(val) {
          this.next = null;

          this.data = val;
       }

     };



### Creating a list

Suppose you want to construct a linked list of size `n`, then you should create n node's and interlink them with the help of `next` member in the class Node of Each element 

To access the created list you need the head/first element of the list so you should return head from the function 
     
     const createList = (n)=>{

     let node1 = new Node(1);
     let head = node1;
     let node2 = null;

     for (let i = 0;i<n-1;i++)
     {
          node2 = new Node(i+2);
          node1.next = node2;
          node1 = node2;
     }

     node1.next = null;

     return head;

     };

The `createList` function takes `n` (number of nodes) as argument and creates `n` nodes and connects them by storing the next nodes reference in the current node's next field and stores `NULL` in the next field of last node (i.e, to indicate the termination of list) and returns `head`(an object of Node type) which refers to the starting Node of linked list

Invoking createList :

     let head = createList(10);

### Printing linked list 
We can print the list if we have access to the head of the list 

     const printList = (node1) => {
     let node = node1;

     while(node!=null)
     {
          console.log(node.data);
          node = node.next;
     }
     };

Exercise
--------

In this Exercise you must complete the body of the given loop such that it will traverse the whole list and prints the content of each Node of the list
you will have access to head of the linked list


Tutorial Code
-------------

const createList = ()=>{

     n = 5;
     let temp = new Node(0);
     let head = temp;
     let node2 = null;

     for (let i = 0;i<n-1;i++)
     {
          node2 = new Node(10+i*10);
          temp.next = node2;
          temp = node2;
     }

     temp.next = null;

     return head;

     };


const DataInNode = (head)=>{

     
// TODO: modify this code
     while(){




     }
}

let retVal = createList();
DataInNode(retVal);

Expected Output
---------------

0
10
20
30
40

solution
--------

const createList = ()=>{

n = 5;
let temp = new Node(0);
let head = temp;
let node2 = null;

for (let i = 0;i<n-1;i++)
{
     node2 = new Node(10+i*10);
     temp.next = node2;
     temp = node2;
}

temp.next = null;

return head;

};


const DataInNode = (head)=>{

     
// TODO: modify this code
while(head!==null){

     console.log(head.data);

     head = head.next;


    }
}

let retVal = createList();
DataInNode(retVal);

