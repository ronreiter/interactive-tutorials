Metaprogramming in Ruby
--------
Ruby has built-in methods that write your code for you. This is called metaprogramming. One such function is `method_missing`
When a given method doesn't exist on a Ruby class or object, it will call `method_missing` on itself with the attempted method name,
and the arguments, and block if they exist. Normally, this just means it will raise an exception saying it couldn't find such a method,
but you can intercept that behavior, inspect the method name, and decide to do something else entirely.

Exercise
--------
In this exercise, you will use Ruby's `method_missing` to print a greeting to any name appended to the naming convention of the dynamic method.
The naming convention will be like so: `greeter.greet_matthew` or `greeter.greet_mom` and you must split the method name apart by the `_` underscore
to get the intended name.

Tutorial Code
-------------
```ruby
class Greeter
  def method_missing(method_name, *arguments, &block)
    name = # complete this line to get the name in the 2nd half of the method_name 
    greet(name)
  end
   
  def greet(name)
    puts "Hello, #{name}!"
  end
end

greeter = Greeter.new
greeter.greet_matthew
greeter.greet_mom
```
 
Expected Output
---------------
```
Hello, matthew!
Hello, mom!
```

Solution
--------
```ruby
class Greeter
  def method_missing(method_name, *arguments, &block)
    name = method_name.to_s.split('_').last
    greet(name)
  end
   
  def greet(name)
    puts "Hello, #{name}!"
  end
end

greeter = Greeter.new
greeter.greet_matthew
greeter.greet_mom
```
