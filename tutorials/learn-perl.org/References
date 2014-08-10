Tutorial
--------
A Perl reference is a scalar data type that defines the location of another data type value which can a scalar, an array, a hash or other data types. References can be used like any other scalars for example, one can create an array of references to other arrays. There is no sense to arithmetically manipulate references, as they will not longer point to their original data type. To access the original data type referenced to by a scalar reference, that reference needs to be de-referenced.

Creating references

The simple method to create a reference is to assign it with the data type preceeded with the backslash (\) character. It is useful to name the reference scalar such that one remembers what is the datatype it references to.

    $price = 500;
    $price_scalarref = \$price;
    @names = ('hello', 'world');
    $names_arrayref = \@names;
    %bank_accounts = ('John Boy' => 1345.56, 'Mary Sue', => 12,023.11);
    $bank_hashref = \%bank_accounts;

De-referencing:

De-referencing returns the original data type and value to which the reference point to. To de-reference a reference simply preceed the reference name with $, @ or % depending on whether the reference is pointing to a scalar, array, or hash. This is why it make good practice to name the reference with some indication of the original data type. 

    $price = 500;
    $price_scalarref = \$price;
    print "Price is $$price_scalarref\n";
    @names = ('hello', 'world');
    $names_arrayref = \@names;
    print "The names list is @$names_arrayref\n";
    %bank_accounts = ('John Boy' => 1345.56, 'Mary Sue', => 12,023.11);
    $bank_hashref = \%bank_accounts;
    # create a new hash from the reference value
    %my_new_bank_account = %$names_arrayref;
    print "The balance for John Boy is $my_new_bank_account{'John Boy'}\n";

Exercise
-------------

Tutorial Code
-------------

Expected Output
---------------

Solution
--------
