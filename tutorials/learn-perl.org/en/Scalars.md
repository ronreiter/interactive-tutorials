Tutorial
--------
A Perl scalar variable holds a single string or numeric value. Perl supports many operators on scalars:

- Concatenation of string values via the `.` (dot) operator.
- Math functions on numeric values: `+ - * / % ^^` as well as a rich set of functions.
- Operations on own variable: `+= -= .= ++ --` etc.

Some examples:

	# scalar variable example
	$item_name = "Apple";
	$item_price = 13.50;
	$item_count = 5;
	print "The total for $item_count $item_name" . "s" . " will be: " . $item_count * $item_price . " Dollars.\n";
	# or alternately
	$total = $item_count * $item_price;
	$item_name_plural = $item_name . "s";
	print "The total for $item_count $item_name_plural will be: $total Dollars.\n";

Exercise
-------------
The Boeing 747-8 is a wide-body jet airliner developed by Boeing Commercial Airplanes. It is 250 feet long, it weighs 987,392 Pounds and costs 357.5 Million US Dollars. A person in Europe asks you to convert the length to meters, the weight to kilograms and the cost to euros.

Use the conversion variable values to print 3 lines:

The jet is ______ Meters long.

The jet weighs ______ Kilograms.

The jet costs ______ Million Euro.

Tutorial Code
-------------

$one_foot_in_meters = 0.3048;
$one_kilogram_in_pounds = 2.204;
$one_euro_in_dollars = 1.3;
print "The jet is ______ Meters long.\n";
print "The jet weighs ______ Kilograms.\n";
print "The jet costs ______ Million Euro.\n";

Expected Output
---------------

The jet is 76.2 Meters long.
The jet weighs 448000 Kilograms.
The jet costs 275 Million Euro.

Solution
--------

$one_foot_in_meters = 0.3048;
$one_kilogram_in_pounds = 2.204;
$one_euro_in_dollars = 1.3;
$jet_length_feet = 250;
$jet_weight_pounds = 987392;
$jet_cost_m_dollars = 357.5 ;
print "The jet is " . $jet_length_feet * $one_foot_in_meters . " Meters long.\n";
print "The jet weighs " . $jet_weight_pounds / $one_kilogram_in_pounds . " Kilograms.\n";
print "The jet costs " . $jet_cost_m_dollars / $one_euro_in_dollars . " Million Euro.\n";
