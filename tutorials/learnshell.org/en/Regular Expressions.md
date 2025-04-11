
---

**Using Regular Expressions (Regex) in Bash**

---

Regular expressions (regex) are powerful tools for matching patterns within strings. In Bash, regex is often used in combination with tools like `grep`, `sed`, and within conditional statements using `[[ ]]`. In this tutorial, we'll explore how to use regex in Bash scripts effectively.

---

### **Tutorial**

A regular expression defines a search pattern that can be used to match strings. In Bash, regex is primarily used for:
- Validating input (e.g., ensuring an email format).
- Extracting parts of a string based on patterns.
- Searching and replacing text.

This tutorial covers:
- Basic regex syntax in Bash.
- How to use regex within `[[ ]]` and `grep`.
- Handling regex in scripts for different tasks like pattern matching and input validation.

#### **Regex Syntax Overview**

Here are some common regex patterns:
- `^`: Matches the beginning of a string.
- `$`: Matches the end of a string.
- `.`: Matches any single character.
- `[abc]`: Matches any character `a`, `b`, or `c`.
- `*`: Matches zero or more occurrences of the preceding character.
- `+`: Matches one or more occurrences of the preceding character.

For example, the pattern `^[a-zA-Z]+$` matches a string containing only alphabetic characters.

#### **Using Regex in Bash**

In Bash, you can use regex within `[[ ]]` for pattern matching:
```bash
if [[ "Hello123" =~ ^[A-Za-z]+$ ]]; then
  echo "Only letters found!"
else
  echo "Contains non-letter characters."
fi
```
In the above code:
- The pattern `^[A-Za-z]+$` checks if the string contains only letters.

---

### **Exercise**

Create a Bash script that:
- Accepts a string as input.
- Validates if the string is a valid email address using regex.
- If the input is a valid email, print "Valid email". Otherwise, print "Invalid email".

**Hint:** A basic regex for an email can be something like `^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$`.

---

### **Tutorial Code**

Start with the following code:
```bash
#!/bin/bash

read -p "Enter your email: " email

if # add you statement here; then
  # add a if else condition and print out the changes
fi
```

---

### **Expected Output**

When the script is run:
```bash
./validate_email.sh
```

For the input:
```
Enter your email: user@example.com
```
The expected output is:
```
Valid email
```

For an invalid email input:
```
Enter your email: user@invalid
```
The output should be:
```
Invalid email
```

---

### **Solution**

Here’s the complete solution:
```bash
#!/bin/bash

read -p "Enter your email: " email

# Regex to validate an email address
if [[ $email =~ ^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$ ]]; then
  echo "Valid email"
else
  echo "Invalid email"
fi
```

---

This tutorial gives you a solid foundation in using regex in Bash for pattern matching and validation. Regex is a powerful tool that, when combined with Bash scripting, can automate many text-processing tasks.
