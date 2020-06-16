Tutorial
--------

Comparison of arrays
Shell can handle arrays
An array is a variable containing multiple values. Any variable may be used as an array. There is no maximum limit to the size of an array, nor any requirement that member variables be indexed or assigned contiguously.
Arrays are zero-based: the first element is indexed with the number 0. 
   
	# basic construct
	# array=(value1 value2 ... valueN)
	array=(23 45 34 1 2 3)
	#To refer to a particular value (e.g. : to refer 3rd value)
	echo ${array[2]}  
    
	#To refer to all the array values
	echo ${array[@]}
	
	#To evaluate the number of elements in an array
	echo ${#array[@]}
	
Exercise
--------
In this exercise, you will need to compare three list of arrays and write the common elements of all the three arrays:

`a=(3 5 8 10 6)`,`b=(6 5 4 12)`,`c=(14 7 5 7)`
result is the common element 5.

Tutorial Code
-------------
	#!/bin/bash
	# enter your array comparison code here
        

Expected Output
---------------
	5

Solution
--------
	#!/bin/bash
	# enter your array comparison code here
	# initialize arrays a b c
	a=(3 5 8 10 6) 
	b=(6 5 4 12) 
	c=(14 7 5 7)
	#comparison of first two arrays a and b
	for x in "${a[@]}"; do 
	  in=false 
	  for y in "${b[@]}"; do 
	    if [ $x = $y ];then 
	      # assigning the matching results to new array z
	      z[${#z[@]}]=$x
	    fi
	  done 
	done
	#comparison of third array c with new array z
	for i in "${c[@]}"; do 
	  in=false
	  for k in "${z[@]}"; do
	    if [ $i = $k ];then
	      # assigning the matching results to new array j
	      j[${#j[@]}]=$i
	    fi
	  done 
	done 
	# print content of array j
	echo ${j[@]}
