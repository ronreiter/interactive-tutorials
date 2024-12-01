Tutorial
--------
Arrays can contain any type of data, including other arrays. An array that contains other arrays is called a nested array, or a multidimensional array.
Example:

        numbers = [
          [1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]
        ]

You already know that every element in an array has an index. Accessing a specific element within a nested array is as simple as calling array[x][y], where 'x' is the index of the nested element and 'y' is the index inside of the nested element.

        value = numbers[0][0] #=> 1  
        value = numbers[1][0] #=> 4  
        value = numbers[2][0] #=> 7

You can also use negative indices to return elements from the end of an array, starting at [-1].

        value = numbers[0][-1] #=> 3
        value = numbers[-1][0] #=> 7
        value = numbers[-1][-2] #=> 9

Exercise
--------

You are given a two-dimensional nested array 'grid' representing a rectangular 'grid' of integers. Each element 'grid[i][j]' represents the value at the cell located at the 'i'-th row and 'j'-th column.

Using the provide code, access the 


Tutorial Code
-------------

    # Initialize a nested array to represent a 2D grid
    grid = [
      [1, 2, 3],
      [4, 5, 6],
      [7, 8, 9]
    ]
    # Access a cell in the grid where row is 1 and column is 2 and store the value in variable name value 
    # Write your code here 



Expected Output
---------------
6

Solution
--------
grid = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]

value = grid[1][2]
puts value