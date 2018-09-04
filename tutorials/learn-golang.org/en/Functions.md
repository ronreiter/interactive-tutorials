# Tutorial

## Functions
Functions can contain any golang instructions, for the purpose of being executed at the developer's pleasure. This allows for concise code and awesome programs. 

## Examples
Imagine if you would like to print a certain string 3 times. Of course you could do this:
```golang
  fmt.Println("string")
  fmt.Println("string")
  fmt.Println("string")
```
But who wants to do that if you can do this:
```golang
// declare a function with the keyword func and succeed it with the function name followed by parentheses and a opening brace and a closing brace, {}. 
func function_name() {
// golang instructions go here, in between those braces, { }
  fmt.Println("string")
}
```
Now what we just did did not execute the golang instructions 3 times. In order to execute functions in golang, one does this:
```golang
 function_name()
 // Remember, we want to use this function 3 times, so we must call it 2 more times
 function_name()
 function_name()
```
