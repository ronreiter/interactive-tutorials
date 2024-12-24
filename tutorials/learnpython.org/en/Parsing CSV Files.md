Tutorial
--------

### What is CSV?
CSV stands for 'Comma Separated Values'. CSV format is the most common import and export format for databases and spreadsheets. A CSV file is a simple text file that contains a list of data. They mostly use the comma(,) character to delimit data, but sometimes use other characters i.e semicolons or tabs.

Sample CSV data:

...
column 1 name,column 2 name, column 3 name
first row data 1,first row data 2,first row data 3
second row data 1,second row data 2,second row data 3
...

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
first import csv module in your python program.

    import csv

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
    #declare header
    fields = ['column1','column2', 'column3']

    #declare rows
    rows = [["foo", "bar", "spam"],
           ["oof", "rab", "maps"],
           ["writerow", "isn't", "writerows"]]

    filename = "university_records.csv"
    
    with open(filename, 'w') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerow(fields)
        csvwriter.writerows(rows)

In above example, writerow() function will write a single row which is fields object whereas writerows() method will write entire list of rows defined above into csv file.

Now let us go a step ahead. Read content of one csv file and write into another csv file.

Example:

    with open('newfilename.csv', 'w') as f2:
        with open('mycsvfile.csv', mode='r') as f1:
            reader = csv.reader(f1)
            csvwriter = csv.writer(f2)
            header = next(reader)  # store the headers and advance reader pointer
            csvwriter.writerow(header) #writes the header into new file
            for row in reader:
                csvwriter.writerow(row)

Here, we are opening 'newfilename.csv' in 'W' mode as f2 and opening 'mycsvfile.csv' in 'r' mode as f1. We are making use of .next(), .reader(),.writer(), .writerow() functions of csv module. Using .next(), we are advancing the reader pointer and using csvwriter.writerow() we are writing incoming row one at a time.

### DictReader and DictWriter classes in Python

below are two important classes in python to read and write csv files.

csv.Dictwriter class
csv.DictReader class

The DictReader and DictWriter are classes available in Python for reading and writing to CSV. Although they are similar to the reader and writer functions, these classes use dictionary objects to read and write to csv files.

DictReader:

It creates an object which maps the information read into a dictionary whose keys are given by the fieldnames parameter. This parameter is optional, but when not specified in the file, the first row data becomes the keys of the dictionary.

Example csv(info.csv)

.....
firstname, lastname
foo, bar
foo1, bar1
.....

Example:

        import csv
        with open('info.csv') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            print(row['firstname'], row['lastname'])

DictWriter:

The csv.DictWriter class operates like a regular writer but maps Python dictionaries into CSV rows. The fieldnames parameter is a sequence of keys that identify the order in which values in the dictionary passed to the writerow() method are written to the CSV file. The class is defined as csv.DictWriter(csvfile, fieldnames, restval='', extrasaction='raise', dialect='excel', *args, **kwds)

Example:

        import csv
        f = open('info.csv', 'w')
        with f:
            
            fnames = ['firstname', 'lastname']
            writer = csv.DictWriter(f, fieldnames=fnames)    

            writer.writeheader()
            writer.writerow({'firstname' : 'Rob', 'last_name': 'Scott'})
            writer.writerow({'firstname' : 'Tom', 'last_name': 'Brown'})
            writer.writerow({'firstname' : 'Henry', 'last_name': 'Smith'})


Exercise
--------

In this exercise, you will be working with CSV data. Your task is to create a Python program that reads data from a CSV file and writes it to another CSV file, ensuring that only rows where the value in the first column is greater than 50 are included in the output file.

Tutorial Code
-------------

    import csv
    
    # Open the input CSV file
    with open('inputfile.csv', mode='r') as infile:
        reader = csv.reader(infile)
        # Open the output CSV file
        with open('outputfile.csv', mode='w') as outfile:
            writer = csv.writer(outfile)
            # Write header
            header = next(reader)
            writer.writerow(header)
            # Write rows where the value in the first column is greater than 50
            for row in reader:
                if int(row[0]) > 50:  # Assuming the first column contains numeric values
                    writer.writerow(row)

Expected Output
---------------

    Due to the limitations of this IDE, this solution cannot be tested here, as it requires access to external files. However, you should expect that a new file named `outputfile.csv` will be created, and it will contain the same rows as the input file, except only the rows where the first column contains a value greater than 50.

Solution
--------

    import csv
    
    # Open the input CSV file
    with open('inputfile.csv', mode='r') as infile:
        reader = csv.reader(infile)
        # Open the output CSV file
        with open('outputfile.csv', mode='w') as outfile:
            writer = csv.writer(outfile)
            # Write header
            header = next(reader)
            writer.writerow(header)
            # Write rows where the value in the first column is greater than 50
            for row in reader:
                if int(row[0]) > 50:  # Assuming the first column contains numeric values
                    writer.writerow(row)