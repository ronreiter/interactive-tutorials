Tutorial
--------

ھەرپ تىزمىسى بولسا بىر دانە تېكىست. ئۇلارنى نەقىللەر ئارىسىدىكى ھەر قانداق نەرسە دەپ ئېنىقلىما بېرىشكە بولىدۇ:

    astring = "Hello world!"
    astring2 = 'Hello world!'

كۆرگىنىڭىزدەك ، سىز تۇنجى ئۆگەنگەن نەرسە ئاددىي بىر جۈملە بېسىش. بۇ جۈملە Python تەرىپىدىن بىر ھەرپ تىزمىسى سۈپىتىدە ساقلانغان. قانداقلا بولمىسۇن ، تىزمىلارنى بېسىپ چىقىرىشنىڭ ئورنىغا ، سىز ئۇلارغا قىلالايدىغان ھەر خىل ئىشلارنى تەتقىق قىلىمىز.
سىز يەنە تاق نەقىل ئارقىلىق بىر ھەرپ تىزمىسى بەلگىلىيەلەيسىز. بىراق ، ئۆزىگە تەقسىم قىلىنىدىغان قىممەتنىڭ يەككە نەقىلنى ئۆز-ئىچىگە ئالىدىغان مەسىلىلەرگە دۇچ كېلىسىز. مەسىلەن ، بۇ تىرناق ئىچىدىكى ھەرپ تىزمىسىنى تەقسىملەش ئۈچۈن (تاق تىرناق '') سىز پەقەت مۇشۇنىڭغا ئوخشاش قوش نەقىل ئىشلىتىشىڭىز كېرەك

    astring = "Hello world!"
    print("single quotes are ' '")

    print(len(astring))

بۇ 12 نى بېسىپ چىقىرىدۇ ، چۈنكى «ياخشىمۇسىز دۇنيا!». تىنىش بەلگىلىرى ۋە بوشلۇقنى ئۆز ئىچىگە ئالغان 12 ھەرپ.

    astring = "Hello world!"
    print(astring.index("o"))

بۇ 4 نى بېسىپ چىقىرىدۇ ، چۈنكى «o» ھەرىپىنىڭ تۇنجى قېتىم پەيدا بولغان ئورنى بىرىنچى ھەرپتىن 4 ھەرپ يىراقلىقتا. بۇ جۈملىدە ئەمەلىيەتتە ئىككى o نىڭ قانداق بولىدىغانلىقىغا دىققەت قىلىڭ - بۇ ئۇسۇل پەقەت بىرىنچىسىنىلا تونۇيدۇ.

ئەمما نېمىشقا 5 نى بېسىپ چىقارمىدى؟ «O» قۇردىكى بەشىنچى ھەرپ ئەمەسمۇ؟ ئىشلارنى تېخىمۇ ئاددىيلاشتۇرۇش ئۈچۈن ، Python (ۋە باشقا پروگرامما تىللىرىنىڭ كۆپىنچىسى) ئىشلارنى 1 نىڭ ئورنىغا 0 دىن باشلايدۇ. شۇڭا «o» نىڭ كۆرسەتكۈچى 4.

    astring = "Hello world!"
    print(astring.count("l"))

ئەخمەق خەت نۇسخىسىنى ئىشلىتىۋاتقانلار ئۈچۈن ، بۇ كىچىك ھەرپ L ، بىرىنچى نومۇر ئەمەس. بۇ قۇردىكى l نىڭ سانىنى سانايدۇ. شۇڭلاشقا ، ئۇ 3 نى بېسىشى كېرەك.

    astring = "Hello world!"
    print(astring[3:7])

بۇ بىر بۆلەك تىزمىنى بېسىپ ، 3-كۆرسەتكۈچتىن باشلىنىپ ، 6-كۆرسەتكۈچتە ئاخىرلىشىدۇ. ئەمما نېمىشقا 6 ئەمەس ، 7 بولىدۇ؟ يەنە كېلىپ كۆپىنچە پروگرامما تىلى بۇنى قىلىدۇ - بۇ تىرناق ئىچىدىكى ماتېماتىكىنى قىلىشنى ئاسانلاشتۇرىدۇ.

ئەگەر تىرناق ئىچىدە پەقەت بىرلا سان بولسا ، ئۇ سىزگە بۇ كۆرسەتكۈچتىكى يەككە ھەرپنى بېرىدۇ. ئەگەر بىرىنچى نومۇرنى قالدۇرۇپ قويسىڭىز ، ئەمما قوش چېكىتنى ساقلىسىڭىز ، ئۇ باشتىن-ئاخىر سىز قالدۇرغان سانغا بىر پارچە بېرىدۇ. ئىككىنچى نومۇرنى قالدۇرسىڭىز ، ئۇ بىرىنچى نومۇردىن ئاخىرىغىچە سىزگە بىر پارچە بېرىدۇ.

