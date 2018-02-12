Tutorial
--------

### Basic syntax:

The hash (`#`) sign starts a comment. Lines starting with `=` are interpreted as the start of a section of embedded documentation (pod - plain old text), and all subsequent lines until the next `=cut` are ignored by the compiler.

	# This is a single line comment
	print "Hello, world\n";

	=begin comment
	This is all part of multiline comment.
	You can use as many lines as you like.
	These comments will be ignored by the
	compiler until the next =cut is encountered.
	=cut

The semicolon (`;`) is required to end each Perl statement.

The simplest way to print text to the screen is using the `print` command. Note that the parenthesis are notr required, so the next statements will produce the same result:

	print("this is a text line\n");
	print "this is a text line\n";

Note that `print` needs the newline character (`\n`) to be explicitly defined.

The double-quotes (`"`) are used to encapsulate a string to be printed, and it allows replacement of variables and special characters (like `\n`) inside the string. This is called **interpolation**. The single-quote (`'`) prevents variable value replacement.

	$x = 5;
	print "double quotes allow the variable named x to show its real value of $x\n";
	print 'but within single quotes the value of $x is not replaced\n';

### Variables:

Perl is a **case sensitive** programming language. Thus `$World` and `$world` are two different variables in Perl.

A Perl variable name starts with either `$`, `@` or `%` followed by zero or more letters, underscores, and digits.

Perl supports 3 kinds of variables:

1. **Scalars** contain a single string or numeric value. The variable name must start with a `$`.
1. **Arrays** contain a randomly accessed ordered set of values. The variable name must start with a `@`.
1. **Hashes** contain (key, value) pairs efficiently accessed per key. The variable name must start with a `%`.

Note that there is no such thing as a boolean data type in Perl (more on this in later).

Assigning values to variable is done with the equal sign (`=`). The operand to the left of the `=` sign is the name of the variable, and the operand to the right is the value stored in the variable. 

For example, some assignments to scalars:

	$item_price = 5;             # A scalar assignment
	$item_name = "Apple";        # Another scalar assignment
	print "The price of one $item_name is $item_price gold coins.\n";

Now, some assignments to array variables. To refer to a single element of an array, the variable name must start with a `$` followed by the index of the element in square brackets (`[]`). The index of the first array element is 0.

	@item_price_list = (5 , 8 , 24);
	@item_name_list = ("Apple", "Banana", "Mushroom");
	print "The price of one $item_name_list[0] is $item_price_list[0] gold coins.\n";
	print "The price of one $item_name_list[1] is $item_price_list[1] gold coins.\n";
	print "The price of one $item_name_list[2] is $item_price_list[2] gold coins.\n";

Now, some assignments to hash variables. To refer to a single element of a hash, the variable name must start with a `$` followed by the key of the requested element in curly brackets (`{}`). There are other ways, but you can specify the key value pairs with the `key => value` syntax.

	%item_catalog = ("Apple" => 5 , "Banana" => 8, "Mushroom" => 24);
	# note the required backslash to escape the double-quotes around the key string Apple
	print "The price of one Apple is $item_catalog{\"Apple\"} gold coins.\n";
	$item_name = "Banana";
	print "The price of one $item_name is $item_catalog{$item_name} gold coins.\n";
	@item_name_list = ("Apple", "Banana", "Mushroom");
	print "The price of one $item_name_list[2] is $item_catalog{$item_name_list[2]} gold coins.\n";

Exercise
-------------
Assign the hash variable called `car_catalog` to include the following car models and their showroom prices in dollars. Use the car model name as the hash key. The cars and prices are:

- Model: BMW Series 5, price: 100000
- Model: Mercedes 2000, price: 250000
- Model: Toyota Corolla, price: 20000
- Model: Lexus 3, price: 95000

Assign an array variable called `my_wishlist` with the two cars you want to buy: the first array element is the full model name of the BMW car and the second array model is the full model name of the Toyota car. Use the array variable contents as keys to the hash variable in order to print lines in the following format: "I would like to buy one <car model goes here> for the price of <price goes here> Dollars."

For example: "I would like to buy one Lexus 3 for the price of 95000 Dollars."

Tutorial Code
-------------

%car_catalog = ();
@my_wishlist = ();
print "I would like to buy one REPLACE_HERE for the price of REPLACE_HERE Dollars.\n";
print "I would like to buy one REPLACE_HERE for the price of REPLACE_HERE Dollars.\n";

Expected Output
---------------

I would like to buy one BMW Series 5 for the price of 100000 Dollars.
I would like to buy one Toyota Corolla for the price of 20000 Dollars.

Solution
--------

%car_catalog = ("BMW Series 5" => 100000, "Mercedes 2000" => 250000, "Toyota Corolla" => 20000, "Lexus 3" => 95000);
@my_wishlist = ("BMW Series 5", "Toyota Corolla");
print "I would like to buy one $my_wishlist[0] for the price of $car_catalog{$my_wishlist[0]} Dollars.\n";
print "I would like to buy one $my_wishlist[1] for the price of $car_catalog{$my_wishlist[1]} Dollars.\n";
