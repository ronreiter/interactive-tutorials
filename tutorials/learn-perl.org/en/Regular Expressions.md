Tutorial
--------
Regular expressions (regexp) are what makes Perl an ideal language for "practical extraction and reporting" as its acronym implies.

A regular expression is a string of characters that defines a text pattern or patterns. A regexp can be used in a number of ways:

1. Searching for a string that matches a specified pattern and optionally replacing the pattern found with some other strings.
1. Counting the number of occurences of a pattern in a string.
1. Splitting a formatted string (e.g. a date like `01/06/2014`) into components (e.g. into day, month and year).
1. Validating fields from a submitted HTML form by verifying if the data conforms to a particular format.

### Matching a string pattern

Matching a string pattern is done by the `m//` operator and the `=~` binding operator. The expression `$string =~ m/$regexp/` returns `true` if the scalar `$string` matches the pattern defined by the value of the scalar `$regexp`.

The match operator supports its own set of optional modifiers, written after the `m//` operator. The modifiers are letters which indicate variations on the regexp processing. For example:

`$string =~ m/$regexp/i`

will make the match case insensitive.

	$name = "Josef Stalin";
	if ($name =~ m/jo/) {
	  print "Match found\n"
	} else {
	  print "No match found\n"
	}
	if ($name =~ m/jo/i) {
	  print "Match found (case insensitive)\n"
	} else {
	  print "No match found (case insensitive)\n"
	}

You can use any combination of naturally matching characters to act as delimiters for the expression. For example, `m{}`, `m()`, `m||` are all valid.

### Metacharacters

Metacharacters serve specific purposes in a regular expression. If any of these metacharacters are to be embedded in the regular expression literally, you should quote them by prefixing it with a backslash (\), similar to the idea of escaping in double-quoted string.

- `\` Quote next character
- `.` Match any character except newline
- `^` Match beginning of line
- `$` Match end of line
- `|` separate between several possible patterns
- `[]` Character class
- `()` Grouping and save subpattern (backtracking)

For example:

- `m/google.com/` matches google.com and also googlexcom
- `m/google\.com/` matches google.com but not googlexcom
- `m/^google/` matches "google me" but not "please google me"
- `m/google$/` matches "let's google" but not "let's google now"
- `m/^google$/` matches only "google"
- `m/google|bing/` matches any string containing google or bing
- `m/bob[ar6]/` matches any string containg boba or bobr or bob6
- `m/bob[0-4]/` matches any string containg bob0 or bob1 or bob2 or bob3 or bob4
- `m/bob[b-e]/` matches any string containg bobbcor bobc or bobd or bobe

### Replacing a matched string

Replacing a matched string with some other string is done by the substitute operator `s///`. The basic form of the operator is `s/REGEXP/REPLACEMENT/MODIFIER;`. The REGEXP is the regular expression for the string that we are looking for. The REPLACEMENT is a specification for the text or regular expression that we want to use to replace the found text with. The MODIFIER is the optional substitute operator modifier letter.

Example:

	$x = "My favorite pet is a cat. I must duplicate it.";
	$y = $x;
	$y =~ s/cat/dog/;
	print "$y\n";
	$y = $x;
	$y =~ s/cat/dog/g;
	print "$y\n";

Here is the list of some **modifiers** used with substitution operator:

- `i`	Makes the match case insensitive
- `o`	Evaluates the expression only once
- `g`	Replaces all occurrences of the found expression with the replacement text
- `e`	Evaluates the replacement as if it were a Perl statement, and uses its return value as the replacement text

### Backtracking

Parenthesised patterns have a useful property. When pattern matching is successful, the matching substrings corresponding to the parenthesised parts are saved, which allow you to use them in further operations. The matched value of the first parenthesised pattern is refered to as `$1`, the second as `$2`, and so on. For example:

	$number = "Telephone:   1234-5678";
	if ($number =~ m/^Telephone:\s*(\d{4}-\d{4})$/) {
	  print "The telephone number extracted is $1\n";
	}
	$date = "Date:    2014-jun-01";
	if ($date =~ m/^Date:\s*([\d]+)-([a-z]+)-([\d]+)$/) {
	  print "The year is $1, the month is $2, the day is $3\n";
	}

### More complex regular expressions

More complex reguar expressions allow matching to more than just fixed strings. Here's a list of patterns:

- `.`	Matches any single character except newline. Using the `m` modifier allows it to match newline as well.
- `[...]`	Matches any single character within the brackets.
- `[^...]`	Matches any single character not within brackets
- `*`	Matches 0 or more occurrences of preceding expression.
- `+`	Matches 1 or more occurrence of preceding expression.
- `?`	Matches 0 or 1 occurrence of preceding expression.
- `{n}`	Matches exactly n number of occurrences of preceding expression.
- `{n,}`	Matches n or more occurrences of preceding expression.
- `{n, m}`	Matches at least n and at most m occurrences of preceding expression.
- `a|b`	Matches either a or b.
- `\w`	Matches word characters.
- `\W`	Matches nonword characters.
- `\s`	Matches whitespace. Equivalent to `[\t\n\r\f]`.
- `\S`	Matches nonwhitespace.
- `\d`	Matches digits. Equivalent to `[0-9]`.
- `\D`	Matches nondigits.
- `\A`	Matches beginning of string.
- `\Z`	Matches end of string. If a newline exists, it matches just before newline.
- `\z`	Matches end of string.
- `\G`	Matches point where last match finished.
- `\b`	Matches word boundaries when outside brackets. Matches backspace (0x08) when inside brackets.
- `\B`	Matches nonword boundaries.
- `\n, \t`, etc.	Matches newlines, carriage returns, tabs, etc.
- `\1...\9`	Matches nth grouped subexpression.
- `\10`	Matches nth grouped subexpression if it matched already. Otherwise refers to the octal representation of a character code.

Exercise
-------------
You are given a scalar value `$my_text`. Assign the value of a regular expression to scalar `$match_my_text` to be used to match the string "express".

Tutorial Code
-------------

# Initialization
$my_text = "You should try to use regular expressions while drinking an Espresso";
# Matching text
$match_my_text = "FILL VALUE HERE";
if ($my_text =~ m/$match_my_text/) {
	print "Match FOUND\n";
} else {
	print "Match NOT FOUND - Incorrect REGEXP\n";
}

Expected Output
---------------
Match FOUND

Solution
--------
# Initialization
$my_text = "You should try to use regular expressions while drinking an Espresso";
# Matching text
$match_my_text = "FILL VALUE HERE";
if ($my_text =~ m/express/) {
	print "Match FOUND\n";
} else {
	print "Match NOT FOUND - Incorrect REGEXP\n";
}
