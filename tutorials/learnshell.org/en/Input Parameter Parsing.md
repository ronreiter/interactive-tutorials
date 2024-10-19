**Input Parsing Parameters in Bash**

---

Bash scripts are incredibly useful for automating tasks in Linux environments. Often, you'll need to create scripts that accept input parameters. In this tutorial, we'll cover how to parse input parameters in a Bash script using `getopts`.

---

### **Tutorial**

Bash provides the `getopts` built-in for parsing options and arguments. Options typically begin with a hyphen (`-`) and can be combined together. For example, `-a -b -c` can be combined as `-abc`. We’ll also show how to handle optional arguments using `getopts`.

In this tutorial, you'll learn:
- How to parse short options like `-a`, `-b` using `getopts`.
- How to handle required and optional arguments.
- How to handle invalid options.

#### **How `getopts` Works**

The basic syntax for `getopts` is:
```bash
while getopts "abc:" opt; do
  case $opt in
    a)
      echo "Option a was triggered"
      ;;
    b)
      echo "Option b was triggered"
      ;;
    c)
      echo "Option c was triggered with argument: $OPTARG"
      ;;
    \?)
      echo "Invalid option: -$OPTARG" >&2
      ;;
  esac
done
```

- The string `"abc:"` indicates that options `-a`, `-b` do not require an argument, while `-c` requires an argument (indicated by the colon).
- `$OPTARG` stores the argument provided for options that require one.

---

### **Exercise**

Create a Bash script that accepts three options: `-n`, `-u`, and `-f`, where:
- `-n` requires a name (string argument).
- `-u` is a flag that converts the name to uppercase.
- `-f` is a flag that converts the name to lowercase.

**Objective**: Write a script that parses the options and prints the modified name according to the flags.

---

### **Tutorial Code**

Here is a starting point for your script:
```bash
#!/bin/bash

while getopts "n:uf" opt; do
  case $opt in
    n)
      name=$OPTARG
      ;;
    u)
      to_upper=true
      ;;
    f)
      to_lower=true
      ;;
    \?)
      echo "Invalid option: -$OPTARG" >&2
      exit 1
      ;;
  esac
done

# Your logic here for converting the name
```

---

### **Expected Output**

If the script is run as:
```bash
./myscript.sh -n "John Doe" -u
```

The output should be:
```
JOHN DOE
```

If the script is run as:
```bash
./myscript.sh -n "John Doe" -f
```

The output should be:
```
john doe
```

---

### **Solution**

Here is a complete solution for the exercise:
```bash
#!/bin/bash

while getopts "n:uf" opt; do
  case $opt in
    n)
      name=$OPTARG
      ;;
    u)
      to_upper=true
      ;;
    f)
      to_lower=true
      ;;
    \?)
      echo "Invalid option: -$OPTARG" >&2
      exit 1
      ;;
  esac
done

# Apply transformations based on flags
if [ "$to_upper" = true ]; then
  name=$(echo "$name" | tr '[:lower:]' '[:upper:]')
elif [ "$to_lower" = true ]; then
  name=$(echo "$name" | tr '[:upper:]' '[:lower:]')
fi

echo "$name"
```

---

This tutorial shows how to parse input parameters in Bash and apply transformations based on the provided options. By following the structure, you can extend this logic to more complex scenarios in your Bash scripts.

