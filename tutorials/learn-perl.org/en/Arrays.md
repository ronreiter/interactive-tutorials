Tutorial
--------

Perl array variables store an ordered list of scalar values. The array variable name begins with the `@` symbol. To refer to a single element of an array, the variable name must start with a `$` followed by the index of the element in square brackets (`[]`). The index of the first array element is 0.

For example:

	# Multiple elements value assignment, which creates an array with four elements, some numeric and some string.
	@array = (25, "John", "Mary", -45.34);
	print "$array[1]\n";            # John

	# Direct assignment of an element with a specific index.
	$array[5] = "Tom";

Accessing array elements can be done with a negative index. This will select elements from the end of the array.

	# Use the qw// operator which returns 
	# an array of string elements made of the original string delimited by whitespace.

	@array_from_text = qw/Perl is a great scripting language/;
	print "$array_from_text[0]\n";   # Perl
	print "$array_from_text[1]\n";   # is
	print "$array_from_text[-3]\n";  # great

Perl supports a shortcut for sequential letters or numbers. Use the range operator `..` to assign sequential values to array elements. For example:

	@month_numbers = (0..12);    # 0 1 2 3 4 5 6 7 8 9 10 11 12
	print "number of month 2 is $month_numbers[2]\n"; # 2

The size or length of the array can be evaluated by the scalar context of the array or by using the scalar variable value of the last array element. The scalar context is refered to by `scalar @array`. The last array element is refered to by `$#array`. If `@array` is empty, the value of `$#array` is -1.

	@month_numbers = (0..12);    # 0 1 2 3 4 5 6 7 8 9 10 11 12
	print "Size: ",scalar @month_numbers,"\n";
	print "Index of last array element: ",$#month_numbers,"\n";

	@empty = ();
	print "Last element of @empty: $#array"; # -1

Perl offers many useful functions to manipulate arrays and their elements:

- `push(@array, element)`: add element or elements into the end of the array
- `$popped = pop(@array)`: delete and return the last element of the array
- `$shifted = shift(@array)`: delete and return the first element of the array
- `unshift(@array)`: add element or elements into the beginning of the array

Examples:

	# 1. define initial array contents
	@basket = ("Apple","Banana","Carrot");
	print "1. My \@basket array is: @basket\n";
	# 2. add element at the end of the array
	push(@basket, "Orange");
	print "2. My \@basket array is: @basket\n";
	# 3. add element at the beginning of the array
	unshift(@basket, "Avocado");
	print "3. My \@basket array is: @basket\n";
	# 4. remove element from the end of the array
	pop(@basket);
	print "4. My \@basket array is: @basket\n";
	# 5. remove element from the beginning of the array
	shift(@basket);
	print "5. My \@basket array is: @basket\n";

**Slicing** an array is selecting more than one element from an array to create another array. The specification of a slice must be a list of comma-delimited valid index numbers, or using the `range` operator.

Examples:

	@Months = qw/Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec/;
	@winter_canada = @Months[-1,0,1];
	@winter_brazil = @Months[5..7];
	print "winter months in Canada are: @winter_canada\n";  # Dec Jan Feb
	print "winter months in Brazil are: @winter_brazil\n";  # Jun Jul Aug

You can use the `split()` function to split a long string into separate array elements, using a value as a delimiter string.

	$Months = 'Jan,Feb,Mar,apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec';
	@array_of_month_names = split(',' , $Months);
	print "$Months\n";
	print "@array_of_month_names\n";

You can use the `join()` function to rejoin elements of an array into a long scalar string, with an optional delimiter.

	$Months = 'Jan,Feb,Mar,apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec';
	@array_of_month_names = split(',' , $Months);
	$dash_delimited_monthlist = join('-' , @array_of_month_names);
	$very_long_message = join(' is followed by ' , @array_of_month_names);
	print "$Months\n";
	print "@array_of_month_names\n";
	print "$dash_delimited_monthlist\n";
	print "$very_long_message\n";

Since as an array is a comma-delimited list of values you can easily combine two arrays with the `merge()` function. For example:

	@group1 = ('John','Steve','Mary');
	@group2 = ('Bill','Barack');
	@combined_group = (@group1 , @group2, 'Jeff', 'Tom');
	print "@combined_group\n";

Exercise
-------------
An array holds a list of cellular phone models. A second array holds the price of each model in US Dollars. Create a third array which contains the price of each model in Pounds Sterling. Assume 1 pound equals 2 US Dollars. As the result print one line per model stating its cost in pounds.

For example: "One iPhone X costs 120 pounds."

Tutorial Code
-------------
@phone_models = ("iPhone X", "Samsung Galaxy S8", "LG V30");
@phone_price_dollars = (240,180,172);
@phone_price_pounds = ();

Expected Output
---------------
One iPhone X costs 120 pounds.
One Samsung Galaxy S8 costs 90 pounds.
One LG V30 costs 86 pounds.

Solution
--------
@phone_models = ("iPhone X", "Samsung Galaxy S8", "LG V30");
@phone_price_dollars = (240,180,172);
@phone_price_pounds = (.5*$phone_price_dollars[0], .5*$phone_price_dollars[1], .5*$phone_price_dollars[2]);
	
print "One $phone_models[0] costs $phone_price_pounds[0] pounds.\n";
print "One $phone_models[1] costs $phone_price_pounds[1] pounds.\n";
print "One $phone_models[2] costs $phone_price_pounds[2] pounds.\n";