تىرناق ئىچىگە مەنپىي سانلارنى قويسىڭىزمۇ بولىدۇ. ئۇلار ئالدىدىن باشلىنىشنىڭ ئورنىغا قۇرنىڭ ئاخىرىدا باشلاشنىڭ ئاسان ئۇسۇلى. بۇ ئۇسۇل ، -3 «ئاخىرىدىن 3-ھەرپ» مەنىسىنى بىلدۈرىدۇ.

    astring = "Hello world!"
    print(astring[3:7:2])

بۇ ھەرپنىڭ ھەرپلىرىنى 3 دىن 7 گىچە بېسىپ بېرىدۇ. بۇ كېڭەيتىلگەن بۆلەك گرامماتىكىسى. ئومۇمىي شەكلى [باشلاش: توختىتىش: قەدەم].

    astring = "Hello world!"
    print(astring[3:7])
    print(astring[3:7:1])

شۇنىڭغا دىققەت قىلىڭكى ، ھەر ئىككىلىسى ئوخشاش مەھسۇلات چىقىرىدۇ

C دىكى strrev غا ئوخشاش فۇنكسىيە يوق. ئەمما يۇقىرىدا تىلغا ئېلىنغان بۆلەك گرامماتىكىسى بىلەن بۇنداق تىزمىنى ئاسانلا ئۆزگەرتەلەيسىز

    astring = "Hello world!"
    print(astring[::-1])

بۇ

    astring = "Hello world!"
    print(astring.upper())
    print(astring.lower())

بۇلار ھەرپلەر ئايرىم-ئايرىم ھالدا چوڭ ۋە كىچىك ھەرپكە ئۆزگەرتىلگەن يېڭى تىزما ھاسىل قىلىدۇ.

    astring = "Hello world!"
    print(astring.startswith("Hello"))
    print(astring.endswith("asdfasdfasdf"))

بۇ قۇرنىڭ مەلۇم بىر ئىش بىلەن باشلىنىدىغان ياكى ئاخىرلاشمايدىغانلىقىنى ئېنىقلاشقا ئىشلىتىلىدۇ. بىرىنچىسى True نى بېسىپ چىقىرىدۇ ، چۈنكى بۇ تىزما «ياخشىمۇسىز» دىن باشلىنىدۇ. ئىككىنچىسى False نى بېسىپ چىقىرىدۇ ، چۈنكى بۇ قۇر ئەلۋەتتە «asdfasdfasdf» بىلەن ئاخىرلاشمايدۇ.

    astring = "Hello world!"
    afewwords = astring.split(" ")

بۇ تىزمىنى بىر تىزما گۇرۇپپىلارغا ئايرىيدۇ. بۇ مىسال بوشلۇققا بۆلۈنگەچكە ، تىزىملىكتىكى بىرىنچى تۈر «ياخشىمۇسىز» ، ئىككىنچىسى «دۇنيا!» بولىدۇ.

چېنىقىش
--------

كودنى توغرىلاپ توغرا ئۇچۇرنى بېسىپ چىقىرىشقا تىرىشىڭ.

Tutorial Code
-------------

s = "Hey there! what should this string be?"
# Length should be 20
print("Length of s = %d" % len(s))

# First occurrence of "a" should be at index 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Number of a's should be 2
print("a occurs %d times" % s.count("a"))

# Slicing the string into bits
print("The first five characters are '%s'" % s[:5]) # Start to 5
print("The next five characters are '%s'" % s[5:10]) # 5 to 10
print("The thirteenth character is '%s'" % s[12]) # Just number 12
print("The characters with odd index are '%s'" %s[1::2]) #(0-based indexing)
print("The last five characters are '%s'" % s[-5:]) # 5th-from-last to end

# Convert everything to uppercase
print("String in uppercase: %s" % s.upper())

# Convert everything to lowercase
print("String in lowercase: %s" % s.lower())

# Check how a string starts
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# Check how a string ends
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# Split the string into three separate strings,
# each containing only a word
print("Split the words of the string: %s" % s.split(" "))

Expected Output
---------------

test_object("s", incorrect_msg="Make sure you change the string assigned to `s` to match the exercise instructions.")
success_msg("Great work!")

Solution
--------

s = "Strings are awesome!"
# Length should be 20
print("Length of s = %d" % len(s))

# First occurrence of "a" should be at index 8
print("The first occurrence of the letter a = %d" % s.index("a"))

# Number of a's should be 2
print("a occurs %d times" % s.count("a"))

# Slicing the string into bits
print("The first five characters are '%s'" % s[:5]) # Start to 5
print("The next five characters are '%s'" % s[5:10]) # 5 to 10
print("The thirteenth character is '%s'" % s[12]) # Just number 12
print("The characters with odd index are '%s'" %s[1::2]) #(0-based indexing)
print("The last five characters are '%s'" % s[-5:]) # 5th-from-last to end

# Convert everything to uppercase
print("String in uppercase: %s" % s.upper())

# Convert everything to lowercase
print("String in lowercase: %s" % s.lower())

# Check how a string starts
if s.startswith("Str"):
    print("String starts with 'Str'. Good!")

# Check how a string ends
if s.endswith("ome!"):
    print("String ends with 'ome!'. Good!")

# Split the string into three separate strings,
# each containing only a word
print("Split the words of the string: %s" % s.split(" "))
