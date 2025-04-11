**Mastering Special Commands: `sed`, `awk`, `grep`, and `sort` in Bash**

---

In Bash, commands like `sed`, `awk`, `grep`, and `sort` are indispensable for text processing and data manipulation. These tools allow you to perform everything from simple text searches to complex data transformations with minimal effort. This tutorial delves into each command’s unique capabilities, showing how you can leverage them in your Bash scripts.

---

### **Tutorial**

#### **1. `grep`: Pattern Searching**

`grep` (Global Regular Expression Print) is used to search for patterns within files or output. It’s perfect for finding lines that match a specific pattern.

**Common Use Cases:**
- Searching for specific keywords in a file.
- Filtering output based on matching patterns.

**Example:**
```bash
grep "error" logfile.txt
```
This command searches for the word “error” in `logfile.txt` and returns all matching lines.

**Options to Note:**
- `-i`: Case-insensitive search.
- `-r`: Recursively search directories.
- `-v`: Invert match (return lines that don’t match the pattern).

---

#### **2. `sed`: Stream Editing**

`sed` (Stream Editor) is used for parsing and transforming text in files or streams. It’s powerful for find-and-replace operations, text insertion, and deletion.

**Common Use Cases:**
- Replacing or deleting text in files.
- Extracting specific data from text streams.

**Example:**
```bash
sed 's/old-text/new-text/g' file.txt
```
This replaces all instances of `old-text` with `new-text` in `file.txt`.

**Options to Note:**
- `-i`: Edit the file in place.
- `-n`: Suppress automatic printing; useful with pattern matching.
- `d`: Delete lines that match a pattern.

---

#### **3. `awk`: Text Processing and Reporting**

`awk` is a versatile command designed for pattern scanning and processing. It allows you to extract and format data from structured text like CSVs, logs, and reports.

**Common Use Cases:**
- Extracting specific columns from a file.
- Performing calculations on numeric data within text.

**Example:**
```bash
awk '{print $1, $3}' file.txt
```
This command prints the first and third columns of each line in `file.txt`.

**Options to Note:**
- `-F`: Specify a field separator (default is whitespace).
- `NR`: Built-in variable that holds the line number.
- `sum += $2`: Example of performing a calculation (summing the values of the second column).

---

#### **4. `sort`: Sorting Lines of Text**

`sort` is used to arrange lines of text in alphabetical or numerical order. It’s handy for organizing lists or data before further processing.

**Common Use Cases:**
- Sorting a list of names alphabetically.
- Sorting numbers in ascending or descending order.

**Example:**
```bash
sort -n numbers.txt
```
This sorts the numbers in `numbers.txt` in ascending order.

**Options to Note:**
- `-r`: Reverse the sort order.
- `-u`: Remove duplicates after sorting.
- `-k`: Sort based on a specific key (e.g., a particular column).

---

### **Exercise**

Create a Bash script that:
1. Reads a text file containing lines of data in the format: `Name, Age, City`.
2. Filters out lines that contain a specific city using `grep`.
3. Sorts the filtered results by age using `sort`.
4. Extracts only the names and ages using `awk`.
5. Replaces all commas with hyphens using `sed`.

---

### **Tutorial Code**

Here’s the starting code for the exercise:
```bash
#!/bin/bash

input_file="people.txt"
city_to_filter="New York"

# Step 1: Filter lines by city using grep
filtered=$(grep "$city_to_filter" "$input_file")

# Step 2: Sort by age (2nd column) using sort
sorted=$(echo "$filtered" | sort -t, -k2n)

# Step 3: Extract names and ages using awk
output=$(echo "$sorted" | awk -F, '{print $1, $2}')

# Step 4: Replace commas with hyphens using sed
final_output=$(echo "$output" | sed 's/,/-/g')

echo "$final_output"
```

---

### **Expected Output**

For the following input file (`people.txt`):
```
John Doe,25,New York
Jane Smith,30,Los Angeles
Alice Brown,22,New York
Bob Johnson,28,New York
```

Running the script should produce:
```
Alice Brown 22
John Doe 25
Bob Johnson 28
```

---

### **Solution**

The code provided in the exercise is the complete solution, but let’s break down the steps for clarity:
1. `grep "$city_to_filter"` filters out lines containing "New York".
2. `sort -t, -k2n` sorts the filtered lines by the second column (age) numerically.
3. `awk -F, '{print $1, $2}'` extracts only the names and ages.
4. `sed 's/,/-/g'` replaces commas with hyphens, as per the exercise requirements.

---

This tutorial gives you a well-rounded understanding of using `sed`, `awk`, `grep`, and `sort` in Bash scripting. Each of these tools excels at specific tasks, and together they provide a powerful text-processing toolkit.
