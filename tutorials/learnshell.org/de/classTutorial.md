Tutorial: You will need to know basic shell scripting or any other programming language to solve this. You can use whichever loop you like. For, If, While etc...

Exercise: 
  Use shell script to print out odd numbers from 1 to 100. This will help you get used to using different loops in shell script. Try using different loops if you figure it out
  using one of them as a challenge. 
  
Tutorial code: 
  #!/bin/bash
  for ((c = ?; c <= ?; c += ?))
  do 
	  ?
  done

Expected output:
1
3
5
7
(...)
99

Solution:

#!/bin/bash

for ((c = 1; c <= 100; c +=2))
do 
	echo $c
done

