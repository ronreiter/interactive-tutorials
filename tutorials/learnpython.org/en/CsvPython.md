Tutorial
--------

### What is CSV?
CSV stands for 'Comma Separated Values'. CSV format is the most common import and export format for databases and spreadsheets. A CSV file is a simple text file that contains a list of data. They mostly use the comma(,) character to delimit data, but sometimes use other characters i.e semicolons or tabs.

### CSV module in Python
While Python have the built-in open() function to work with CSV files or any other plain text file, there is a dedicated csv module which implements classes to read and write data in csv format that makes working with CSV files much easier.

### CSV module important functions

    csv.field_size_limit – return maximum field size
    csv.get_dialect – get the dialect which is associated with the name
    csv.list_dialects – show all registered dialects
    csv.reader – read data from a csv file
    csv.register_dialect - associate dialect with name
    csv.writer – write data to a csv file
    csv.unregister_dialect - delete the dialect associated with the name the dialect registry
    csv.QUOTE_ALL - Quote everything, regardless of type.
    csv.QUOTE_MINIMAL - Quote fields with special characters
    csv.QUOTE_NONNUMERIC - Quote all fields that aren't numbers value
    csv.QUOTE_NONE – Don't quote anything in output

### How do you use csv module?
writer and reader functions allow you to edit, modify, and transform the data in a CSV file.

How to Read a CSV File :-

To read data from CSV files we use reader function to generate a reader object.

For example:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)

Here, we first open the CSV file in READ mode and name the file onject as csvfile. We use context manager to open file so that we don't have to worry about closing file. csv.reader function takes file object as input and returns an iterable object. We save the iterable object as csvreader.

As we know, csvreader is an iterable object and therefore we can iterate using for loop:

example 1:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(row)

Above code will print all the rows we read from csv file. Please note that we open file with 'r' mode when it already exists.

What's next?

cvreader is an iterable object. Hence, .next() method returns the current row and advances the iterator to the next row.
f
example 2:

    with open(filename, 'r') as csvfile:
        csvreader = csv.reader(csvfile)
        fields = csvreader.next()
        for row in csvreader:
            print(row)

In example 1, you would see all rows printed on console along with header. In example 2, .next() method reads header in fields object and advances the iterator to next row and therefore all rows are printed except the header.


How to write in a CSV File-

To write in a csv file, csv module provides csv.writer function. To write data, we first open the CSV file in WRITE mode('w'). The file object is named as csvfile. We save the csv.writer object as csvwriter.

Example:

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

