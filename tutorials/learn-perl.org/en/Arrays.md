Tutorial
--------
Perl array variable stores an ordered list of scalar values. The array variable name begins with the at symbol (@). To refer to a single element of an array, the variable name must start with a $ followed by the index of the element in square brackets ([]). the index of the first array element is 0.

Assigning values to array elements example

	@array1 = (25, "John", "Mary", -45.34);
        $array1[5] = "Tom";
	@array_from_text = qw/Perl is a great scripting language/;
        print "$array1[1]\n";            # John
        print "$array_from_text[0]\n";   # Perl
        print "$array_from_text[-3]\n";  # great

The first example is multiple elements value assignment, which creates an array with four elements, some numeric and some string.
The second example is a direct assignment of an element with a specific index.
The third example uses the qw// operator which returns an array of string elements made of the original string delimited by whitespace. In this example the fourth element of array @array_from_text is the string 'great'.

Accessing array elements can be done with a negative index. This will select elements from the end of the array.

Perl supports a shortcut for sequential letters or numbers. Use the range operator (..) to assign sequential values to array elements. For example:

	@month_numbers = (0..12);    # 0 1 2 3 4 5 6 7 8 9 10 11 12
        print "number of month 2 is $month_numbers[2]\n";

The size of the array can be evaluated by the scalar context of the array or by using the scalar variable value of the last array element. The scalar context is refered to by 'scalar @<array_name>'. The last array element is refered to by '$#<array_name>'. If @array is empty, the value of $#array is -1.

	@month_numbers = (0..12);    # 0 1 2 3 4 5 6 7 8 9 10 11 12
	print "Size: ",scalar @month_numbers,"\n";
	print "Index of last array element: ",$#month_numbers,"\n";

Perl offers many useful functions to manipulate arrays and their elements.

push    - push element or elements into the end of the array
pop     - pop off the last element of the array
shift   - pop off the first element of the array
unshift - push element or elements into the beginning of the array

Example

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

Slicing an array - selecting more than one element from an array to create another array. The specification of a slice must be a list of comma-delimited valid index numbers.

Example

	@Months = qw/Jan Feb Mar apr May Jun Jul Aug Sep Oct Nov Dec/;
	@winter_canada = @Months[-1,0,1];
	@winter_brazil = @Months[5..7];
	print "winter months in Canada are: @winter_canada\n";
	print "winter months in Brazil are: @winter_brazil\n";

Transform strings to arrays using the split function:
You can use the split() function to split a long scalar string into separate array elements, using a value as a delimiter string.

Transform arrays to strings using the join function:
You can use the join() function to rejoin elements of an array into a long scalar string, with an optional delimiter.

Example

	$Months = 'Jan,Feb,Mar,apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec';
        @array_of_month_names = split(',' , @Months);
        $dash_delimited_monthlist = join('-' , @array_of_month_names);
        $very_long_message = join(' is followed by ' , @array_of_month_names);
        print "$Months\n";
        print "@array_of_month_names\n";
        print "$dash_delimited_monthlist\n";
        print "$very_long_message\n";

Merging arrays - Since as an array is a comma-delimited list of values you can easily combine two arrays. For example:

	@group1 = ('John','Steve','Mary');
	@group2 = ('Bill','Barack');
  @combined_group = (@group1 , @group2, 'Jeff', 'Tom');
  print "@combined_group\n";

Exercise
-------------
An array holds a list of cellular phone models. A second array holds the price of each model in US Dollars. Create a third array which contains the price of each model in Pounds Sterling. Assume 1 pound equals 2 US Dollars. As the result print one line per model stating its cost in pounds. For example: "One iPhone 5 costs 120 pounds."

Tutorial Code
-------------
	@phone_models = ("iPhone 5", "Samsung Galaxy S4", "Motorolla Razr XT910");
	@phone_price_dollars = (240,180,172);
	@phone_price_pounds = ();

Expected Output
---------------
	One iPhone 5 costs 120 pounds.
	One Samsung Galaxy S4 costs 90 pounds.
	One Motorolla Razr XT910 costs 86 pounds.

Solution
--------
