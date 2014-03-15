Tutorial
--------
Perl hash variable stores a set of key/values pairs. The hash variable name begins with the at symbol (%). To refer to a single pair of a hash, the variable name must start with a $ followed by the "key" of the pair in curly brackets ({}). the index of the first array element is 0.

Assigning values to hash pairs example

	%names_and_ages = ('John', 25, 'Mary', 45, 'Tom', 12);
        $age_mary = $names_and_ages{'Mary'};
        print "$age_mary\n";                  # 45
        $my_key = "Tom";
        $age_tom = $names_and_ages{$my_key};
        print "$age_tom\n";                   # 12
        print "$names_and_ages{'John'}\n";    # 25

Values to hash pairs can be created by using a list as shown above, where the first element of the pair is used as the key and the second element is used as the value and so forth. For claritym the
"=>" string can be used as an alias to specify the pairs. For example:

	%names_and_ages = ('John' => 25, 'Mary' => 45, 'Tom' => 12);

Another method for assigning a value to a named key, one by one, is via direct assignment:

	$names_and_ages{'Brad'} = 49;
	$names_and_ages{'Angela'} = 48;

Extracting Keys and Values from a Hash variable

The list of all the keys from a hash is provided by the 'keys' function, in the syntax: keys %hashname
The list of all the values from a hash is provided by the 'values' function, in the syntax: values %hashname
Both the 'keys' and 'values' function return an array variable.

For example:

	%names_and_ages = ('John' => 25, 'Mary' => 45, 'Tom' => 12);
	@names = keys %names_and_ages;
	@ages = values %names_and_ages;
	print "Names are @names\n";
	print "Ages are @ages\n";

In order to get the hash size, or how many pairs are included in it, one can get the size of the 'keys %hashname' array, similar to getting the size of an array variable.

Adding and Removing Pair elements from a hash variable

Adding a new key/value pair, can be done by direct assignement.
Removing an existing key/value pair, can be done using the 'delete' function operating on the hashname and specified key value. For example:

	%names_and_ages = ('John' => 25, 'Mary' => 45, 'Tom' => 12);
        @names = keys %names_and_ages;
        $hashsize = @names;
	print "1. number of names is: $hashsize\n";	# 3
        # add a couple of name/age pairs
	$names_and_ages{'Brad'} = 49;
	$names_and_ages{'Angela'} = 48;
  	@names = keys %names_and_ages;
  	$hashsize = @names;
	print "2. number of names is: $hashsize\n";	# 5
	# delete one name/age pair
	delete $names_and_ages{'Tom'};
  	@names = keys %names_and_ages;
  	$hashsize = @names;
	print "3. number of names is: $hashsize\n";	# 4


Slicing a hash - selecting more than one value from pair elements in a hash to create an array. Slicing the hash is similar to slicing arrays. The specification of a slice must be a list of comma-delimited valid hash key values. Note the the at (@) prefix is used for the hash variable to store the returned array variable.

Example

	%names_and_ages = ('John' => 25, 'Mary' => 45, 'Tom' => 12);
	@parents_ages = @names_and_ages{'John', 'Mary'};
	print "The ages of the parents are: @parents_ages\n";	# 25 45

Exercise
-------------
An array holds a list of family member names. The first hash contains favorite shoe color per person name. The second hash contains shoe size per person name. Evaluate and print the favorite show color size per each family member. Output lines should be in the format: "Homer wears brown shoes size 12".

Tutorial Code
-------------
	@family = ('Homer', 'Marge', 'Maggie');
	%shoe_color = ('Lisa' => 'red', 'Homer' => 'brown', 'Maggie' => 'pink', 'Marge' => 'blue', 'Bart' => 'yellow');
	%shoe_size = ('Marge' => 10, 'Lisa' => 7, 'Homer' => 12, 'Bart' => 8, 'Maggie' => 4);
	# start your code here

Expected Output
---------------
	Homer wears brown shoes size 12
	Marge wears blue shoes size 10
	Maggie wears pink shoes size 4

Solution
--------
