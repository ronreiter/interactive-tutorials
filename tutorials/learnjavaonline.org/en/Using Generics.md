Tutorial
--------
Generics provide compile-time type safety that allows programmers to catch invalid types at compile time.

As this feature is often used with collections, we will focus on collections. Generics allows the user to set the type of the collection to limit what kind of objects can be inserted into the collection. The user also does not have to cast the values obtain from the collection. 

When declaring a generic, it must have a type parameter specifying what type of elements will be in the collection. For example, to declare a list containing strings, you would write
List<String> names = new ArrayList<>();

Exercise
--------
Create a list containing the of food you wish to buy in a supermarket. The list should have the following: milk, cheese, chicken, carrot, and rice. Use .add() to add the elements to the list.

Tutorial Code
--------
    // Fill the list and print the items
    List<String> food = new ArrayList<>();

Expected Output
--------
    milk
    cheese
    chicken
    carrot
    rice

Solution
--------
    List<String> food = new ArrayList<>();
    food.add("milk");
    food.add("cheese");
    food.add("chicken");
    food.add("carrot");
    food.add("rice");
    for (String item : food) {
      System.out.println(item);
    }
