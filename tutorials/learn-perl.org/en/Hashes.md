Tutorial
--------
A Perl hash variable stores a set of key/values pairs. The hash variable name begins with the `%` symbol. To refer to a single pair of a hash, the variable name must start with a `$` followed by the "key" of the pair in curly brackets (`{}`).

Example assigning values to hash pairs:

	%names_and_ages = ('John', 25, 'Mary', 45, 'Tom', 12);
	$age_mary = $names_and_ages{'Mary'};
	print "$age_mary\n";                  # 45
	$my_key = "Tom";
	$age_tom = $names_and_ages{$my_key};
	print "$age_tom\n";                   # 12
	print "$names_and_ages{'John'}\n";    # 25

Values to hash pairs can be created by using a list as shown above, where the first element of the pair is used as the key and the second element is used as the value and so forth. For clarity, the  string `=>` can be used as an alias to specify the pairs. For example:

	%names_and_ages = ('John' => 25, 'Mary' => 45, 'Tom' => 12);

Another method for assigning a value to a named key, one by one, is via a direct assignment:

	$names_and_ages{'Brad'} = 49;
	$names_and_ages{'Angela'} = 48;

## Extracting Keys and Values from a Hash variable

The list of all the keys from a hash is provided by the `keys` function, in the syntax: `keys %hashname`. The list of all the values from a hash is provided by the `values` function, in the syntax: `values %hashname`. Both the `keys` and `values` function return an array.

For example:

	%names_and_ages = ('John' => 25, 'Mary' => 45, 'Tom' => 12);
	@names = keys %names_and_ages;
	@ages = values %names_and_ages;
	print "Names are @names\n";
	print "Ages are @ages\n";

In order to get the hash size, or how many key-value pairs it has, one can get the size of the `keys %hashname` array, similar to getting the size of an array variable.

	%names_and_ages = ('John' => 25, 'Mary' => 45, 'Tom' => 12);
	$size = scalar (keys %names_and_ages);   # 3
	print "Hash \%names_and_ages has $size key-value pairs.\n";

## Adding and Removing key-value pairs from a hash variable

Adding a new key-value pair can be done by direct assignement. Removing an existing key-value pair can be done using the `delete` function operating on the hashname and specified key. For example:

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


**Slicing** a hash is selecting more than one value from pair elements in a hash to create an array. Slicing the hash is similar to slicing arrays. The specification of a slice must be a list of comma-delimited valid hash key values. Note the `@` prefix is used for the hash variable to store the returned array variable.

Example:

	%names_and_ages = ('John' => 25, 'Mary' => 45, 'Tom' => 12);
	@parents_ages = @names_and_ages{'John', 'Mary'};
	print "The ages of the parents are: @parents_ages\n";	# 25 45

To test for the existence of a key, you can use the `exists` function.

	%item_catalog = ("Apple" => 5 , "Banana" => 8, "Mushroom" => 24);
	# what happens when the key does not exist?
	if (exists $item_catalog{Pear}) {
		print "I know the price of a pear";
	} else {
		print "I don't know the price of a pear!";
	}

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
@family = ('Homer', 'Marge', 'Maggie');
%shoe_color = ('Lisa' => 'red', 'Homer' => 'brown', 'Maggie' => 'pink', 'Marge' => 'blue', 'Bart' => 'yellow');
%shoe_size = ('Marge' => 10, 'Lisa' => 7, 'Homer' => 12, 'Bart' => 8, 'Maggie' => 4);

print "$family[0] wears @shoe_color{$family[0]} shoes size @shoe_size{$family[0]}\n";
print "$family[1] wears @shoe_color{$family[1]} shoes size @shoe_size{$family[1]}\n";
print "$family[2] wears @shoe_color{$family[2]} shoes size @shoe_size{$family[2]}\n";
